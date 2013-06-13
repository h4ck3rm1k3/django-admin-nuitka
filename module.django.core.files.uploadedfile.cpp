// Generated code for Python source for module 'django.core.files.uploadedfile'
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

// The _module_django__core__files__uploadedfile is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__files__uploadedfile;
PyDictObject *_moduledict_django__core__files__uploadedfile;

// The module level variables.
static PyObjectGlobalVariable_django__core__files__uploadedfile _mvar_django__core__files__uploadedfile_BytesIO( &_module_django__core__files__uploadedfile, &_python_str_plain_BytesIO );
static PyObjectGlobalVariable_django__core__files__uploadedfile _mvar_django__core__files__uploadedfile_File( &_module_django__core__files__uploadedfile, &_python_str_plain_File );
static PyObjectGlobalVariable_django__core__files__uploadedfile _mvar_django__core__files__uploadedfile_InMemoryUploadedFile( &_module_django__core__files__uploadedfile, &_python_str_plain_InMemoryUploadedFile );
static PyObjectGlobalVariable_django__core__files__uploadedfile _mvar_django__core__files__uploadedfile_SimpleUploadedFile( &_module_django__core__files__uploadedfile, &_python_str_plain_SimpleUploadedFile );
static PyObjectGlobalVariable_django__core__files__uploadedfile _mvar_django__core__files__uploadedfile_TemporaryUploadedFile( &_module_django__core__files__uploadedfile, &_python_str_plain_TemporaryUploadedFile );
static PyObjectGlobalVariable_django__core__files__uploadedfile _mvar_django__core__files__uploadedfile_UploadedFile( &_module_django__core__files__uploadedfile, &_python_str_plain_UploadedFile );
static PyObjectGlobalVariable_django__core__files__uploadedfile _mvar_django__core__files__uploadedfile___metaclass__( &_module_django__core__files__uploadedfile, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__files__uploadedfile _mvar_django__core__files__uploadedfile_force_str( &_module_django__core__files__uploadedfile, &_python_str_plain_force_str );
static PyObjectGlobalVariable_django__core__files__uploadedfile _mvar_django__core__files__uploadedfile_os( &_module_django__core__files__uploadedfile, &_python_str_plain_os );
static PyObjectGlobalVariable_django__core__files__uploadedfile _mvar_django__core__files__uploadedfile_settings( &_module_django__core__files__uploadedfile, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__core__files__uploadedfile _mvar_django__core__files__uploadedfile_tempfile( &_module_django__core__files__uploadedfile, &_python_str_plain_tempfile );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_3_close_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  );


static PyObject *MAKE_FUNCTION_function_5_multiple_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_DEFAULT_CHUNK_SIZE( _python_str_plain_DEFAULT_CHUNK_SIZE );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var__get_name( _python_str_plain__get_name );
    PyObjectLocalVariable _python_var__set_name( _python_str_plain__set_name );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_uploadedfile );
    _python_var___doc__.assign0( _python_str_digest_32c2ec2962e32fcb985f05a12c54d575 );
    _python_var_DEFAULT_CHUNK_SIZE.assign0( _python_int_pos_65536 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  ) );
    _python_var__get_name.assign1( MAKE_FUNCTION_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  ) );
    _python_var__set_name.assign1( MAKE_FUNCTION_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  ) );
    static PyFrameObject *frame_class_1_UploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_class_1_UploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_class_1_UploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_1_UploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_class_1_UploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_729e6a41416b1219e55c4f42b4494730, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_class_1_UploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 52 );
        {
            PyObjectTempKeeper0 call2;
            _python_var_name.assign1( ( call2.assign( _python_var__get_name.asObject() ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), call2.asObject0(), _python_var__set_name.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var__set_name.updateLocalsDict( _python_var__get_name.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_DEFAULT_CHUNK_SIZE.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_1_UploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
           frame_class_1_UploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        throw;
    }
    return _python_var_name.updateLocalsDict( _python_var__set_name.updateLocalsDict( _python_var__get_name.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_DEFAULT_CHUNK_SIZE.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_file, PyObject *_python_par_name, PyObject *_python_par_content_type, PyObject *_python_par_size, PyObject *_python_par_charset )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_file( _python_str_plain_file, _python_par_file );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_content_type( _python_str_plain_content_type, _python_par_content_type );
    PyObjectLocalParameterVariableNoDel _python_var_size( _python_str_plain_size, _python_par_size );
    PyObjectLocalParameterVariableNoDel _python_var_charset( _python_str_plain_charset, _python_par_charset );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_b5108a4f60b0a88023ab704e24b3f668, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 27 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__core__files__uploadedfile_UploadedFile.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), call4.assign( _python_var_file.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_name.asObject() ) ) );
        }
        frame_guard.setLineNumber( 28 );
        {
                PyObject *tmp_identifier = _python_var_size.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_size );
        }
        frame_guard.setLineNumber( 29 );
        {
                PyObject *tmp_identifier = _python_var_content_type.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_content_type );
        }
        frame_guard.setLineNumber( 30 );
        {
                PyObject *tmp_identifier = _python_var_charset.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_charset );
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
        frame_guard.getFrame0()->f_locals = _python_var_charset.updateLocalsDict( _python_var_size.updateLocalsDict( _python_var_content_type.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_file.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
           frame_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_file = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_content_type = NULL;
    PyObject *_python_par_size = NULL;
    PyObject *_python_par_charset = NULL;
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
            if ( found == false && _python_str_plain_file == key )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content_type == key )
            {
                if (unlikely( _python_par_content_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content_type'" );
                    goto error_exit;
                }

                _python_par_content_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_size == key )
            {
                if (unlikely( _python_par_size ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'size'" );
                    goto error_exit;
                }

                _python_par_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_charset == key )
            {
                if (unlikely( _python_par_charset ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'charset'" );
                    goto error_exit;
                }

                _python_par_charset = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file, key ) )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content_type, key ) )
            {
                if (unlikely( _python_par_content_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content_type'" );
                    goto error_exit;
                }

                _python_par_content_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_size, key ) )
            {
                if (unlikely( _python_par_size ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'size'" );
                    goto error_exit;
                }

                _python_par_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_charset, key ) )
            {
                if (unlikely( _python_par_charset ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'charset'" );
                    goto error_exit;
                }

                _python_par_charset = value;

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
         if (unlikely( _python_par_file != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'file'" );
             goto error_exit;
         }

        _python_par_file = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_content_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content_type'" );
             goto error_exit;
         }

        _python_par_content_type = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'size'" );
             goto error_exit;
         }

        _python_par_size = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_charset != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'charset'" );
             goto error_exit;
         }

        _python_par_charset = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_file == NULL )
    {
        _python_par_file = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_file );
    }
    if ( _python_par_name == NULL )
    {
        _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_name );
    }
    if ( _python_par_content_type == NULL )
    {
        _python_par_content_type = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_content_type );
    }
    if ( _python_par_size == NULL )
    {
        _python_par_size = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_size );
    }
    if ( _python_par_charset == NULL )
    {
        _python_par_charset = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 4 ) );
        assertObject( _python_par_charset );
    }


    return impl_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self, _python_par_file, _python_par_name, _python_par_content_type, _python_par_size, _python_par_charset );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_file );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_content_type );
    Py_XDECREF( _python_par_size );
    Py_XDECREF( _python_par_charset );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_705a2857a84df5b3ac51d8d6d226812d, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 33 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            return ( call4.assign( _mvar_django__core__files__uploadedfile_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_5ef29b914fb4802be0ab5b8e64152642, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ), make_tuple2.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_content_type ) ).asObject() ) ) ).asObject() ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
           frame_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_6cc7962e5ae90b9424cdebe2f92dcfd7, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 37 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__name );
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

        if ( frame_guard.getFrame0() == frame_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
           frame_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_get_name() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_get_name() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_get_name() got multiple values for keyword argument 'self'" );
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
                   "_get_name() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_get_name() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_name() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_name() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_name() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_name() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_name() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_name() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_get_name() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_name() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_name() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_get_name() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalVariable _python_var_ext( _python_str_plain_ext );

    // Actual function code.
    static PyFrameObject *frame_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_54aa9f55b4aefe6acd267cbbd0e75395, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 41 );
        if ( ( _python_var_name.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 43 );
            {
                PyObjectTempKeeper1 call1;
                _python_var_name.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__uploadedfile_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_basename ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) );
            }
            frame_guard.setLineNumber( 46 );
            if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( BUILTIN_LEN( _python_var_name.asObject() ) ).asObject(), _python_int_pos_255 ) )
            {
                {
                    frame_guard.setLineNumber( 47 );
                    PyObject *_tmp_python_tmp_source_iter;
                    {
                        PyObjectTempKeeper1 call3;
                        _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__uploadedfile_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_splitext ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_name.asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    _python_var_name.assign0( _python_tmp_element_1.asObject() );
                    _python_var_ext.assign0( _python_tmp_element_2.asObject() );
                }
                frame_guard.setLineNumber( 48 );
                {
                    PyObjectTempKeeper1 op8;
                    PyObjectTempKeeper0 slice5;
                    _python_var_name.assign1( ( op8.assign( ( slice5.assign( _python_var_name.asObject() ), LOOKUP_SLICE( slice5.asObject0(), Py_None, PyObjectTemporary( BINARY_OPERATION_SUB( _python_int_pos_255, PyObjectTemporary( BUILTIN_LEN( _python_var_ext.asObject() ) ).asObject() ) ).asObject() ) ) ), BINARY_OPERATION_ADD( op8.asObject0(), _python_var_ext.asObject() ) ) );
                }
            }
        }
        frame_guard.setLineNumber( 50 );
        {
                PyObject *tmp_identifier = _python_var_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__name );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_ext.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile );
           frame_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "_set_name() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_set_name() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "_set_name() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_set_name() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "_set_name() got multiple values for keyword argument 'name'" );
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
                   "_set_name() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_set_name() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_set_name() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_set_name() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_set_name() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_set_name() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_set_name() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_set_name() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_set_name() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_set_name() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_set_name() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_set_name() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_set_name() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_set_name() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_set_name() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_temporary_file_path( _python_str_plain_temporary_file_path );
    PyObjectLocalVariable _python_var_close( _python_str_plain_close );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_uploadedfile );
    _python_var___doc__.assign0( _python_str_digest_d522d67c1e2807d6fc546f9c174db012 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile(  ) );
    _python_var_temporary_file_path.assign1( MAKE_FUNCTION_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile(  ) );
    _python_var_close.assign1( MAKE_FUNCTION_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile(  ) );
    return _python_var_close.updateLocalsDict( _python_var_temporary_file_path.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name, PyObject *_python_par_content_type, PyObject *_python_par_size, PyObject *_python_par_charset )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_content_type( _python_str_plain_content_type, _python_par_content_type );
    PyObjectLocalParameterVariableNoDel _python_var_size( _python_str_plain_size, _python_par_size );
    PyObjectLocalParameterVariableNoDel _python_var_charset( _python_str_plain_charset, _python_par_charset );
    PyObjectLocalVariable _python_var_file( _python_str_plain_file );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_47b6c359d5555f5e736b9ee1340733e2, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 59 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__uploadedfile_settings.asObject0(), _python_str_plain_FILE_UPLOAD_TEMP_DIR ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 60 );
            {
                PyObjectTempKeeper1 call1;
                _python_var_file.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__uploadedfile_tempfile.asObject0(), _python_str_plain_NamedTemporaryFile ) ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT2( _python_str_digest_a7ce0cb93916a53c933a513ac1122df0, _python_str_plain_suffix, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__uploadedfile_settings.asObject0(), _python_str_plain_FILE_UPLOAD_TEMP_DIR ) ).asObject(), _python_str_plain_dir ) ).asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 63 );
            _python_var_file.assign1( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__uploadedfile_tempfile.asObject0(), _python_str_plain_NamedTemporaryFile ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_f89ebee85cfb1498cb0ed95e3906410c ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 64 );
        {
            PyObjectTempKeeper0 call10;
            PyObjectTempKeeper1 call6;
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper0 call8;
            PyObjectTempKeeper0 call9;
            PyObjectTempKeeper0 super4;
            DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super4.assign( _mvar_django__core__files__uploadedfile_TemporaryUploadedFile.asObject0() ), BUILTIN_SUPER( super4.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), call7.assign( _python_var_file.asObject() ), call8.assign( _python_var_name.asObject() ), call9.assign( _python_var_content_type.asObject() ), call10.assign( _python_var_size.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), call8.asObject0(), call9.asObject0(), call10.asObject0(), _python_var_charset.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_charset.updateLocalsDict( _python_var_size.updateLocalsDict( _python_var_content_type.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_file.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile );
           frame_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_content_type = NULL;
    PyObject *_python_par_size = NULL;
    PyObject *_python_par_charset = NULL;
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
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content_type == key )
            {
                if (unlikely( _python_par_content_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content_type'" );
                    goto error_exit;
                }

                _python_par_content_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_size == key )
            {
                if (unlikely( _python_par_size ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'size'" );
                    goto error_exit;
                }

                _python_par_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_charset == key )
            {
                if (unlikely( _python_par_charset ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'charset'" );
                    goto error_exit;
                }

                _python_par_charset = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content_type, key ) )
            {
                if (unlikely( _python_par_content_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content_type'" );
                    goto error_exit;
                }

                _python_par_content_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_size, key ) )
            {
                if (unlikely( _python_par_size ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'size'" );
                    goto error_exit;
                }

                _python_par_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_charset, key ) )
            {
                if (unlikely( _python_par_charset ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'charset'" );
                    goto error_exit;
                }

                _python_par_charset = value;

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
    if (unlikely( args_given > 5 ))
    {
        if ( 5 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 5 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_content_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content_type'" );
             goto error_exit;
         }

        _python_par_content_type = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'size'" );
             goto error_exit;
         }

        _python_par_size = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_charset != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'charset'" );
             goto error_exit;
         }

        _python_par_charset = INCREASE_REFCOUNT( args[ 4 ] );
    }


    return impl_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self, _python_par_name, _python_par_content_type, _python_par_size, _python_par_charset );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_content_type );
    Py_XDECREF( _python_par_size );
    Py_XDECREF( _python_par_charset );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_4c3a30d9ccb4e9aebe9a610de1bf8e61, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 70 );
        return LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_name );
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

        if ( frame_guard.getFrame0() == frame_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile );
           frame_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "temporary_file_path() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "temporary_file_path() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "temporary_file_path() got multiple values for keyword argument 'self'" );
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
                   "temporary_file_path() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "temporary_file_path() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "temporary_file_path() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "temporary_file_path() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "temporary_file_path() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "temporary_file_path() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "temporary_file_path() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "temporary_file_path() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "temporary_file_path() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "temporary_file_path() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "temporary_file_path() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "temporary_file_path() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "temporary_file_path() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "temporary_file_path() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_3af24de5664bf79e513046dc814957f3, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 73 );
        try
        {
            frame_guard.setLineNumber( 74 );
            return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_close ) ).asObject() );
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
                frame_guard.setLineNumber( 76 );
                if ( RICH_COMPARE_BOOL_NE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_errno ) ).asObject(), _python_int_pos_2 ) )
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_e.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile );
           frame_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_open( _python_str_plain_open );
    PyObjectLocalVariable _python_var_close( _python_str_plain_close );
    PyObjectLocalVariable _python_var_chunks( _python_str_plain_chunks );
    PyObjectLocalVariable _python_var_multiple_chunks( _python_str_plain_multiple_chunks );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_uploadedfile );
    _python_var___doc__.assign0( _python_str_digest_02842397ac4c805994afb9b9f42916cd );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  ) );
    _python_var_open.assign1( MAKE_FUNCTION_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  ) );
    _python_var_close.assign1( MAKE_FUNCTION_function_3_close_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  ) );
    _python_var_chunks.assign1( MAKE_FUNCTION_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  ) );
    _python_var_multiple_chunks.assign1( MAKE_FUNCTION_function_5_multiple_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  ) );
    return _python_var_multiple_chunks.updateLocalsDict( _python_var_chunks.updateLocalsDict( _python_var_close.updateLocalsDict( _python_var_open.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_file, PyObject *_python_par_field_name, PyObject *_python_par_name, PyObject *_python_par_content_type, PyObject *_python_par_size, PyObject *_python_par_charset )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_file( _python_str_plain_file, _python_par_file );
    PyObjectLocalParameterVariableNoDel _python_var_field_name( _python_str_plain_field_name, _python_par_field_name );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_content_type( _python_str_plain_content_type, _python_par_content_type );
    PyObjectLocalParameterVariableNoDel _python_var_size( _python_str_plain_size, _python_par_size );
    PyObjectLocalParameterVariableNoDel _python_var_charset( _python_str_plain_charset, _python_par_charset );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_b88dbe14ca5fe6812419fb526d700971, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 87 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__core__files__uploadedfile_InMemoryUploadedFile.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), call4.assign( _python_var_file.asObject() ), call5.assign( _python_var_name.asObject() ), call6.assign( _python_var_content_type.asObject() ), call7.assign( _python_var_size.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), call5.asObject0(), call6.asObject0(), call7.asObject0(), _python_var_charset.asObject() ) ) );
        }
        frame_guard.setLineNumber( 88 );
        {
                PyObject *tmp_identifier = _python_var_field_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_field_name );
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
        frame_guard.getFrame0()->f_locals = _python_var_charset.updateLocalsDict( _python_var_size.updateLocalsDict( _python_var_content_type.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_file.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile );
           frame_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_file = NULL;
    PyObject *_python_par_field_name = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_content_type = NULL;
    PyObject *_python_par_size = NULL;
    PyObject *_python_par_charset = NULL;
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
            if ( found == false && _python_str_plain_file == key )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_field_name == key )
            {
                if (unlikely( _python_par_field_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'field_name'" );
                    goto error_exit;
                }

                _python_par_field_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content_type == key )
            {
                if (unlikely( _python_par_content_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content_type'" );
                    goto error_exit;
                }

                _python_par_content_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_size == key )
            {
                if (unlikely( _python_par_size ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'size'" );
                    goto error_exit;
                }

                _python_par_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_charset == key )
            {
                if (unlikely( _python_par_charset ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'charset'" );
                    goto error_exit;
                }

                _python_par_charset = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file, key ) )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_field_name, key ) )
            {
                if (unlikely( _python_par_field_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'field_name'" );
                    goto error_exit;
                }

                _python_par_field_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content_type, key ) )
            {
                if (unlikely( _python_par_content_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content_type'" );
                    goto error_exit;
                }

                _python_par_content_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_size, key ) )
            {
                if (unlikely( _python_par_size ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'size'" );
                    goto error_exit;
                }

                _python_par_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_charset, key ) )
            {
                if (unlikely( _python_par_charset ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'charset'" );
                    goto error_exit;
                }

                _python_par_charset = value;

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
    if (unlikely( args_given > 7 ))
    {
        if ( 7 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 7, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 7 == 7 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 7, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 7, args_given + kw_only_found );
            }
#else
            if ( 7 == 7 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 7, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 7, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 7 ))
    {
        if ( 7 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 7, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 7 == 7 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 7, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 7, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 7 ? args_given : 7;

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
         if (unlikely( _python_par_file != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'file'" );
             goto error_exit;
         }

        _python_par_file = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_field_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'field_name'" );
             goto error_exit;
         }

        _python_par_field_name = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_content_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content_type'" );
             goto error_exit;
         }

        _python_par_content_type = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'size'" );
             goto error_exit;
         }

        _python_par_size = INCREASE_REFCOUNT( args[ 5 ] );
    }
    if (likely( 6 < args_usable_count ))
    {
         if (unlikely( _python_par_charset != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'charset'" );
             goto error_exit;
         }

        _python_par_charset = INCREASE_REFCOUNT( args[ 6 ] );
    }


    return impl_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self, _python_par_file, _python_par_field_name, _python_par_name, _python_par_content_type, _python_par_size, _python_par_charset );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_file );
    Py_XDECREF( _python_par_field_name );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_content_type );
    Py_XDECREF( _python_par_size );
    Py_XDECREF( _python_par_charset );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 7)
    {
        return impl_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_mode )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_mode( _python_str_plain_mode, _python_par_mode );

    // Actual function code.
    static PyFrameObject *frame_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_0b0ea082be282f91cea5f45c9456677c, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 91 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_seek ) ).asObject(), _python_int_0 ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_mode.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile );
           frame_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_mode = NULL;
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
                PyErr_Format( PyExc_TypeError, "open() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'mode'" );
                    goto error_exit;
                }

                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'mode'" );
                    goto error_exit;
                }

                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "open() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "open() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "open() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "open() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "open() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "open() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "open() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "open() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "open() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "open() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "open() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "open() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "open() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_mode != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'mode'" );
             goto error_exit;
         }

        _python_par_mode = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_mode == NULL )
    {
        _python_par_mode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_mode );
    }


    return impl_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self, _python_par_mode );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_mode );

    return NULL;
}

