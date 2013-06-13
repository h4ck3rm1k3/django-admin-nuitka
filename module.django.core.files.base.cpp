// Generated code for Python source for module 'django.core.files.base'
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

// The _module_django__core__files__base is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__files__base;
PyDictObject *_moduledict_django__core__files__base;

// The module level variables.
static PyObjectGlobalVariable_django__core__files__base _mvar_django__core__files__base_BytesIO( &_module_django__core__files__base, &_python_str_plain_BytesIO );
static PyObjectGlobalVariable_django__core__files__base _mvar_django__core__files__base_ContentFile( &_module_django__core__files__base, &_python_str_plain_ContentFile );
static PyObjectGlobalVariable_django__core__files__base _mvar_django__core__files__base_File( &_module_django__core__files__base, &_python_str_plain_File );
static PyObjectGlobalVariable_django__core__files__base _mvar_django__core__files__base_FileProxyMixin( &_module_django__core__files__base, &_python_str_plain_FileProxyMixin );
static PyObjectGlobalVariable_django__core__files__base _mvar_django__core__files__base_StringIO( &_module_django__core__files__base, &_python_str_plain_StringIO );
static PyObjectGlobalVariable_django__core__files__base _mvar_django__core__files__base_UnsupportedOperation( &_module_django__core__files__base, &_python_str_plain_UnsupportedOperation );
static PyObjectGlobalVariable_django__core__files__base _mvar_django__core__files__base___metaclass__( &_module_django__core__files__base, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__files__base _mvar_django__core__files__base_force_bytes( &_module_django__core__files__base, &_python_str_plain_force_bytes );
static PyObjectGlobalVariable_django__core__files__base _mvar_django__core__files__base_os( &_module_django__core__files__base, &_python_str_plain_os );
static PyObjectGlobalVariable_django__core__files__base _mvar_django__core__files__base_python_2_unicode_compatible( &_module_django__core__files__base, &_python_str_plain_python_2_unicode_compatible );
static PyObjectGlobalVariable_django__core__files__base _mvar_django__core__files__base_six( &_module_django__core__files__base, &_python_str_plain_six );
static PyObjectGlobalVariable_django__core__files__base _mvar_django__core__files__base_smart_text( &_module_django__core__files__base, &_python_str_plain_smart_text );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_File_of_module_django__core__files__base(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_ContentFile_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_10_chunks_of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_12___iter___of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_13___enter___of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_14___exit___of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_15_open_of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_16_close_of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_2___str___of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_2___str___of_class_2_ContentFile_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_3___bool___of_class_2_ContentFile_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_3___repr___of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_4___bool___of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_5___nonzero___of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_6___len___of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_6_close_of_class_2_ContentFile_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_7__get_size_of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_8__set_size_of_class_1_File_of_module_django__core__files__base(  );


static PyObject *MAKE_FUNCTION_function_9__get_closed_of_class_1_File_of_module_django__core__files__base(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_File_of_module_django__core__files__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_DEFAULT_CHUNK_SIZE( _python_str_plain_DEFAULT_CHUNK_SIZE );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___str__( _python_str_plain___str__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var___bool__( _python_str_plain___bool__ );
    PyObjectLocalVariable _python_var___nonzero__( _python_str_plain___nonzero__ );
    PyObjectLocalVariable _python_var___len__( _python_str_plain___len__ );
    PyObjectLocalVariable _python_var__get_size( _python_str_plain__get_size );
    PyObjectLocalVariable _python_var__set_size( _python_str_plain__set_size );
    PyObjectLocalVariable _python_var_size( _python_str_plain_size );
    PyObjectLocalVariable _python_var__get_closed( _python_str_plain__get_closed );
    PyObjectLocalVariable _python_var_closed( _python_str_plain_closed );
    PyObjectLocalVariable _python_var_chunks( _python_str_plain_chunks );
    PyObjectLocalVariable _python_var_multiple_chunks( _python_str_plain_multiple_chunks );
    PyObjectLocalVariable _python_var___iter__( _python_str_plain___iter__ );
    PyObjectLocalVariable _python_var___enter__( _python_str_plain___enter__ );
    PyObjectLocalVariable _python_var___exit__( _python_str_plain___exit__ );
    PyObjectLocalVariable _python_var_open( _python_str_plain_open );
    PyObjectLocalVariable _python_var_close( _python_str_plain_close );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    _python_var_DEFAULT_CHUNK_SIZE.assign0( _python_int_pos_65536 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var___str__.assign1( MAKE_FUNCTION_function_2___str___of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_3___repr___of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var___bool__.assign1( MAKE_FUNCTION_function_4___bool___of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var___nonzero__.assign1( MAKE_FUNCTION_function_5___nonzero___of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var___len__.assign1( MAKE_FUNCTION_function_6___len___of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var__get_size.assign1( MAKE_FUNCTION_function_7__get_size_of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var__set_size.assign1( MAKE_FUNCTION_function_8__set_size_of_class_1_File_of_module_django__core__files__base(  ) );
    static PyFrameObject *frame_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_class_1_File_of_module_django__core__files__base );
        }

        frame_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_0d5c0b590d7a9b186ba2f57ba89d961c, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 56 );
        {
            PyObjectTempKeeper0 call2;
            _python_var_size.assign1( ( call2.assign( _python_var__get_size.asObject() ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), call2.asObject0(), _python_var__set_size.asObject() ) ) );
        }
        _python_var__get_closed.assign1( MAKE_FUNCTION_function_9__get_closed_of_class_1_File_of_module_django__core__files__base(  ) );
        frame_guard.setLineNumber( 60 );
        _python_var_closed.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), _python_var__get_closed.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_close.updateLocalsDict( _python_var_open.updateLocalsDict( _python_var___exit__.updateLocalsDict( _python_var___enter__.updateLocalsDict( _python_var___iter__.updateLocalsDict( _python_var_multiple_chunks.updateLocalsDict( _python_var_chunks.updateLocalsDict( _python_var_closed.updateLocalsDict( _python_var__get_closed.updateLocalsDict( _python_var_size.updateLocalsDict( _python_var__set_size.updateLocalsDict( _python_var__get_size.updateLocalsDict( _python_var___len__.updateLocalsDict( _python_var___nonzero__.updateLocalsDict( _python_var___bool__.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___str__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_DEFAULT_CHUNK_SIZE.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_class_1_File_of_module_django__core__files__base );
           frame_class_1_File_of_module_django__core__files__base = NULL;
        }

        throw;
    }
    _python_var_chunks.assign1( MAKE_FUNCTION_function_10_chunks_of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var_multiple_chunks.assign1( MAKE_FUNCTION_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var___iter__.assign1( MAKE_FUNCTION_function_12___iter___of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var___enter__.assign1( MAKE_FUNCTION_function_13___enter___of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var___exit__.assign1( MAKE_FUNCTION_function_14___exit___of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var_open.assign1( MAKE_FUNCTION_function_15_open_of_class_1_File_of_module_django__core__files__base(  ) );
    _python_var_close.assign1( MAKE_FUNCTION_function_16_close_of_class_1_File_of_module_django__core__files__base(  ) );
    return _python_var_close.updateLocalsDict( _python_var_open.updateLocalsDict( _python_var___exit__.updateLocalsDict( _python_var___enter__.updateLocalsDict( _python_var___iter__.updateLocalsDict( _python_var_multiple_chunks.updateLocalsDict( _python_var_chunks.updateLocalsDict( _python_var_closed.updateLocalsDict( _python_var__get_closed.updateLocalsDict( _python_var_size.updateLocalsDict( _python_var__set_size.updateLocalsDict( _python_var__get_size.updateLocalsDict( _python_var___len__.updateLocalsDict( _python_var___nonzero__.updateLocalsDict( _python_var___bool__.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___str__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_DEFAULT_CHUNK_SIZE.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_file, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_file( _python_str_plain_file, _python_par_file );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_1___init___of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_1___init___of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_c600a4941eaeac8ae6a2ce5ce742d420, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 16 );
        {
                PyObject *tmp_identifier = _python_var_file.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_file );
        }
        frame_guard.setLineNumber( 17 );
        if ( ( _python_var_name.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 18 );
            _python_var_name.assign1( BUILTIN_GETATTR( _python_var_file.asObject(), _python_unicode_plain_name, Py_None ) );
        }
        frame_guard.setLineNumber( 19 );
        {
                PyObject *tmp_identifier = _python_var_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_name );
        }
        frame_guard.setLineNumber( 20 );
        if ( HAS_ATTRIBUTE( _python_var_file.asObject(), _python_unicode_plain_mode ) )
        {
            frame_guard.setLineNumber( 21 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_file.asObject(), _python_str_plain_mode ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_mode );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_file.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_1___init___of_class_1_File_of_module_django__core__files__base );
           frame_function_1___init___of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_file = NULL;
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
    // Assign values not given to defaults
    if ( _python_par_name == NULL )
    {
        _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_name );
    }


    return impl_function_1___init___of_class_1_File_of_module_django__core__files__base( self, _python_par_self, _python_par_file, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_file );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___str___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2___str___of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_2___str___of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_2___str___of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___str___of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_2___str___of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_2___str___of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_c2a4104b552defab265d6c0172869a22, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_2___str___of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_2___str___of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 24 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 keeper_0;
            return ( call1.assign( _mvar_django__core__files__base_smart_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), ( CHECK_IF_TRUE( keeper_0.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ) ) ? PyObjectTemporary( keeper_0.asObject() ).asObject() : _python_unicode_empty ) ) );
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

        if ( frame_guard.getFrame0() == frame_function_2___str___of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_2___str___of_class_1_File_of_module_django__core__files__base );
           frame_function_2___str___of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___str___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__str__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__str__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__str__() got multiple values for keyword argument 'self'" );
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
                   "__str__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__str__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__str__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__str__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___str___of_class_1_File_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___str___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___str___of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___str___of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___repr___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3___repr___of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_3___repr___of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_3___repr___of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___repr___of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_3___repr___of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_3___repr___of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_e4201765fc382bdfd1048da2d9697689, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_3___repr___of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_3___repr___of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 27 );
        {
            PyObjectTempKeeper0 keeper_0;
            PyObjectTempKeeper1 make_tuple1;
            return BINARY_OPERATION_REMAINDER( _python_unicode_digest_2cd859f75f1f8232c125cc11124965d8, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ), MAKE_TUPLE2( make_tuple1.asObject0(), ( CHECK_IF_TRUE( keeper_0.assign( _python_var_self.asObject() ) ) ? keeper_0.asObject0() : _python_unicode_plain_None ) ) ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_3___repr___of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_3___repr___of_class_1_File_of_module_django__core__files__base );
           frame_function_3___repr___of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3___repr___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_3___repr___of_class_1_File_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3___repr___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3___repr___of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___repr___of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___bool___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_4___bool___of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_4___bool___of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_4___bool___of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___bool___of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_4___bool___of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_4___bool___of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_ed74bd9173d6dd53c8cc1a137d83cde7, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_4___bool___of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_4___bool___of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 30 );
        return INCREASE_REFCOUNT( TO_BOOL( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_4___bool___of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_4___bool___of_class_1_File_of_module_django__core__files__base );
           frame_function_4___bool___of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___bool___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__bool__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__bool__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__bool__() got multiple values for keyword argument 'self'" );
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
                   "__bool__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__bool__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__bool__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__bool__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__bool__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__bool__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__bool__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__bool__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__bool__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4___bool___of_class_1_File_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4___bool___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4___bool___of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___bool___of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5___nonzero___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5___nonzero___of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_5___nonzero___of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_5___nonzero___of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5___nonzero___of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_5___nonzero___of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_5___nonzero___of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_b5cbb24b18a16e3025a63a2fe2d7d202, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_5___nonzero___of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_5___nonzero___of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 33 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_self.asObject() ) ).asObject(), _python_str_plain___bool__ ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_self.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_5___nonzero___of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_5___nonzero___of_class_1_File_of_module_django__core__files__base );
           frame_function_5___nonzero___of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5___nonzero___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__nonzero__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__nonzero__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__nonzero__() got multiple values for keyword argument 'self'" );
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
                   "__nonzero__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__nonzero__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__nonzero__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5___nonzero___of_class_1_File_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5___nonzero___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5___nonzero___of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5___nonzero___of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6___len___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_6___len___of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_6___len___of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_6___len___of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6___len___of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_6___len___of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_6___len___of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_b301c54437fcad0ff7ccc5da76b45c4e, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_6___len___of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_6___len___of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 36 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_size );
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

        if ( frame_guard.getFrame0() == frame_function_6___len___of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_6___len___of_class_1_File_of_module_django__core__files__base );
           frame_function_6___len___of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6___len___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__len__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__len__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__len__() got multiple values for keyword argument 'self'" );
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
                   "__len__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__len__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__len__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__len__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__len__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__len__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__len__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__len__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__len__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__len__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__len__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__len__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__len__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__len__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6___len___of_class_1_File_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6___len___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6___len___of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6___len___of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7__get_size_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_pos( _python_str_plain_pos );

    // Actual function code.
    static PyFrameObject *frame_function_7__get_size_of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_7__get_size_of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_7__get_size_of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7__get_size_of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_7__get_size_of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_7__get_size_of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_f3b644a28209df63bca048588855ba4d, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_7__get_size_of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_7__get_size_of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 39 );
        if ( (!( HAS_ATTRIBUTE( _python_var_self.asObject(), _python_unicode_plain__size ) )) )
        {
            frame_guard.setLineNumber( 40 );
            if ( HAS_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_unicode_plain_size ) )
            {
                frame_guard.setLineNumber( 41 );
                {
                        PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_size ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__size );
                }
            }
            else
            {
                frame_guard.setLineNumber( 42 );
                {
                    PyObjectTempKeeper1 call8;
                    if ( ( HAS_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_unicode_plain_name ) && CHECK_IF_TRUE( PyObjectTemporary( ( call8.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__base_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_exists ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 43 );
                    {
                        PyObjectTempKeeper1 call1;
                        {
                            PyObjectTemporary tmp_identifier( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__base_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_getsize ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_name ) ).asObject() ) ) );
                            SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__size );
                    }
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 44 );
                    if ( ( HAS_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_unicode_plain_tell ) && HAS_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_unicode_plain_seek ) ) )
                    {
                        frame_guard.setLineNumber( 45 );
                        _python_var_pos.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_tell ) ).asObject() ) );
                        frame_guard.setLineNumber( 46 );
                        {
                            PyObjectTempKeeper1 call3;
                            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_seek ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_int_0, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__base_os.asObject0(), _python_str_plain_SEEK_END ) ).asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 47 );
                        {
                                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_tell ) ).asObject() ) );
                                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__size );
                        }
                        frame_guard.setLineNumber( 48 );
                        {
                            PyObjectTempKeeper1 call6;
                            DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_seek ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_pos.asObject() ) ) );
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 50 );
                        {
                                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AttributeError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_87854d5e980460d80dc4ab88366dfdfe ) ).asObject() ) );
                                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                        }
                    }
                }
                }
            }
        }
        frame_guard.setLineNumber( 51 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__size );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_pos.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_7__get_size_of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_7__get_size_of_class_1_File_of_module_django__core__files__base );
           frame_function_7__get_size_of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7__get_size_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_get_size() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_get_size() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_get_size() got multiple values for keyword argument 'self'" );
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
                   "_get_size() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_get_size() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_size() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_size() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_size() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_size() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_size() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_size() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_size() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_get_size() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_size() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_size() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_size() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_get_size() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7__get_size_of_class_1_File_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7__get_size_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7__get_size_of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7__get_size_of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8__set_size_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_size )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_size( _python_str_plain_size, _python_par_size );

    // Actual function code.
    static PyFrameObject *frame_function_8__set_size_of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_8__set_size_of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_8__set_size_of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8__set_size_of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_8__set_size_of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_8__set_size_of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_17b82ca378e4aded3febc5fe3189043e, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_8__set_size_of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_8__set_size_of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 54 );
        {
                PyObject *tmp_identifier = _python_var_size.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__size );
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
        frame_guard.getFrame0()->f_locals = _python_var_size.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_8__set_size_of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_8__set_size_of_class_1_File_of_module_django__core__files__base );
           frame_function_8__set_size_of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_8__set_size_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_size = NULL;
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
                PyErr_Format( PyExc_TypeError, "_set_size() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_set_size() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_size == key )
            {
                if (unlikely( _python_par_size ))
                {
                    PyErr_Format( PyExc_TypeError, "_set_size() got multiple values for keyword argument 'size'" );
                    goto error_exit;
                }

                _python_par_size = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_set_size() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_size, key ) )
            {
                if (unlikely( _python_par_size ))
                {
                    PyErr_Format( PyExc_TypeError, "_set_size() got multiple values for keyword argument 'size'" );
                    goto error_exit;
                }

                _python_par_size = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_set_size() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_set_size() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_set_size() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_set_size() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_set_size() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_set_size() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_set_size() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_set_size() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_set_size() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_set_size() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_set_size() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_set_size() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_set_size() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_set_size() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_set_size() got multiple values for keyword argument 'size'" );
             goto error_exit;
         }

        _python_par_size = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_8__set_size_of_class_1_File_of_module_django__core__files__base( self, _python_par_self, _python_par_size );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_size );

    return NULL;
}