static PyObject *dparse_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_close_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_close_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_3_close_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_close_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_close_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_close_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var_self;
    PyObjectLocalParameterVariableNoDel python_var_chunk_size;
};

static void _context_generator_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile_destructor( void *context_voidptr )
{
    _context_generator_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile_t *_python_context = (struct _context_generator_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile_t *)context_voidptr;

    delete _python_context;
}

static void function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile_t *_python_context = (_context_generator_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile_t *)generator->m_context;


        // Local variable inits


        // Actual function code.
        static PyFrameObject *frame_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile ) )
        {
            if ( frame_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile" );
#endif
                Py_DECREF( frame_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile );
            }

            frame_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_1a5fb2d55094117850223cb718426ea3, _module_django__core__files__uploadedfile );
        }

        Py_INCREF( frame_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile );
        generator->m_frame = frame_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile;

        Py_CLEAR( generator->m_frame->f_back );

        generator->m_frame->f_back = PyThreadState_GET()->frame;
        Py_INCREF( generator->m_frame->f_back );

        PyThreadState_GET()->frame = generator->m_frame;

        FrameGuardLight frame_guard( &generator->m_frame );

        // TODO: The inject of the exception through C++ is very non-optimal, this flag
        // now indicates only if the exception occurs initially as supposed, or during
        // life, this could and should be shortcut.
        bool traceback;

        try
        {
            // TODO: In case we don't raise exceptions ourselves, we would still have to do this, so
            // beware to not optimize this away for generators without a replacement.
            traceback = true;
            CHECK_EXCEPTION( generator );
            traceback = false;

            frame_guard.setLineNumber( 97 );
            DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_seek ) ).asObject(), _python_int_0 ) );
            frame_guard.setLineNumber( 98 );
            YIELD_VALUE( generator, CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_self.asObject(), _python_str_plain_read ) ).asObject() ) );

            PyErr_SetNone( PyExc_StopIteration );
        }
        catch ( PythonException &_exception )
        {
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( INCREASE_REFCOUNT( generator->m_frame ) ) );
            }
            else if ( traceback == false )
            {
                _exception.addTraceback( generator->m_frame );
            }
            _exception.toPython();

            // TODO: Moving this code is not allowed yet.
            generator->m_yielded = NULL;
        }
    }

    // TODO: Won't return, we should tell the compiler about that.
    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );
}

static PyObject *impl_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_chunk_size )
{
    // Create context if any
    struct _context_generator_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile_t *_python_context = new _context_generator_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile_context,
            _python_str_plain_chunks,
            _codeobj_1a5fb2d55094117850223cb718426ea3,
            _python_context,
            _context_generator_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function chunks" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.
        _python_context->python_var_self.setVariableNameAndValue( _python_str_plain_self, _python_par_self );
        _python_context->python_var_chunk_size.setVariableNameAndValue( _python_str_plain_chunk_size, _python_par_chunk_size );

        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}
static PyObject *fparse_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_chunk_size = NULL;
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
                PyErr_Format( PyExc_TypeError, "chunks() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "chunks() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_chunk_size == key )
            {
                if (unlikely( _python_par_chunk_size ))
                {
                    PyErr_Format( PyExc_TypeError, "chunks() got multiple values for keyword argument 'chunk_size'" );
                    goto error_exit;
                }

                _python_par_chunk_size = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "chunks() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_chunk_size, key ) )
            {
                if (unlikely( _python_par_chunk_size ))
                {
                    PyErr_Format( PyExc_TypeError, "chunks() got multiple values for keyword argument 'chunk_size'" );
                    goto error_exit;
                }

                _python_par_chunk_size = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "chunks() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "chunks() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "chunks() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "chunks() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "chunks() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "chunks() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "chunks() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "chunks() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "chunks() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "chunks() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "chunks() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "chunks() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "chunks() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "chunks() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_chunk_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "chunks() got multiple values for keyword argument 'chunk_size'" );
             goto error_exit;
         }

        _python_par_chunk_size = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_chunk_size == NULL )
    {
        _python_par_chunk_size = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_chunk_size );
    }


    return impl_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self, _python_par_chunk_size );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_chunk_size );

    return NULL;
}