static PyObject *dparse_function_8__set_size_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8__set_size_of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8__set_size_of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9__get_closed_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_9__get_closed_of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_9__get_closed_of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_9__get_closed_of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9__get_closed_of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_9__get_closed_of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_9__get_closed_of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_d452c84b405c93515b559d025871d13a, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_9__get_closed_of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_9__get_closed_of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 59 );
        {
            PyObjectTempKeeper0 keeper_0;
            return ( CHECK_IF_TRUE( keeper_0.assign( UNARY_OPERATION( UNARY_NOT, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject() ) ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_closed ) );
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

        if ( frame_guard.getFrame0() == frame_function_9__get_closed_of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_9__get_closed_of_class_1_File_of_module_django__core__files__base );
           frame_function_9__get_closed_of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9__get_closed_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_get_closed() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_get_closed() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_get_closed() got multiple values for keyword argument 'self'" );
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
                   "_get_closed() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_get_closed() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_closed() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_closed() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_closed() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_closed() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_closed() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_closed() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_closed() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_get_closed() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_closed() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_closed() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_closed() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_get_closed() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9__get_closed_of_class_1_File_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_9__get_closed_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9__get_closed_of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9__get_closed_of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_10_chunks_of_class_1_File_of_module_django__core__files__base_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var_self;
    PyObjectLocalParameterVariableNoDel python_var_chunk_size;
    PyObjectLocalVariable python_var_data;
};

static void _context_generator_function_10_chunks_of_class_1_File_of_module_django__core__files__base_destructor( void *context_voidptr )
{
    _context_generator_function_10_chunks_of_class_1_File_of_module_django__core__files__base_t *_python_context = (struct _context_generator_function_10_chunks_of_class_1_File_of_module_django__core__files__base_t *)context_voidptr;

    delete _python_context;
}

static void function_10_chunks_of_class_1_File_of_module_django__core__files__base_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_10_chunks_of_class_1_File_of_module_django__core__files__base_t *_python_context = (_context_generator_function_10_chunks_of_class_1_File_of_module_django__core__files__base_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_data.setVariableName( _python_str_plain_data );

        // Actual function code.
        static PyFrameObject *frame_function_10_chunks_of_class_1_File_of_module_django__core__files__base = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_10_chunks_of_class_1_File_of_module_django__core__files__base ) )
        {
            if ( frame_function_10_chunks_of_class_1_File_of_module_django__core__files__base )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_10_chunks_of_class_1_File_of_module_django__core__files__base" );
#endif
                Py_DECREF( frame_function_10_chunks_of_class_1_File_of_module_django__core__files__base );
            }

            frame_function_10_chunks_of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_97d1f74fd2d00a10754071ab7bd8fcd2, _module_django__core__files__base );
        }

        Py_INCREF( frame_function_10_chunks_of_class_1_File_of_module_django__core__files__base );
        generator->m_frame = frame_function_10_chunks_of_class_1_File_of_module_django__core__files__base;

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

            frame_guard.setLineNumber( 67 );
            if ( (!( CHECK_IF_TRUE( _python_context->python_var_chunk_size.asObject() ) )) )
            {
                frame_guard.setLineNumber( 68 );
                _python_context->python_var_chunk_size.assign1( LOOKUP_ATTRIBUTE( _python_context->python_var_self.asObject(), _python_str_plain_DEFAULT_CHUNK_SIZE ) );
            }
            frame_guard.setLineNumber( 70 );
            try
            {
                frame_guard.setLineNumber( 71 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_self.asObject(), _python_str_plain_seek ) ).asObject(), _python_int_0 ) );
            }
            catch ( PythonException &_exception )
            {
                if ( !_exception.hasTraceback() )
                {
                    _exception.setTraceback( MAKE_TRACEBACK( INCREASE_REFCOUNT( generator->m_frame ) ) );
                }
                else
                {
                    _exception.addTraceback( frame_guard.getFrame0() );
                }

                frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
                ExceptionRestorerFrameGuardLight restorer( &frame_guard );
#endif
                _exception.toExceptionHandler();

                if ( _exception.matches( PyExc_AttributeError ) || _exception.matches( _mvar_django__core__files__base_UnsupportedOperation.asObject0() ) )
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
            frame_guard.setLineNumber( 75 );
            while( true )
            {
                frame_guard.setLineNumber( 76 );
                {
                    PyObjectTempKeeper1 call1;
                    _python_context->python_var_data.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_context->python_var_self.asObject(), _python_str_plain_read ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_context->python_var_chunk_size.asObject() ) ) );
                }
                frame_guard.setLineNumber( 77 );
                if ( (!( CHECK_IF_TRUE( _python_context->python_var_data.asObject() ) )) )
                {
                    frame_guard.setLineNumber( 78 );
                    break;
                }
                frame_guard.setLineNumber( 79 );
                YIELD_VALUE( generator, _python_context->python_var_data.asObject1() );

               CONSIDER_THREADING();
            }

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

static PyObject *impl_function_10_chunks_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_chunk_size )
{
    // Create context if any
    struct _context_generator_function_10_chunks_of_class_1_File_of_module_django__core__files__base_t *_python_context = new _context_generator_function_10_chunks_of_class_1_File_of_module_django__core__files__base_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_10_chunks_of_class_1_File_of_module_django__core__files__base_context,
            _python_str_plain_chunks,
            _codeobj_97d1f74fd2d00a10754071ab7bd8fcd2,
            _python_context,
            _context_generator_function_10_chunks_of_class_1_File_of_module_django__core__files__base_destructor
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
static PyObject *fparse_function_10_chunks_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_10_chunks_of_class_1_File_of_module_django__core__files__base( self, _python_par_self, _python_par_chunk_size );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_chunk_size );

    return NULL;
}

static PyObject *dparse_function_10_chunks_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_10_chunks_of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_chunks_of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_chunk_size )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_chunk_size( _python_str_plain_chunk_size, _python_par_chunk_size );

    // Actual function code.
    static PyFrameObject *frame_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_190a52da9770ff51096b626275a8b077, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 89 );
        if ( (!( CHECK_IF_TRUE( _python_var_chunk_size.asObject() ) )) )
        {
            frame_guard.setLineNumber( 90 );
            _python_var_chunk_size.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_DEFAULT_CHUNK_SIZE ) );
        }
        frame_guard.setLineNumber( 91 );
        {
            PyObjectTempKeeper1 cmp1;
            return ( cmp1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_size ) ), RICH_COMPARE_GT( cmp1.asObject0(), _python_var_chunk_size.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_chunk_size.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base );
           frame_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base( self, _python_par_self, _python_par_chunk_size );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_chunk_size );

    return NULL;
}