static PyObject *dparse_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_multiple_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_chunk_size )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_chunk_size( _python_str_plain_chunk_size, _python_par_chunk_size );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_False );
}
static PyObject *fparse_function_5_multiple_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_chunk_size = NULL;
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
                PyErr_Format( PyExc_TypeError, "multiple_chunks() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "multiple_chunks() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_chunk_size == key )
            {
                if (unlikely( _python_par_chunk_size ))
                {
                    PyErr_Format( PyExc_TypeError, "multiple_chunks() got multiple values for keyword argument 'chunk_size'" );
                    goto error_exit;
                }

                _python_par_chunk_size = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "multiple_chunks() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_chunk_size, key ) )
            {
                if (unlikely( _python_par_chunk_size ))
                {
                    PyErr_Format( PyExc_TypeError, "multiple_chunks() got multiple values for keyword argument 'chunk_size'" );
                    goto error_exit;
                }

                _python_par_chunk_size = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "multiple_chunks() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "multiple_chunks() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "multiple_chunks() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "multiple_chunks() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "multiple_chunks() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "multiple_chunks() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "multiple_chunks() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "multiple_chunks() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "multiple_chunks() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "multiple_chunks() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "multiple_chunks() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "multiple_chunks() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "multiple_chunks() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "multiple_chunks() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_chunk_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "multiple_chunks() got multiple values for keyword argument 'chunk_size'" );
             goto error_exit;
         }

        _python_par_chunk_size = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_chunk_size == NULL )
    {
        _python_par_chunk_size = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_chunk_size );
    }


    return impl_function_5_multiple_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self, _python_par_chunk_size );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_chunk_size );

    return NULL;
}