static PyObject *dparse_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_12___iter___of_class_1_File_of_module_django__core__files__base_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var_self;
    PyObjectLocalVariable python_var_buffer_;
    PyObjectLocalVariable python_var_chunk;
    PyObjectLocalVariable python_var_chunk_buffer;
    PyObjectLocalVariable python_var_line;
};

static void _context_generator_function_12___iter___of_class_1_File_of_module_django__core__files__base_destructor( void *context_voidptr )
{
    _context_generator_function_12___iter___of_class_1_File_of_module_django__core__files__base_t *_python_context = (struct _context_generator_function_12___iter___of_class_1_File_of_module_django__core__files__base_t *)context_voidptr;

    delete _python_context;
}

static void function_12___iter___of_class_1_File_of_module_django__core__files__base_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_12___iter___of_class_1_File_of_module_django__core__files__base_t *_python_context = (_context_generator_function_12___iter___of_class_1_File_of_module_django__core__files__base_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_buffer_.setVariableName( _python_str_plain_buffer_ );
        _python_context->python_var_chunk.setVariableName( _python_str_plain_chunk );
        _python_context->python_var_chunk_buffer.setVariableName( _python_str_plain_chunk_buffer );
        _python_context->python_var_line.setVariableName( _python_str_plain_line );

        // Actual function code.
        _python_context->python_var_buffer_.assign0( Py_None );
        static PyFrameObject *frame_function_12___iter___of_class_1_File_of_module_django__core__files__base = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_12___iter___of_class_1_File_of_module_django__core__files__base ) )
        {
            if ( frame_function_12___iter___of_class_1_File_of_module_django__core__files__base )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_12___iter___of_class_1_File_of_module_django__core__files__base" );
#endif
                Py_DECREF( frame_function_12___iter___of_class_1_File_of_module_django__core__files__base );
            }

            frame_function_12___iter___of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_bd90181d1abdf3fec5f7217cc78754e3, _module_django__core__files__base );
        }

        Py_INCREF( frame_function_12___iter___of_class_1_File_of_module_django__core__files__base );
        generator->m_frame = frame_function_12___iter___of_class_1_File_of_module_django__core__files__base;

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

            {
                frame_guard.setLineNumber( 96 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_self.asObject(), _python_str_plain_chunks ) ).asObject() ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 96 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_chunk.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 97 );
                    {
                        PyObjectTempKeeper0 call1;
                        _python_context->python_var_chunk_buffer.assign1( ( call1.assign( _mvar_django__core__files__base_BytesIO.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_context->python_var_chunk.asObject() ) ) );
                    }
                    {
                        frame_guard.setLineNumber( 99 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_context->python_var_chunk_buffer.asObject() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 99 );
                                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_2 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                _python_context->python_var_line.assign0( _python_tmp_iter_value.asObject() );
                            }
                            frame_guard.setLineNumber( 100 );
                            if ( CHECK_IF_TRUE( _python_context->python_var_buffer_.asObject() ) )
                            {
                                frame_guard.setLineNumber( 101 );
                                {
                                    PyObjectTempKeeper0 op3;
                                    _python_context->python_var_line.assign1( ( op3.assign( _python_context->python_var_buffer_.asObject() ), BINARY_OPERATION_ADD( op3.asObject0(), _python_context->python_var_line.asObject() ) ) );
                                }
                                _python_context->python_var_buffer_.assign0( Py_None );
                            }
                            frame_guard.setLineNumber( 106 );
                            if ( SEQUENCE_CONTAINS_BOOL( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_context->python_var_line.asObject(), _python_int_neg_1, -1 ) ).asObject(), _python_tuple_unicode_chr_10_unicode_chr_13_tuple ) )
                            {
                                frame_guard.setLineNumber( 107 );
                                YIELD_VALUE( generator, _python_context->python_var_line.asObject1() );
                            }
                            else
                            {
                                frame_guard.setLineNumber( 109 );
                                _python_context->python_var_buffer_.assign0( _python_context->python_var_line.asObject() );
                            }

                           CONSIDER_THREADING();
                        }
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 111 );
            if ( ( _python_context->python_var_buffer_.asObject() != Py_None ) )
            {
                frame_guard.setLineNumber( 112 );
                YIELD_VALUE( generator, _python_context->python_var_buffer_.asObject1() );
            }

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