static PyObject *dparse_function_5_multiple_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_multiple_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_multiple_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_from_dict( _python_str_plain_from_dict );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_uploadedfile );
    _python_var___doc__.assign0( _python_str_digest_5ca0e9db9af5a669280dea11ddac361a );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile(  ) );
    _python_var_from_dict.assign1( MAKE_FUNCTION_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile(  ) );
    static PyFrameObject *frame_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_81a09220e2ba3ae30b6cefe3b737710b, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 125 );
        _python_var_from_dict.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_classmethod ), _python_var_from_dict.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_from_dict.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile );
           frame_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        throw;
    }
    return _python_var_from_dict.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name, PyObject *_python_par_content, PyObject *_python_par_content_type )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_content( _python_str_plain_content, _python_par_content );
    PyObjectLocalParameterVariableNoDel _python_var_content_type( _python_str_plain_content_type, _python_par_content_type );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_e858836584845491457a9724e92d9d26, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 110 );
        {
            PyObjectTempKeeper0 keeper_0;
            _python_var_content.assign0( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_content.asObject() ) ) ? keeper_0.asObject0() : _python_str_empty ) );
        }
        frame_guard.setLineNumber( 111 );
        {
            PyObjectTempKeeper1 call11;
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper1 make_tuple5;
            PyObjectTempKeeper0 make_tuple7;
            PyObjectTempKeeper0 make_tuple8;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__core__files__uploadedfile_SimpleUploadedFile.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), CALL_FUNCTION_WITH_POSARGS( call11.asObject0(), PyObjectTemporary( ( make_tuple5.assign( ( call3.assign( _mvar_django__core__files__uploadedfile_BytesIO.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_content.asObject() ) ) ), make_tuple7.assign( _python_var_name.asObject() ), make_tuple8.assign( _python_var_content_type.asObject() ), MAKE_TUPLE6( make_tuple5.asObject0(), Py_None, make_tuple7.asObject0(), make_tuple8.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_content.asObject() ) ).asObject(), Py_None ) ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_content_type.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile );
           frame_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_content = NULL;
    PyObject *_python_par_content_type = NULL;
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
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content == key )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content_type == key )
            {
                if (unlikely( _python_par_content_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content_type'" );
                    goto error_exit;
                }

                _python_par_content_type = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content, key ) )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content_type, key ) )
            {
                if (unlikely( _python_par_content_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content_type'" );
                    goto error_exit;
                }

                _python_par_content_type = value;

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
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

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
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_content != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content'" );
             goto error_exit;
         }

        _python_par_content = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_content_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content_type'" );
             goto error_exit;
         }

        _python_par_content_type = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_content_type == NULL )
    {
        _python_par_content_type = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_content_type );
    }


    return impl_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_self, _python_par_name, _python_par_content, _python_par_content_type );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_content );
    Py_XDECREF( _python_par_content_type );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject *_python_par_cls, PyObject *_python_par_file_dict )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_cls( _python_str_plain_cls, _python_par_cls );
    PyObjectLocalParameterVariableNoDel _python_var_file_dict( _python_str_plain_file_dict, _python_par_file_dict );

    // Actual function code.
    static PyFrameObject *frame_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile = NULL;

    if ( isFrameUnusable( frame_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile ) )
    {
        if ( frame_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile" );
#endif
            Py_DECREF( frame_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile );
        }

        frame_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_dca0d74e9163e3f2937f45d8d7b08de4, _module_django__core__files__uploadedfile );
    }

    FrameGuard frame_guard( frame_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 122 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper1 call3;
            return ( call1.assign( _python_var_cls.asObject() ), call2.assign( LOOKUP_SUBSCRIPT( _python_var_file_dict.asObject(), _python_str_plain_filename ) ), call3.assign( LOOKUP_SUBSCRIPT( _python_var_file_dict.asObject(), _python_str_plain_content ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_file_dict.asObject(), _python_str_plain_get ) ).asObject(), _python_str_digest_cc0af601bfd673427a8abb171f62c707, _python_str_digest_46849f4a4904cf0d65bfbfb6525045f9 ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_file_dict.updateLocalsDict( _python_var_cls.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile )
        {
           Py_DECREF( frame_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile );
           frame_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cls = NULL;
    PyObject *_python_par_file_dict = NULL;
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
                PyErr_Format( PyExc_TypeError, "from_dict() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_cls == key )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "from_dict() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_file_dict == key )
            {
                if (unlikely( _python_par_file_dict ))
                {
                    PyErr_Format( PyExc_TypeError, "from_dict() got multiple values for keyword argument 'file_dict'" );
                    goto error_exit;
                }

                _python_par_file_dict = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cls, key ) )
            {
                if (unlikely( _python_par_cls ))
                {
                    PyErr_Format( PyExc_TypeError, "from_dict() got multiple values for keyword argument 'cls'" );
                    goto error_exit;
                }

                _python_par_cls = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file_dict, key ) )
            {
                if (unlikely( _python_par_file_dict ))
                {
                    PyErr_Format( PyExc_TypeError, "from_dict() got multiple values for keyword argument 'file_dict'" );
                    goto error_exit;
                }

                _python_par_file_dict = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "from_dict() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "from_dict() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "from_dict() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "from_dict() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "from_dict() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "from_dict() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "from_dict() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "from_dict() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "from_dict() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "from_dict() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "from_dict() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "from_dict() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "from_dict() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_cls != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "from_dict() got multiple values for keyword argument 'cls'" );
             goto error_exit;
         }

        _python_par_cls = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_file_dict != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "from_dict() got multiple values for keyword argument 'file_dict'" );
             goto error_exit;
         }

        _python_par_file_dict = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile( self, _python_par_cls, _python_par_file_dict );