static PyObject *impl_function_12___iter___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // Create context if any
    struct _context_generator_function_12___iter___of_class_1_File_of_module_django__core__files__base_t *_python_context = new _context_generator_function_12___iter___of_class_1_File_of_module_django__core__files__base_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_12___iter___of_class_1_File_of_module_django__core__files__base_context,
            _python_str_plain___iter__,
            _codeobj_bd90181d1abdf3fec5f7217cc78754e3,
            _python_context,
            _context_generator_function_12___iter___of_class_1_File_of_module_django__core__files__base_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function __iter__" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.
        _python_context->python_var_self.setVariableNameAndValue( _python_str_plain_self, _python_par_self );

        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}
static PyObject *fparse_function_12___iter___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__iter__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                   "__iter__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__iter__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_12___iter___of_class_1_File_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_12___iter___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_12___iter___of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12___iter___of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13___enter___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_13___enter___of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_13___enter___of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_13___enter___of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13___enter___of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_13___enter___of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_13___enter___of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_cacfe9074d058875c01ccffadfd46e3c, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_13___enter___of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_13___enter___of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 115 );
        return _python_var_self.asObject1();
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

        if ( frame_guard.getFrame0() == frame_function_13___enter___of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_13___enter___of_class_1_File_of_module_django__core__files__base );
           frame_function_13___enter___of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13___enter___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__enter__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__enter__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__enter__() got multiple values for keyword argument 'self'" );
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
                   "__enter__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__enter__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__enter__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__enter__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__enter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__enter__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__enter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__enter__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__enter__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_13___enter___of_class_1_File_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_13___enter___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_13___enter___of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13___enter___of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14___exit___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_exc_type, PyObject *_python_par_exc_value, PyObject *_python_par_tb )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_exc_type( _python_str_plain_exc_type, _python_par_exc_type );
    PyObjectLocalParameterVariableNoDel _python_var_exc_value( _python_str_plain_exc_value, _python_par_exc_value );
    PyObjectLocalParameterVariableNoDel _python_var_tb( _python_str_plain_tb, _python_par_tb );

    // Actual function code.
    static PyFrameObject *frame_function_14___exit___of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_14___exit___of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_14___exit___of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14___exit___of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_14___exit___of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_14___exit___of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_61514e1ac0b51bf3b98c3c70bb45beb6, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_14___exit___of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_14___exit___of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 118 );
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
        frame_guard.getFrame0()->f_locals = _python_var_tb.updateLocalsDict( _python_var_exc_value.updateLocalsDict( _python_var_exc_type.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_14___exit___of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_14___exit___of_class_1_File_of_module_django__core__files__base );
           frame_function_14___exit___of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_14___exit___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_exc_type = NULL;
    PyObject *_python_par_exc_value = NULL;
    PyObject *_python_par_tb = NULL;
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
                PyErr_Format( PyExc_TypeError, "__exit__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exc_type == key )
            {
                if (unlikely( _python_par_exc_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_type'" );
                    goto error_exit;
                }

                _python_par_exc_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exc_value == key )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_tb == key )
            {
                if (unlikely( _python_par_tb ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'tb'" );
                    goto error_exit;
                }

                _python_par_tb = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_type, key ) )
            {
                if (unlikely( _python_par_exc_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_type'" );
                    goto error_exit;
                }

                _python_par_exc_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_value, key ) )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_tb, key ) )
            {
                if (unlikely( _python_par_tb ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'tb'" );
                    goto error_exit;
                }

                _python_par_tb = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__exit__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__exit__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__exit__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__exit__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__exit__() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__exit__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_type'" );
             goto error_exit;
         }

        _python_par_exc_type = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_value'" );
             goto error_exit;
         }

        _python_par_exc_value = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_tb != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'tb'" );
             goto error_exit;
         }

        _python_par_tb = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_14___exit___of_class_1_File_of_module_django__core__files__base( self, _python_par_self, _python_par_exc_type, _python_par_exc_value, _python_par_tb );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_exc_type );
    Py_XDECREF( _python_par_exc_value );
    Py_XDECREF( _python_par_tb );

    return NULL;
}

static PyObject *dparse_function_14___exit___of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_14___exit___of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14___exit___of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_open_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_mode )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_mode( _python_str_plain_mode, _python_par_mode );

    // Actual function code.
    static PyFrameObject *frame_function_15_open_of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_15_open_of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_15_open_of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_open_of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_15_open_of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_15_open_of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_a90b55e810d3f753fd28510b4955a43a, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_15_open_of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_15_open_of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 121 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_closed ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 122 );
            DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_seek ) ).asObject(), _python_int_0 ) );
        }
        else
        {
            frame_guard.setLineNumber( 123 );
            {
                PyObjectTempKeeper1 call4;
                if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ).asObject() ) && CHECK_IF_TRUE( PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__base_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_exists ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 124 );
                {
                    PyObjectTempKeeper0 keeper_1;
                    PyObjectTempKeeper1 open1;
                    {
                        PyObjectTemporary tmp_identifier( ( open1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ), OPEN_FILE( open1.asObject0(), PyObjectTemporary( ( CHECK_IF_TRUE( keeper_1.assign( _python_var_mode.asObject() ) ) ? INCREASE_REFCOUNT( keeper_1.asObject0() ) : LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_mode ) ) ).asObject(), NULL ) ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_file );
                }
                }
            }
            else
            {
                frame_guard.setLineNumber( 126 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_122549d48dfbff32c2998609e93512e7 ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
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
        frame_guard.getFrame0()->f_locals = _python_var_mode.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_15_open_of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_15_open_of_class_1_File_of_module_django__core__files__base );
           frame_function_15_open_of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_15_open_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_15_open_of_class_1_File_of_module_django__core__files__base( self, _python_par_self, _python_par_mode );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_mode );

    return NULL;
}