error_exit:;

    Py_XDECREF( _python_par_cls );
    Py_XDECREF( _python_par_file_dict );

    return NULL;
}

static PyObject *dparse_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_1___init___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b5108a4f60b0a88023ab704e24b3f668,
        INCREASE_REFCOUNT( _python_tuple_none_none_none_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_1___init___of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_47b6c359d5555f5e736b9ee1340733e2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_1___init___of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b88dbe14ca5fe6812419fb526d700971,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_1___init___of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e858836584845491457a9724e92d9d26,
        INCREASE_REFCOUNT( _python_tuple_str_digest_46849f4a4904cf0d65bfbfb6525045f9_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_2___repr___of_class_1_UploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_705a2857a84df5b3ac51d8d6d226812d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_2_from_dict_of_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain_from_dict,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_dca0d74e9163e3f2937f45d8d7b08de4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        _python_str_digest_1afe8e16b5cb9814fbc3260995fb5b7e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_2_open_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain_open,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0b0ea082be282f91cea5f45c9456677c,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_2_temporary_file_path_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain_temporary_file_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4c3a30d9ccb4e9aebe9a610de1bf8e61,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        _python_str_digest_ae04e0ef7a18075c10ab978e5c481581
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_3__get_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain__get_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6cc7962e5ae90b9424cdebe2f92dcfd7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_3_close_of_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3af24de5664bf79e513046dc814957f3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_close_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_close_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_3_close_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5f9d4ed5fd86b6a4f4926e14f3b031c5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_4__set_name_of_class_1_UploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain__set_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_54aa9f55b4aefe6acd267cbbd0e75395,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    return Nuitka_Function_New(
        fparse_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_4_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain_chunks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1a5fb2d55094117850223cb718426ea3,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        Py_None
    );
}



static PyObject *MAKE_FUNCTION_function_5_multiple_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_multiple_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile,
        dparse_function_5_multiple_chunks_of_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile,
        _python_str_plain_multiple_chunks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d4bb6c6479c63167da2cd1699804c584,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadedfile,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.files.uploadedfile",   /* m_name */
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

MOD_INIT_DECL( django__core__files__uploadedfile )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__files__uploadedfile );
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

    // puts( "in initdjango__core__files__uploadedfile" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__files__uploadedfile = Py_InitModule4(
        "django.core.files.uploadedfile",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__files__uploadedfile = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__files__uploadedfile = (PyDictObject *)((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict;

    assertObject( _module_django__core__files__uploadedfile );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_aeb1bef4e208b9cea3ae8c4ea718cce9, _module_django__core__files__uploadedfile );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__files__uploadedfile );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__files__uploadedfile != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_54823fcf55ec1403748eb1252e1a26f8 );
    UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_a6f4afe915d5e6f2003cd8ace31aba67 );
    PyFrameObject *frame_module_django__core__files__uploadedfile = MAKE_FRAME( _codeobj_57c058055bca72fcd8f1268cf4e93da0, _module_django__core__files__uploadedfile );

    FrameGuard frame_guard( frame_module_django__core__files__uploadedfile );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__files__uploadedfile ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain_BytesIO, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_io, ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict, _python_list_str_plain_BytesIO_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_BytesIO ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain_File, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_b860e7dc411a0758eac3d69b6d7bb905, ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict, _python_list_str_plain_File_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_File ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain_tempfile, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1c708a450f106db73723c5b9289df76d, ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict, _python_list_str_plain_temp_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_temp ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain_force_str, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict, _python_list_str_plain_force_str_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_str ) );
        UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain___all__, _python_tuple_1ae0d8da4e1af900d21c87da8df7dd34_tuple );
        {
            frame_guard.setLineNumber( 16 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__uploadedfile_File.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_UploadedFile_of_module_django__core__files__uploadedfile(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__uploadedfile___metaclass__.isInitialized( false ) ? _mvar_django__core__files__uploadedfile___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_UploadedFile, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain_UploadedFile, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 54 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__uploadedfile_UploadedFile.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_TemporaryUploadedFile_of_module_django__core__files__uploadedfile(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__uploadedfile___metaclass__.isInitialized( false ) ? _mvar_django__core__files__uploadedfile___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_TemporaryUploadedFile, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain_TemporaryUploadedFile, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 82 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__uploadedfile_UploadedFile.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_InMemoryUploadedFile_of_module_django__core__files__uploadedfile(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__uploadedfile___metaclass__.isInitialized( false ) ? _mvar_django__core__files__uploadedfile___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_InMemoryUploadedFile, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain_InMemoryUploadedFile, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 105 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__uploadedfile_InMemoryUploadedFile.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_SimpleUploadedFile_of_module_django__core__files__uploadedfile(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__uploadedfile___metaclass__.isInitialized( false ) ? _mvar_django__core__files__uploadedfile___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call15;
                _tmp_python_tmp_class = ( call13.assign( _python_tmp_metaclass.asObject() ), call15.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_str_plain_SimpleUploadedFile, call15.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadedfile, (Nuitka_StringObject *)_python_str_plain_SimpleUploadedFile, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__files__uploadedfile)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__core__files__uploadedfile );
}