static PyObject *dparse_function_15_open_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_15_open_of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_open_of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_close_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_16_close_of_class_1_File_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_16_close_of_class_1_File_of_module_django__core__files__base ) )
    {
        if ( frame_function_16_close_of_class_1_File_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16_close_of_class_1_File_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_16_close_of_class_1_File_of_module_django__core__files__base );
        }

        frame_function_16_close_of_class_1_File_of_module_django__core__files__base = MAKE_FRAME( _codeobj_841d0cc73133f9d3ea5b7f280202154f, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_16_close_of_class_1_File_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_16_close_of_class_1_File_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 129 );
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

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_16_close_of_class_1_File_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_16_close_of_class_1_File_of_module_django__core__files__base );
           frame_function_16_close_of_class_1_File_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_16_close_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_16_close_of_class_1_File_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_16_close_of_class_1_File_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_16_close_of_class_1_File_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_close_of_class_1_File_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_ContentFile_of_module_django__core__files__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___str__( _python_str_plain___str__ );
    PyObjectLocalVariable _python_var___bool__( _python_str_plain___bool__ );
    PyObjectLocalVariable _python_var___nonzero__( _python_str_plain___nonzero__ );
    PyObjectLocalVariable _python_var_open( _python_str_plain_open );
    PyObjectLocalVariable _python_var_close( _python_str_plain_close );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    _python_var___doc__.assign0( _python_unicode_digest_9c3d1510e8011c69943bdec3486cf7b1 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base(  ) );
    _python_var___str__.assign1( MAKE_FUNCTION_function_2___str___of_class_2_ContentFile_of_module_django__core__files__base(  ) );
    _python_var___bool__.assign1( MAKE_FUNCTION_function_3___bool___of_class_2_ContentFile_of_module_django__core__files__base(  ) );
    _python_var___nonzero__.assign1( MAKE_FUNCTION_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base(  ) );
    _python_var_open.assign1( MAKE_FUNCTION_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base(  ) );
    _python_var_close.assign1( MAKE_FUNCTION_function_6_close_of_class_2_ContentFile_of_module_django__core__files__base(  ) );
    return _python_var_close.updateLocalsDict( _python_var_open.updateLocalsDict( _python_var___nonzero__.updateLocalsDict( _python_var___bool__.updateLocalsDict( _python_var___str__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_content, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_content( _python_str_plain_content, _python_par_content );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalVariable _python_var_stream_class( _python_str_plain_stream_class );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base ) )
    {
        if ( frame_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_ContentFile_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base );
        }

        frame_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base = MAKE_FRAME( _codeobj_169f6d73c01eb75dcfdc79a674ac106c, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 137 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__base_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 138 );
            {
                PyObjectTempKeeper0 isinstance1;
                _python_var_stream_class.assign0( ( ( isinstance1.assign( _python_var_content.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__base_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) ? _mvar_django__core__files__base_StringIO.asObject0() : _mvar_django__core__files__base_BytesIO.asObject0() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 140 );
            _python_var_stream_class.assign0( _mvar_django__core__files__base_BytesIO.asObject0() );
            frame_guard.setLineNumber( 141 );
            {
                PyObjectTempKeeper0 call3;
                _python_var_content.assign1( ( call3.assign( _mvar_django__core__files__base_force_bytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_content.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 142 );
        {
            PyObjectTempKeeper1 call10;
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper1 call9;
            PyObjectTempKeeper0 super5;
            DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super5.assign( _mvar_django__core__files__base_ContentFile.asObject0() ), BUILTIN_SUPER( super5.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), call10.assign( MAKE_TUPLE1( PyObjectTemporary( ( call7.assign( _python_var_stream_class.asObject() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_content.asObject() ) ) ).asObject() ) ), CALL_FUNCTION( call9.asObject0(), call10.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_name.asObject(), _python_str_plain_name ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 143 );
        {
                PyObjectTemporary tmp_identifier( BUILTIN_LEN( _python_var_content.asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_size );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_stream_class.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base );
           frame_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_content = NULL;
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
         if (unlikely( _python_par_content != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'content'" );
             goto error_exit;
         }

        _python_par_content = INCREASE_REFCOUNT( args[ 1 ] );
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
    // Assign values not given to defaults
    if ( _python_par_name == NULL )
    {
        _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_name );
    }


    return impl_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base( self, _python_par_self, _python_par_content, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_content );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___str___of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    return INCREASE_REFCOUNT( _python_unicode_digest_81618d034cda65a86a3fd11ac04884ce );
}
static PyObject *fparse_function_2___str___of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__str__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__str__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__str__() got multiple values for keyword argument 'self'" );
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
                   "__str__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__str__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__str__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__str__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___str___of_class_2_ContentFile_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___str___of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___str___of_class_2_ContentFile_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___str___of_class_2_ContentFile_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___bool___of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_True );
}
static PyObject *fparse_function_3___bool___of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__bool__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__bool__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__bool__() got multiple values for keyword argument 'self'" );
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
                   "__bool__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__bool__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__bool__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__bool__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__bool__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__bool__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__bool__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__bool__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__bool__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__bool__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3___bool___of_class_2_ContentFile_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3___bool___of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3___bool___of_class_2_ContentFile_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___bool___of_class_2_ContentFile_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base ) )
    {
        if ( frame_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base );
        }

        frame_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base = MAKE_FRAME( _codeobj_11b73713b2d95aec3d6cd94453577574, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 152 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_self.asObject() ) ).asObject(), _python_str_plain___bool__ ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_self.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base );
           frame_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__nonzero__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__nonzero__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__nonzero__() got multiple values for keyword argument 'self'" );
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
                   "__nonzero__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__nonzero__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__nonzero__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__nonzero__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_mode )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_mode( _python_str_plain_mode, _python_par_mode );

    // Actual function code.
    static PyFrameObject *frame_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base = NULL;

    if ( isFrameUnusable( frame_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base ) )
    {
        if ( frame_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_open_of_class_2_ContentFile_of_module_django__core__files__base" );
#endif
            Py_DECREF( frame_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base );
        }

        frame_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base = MAKE_FRAME( _codeobj_f807b88a023ff69f2ec6ac1116a8cf8f, _module_django__core__files__base );
    }

    FrameGuard frame_guard( frame_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 155 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_seek ) ).asObject(), _python_int_0 ) );
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

        if ( frame_guard.getFrame0() == frame_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base )
        {
           Py_DECREF( frame_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base );
           frame_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base( self, _python_par_self, _python_par_mode );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_mode );

    return NULL;
}

static PyObject *dparse_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_close_of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_close_of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_6_close_of_class_2_ContentFile_of_module_django__core__files__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6_close_of_class_2_ContentFile_of_module_django__core__files__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_close_of_class_2_ContentFile_of_module_django__core__files__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_close_of_class_2_ContentFile_of_module_django__core__files__base( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_chunks_of_class_1_File_of_module_django__core__files__base(  )
{
    return Nuitka_Function_New(
        fparse_function_10_chunks_of_class_1_File_of_module_django__core__files__base,
        dparse_function_10_chunks_of_class_1_File_of_module_django__core__files__base,
        _python_str_plain_chunks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_97d1f74fd2d00a10754071ab7bd8fcd2,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        _python_unicode_digest_02ded826727b673ffceb9028a53a7134
    );
}



static PyObject *MAKE_FUNCTION_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base,
        dparse_function_11_multiple_chunks_of_class_1_File_of_module_django__core__files__base,
        _python_str_plain_multiple_chunks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_190a52da9770ff51096b626275a8b077,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        _python_unicode_digest_750eded40ee361c84e0feb715d39733a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12___iter___of_class_1_File_of_module_django__core__files__base(  )
{
    return Nuitka_Function_New(
        fparse_function_12___iter___of_class_1_File_of_module_django__core__files__base,
        dparse_function_12___iter___of_class_1_File_of_module_django__core__files__base,
        _python_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bd90181d1abdf3fec5f7217cc78754e3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );
}



static PyObject *MAKE_FUNCTION_function_13___enter___of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13___enter___of_class_1_File_of_module_django__core__files__base,
        dparse_function_13___enter___of_class_1_File_of_module_django__core__files__base,
        _python_str_plain___enter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cacfe9074d058875c01ccffadfd46e3c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14___exit___of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14___exit___of_class_1_File_of_module_django__core__files__base,
        dparse_function_14___exit___of_class_1_File_of_module_django__core__files__base,
        _python_str_plain___exit__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_61514e1ac0b51bf3b98c3c70bb45beb6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_open_of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_open_of_class_1_File_of_module_django__core__files__base,
        dparse_function_15_open_of_class_1_File_of_module_django__core__files__base,
        _python_str_plain_open,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a90b55e810d3f753fd28510b4955a43a,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_close_of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_close_of_class_1_File_of_module_django__core__files__base,
        dparse_function_16_close_of_class_1_File_of_module_django__core__files__base,
        _python_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_841d0cc73133f9d3ea5b7f280202154f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_File_of_module_django__core__files__base,
        dparse_function_1___init___of_class_1_File_of_module_django__core__files__base,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c600a4941eaeac8ae6a2ce5ce742d420,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base,
        dparse_function_1___init___of_class_2_ContentFile_of_module_django__core__files__base,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_169f6d73c01eb75dcfdc79a674ac106c,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___str___of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___str___of_class_1_File_of_module_django__core__files__base,
        dparse_function_2___str___of_class_1_File_of_module_django__core__files__base,
        _python_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c2a4104b552defab265d6c0172869a22,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___str___of_class_2_ContentFile_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___str___of_class_2_ContentFile_of_module_django__core__files__base,
        dparse_function_2___str___of_class_2_ContentFile_of_module_django__core__files__base,
        _python_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9a9223084caf0f6588d8687145101762,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___bool___of_class_2_ContentFile_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___bool___of_class_2_ContentFile_of_module_django__core__files__base,
        dparse_function_3___bool___of_class_2_ContentFile_of_module_django__core__files__base,
        _python_str_plain___bool__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_345b14bf056ee95f6e5a8b9d4b29c8a1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___repr___of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___repr___of_class_1_File_of_module_django__core__files__base,
        dparse_function_3___repr___of_class_1_File_of_module_django__core__files__base,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e4201765fc382bdfd1048da2d9697689,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___bool___of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___bool___of_class_1_File_of_module_django__core__files__base,
        dparse_function_4___bool___of_class_1_File_of_module_django__core__files__base,
        _python_str_plain___bool__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ed74bd9173d6dd53c8cc1a137d83cde7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base,
        dparse_function_4___nonzero___of_class_2_ContentFile_of_module_django__core__files__base,
        _python_str_plain___nonzero__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_11b73713b2d95aec3d6cd94453577574,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___nonzero___of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5___nonzero___of_class_1_File_of_module_django__core__files__base,
        dparse_function_5___nonzero___of_class_1_File_of_module_django__core__files__base,
        _python_str_plain___nonzero__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b5cbb24b18a16e3025a63a2fe2d7d202,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base,
        dparse_function_5_open_of_class_2_ContentFile_of_module_django__core__files__base,
        _python_str_plain_open,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f807b88a023ff69f2ec6ac1116a8cf8f,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6___len___of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6___len___of_class_1_File_of_module_django__core__files__base,
        dparse_function_6___len___of_class_1_File_of_module_django__core__files__base,
        _python_str_plain___len__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b301c54437fcad0ff7ccc5da76b45c4e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_close_of_class_2_ContentFile_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_close_of_class_2_ContentFile_of_module_django__core__files__base,
        dparse_function_6_close_of_class_2_ContentFile_of_module_django__core__files__base,
        _python_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_22b6bf5e28e80fe5cef270e1cb509cbb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__get_size_of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7__get_size_of_class_1_File_of_module_django__core__files__base,
        dparse_function_7__get_size_of_class_1_File_of_module_django__core__files__base,
        _python_str_plain__get_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f3b644a28209df63bca048588855ba4d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8__set_size_of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8__set_size_of_class_1_File_of_module_django__core__files__base,
        dparse_function_8__set_size_of_class_1_File_of_module_django__core__files__base,
        _python_str_plain__set_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_17b82ca378e4aded3febc5fe3189043e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9__get_closed_of_class_1_File_of_module_django__core__files__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9__get_closed_of_class_1_File_of_module_django__core__files__base,
        dparse_function_9__get_closed_of_class_1_File_of_module_django__core__files__base,
        _python_str_plain__get_closed,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d452c84b405c93515b559d025871d13a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__base,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.files.base",   /* m_name */
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

MOD_INIT_DECL( django__core__files__base )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__files__base );
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

    // puts( "in initdjango__core__files__base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__files__base = Py_InitModule4(
        "django.core.files.base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__files__base = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__files__base = (PyDictObject *)((PyModuleObject *)_module_django__core__files__base)->md_dict;

    assertObject( _module_django__core__files__base );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_b860e7dc411a0758eac3d69b6d7bb905, _module_django__core__files__base );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__files__base );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__files__base != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_374895b358ddf8e6849c0691b5a090fd );
    PyFrameObject *frame_module_django__core__files__base = MAKE_FRAME( _codeobj_09b0d4fc66e7557db1654cdd300447a2, _module_django__core__files__base );

    FrameGuard frame_guard( frame_module_django__core__files__base );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__files__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__core__files__base)->md_dict, ((PyModuleObject *)_module_django__core__files__base)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__core__files__base)->md_dict, ((PyModuleObject *)_module_django__core__files__base)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain_BytesIO, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_io, ((PyModuleObject *)_module_django__core__files__base)->md_dict, ((PyModuleObject *)_module_django__core__files__base)->md_dict, _python_list_9314c9d1a1b10a7373825517bc73c1ed_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_BytesIO ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain_StringIO, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_io, ((PyModuleObject *)_module_django__core__files__base)->md_dict, ((PyModuleObject *)_module_django__core__files__base)->md_dict, _python_list_9314c9d1a1b10a7373825517bc73c1ed_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_StringIO ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain_UnsupportedOperation, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_io, ((PyModuleObject *)_module_django__core__files__base)->md_dict, ((PyModuleObject *)_module_django__core__files__base)->md_dict, _python_list_9314c9d1a1b10a7373825517bc73c1ed_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_UnsupportedOperation ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain_smart_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__files__base)->md_dict, ((PyModuleObject *)_module_django__core__files__base)->md_dict, _python_list_str_plain_smart_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_smart_text ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain_FileProxyMixin, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2c70e1f0604e0be0b0c6cc4c0a46a857, ((PyModuleObject *)_module_django__core__files__base)->md_dict, ((PyModuleObject *)_module_django__core__files__base)->md_dict, _python_list_str_plain_FileProxyMixin_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FileProxyMixin ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__core__files__base)->md_dict, ((PyModuleObject *)_module_django__core__files__base)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain_force_bytes, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__files__base)->md_dict, ((PyModuleObject *)_module_django__core__files__base)->md_dict, _python_list_str_plain_force_bytes_str_plain_python_2_unicode_compatible_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_bytes ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain_python_2_unicode_compatible, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__files__base)->md_dict, ((PyModuleObject *)_module_django__core__files__base)->md_dict, _python_list_str_plain_force_bytes_str_plain_python_2_unicode_compatible_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_python_2_unicode_compatible ) );
        {
            frame_guard.setLineNumber( 11 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__base_FileProxyMixin.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_File_of_module_django__core__files__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__base___metaclass__.isInitialized( false ) ? _mvar_django__core__files__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_File, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            {
                PyObjectTempKeeper0 call5;
                _python_tmp_class.assign1( ( call5.assign( _mvar_django__core__files__base_python_2_unicode_compatible.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_tmp_class.asObject() ) ) );
            }
            UPDATE_STRING_DICT0( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain_File, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 131 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__base_File.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_ContentFile_of_module_django__core__files__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__base___metaclass__.isInitialized( false ) ? _mvar_django__core__files__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call7;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call7.assign( _python_tmp_metaclass.asObject() ), call9.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_str_plain_ContentFile, call9.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            {
                PyObjectTempKeeper0 call11;
                _python_tmp_class.assign1( ( call11.assign( _mvar_django__core__files__base_python_2_unicode_compatible.asObject0() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_tmp_class.asObject() ) ) );
            }
            UPDATE_STRING_DICT0( _moduledict_django__core__files__base, (Nuitka_StringObject *)_python_str_plain_ContentFile, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__files__base)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__core__files__base );
}
