// Generated code for Python source for module 'django.core.management.base'
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

// The _module_django__core__management__base is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__management__base;
PyDictObject *_moduledict_django__core__management__base;

// The module level variables.
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_BaseCommand( &_module_django__core__management__base, &_python_str_plain_BaseCommand );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_CommandError( &_module_django__core__management__base, &_python_str_plain_CommandError );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_ImproperlyConfigured( &_module_django__core__management__base, &_python_str_plain_ImproperlyConfigured );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_OptionParser( &_module_django__core__management__base, &_python_str_plain_OptionParser );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_OutputWrapper( &_module_django__core__management__base, &_python_str_plain_OutputWrapper );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_StringIO( &_module_django__core__management__base, &_python_str_plain_StringIO );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base___metaclass__( &_module_django__core__management__base, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_color_style( &_module_django__core__management__base, &_python_str_plain_color_style );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_django( &_module_django__core__management__base, &_python_str_plain_django );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_force_str( &_module_django__core__management__base, &_python_str_plain_force_str );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_handle_default_options( &_module_django__core__management__base, &_python_str_plain_handle_default_options );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_make_option( &_module_django__core__management__base, &_python_str_plain_make_option );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_os( &_module_django__core__management__base, &_python_str_plain_os );
static PyObjectGlobalVariable_django__core__management__base _mvar_django__core__management__base_sys( &_module_django__core__management__base, &_python_str_plain_sys );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_CommandError_of_module_django__core__management__base(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_OutputWrapper_of_module_django__core__management__base(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_BaseCommand_of_module_django__core__management__base(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_AppCommand_of_module_django__core__management__base(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_app_label, PyObjectLocalVariable &python_closure_models );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_LabelCommand_of_module_django__core__management__base(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_NoArgsCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_2_handle_default_options_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base(  );


static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_CommandError_of_module_django__core__management__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    _python_var___doc__.assign0( _python_str_digest_ceb02d17ccdd8a0049629b202ae52e00 );
    return _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


static PyObject *impl_function_2_handle_default_options_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_options( _python_str_plain_options, _python_par_options );

    // Actual function code.
    static PyFrameObject *frame_function_2_handle_default_options_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_2_handle_default_options_of_module_django__core__management__base ) )
    {
        if ( frame_function_2_handle_default_options_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_handle_default_options_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_2_handle_default_options_of_module_django__core__management__base );
        }

        frame_function_2_handle_default_options_of_module_django__core__management__base = MAKE_FRAME( _codeobj_b7f0fc020054d04cdfe73513f3ce87cb, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_2_handle_default_options_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_2_handle_default_options_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 41 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_options.asObject(), _python_str_plain_settings ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 42 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_options.asObject(), _python_str_plain_settings ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__base_os.asObject0(), _python_str_plain_environ ) ).asObject(), _python_str_plain_DJANGO_SETTINGS_MODULE );
            }
        }
        frame_guard.setLineNumber( 43 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_options.asObject(), _python_str_plain_pythonpath ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 44 );
            {
                PyObjectTempKeeper1 call1;
                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__base_sys.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_insert ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_int_0, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_options.asObject(), _python_str_plain_pythonpath ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_options.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_2_handle_default_options_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_2_handle_default_options_of_module_django__core__management__base );
           frame_function_2_handle_default_options_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_handle_default_options_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_options = NULL;
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
                PyErr_Format( PyExc_TypeError, "handle_default_options() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_options == key )
            {
                if (unlikely( _python_par_options ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_default_options() got multiple values for keyword argument 'options'" );
                    goto error_exit;
                }

                _python_par_options = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_options, key ) )
            {
                if (unlikely( _python_par_options ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_default_options() got multiple values for keyword argument 'options'" );
                    goto error_exit;
                }

                _python_par_options = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "handle_default_options() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "handle_default_options() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "handle_default_options() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "handle_default_options() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_default_options() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "handle_default_options() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_default_options() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "handle_default_options() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_default_options() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "handle_default_options() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle_default_options() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "handle_default_options() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "handle_default_options() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_options != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_default_options() got multiple values for keyword argument 'options'" );
             goto error_exit;
         }

        _python_par_options = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_handle_default_options_of_module_django__core__management__base( self, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_2_handle_default_options_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_handle_default_options_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_handle_default_options_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_OutputWrapper_of_module_django__core__management__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___getattr__( _python_str_plain___getattr__ );
    PyObjectLocalVariable _python_var_write( _python_str_plain_write );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    _python_var___doc__.assign0( _python_str_digest_6f6df09b0c50c4d6d284537574253397 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base(  ) );
    _python_var___getattr__.assign1( MAKE_FUNCTION_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base(  ) );
    _python_var_write.assign1( MAKE_FUNCTION_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base(  ) );
    return _python_var_write.updateLocalsDict( _python_var___getattr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_out, PyObject *_python_par_style_func, PyObject *_python_par_ending )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_out( _python_str_plain_out, _python_par_out );
    PyObjectLocalParameterVariableNoDel _python_var_style_func( _python_str_plain_style_func, _python_par_style_func );
    PyObjectLocalParameterVariableNoDel _python_var_ending( _python_str_plain_ending, _python_par_ending );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base ) )
    {
        if ( frame_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base );
        }

        frame_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base = MAKE_FRAME( _codeobj_ac3f6f09ac37ce5b3ac3ebcea5b390e1, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 52 );
        {
                PyObject *tmp_identifier = _python_var_out.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__out );
        }
        frame_guard.setLineNumber( 53 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_style_func );
        frame_guard.setLineNumber( 54 );
        if ( ( HAS_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_isatty ) && CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_isatty ) ).asObject() ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 55 );
            {
                    PyObject *tmp_identifier = _python_var_style_func.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_style_func );
            }
        }
        frame_guard.setLineNumber( 56 );
        {
                PyObject *tmp_identifier = _python_var_ending.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_ending );
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
        frame_guard.getFrame0()->f_locals = _python_var_ending.updateLocalsDict( _python_var_style_func.updateLocalsDict( _python_var_out.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base );
           frame_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_out = NULL;
    PyObject *_python_par_style_func = NULL;
    PyObject *_python_par_ending = NULL;
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
            if ( found == false && _python_str_plain_out == key )
            {
                if (unlikely( _python_par_out ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'out'" );
                    goto error_exit;
                }

                _python_par_out = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_style_func == key )
            {
                if (unlikely( _python_par_style_func ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'style_func'" );
                    goto error_exit;
                }

                _python_par_style_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_ending == key )
            {
                if (unlikely( _python_par_ending ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'ending'" );
                    goto error_exit;
                }

                _python_par_ending = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_out, key ) )
            {
                if (unlikely( _python_par_out ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'out'" );
                    goto error_exit;
                }

                _python_par_out = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_style_func, key ) )
            {
                if (unlikely( _python_par_style_func ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'style_func'" );
                    goto error_exit;
                }

                _python_par_style_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ending, key ) )
            {
                if (unlikely( _python_par_ending ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'ending'" );
                    goto error_exit;
                }

                _python_par_ending = value;

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
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 2 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
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
                if ( 4 == 2 )
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
         if (unlikely( _python_par_out != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'out'" );
             goto error_exit;
         }

        _python_par_out = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_style_func != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'style_func'" );
             goto error_exit;
         }

        _python_par_style_func = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_ending != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'ending'" );
             goto error_exit;
         }

        _python_par_ending = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_style_func == NULL )
    {
        _python_par_style_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_style_func );
    }
    if ( _python_par_ending == NULL )
    {
        _python_par_ending = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_ending );
    }


    return impl_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base( self, _python_par_self, _python_par_out, _python_par_style_func, _python_par_ending );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_out );
    Py_XDECREF( _python_par_style_func );
    Py_XDECREF( _python_par_ending );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base ) )
    {
        if ( frame_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base );
        }

        frame_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base = MAKE_FRAME( _codeobj_a38997c5984ef813148c39645b230119, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 59 );
        {
            PyObjectTempKeeper1 getattr1;
            return ( getattr1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__out ) ), BUILTIN_GETATTR( getattr1.asObject0(), _python_var_name.asObject(), NULL ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base );
           frame_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__getattr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'name'" );
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
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'name'" );
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
                   "__getattr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__getattr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_msg, PyObject *_python_par_style_func, PyObject *_python_par_ending )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_msg( _python_str_plain_msg, _python_par_msg );
    PyObjectLocalParameterVariableNoDel _python_var_style_func( _python_str_plain_style_func, _python_par_style_func );
    PyObjectLocalParameterVariableNoDel _python_var_ending( _python_str_plain_ending, _python_par_ending );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );

    // Actual function code.
    static PyFrameObject *frame_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base ) )
    {
        if ( frame_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base );
        }

        frame_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base = MAKE_FRAME( _codeobj_5b7fd55016fa1ea798962df3df0bbda5, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 62 );
        _python_var_ending.assign1( ( ( _python_var_ending.asObject() == Py_None ) ? LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_ending ) : _python_var_ending.asObject1() ) );
        frame_guard.setLineNumber( 63 );
        {
            PyObjectTempKeeper1 call3;
            if ( ( CHECK_IF_TRUE( _python_var_ending.asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_msg.asObject(), _python_str_plain_endswith ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_ending.asObject() ) ) ).asObject() ) )) ) )
        {
            {
                frame_guard.setLineNumber( 64 );
                PyObject *_python_tmp_inplace_start = _python_var_msg.asObject();
                PyObject *_tmp_python_tmp_inplace_end;
                {
                    PyObjectTempKeeper0 op1;
                    _tmp_python_tmp_inplace_end = ( op1.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op1.asObject0(), _python_var_ending.asObject() ) );
                }
                PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                {
                    _python_var_msg.assign0( _python_tmp_inplace_end.asObject() );
                }
            }
        }
        }
        frame_guard.setLineNumber( 65 );
        {
            PyObjectTempKeeper0 make_tuple5;
            _python_var_style_func.assign1( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( impl_listcontr_1_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( MAKE_ITERATOR( PyObjectTemporary( ( make_tuple5.assign( _python_var_style_func.asObject() ), MAKE_TUPLE3( make_tuple5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style_func ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base(  ) ).asObject() ) ) ).asObject() ), _python_var_f ) ).asObject(), _python_int_0, 0 ) );
        }
        frame_guard.setLineNumber( 67 );
        {
            PyObjectTempKeeper0 call10;
            PyObjectTempKeeper1 call12;
            PyObjectTempKeeper0 call8;
            DECREASE_REFCOUNT( ( call12.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__out ) ).asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), PyObjectTemporary( ( call10.assign( _mvar_django__core__management__base_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( ( call8.assign( _python_var_style_func.asObject() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_msg.asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_ending.updateLocalsDict( _python_var_style_func.updateLocalsDict( _python_var_msg.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_f.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base );
           frame_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_msg = NULL;
    PyObject *_python_par_style_func = NULL;
    PyObject *_python_par_ending = NULL;
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
                PyErr_Format( PyExc_TypeError, "write() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_msg == key )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_style_func == key )
            {
                if (unlikely( _python_par_style_func ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'style_func'" );
                    goto error_exit;
                }

                _python_par_style_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_ending == key )
            {
                if (unlikely( _python_par_ending ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'ending'" );
                    goto error_exit;
                }

                _python_par_ending = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_msg, key ) )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_style_func, key ) )
            {
                if (unlikely( _python_par_style_func ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'style_func'" );
                    goto error_exit;
                }

                _python_par_style_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ending, key ) )
            {
                if (unlikely( _python_par_ending ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'ending'" );
                    goto error_exit;
                }

                _python_par_ending = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "write() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "write() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "write() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "write() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "write() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "write() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "write() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "write() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "write() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "write() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "write() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "write() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "write() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_msg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'msg'" );
             goto error_exit;
         }

        _python_par_msg = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_style_func != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'style_func'" );
             goto error_exit;
         }

        _python_par_style_func = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_ending != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'ending'" );
             goto error_exit;
         }

        _python_par_ending = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_style_func == NULL )
    {
        _python_par_style_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_style_func );
    }
    if ( _python_par_ending == NULL )
    {
        _python_par_ending = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_ending );
    }


    return impl_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( self, _python_par_self, _python_par_msg, _python_par_style_func, _python_par_ending );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_msg );
    Py_XDECREF( _python_par_style_func );
    Py_XDECREF( _python_par_ending );

    return NULL;
}

static PyObject *dparse_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 65 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 65 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_f.assign0( _python_tmp_iter_value.asObject() );
                if ( ( python_closure_f.asObject() != Py_None ) )
                {
                    frame_guard.setLineNumber( 65 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_f.asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base ) )
    {
        if ( frame_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base );
        }

        frame_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base = MAKE_FRAME( _codeobj_30d0ed0851dbcdb245053fe723377a80, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 65 );
        return _python_var_x.asObject1();
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

        if ( frame_guard.getFrame0() == frame_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base )
        {
           Py_DECREF( frame_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base );
           frame_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_BaseCommand_of_module_django__core__management__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_option_list( _python_str_plain_option_list );
    PyObjectLocalVariable _python_var_help( _python_str_plain_help );
    PyObjectLocalVariable _python_var_args( _python_str_plain_args );
    PyObjectLocalVariable _python_var_can_import_settings( _python_str_plain_can_import_settings );
    PyObjectLocalVariable _python_var_requires_model_validation( _python_str_plain_requires_model_validation );
    PyObjectLocalVariable _python_var_output_transaction( _python_str_plain_output_transaction );
    PyObjectLocalVariable _python_var_leave_locale_alone( _python_str_plain_leave_locale_alone );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_get_version( _python_str_plain_get_version );
    PyObjectLocalVariable _python_var_usage( _python_str_plain_usage );
    PyObjectLocalVariable _python_var_create_parser( _python_str_plain_create_parser );
    PyObjectLocalVariable _python_var_print_help( _python_str_plain_print_help );
    PyObjectLocalVariable _python_var_run_from_argv( _python_str_plain_run_from_argv );
    PyObjectLocalVariable _python_var_execute( _python_str_plain_execute );
    PyObjectLocalVariable _python_var_validate( _python_str_plain_validate );
    PyObjectLocalVariable _python_var_handle( _python_str_plain_handle );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    _python_var___doc__.assign0( _python_str_digest_2ede28eccae3bc7fb24cc75908a733ff );
    static PyFrameObject *frame_class_4_BaseCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_class_4_BaseCommand_of_module_django__core__management__base ) )
    {
        if ( frame_class_4_BaseCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_4_BaseCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_class_4_BaseCommand_of_module_django__core__management__base );
        }

        frame_class_4_BaseCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_e7afa16452d229422a1657c5b0eb8909, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_class_4_BaseCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_class_4_BaseCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 164 );
        {
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            PyObjectTempKeeper1 make_tuple3;
            _python_var_option_list.assign1( ( make_tuple1.assign( CALL_FUNCTION( _mvar_django__core__management__base_make_option.asObject0(), _python_tuple_9acba31a0df9c937bc01849bf362d383_tuple, PyObjectTemporary( MAKE_DICT6( _python_str_plain_store, _python_str_plain_action, _python_str_plain_verbosity, _python_str_plain_dest, _python_str_plain_1, _python_str_plain_default, _python_str_plain_choice, _python_str_plain_type, PyObjectTemporary( LIST_COPY( _python_list_str_plain_0_str_plain_1_str_plain_2_str_plain_3_list ) ).asObject(), _python_str_plain_choices, _python_str_digest_c28bf9ac1d74cde99e975abf9df44615, _python_str_plain_help ) ).asObject() ) ), make_tuple2.assign( CALL_FUNCTION( _mvar_django__core__management__base_make_option.asObject0(), _python_tuple_str_digest_f16076e5f7460cd85c69ee831e4ad578_tuple, PyObjectTemporary( PyDict_Copy( _python_dict_eed9d9c9a5b526f078bbd504cf88e608 ) ).asObject() ) ), make_tuple3.assign( CALL_FUNCTION( _mvar_django__core__management__base_make_option.asObject0(), _python_tuple_str_digest_951770a1ce14c6b62d4c00b599e039d8_tuple, PyObjectTemporary( PyDict_Copy( _python_dict_5798fedb299e8b6e7713b1d4681e3ede ) ).asObject() ) ), MAKE_TUPLE4( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), PyObjectTemporary( CALL_FUNCTION( _mvar_django__core__management__base_make_option.asObject0(), _python_tuple_str_digest_09ce3e028062841c3dd56af50ff93cf1_tuple, PyObjectTemporary( PyDict_Copy( _python_dict_579f2308e8f022815fcfa88aba53e950 ) ).asObject() ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_handle.updateLocalsDict( _python_var_validate.updateLocalsDict( _python_var_execute.updateLocalsDict( _python_var_run_from_argv.updateLocalsDict( _python_var_print_help.updateLocalsDict( _python_var_create_parser.updateLocalsDict( _python_var_usage.updateLocalsDict( _python_var_get_version.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_leave_locale_alone.updateLocalsDict( _python_var_output_transaction.updateLocalsDict( _python_var_requires_model_validation.updateLocalsDict( _python_var_can_import_settings.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_help.updateLocalsDict( _python_var_option_list.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_4_BaseCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_class_4_BaseCommand_of_module_django__core__management__base );
           frame_class_4_BaseCommand_of_module_django__core__management__base = NULL;
        }

        throw;
    }
    _python_var_help.assign0( _python_str_empty );
    _python_var_args.assign0( _python_str_empty );
    _python_var_can_import_settings.assign0( Py_True );
    _python_var_requires_model_validation.assign0( Py_True );
    _python_var_output_transaction.assign0( Py_False );
    _python_var_leave_locale_alone.assign0( Py_False );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base(  ) );
    _python_var_get_version.assign1( MAKE_FUNCTION_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base(  ) );
    _python_var_usage.assign1( MAKE_FUNCTION_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base(  ) );
    _python_var_create_parser.assign1( MAKE_FUNCTION_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base(  ) );
    _python_var_print_help.assign1( MAKE_FUNCTION_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base(  ) );
    _python_var_run_from_argv.assign1( MAKE_FUNCTION_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base(  ) );
    _python_var_execute.assign1( MAKE_FUNCTION_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base(  ) );
    _python_var_validate.assign1( MAKE_FUNCTION_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base(  ) );
    _python_var_handle.assign1( MAKE_FUNCTION_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base(  ) );
    return _python_var_handle.updateLocalsDict( _python_var_validate.updateLocalsDict( _python_var_execute.updateLocalsDict( _python_var_run_from_argv.updateLocalsDict( _python_var_print_help.updateLocalsDict( _python_var_create_parser.updateLocalsDict( _python_var_usage.updateLocalsDict( _python_var_get_version.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_leave_locale_alone.updateLocalsDict( _python_var_output_transaction.updateLocalsDict( _python_var_requires_model_validation.updateLocalsDict( _python_var_can_import_settings.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_help.updateLocalsDict( _python_var_option_list.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base );
        }

        frame_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_85c5c33943201b94b7deaff7b94e54db, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 185 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( _mvar_django__core__management__base_color_style.asObject0() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_style );
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

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base );
           frame_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
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
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base );
        }

        frame_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_bdce9355c3442b9d89438844c28d2c6b, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 194 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__base_django.asObject0(), _python_str_plain_get_version ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base );
           frame_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_version() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_version() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_version() got multiple values for keyword argument 'self'" );
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
                   "get_version() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_version() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_version() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_version() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_version() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_version() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_version() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_version() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_version() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_version() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_version() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_version() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_version() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_version() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_subcommand )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_subcommand( _python_str_plain_subcommand, _python_par_subcommand );
    PyObjectLocalVariable _python_var_usage( _python_str_plain_usage );

    // Actual function code.
    static PyFrameObject *frame_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base );
        }

        frame_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_75a419711cb1a1d8fd839c037ed018a0, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 202 );
        {
            PyObjectTempKeeper0 make_tuple1;
            _python_var_usage.assign1( BINARY_OPERATION_REMAINDER( _python_str_digest_5fcfe6468ad3488fa6489ab0241af14d, PyObjectTemporary( ( make_tuple1.assign( _python_var_subcommand.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_args ) ).asObject() ) ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 203 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_help ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 204 );
            {
                PyObjectTempKeeper0 make_tuple3;
                return BINARY_OPERATION_REMAINDER( _python_str_digest_9393cd09143f6694c044ffb01cc49129, PyObjectTemporary( ( make_tuple3.assign( _python_var_usage.asObject() ), MAKE_TUPLE2( make_tuple3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_help ) ).asObject() ) ) ).asObject() );
            }
        }
        else
        {
            frame_guard.setLineNumber( 206 );
            return _python_var_usage.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_subcommand.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_usage.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base );
           frame_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_subcommand = NULL;
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
                PyErr_Format( PyExc_TypeError, "usage() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "usage() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_subcommand == key )
            {
                if (unlikely( _python_par_subcommand ))
                {
                    PyErr_Format( PyExc_TypeError, "usage() got multiple values for keyword argument 'subcommand'" );
                    goto error_exit;
                }

                _python_par_subcommand = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "usage() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_subcommand, key ) )
            {
                if (unlikely( _python_par_subcommand ))
                {
                    PyErr_Format( PyExc_TypeError, "usage() got multiple values for keyword argument 'subcommand'" );
                    goto error_exit;
                }

                _python_par_subcommand = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "usage() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "usage() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "usage() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "usage() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "usage() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "usage() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "usage() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "usage() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "usage() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "usage() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "usage() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "usage() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "usage() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "usage() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_subcommand != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "usage() got multiple values for keyword argument 'subcommand'" );
             goto error_exit;
         }

        _python_par_subcommand = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_subcommand );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_subcommand );

    return NULL;
}

static PyObject *dparse_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_prog_name, PyObject *_python_par_subcommand )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_prog_name( _python_str_plain_prog_name, _python_par_prog_name );
    PyObjectLocalParameterVariableNoDel _python_var_subcommand( _python_str_plain_subcommand, _python_par_subcommand );

    // Actual function code.
    static PyFrameObject *frame_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base );
        }

        frame_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_308411daa96b899d3fdc98b72a6204e8, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 214 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call11;
            PyObjectTempKeeper0 make_dict3;
            PyObjectTempKeeper1 make_dict5;
            PyObjectTempKeeper1 make_dict7;
            return ( call11.assign( _mvar_django__core__management__base_OptionParser.asObject0() ), CALL_FUNCTION( call11.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict3.assign( _python_var_prog_name.asObject() ), make_dict5.assign( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_usage ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_subcommand.asObject() ) ) ), make_dict7.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_version ) ).asObject() ) ), MAKE_DICT4( make_dict3.asObject0(), _python_str_plain_prog, make_dict5.asObject0(), _python_str_plain_usage, make_dict7.asObject0(), _python_str_plain_version, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_option_list ) ).asObject(), _python_str_plain_option_list ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_subcommand.updateLocalsDict( _python_var_prog_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base );
           frame_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_prog_name = NULL;
    PyObject *_python_par_subcommand = NULL;
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
                PyErr_Format( PyExc_TypeError, "create_parser() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "create_parser() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_prog_name == key )
            {
                if (unlikely( _python_par_prog_name ))
                {
                    PyErr_Format( PyExc_TypeError, "create_parser() got multiple values for keyword argument 'prog_name'" );
                    goto error_exit;
                }

                _python_par_prog_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_subcommand == key )
            {
                if (unlikely( _python_par_subcommand ))
                {
                    PyErr_Format( PyExc_TypeError, "create_parser() got multiple values for keyword argument 'subcommand'" );
                    goto error_exit;
                }

                _python_par_subcommand = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "create_parser() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_prog_name, key ) )
            {
                if (unlikely( _python_par_prog_name ))
                {
                    PyErr_Format( PyExc_TypeError, "create_parser() got multiple values for keyword argument 'prog_name'" );
                    goto error_exit;
                }

                _python_par_prog_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_subcommand, key ) )
            {
                if (unlikely( _python_par_subcommand ))
                {
                    PyErr_Format( PyExc_TypeError, "create_parser() got multiple values for keyword argument 'subcommand'" );
                    goto error_exit;
                }

                _python_par_subcommand = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "create_parser() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "create_parser() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "create_parser() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "create_parser() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "create_parser() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "create_parser() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "create_parser() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "create_parser() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "create_parser() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "create_parser() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "create_parser() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "create_parser() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "create_parser() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "create_parser() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_prog_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "create_parser() got multiple values for keyword argument 'prog_name'" );
             goto error_exit;
         }

        _python_par_prog_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_subcommand != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "create_parser() got multiple values for keyword argument 'subcommand'" );
             goto error_exit;
         }

        _python_par_subcommand = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_prog_name, _python_par_subcommand );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_prog_name );
    Py_XDECREF( _python_par_subcommand );

    return NULL;
}

static PyObject *dparse_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_prog_name, PyObject *_python_par_subcommand )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_prog_name( _python_str_plain_prog_name, _python_par_prog_name );
    PyObjectLocalParameterVariableNoDel _python_var_subcommand( _python_str_plain_subcommand, _python_par_subcommand );
    PyObjectLocalVariable _python_var_parser( _python_str_plain_parser );

    // Actual function code.
    static PyFrameObject *frame_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base );
        }

        frame_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_0ffc1a0c95765f2c14aae12186448d99, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 225 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            _python_var_parser.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_create_parser ) ), call2.assign( _python_var_prog_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_subcommand.asObject() ) ) );
        }
        frame_guard.setLineNumber( 226 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_parser.asObject(), _python_str_plain_print_help ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_subcommand.updateLocalsDict( _python_var_prog_name.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_parser.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base );
           frame_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_prog_name = NULL;
    PyObject *_python_par_subcommand = NULL;
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
                PyErr_Format( PyExc_TypeError, "print_help() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "print_help() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_prog_name == key )
            {
                if (unlikely( _python_par_prog_name ))
                {
                    PyErr_Format( PyExc_TypeError, "print_help() got multiple values for keyword argument 'prog_name'" );
                    goto error_exit;
                }

                _python_par_prog_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_subcommand == key )
            {
                if (unlikely( _python_par_subcommand ))
                {
                    PyErr_Format( PyExc_TypeError, "print_help() got multiple values for keyword argument 'subcommand'" );
                    goto error_exit;
                }

                _python_par_subcommand = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "print_help() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_prog_name, key ) )
            {
                if (unlikely( _python_par_prog_name ))
                {
                    PyErr_Format( PyExc_TypeError, "print_help() got multiple values for keyword argument 'prog_name'" );
                    goto error_exit;
                }

                _python_par_prog_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_subcommand, key ) )
            {
                if (unlikely( _python_par_subcommand ))
                {
                    PyErr_Format( PyExc_TypeError, "print_help() got multiple values for keyword argument 'subcommand'" );
                    goto error_exit;
                }

                _python_par_subcommand = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "print_help() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "print_help() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "print_help() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "print_help() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "print_help() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "print_help() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "print_help() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "print_help() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "print_help() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "print_help() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "print_help() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "print_help() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "print_help() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "print_help() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_prog_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "print_help() got multiple values for keyword argument 'prog_name'" );
             goto error_exit;
         }

        _python_par_prog_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_subcommand != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "print_help() got multiple values for keyword argument 'subcommand'" );
             goto error_exit;
         }

        _python_par_subcommand = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_prog_name, _python_par_subcommand );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_prog_name );
    Py_XDECREF( _python_par_subcommand );

    return NULL;
}

static PyObject *dparse_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_argv )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_argv( _python_str_plain_argv, _python_par_argv );
    PyObjectLocalVariable _python_var_parser( _python_str_plain_parser );
    PyObjectLocalVariable _python_var_options( _python_str_plain_options );
    PyObjectLocalVariable _python_var_args( _python_str_plain_args );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_stderr( _python_str_plain_stderr );

    // Actual function code.
    static PyFrameObject *frame_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base );
        }

        frame_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_3d3f75cf8084ffae97209393e83e929e, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 236 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call2;
            _python_var_parser.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_create_parser ) ), call2.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_argv.asObject(), _python_int_0, 0 ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_argv.asObject(), _python_int_pos_1, 1 ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 237 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 call4;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_parser.asObject(), _python_str_plain_parse_args ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_argv.asObject(), 2, PY_SSIZE_T_MAX ) ).asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_options.assign0( _python_tmp_element_1.asObject() );
            _python_var_args.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 238 );
        {
            PyObjectTempKeeper0 call6;
            DECREASE_REFCOUNT( ( call6.assign( _mvar_django__core__management__base_handle_default_options.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_options.asObject() ) ) );
        }
        frame_guard.setLineNumber( 239 );
        try
        {
            frame_guard.setLineNumber( 240 );
            {
                PyObjectTempKeeper1 call_tmp20;
                PyObjectTempKeeper0 call_tmp21;
                DECREASE_REFCOUNT( ( call_tmp20.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_execute ) ), call_tmp21.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp20.asObject(), call_tmp21.asObject(), LOOKUP_ATTRIBUTE( _python_var_options.asObject(), _python_str_plain___dict__ ) ) ) );
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

            if ( _exception.matches( PyExc_Exception ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 242 );
                {
                    PyObjectTempKeeper0 isinstance8;
                    if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_options.asObject(), _python_str_plain_traceback ) ).asObject() ) || (!( ( isinstance8.assign( _python_var_e.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance8.asObject0(), _mvar_django__core__management__base_CommandError.asObject0() ) ) )) ) )
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
                frame_guard.setLineNumber( 246 );
                {
                    PyObjectTempKeeper0 call10;
                    PyObjectTempKeeper1 call11;
                    PyObjectTempKeeper0 getattr13;
                    _python_var_stderr.assign1( ( getattr13.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr13.asObject0(), _python_str_plain_stderr, PyObjectTemporary( ( call10.assign( _mvar_django__core__management__base_OutputWrapper.asObject0() ), call11.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__management__base_sys.asObject0(), _python_str_plain_stderr ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), call11.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style ) ).asObject(), _python_str_plain_ERROR ) ).asObject() ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 247 );
                {
                    PyObjectTempKeeper1 call18;
                    PyObjectTempKeeper1 make_tuple16;
                    DECREASE_REFCOUNT( ( call18.assign( LOOKUP_ATTRIBUTE( _python_var_stderr.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_7d341c08fd102f0b86285b5ff2e26ea7, PyObjectTemporary( ( make_tuple16.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ), MAKE_TUPLE2( make_tuple16.asObject0(), _python_var_e.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 248 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__base_sys.asObject0(), _python_str_plain_exit ) ).asObject(), _python_int_pos_1 ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_argv.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_stderr.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_options.updateLocalsDict( _python_var_parser.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base );
           frame_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_argv = NULL;
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
                PyErr_Format( PyExc_TypeError, "run_from_argv() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "run_from_argv() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_argv == key )
            {
                if (unlikely( _python_par_argv ))
                {
                    PyErr_Format( PyExc_TypeError, "run_from_argv() got multiple values for keyword argument 'argv'" );
                    goto error_exit;
                }

                _python_par_argv = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "run_from_argv() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_argv, key ) )
            {
                if (unlikely( _python_par_argv ))
                {
                    PyErr_Format( PyExc_TypeError, "run_from_argv() got multiple values for keyword argument 'argv'" );
                    goto error_exit;
                }

                _python_par_argv = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "run_from_argv() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "run_from_argv() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "run_from_argv() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "run_from_argv() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "run_from_argv() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "run_from_argv() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "run_from_argv() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "run_from_argv() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "run_from_argv() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "run_from_argv() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "run_from_argv() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "run_from_argv() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "run_from_argv() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "run_from_argv() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_argv != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "run_from_argv() got multiple values for keyword argument 'argv'" );
             goto error_exit;
         }

        _python_par_argv = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_argv );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_argv );

    return NULL;
}

static PyObject *dparse_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_options( _python_str_plain_options, _python_par_options );
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );
    PyObjectLocalVariable _python_var_saved_locale( _python_str_plain_saved_locale );
    PyObjectLocalVariable _python_var_translation( _python_str_plain_translation );
    PyObjectLocalVariable _python_var_output( _python_str_plain_output );
    PyObjectLocalVariable _python_var_connections( _python_str_plain_connections );
    PyObjectLocalVariable _python_var_DEFAULT_DB_ALIAS( _python_str_plain_DEFAULT_DB_ALIAS );
    PyObjectLocalVariable _python_var_connection( _python_str_plain_connection );

    // Actual function code.
    static PyFrameObject *frame_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base );
        }

        frame_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_394bc3b7cb516d2de53e9f05b5609ff5, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 256 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call4;
            {
                PyObjectTemporary tmp_identifier( ( call4.assign( _mvar_django__core__management__base_OutputWrapper.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_options.asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_stdout, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__base_sys.asObject0(), _python_str_plain_stdout ) ).asObject() ) ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_stdout );
        }
        }
        frame_guard.setLineNumber( 257 );
        {
            PyObjectTempKeeper1 call10;
            PyObjectTempKeeper1 call6;
            PyObjectTempKeeper0 call9;
            {
                PyObjectTemporary tmp_identifier( ( call9.assign( _mvar_django__core__management__base_OutputWrapper.asObject0() ), call10.assign( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_options.asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_str_plain_stderr, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__base_sys.asObject0(), _python_str_plain_stderr ) ).asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), call10.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style ) ).asObject(), _python_str_plain_ERROR ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_stderr );
        }
        }
        frame_guard.setLineNumber( 259 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_can_import_settings ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 260 );
            _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__management__base)->md_dict, PyObjectTemporary( _python_var_options.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_DEFAULT_DB_ALIAS.updateLocalsDict( _python_var_connections.updateLocalsDict( _python_var_output.updateLocalsDict( _python_var_translation.updateLocalsDict( _python_var_saved_locale.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        }
        _python_var_saved_locale.assign0( Py_None );
        frame_guard.setLineNumber( 263 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_leave_locale_alone ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 268 );
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_can_import_settings ) ).asObject() ) )) )
            {
                frame_guard.setLineNumber( 269 );
                {
                    PyObjectTempKeeper0 call14;
                    PyObjectTempKeeper1 make_tuple12;
                    {
                        PyObjectTemporary tmp_exception_type( ( call14.assign( _mvar_django__core__management__base_CommandError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_11edcbee2123620734f43a627f1f0236, PyObjectTemporary( ( make_tuple12.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_leave_locale_alone ) ), MAKE_TUPLE2( make_tuple12.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_can_import_settings ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
                }
            }
            frame_guard.setLineNumber( 276 );
            _python_var_translation.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__core__management__base)->md_dict, PyObjectTemporary( _python_var_options.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_DEFAULT_DB_ALIAS.updateLocalsDict( _python_var_connections.updateLocalsDict( _python_var_output.updateLocalsDict( _python_var_translation.updateLocalsDict( _python_var_saved_locale.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_translation_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_translation ) );
            frame_guard.setLineNumber( 277 );
            _python_var_saved_locale.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_translation.asObject(), _python_str_plain_get_language ) ).asObject() ) );
            frame_guard.setLineNumber( 278 );
            DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_translation.asObject(), _python_str_plain_activate ) ).asObject(), _python_str_digest_40d704470259297f93bee626c12b71fb ) );
        }
        frame_guard.setLineNumber( 280 );
        PythonExceptionKeeper _caught_1;


        try
        {
            frame_guard.setLineNumber( 281 );
            if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_requires_model_validation ) ).asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_options.asObject(), _python_str_plain_get ) ).asObject(), _python_str_plain_skip_validation ) ).asObject() ) )) ) )
            {
                frame_guard.setLineNumber( 282 );
                DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_validate ) ).asObject() ) );
            }
            frame_guard.setLineNumber( 283 );
            {
                PyObjectTempKeeper1 call_tmp18;
                PyObjectTempKeeper0 call_tmp19;
                _python_var_output.assign1( ( call_tmp18.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle ) ), call_tmp19.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp18.asObject(), call_tmp19.asObject(), _python_var_options.asObject1() ) ) );
            }
            frame_guard.setLineNumber( 284 );
            if ( CHECK_IF_TRUE( _python_var_output.asObject() ) )
            {
                frame_guard.setLineNumber( 285 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_output_transaction ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 288 );
                    _python_var_connections.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__core__management__base)->md_dict, PyObjectTemporary( _python_var_options.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_DEFAULT_DB_ALIAS.updateLocalsDict( _python_var_connections.updateLocalsDict( _python_var_output.updateLocalsDict( _python_var_translation.updateLocalsDict( _python_var_saved_locale.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_connections_str_plain_DEFAULT_DB_ALIAS_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_connections ) );
                    _python_var_DEFAULT_DB_ALIAS.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__core__management__base)->md_dict, PyObjectTemporary( _python_var_options.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_DEFAULT_DB_ALIAS.updateLocalsDict( _python_var_connections.updateLocalsDict( _python_var_output.updateLocalsDict( _python_var_translation.updateLocalsDict( _python_var_saved_locale.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_connections_str_plain_DEFAULT_DB_ALIAS_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DEFAULT_DB_ALIAS ) );
                    frame_guard.setLineNumber( 289 );
                    {
                        PyObjectTempKeeper1 call21;
                        PyObjectTempKeeper0 subscr24;
                        _python_var_connection.assign1( ( subscr24.assign( _python_var_connections.asObject() ), LOOKUP_SUBSCRIPT( subscr24.asObject0(), PyObjectTemporary( ( call21.assign( LOOKUP_ATTRIBUTE( _python_var_options.asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), _python_str_plain_database, _python_var_DEFAULT_DB_ALIAS.asObject() ) ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 290 );
                    if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_ops ) ).asObject(), _python_str_plain_start_transaction_sql ) ).asObject() ) ).asObject() ) )
                    {
                        frame_guard.setLineNumber( 291 );
                        {
                            PyObjectTempKeeper1 call26;
                            PyObjectTempKeeper1 call28;
                            DECREASE_REFCOUNT( ( call28.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_stdout ) ).asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call28.asObject0(), PyObjectTemporary( ( call26.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style ) ).asObject(), _python_str_plain_SQL_KEYWORD ) ), CALL_FUNCTION_WITH_ARGS( call26.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_ops ) ).asObject(), _python_str_plain_start_transaction_sql ) ).asObject() ) ).asObject() ) ) ).asObject() ) ) );
                        }
                    }
                }
                frame_guard.setLineNumber( 292 );
                {
                    PyObjectTempKeeper1 call30;
                    DECREASE_REFCOUNT( ( call30.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_stdout ) ).asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call30.asObject0(), _python_var_output.asObject() ) ) );
                }
                frame_guard.setLineNumber( 293 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_output_transaction ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 294 );
                    {
                        PyObjectTempKeeper1 call32;
                        DECREASE_REFCOUNT( ( call32.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_stdout ) ).asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_str_chr_10, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style ) ).asObject(), _python_str_plain_SQL_KEYWORD ) ).asObject(), _python_str_digest_f55491f57410557264aac04492c0232c ) ).asObject() ) ).asObject() ) ) );
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

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final code:
        frame_guard.setLineNumber( 296 );
        if ( ( _python_var_saved_locale.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 297 );
            {
                PyObjectTempKeeper1 call16;
                DECREASE_REFCOUNT( ( call16.assign( LOOKUP_ATTRIBUTE( _python_var_translation.asObject(), _python_str_plain_activate ) ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), _python_var_saved_locale.asObject() ) ) );
            }
        }
        _caught_1.rethrow();
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
        frame_guard.getFrame0()->f_locals = _python_var_options.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_DEFAULT_DB_ALIAS.updateLocalsDict( _python_var_connections.updateLocalsDict( _python_var_output.updateLocalsDict( _python_var_translation.updateLocalsDict( _python_var_saved_locale.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base );
           frame_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_options = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_options = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_options = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "execute() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "execute() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_options = (PyObject *)split_copy;
        }
        else
        {
            _python_par_options = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "execute() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, value );

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
            _python_par_options = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_options, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_options, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "execute() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "execute() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "execute() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "execute() got multiple values for keyword argument 'self'" );
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


    return impl_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_args, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_app, PyObject *_python_par_display_num_errors )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_app( _python_str_plain_app, _python_par_app );
    PyObjectLocalParameterVariableNoDel _python_var_display_num_errors( _python_str_plain_display_num_errors, _python_par_display_num_errors );
    PyObjectLocalVariable _python_var_get_validation_errors( _python_str_plain_get_validation_errors );
    PyObjectLocalVariable _python_var_s( _python_str_plain_s );
    PyObjectLocalVariable _python_var_num_errors( _python_str_plain_num_errors );
    PyObjectLocalVariable _python_var_error_text( _python_str_plain_error_text );

    // Actual function code.
    static PyFrameObject *frame_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base );
        }

        frame_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_54424968a4ec422385a48c98c11761e1, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 306 );
        _python_var_get_validation_errors.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5fa4c97ca0407519d970227520c96829, ((PyModuleObject *)_module_django__core__management__base)->md_dict, PyObjectTemporary( _python_var_display_num_errors.updateLocalsDict( _python_var_app.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_error_text.updateLocalsDict( _python_var_num_errors.updateLocalsDict( _python_var_s.updateLocalsDict( _python_var_get_validation_errors.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_get_validation_errors_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_validation_errors ) );
        frame_guard.setLineNumber( 307 );
        _python_var_s.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__management__base_StringIO.asObject0() ) );
        frame_guard.setLineNumber( 308 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            _python_var_num_errors.assign1( ( call1.assign( _python_var_get_validation_errors.asObject() ), call2.assign( _python_var_s.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_app.asObject() ) ) );
        }
        frame_guard.setLineNumber( 309 );
        if ( CHECK_IF_TRUE( _python_var_num_errors.asObject() ) )
        {
            frame_guard.setLineNumber( 310 );
            DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_seek ) ).asObject(), _python_int_0 ) );
            frame_guard.setLineNumber( 311 );
            _python_var_error_text.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_read ) ).asObject() ) );
            frame_guard.setLineNumber( 312 );
            {
                PyObjectTempKeeper0 call4;
                {
                    PyObjectTemporary tmp_exception_type( ( call4.assign( _mvar_django__core__management__base_CommandError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_1bda3eae85163cb20e0b12d14044156c, _python_var_error_text.asObject() ) ).asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        frame_guard.setLineNumber( 313 );
        if ( CHECK_IF_TRUE( _python_var_display_num_errors.asObject() ) )
        {
            frame_guard.setLineNumber( 314 );
            {
                PyObjectTempKeeper1 call8;
                PyObjectTempKeeper0 make_tuple6;
                DECREASE_REFCOUNT( ( call8.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_stdout ) ).asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_7ac92f241702c907a148942c33bf90bd, PyObjectTemporary( ( make_tuple6.assign( _python_var_num_errors.asObject() ), MAKE_TUPLE2( make_tuple6.asObject0(), ( RICH_COMPARE_BOOL_EQ( _python_var_num_errors.asObject(), _python_int_pos_1 ) ? _python_str_empty : _python_str_plain_s ) ) ) ).asObject() ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_display_num_errors.updateLocalsDict( _python_var_app.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_error_text.updateLocalsDict( _python_var_num_errors.updateLocalsDict( _python_var_s.updateLocalsDict( _python_var_get_validation_errors.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base );
           frame_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_app = NULL;
    PyObject *_python_par_display_num_errors = NULL;
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
                PyErr_Format( PyExc_TypeError, "validate() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "validate() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_app == key )
            {
                if (unlikely( _python_par_app ))
                {
                    PyErr_Format( PyExc_TypeError, "validate() got multiple values for keyword argument 'app'" );
                    goto error_exit;
                }

                _python_par_app = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_display_num_errors == key )
            {
                if (unlikely( _python_par_display_num_errors ))
                {
                    PyErr_Format( PyExc_TypeError, "validate() got multiple values for keyword argument 'display_num_errors'" );
                    goto error_exit;
                }

                _python_par_display_num_errors = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "validate() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_app, key ) )
            {
                if (unlikely( _python_par_app ))
                {
                    PyErr_Format( PyExc_TypeError, "validate() got multiple values for keyword argument 'app'" );
                    goto error_exit;
                }

                _python_par_app = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_display_num_errors, key ) )
            {
                if (unlikely( _python_par_display_num_errors ))
                {
                    PyErr_Format( PyExc_TypeError, "validate() got multiple values for keyword argument 'display_num_errors'" );
                    goto error_exit;
                }

                _python_par_display_num_errors = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "validate() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "validate() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "validate() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "validate() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "validate() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "validate() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "validate() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "validate() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "validate() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "validate() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "validate() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "validate() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "validate() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "validate() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_app != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "validate() got multiple values for keyword argument 'app'" );
             goto error_exit;
         }

        _python_par_app = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_display_num_errors != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "validate() got multiple values for keyword argument 'display_num_errors'" );
             goto error_exit;
         }

        _python_par_display_num_errors = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_app == NULL )
    {
        _python_par_app = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_app );
    }
    if ( _python_par_display_num_errors == NULL )
    {
        _python_par_display_num_errors = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_display_num_errors );
    }


    return impl_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_app, _python_par_display_num_errors );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_app );
    Py_XDECREF( _python_par_display_num_errors );

    return NULL;
}

static PyObject *dparse_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_options( _python_str_plain_options, _python_par_options );

    // Actual function code.
    static PyFrameObject *frame_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base );
        }

        frame_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_7636536a66993b9480f025894ad2fb4d, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 322 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, _python_tuple_empty ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_options.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base );
           frame_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_options = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_options = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_options = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "handle() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "handle() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_options = (PyObject *)split_copy;
        }
        else
        {
            _python_par_options = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "handle() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, value );

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
            _python_par_options = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_options, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_options, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "handle() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "handle() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "handle() got multiple values for keyword argument 'self'" );
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


    return impl_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_args, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_5_AppCommand_of_module_django__core__management__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_args( _python_str_plain_args );
    PyObjectLocalVariable _python_var_handle( _python_str_plain_handle );
    PyObjectLocalVariable _python_var_handle_app( _python_str_plain_handle_app );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    _python_var___doc__.assign0( _python_str_digest_ac5c36e6e4030d443949a2f8d9f510bd );
    _python_var_args.assign0( _python_str_digest_7953c824b66df493b33c19fd9ea8881f );
    _python_var_handle.assign1( MAKE_FUNCTION_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base(  ) );
    _python_var_handle_app.assign1( MAKE_FUNCTION_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base(  ) );
    return _python_var_handle_app.updateLocalsDict( _python_var_handle.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_app_labels, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_app_labels( _python_str_plain_app_labels, _python_par_app_labels );
    PyObjectLocalParameterVariableNoDel _python_var_options( _python_str_plain_options, _python_par_options );
    PyObjectLocalVariable _python_var_models( _python_str_plain_models );
    PyObjectLocalVariable _python_var_app_list( _python_str_plain_app_list );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_output( _python_str_plain_output );
    PyObjectLocalVariable _python_var_app( _python_str_plain_app );
    PyObjectLocalVariable _python_var_app_output( _python_str_plain_app_output );
    PyObjectLocalVariable _python_var_app_label( _python_str_plain_app_label );

    // Actual function code.
    static PyFrameObject *frame_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base );
        }

        frame_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_3e850e5bf2a87256ec0f8ae87d7eee76, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 337 );
        _python_var_models.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__core__management__base)->md_dict, PyObjectTemporary( _python_var_options.updateLocalsDict( _python_var_app_labels.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_app_output.updateLocalsDict( _python_var_app.updateLocalsDict( _python_var_output.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_app_list.updateLocalsDict( _python_var_models.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_models_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_models ) );
        frame_guard.setLineNumber( 338 );
        if ( (!( CHECK_IF_TRUE( _python_var_app_labels.asObject() ) )) )
        {
            frame_guard.setLineNumber( 339 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__core__management__base_CommandError.asObject0(), _python_str_digest_5398682b05b000e74180e030acaf6ff8 ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 340 );
        try
        {
            frame_guard.setLineNumber( 341 );
            _python_var_app_list.assign1( impl_listcontr_1_of_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base( MAKE_ITERATOR( _python_var_app_labels.asObject() ), _python_var_app_label, _python_var_models ) );
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

            if ( _exception.matches( _mvar_django__core__management__base_ImproperlyConfigured.asObject0() ) || _exception.matches( PyExc_ImportError ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 343 );
                {
                    PyObjectTempKeeper0 call1;
                    {
                        PyObjectTemporary tmp_exception_type( ( call1.assign( _mvar_django__core__management__base_CommandError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_565619fda7a13b84a5c7d23945a8dc24, _python_var_e.asObject() ) ).asObject() ) ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        _python_var_output.assign1( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 345 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_app_list.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 345 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_app.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 346 );
                {
                    PyObjectTempKeeper1 call_tmp3;
                    PyObjectTempKeeper1 call_tmp4;
                    _python_var_app_output.assign1( ( call_tmp3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_app ) ), call_tmp4.assign( MAKE_TUPLE1( _python_var_app.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_options.asObject1() ) ) );
                }
                frame_guard.setLineNumber( 347 );
                if ( CHECK_IF_TRUE( _python_var_app_output.asObject() ) )
                {
                    frame_guard.setLineNumber( 348 );
                    {
                        PyObjectTempKeeper1 call6;
                        DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_output.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_app_output.asObject() ) ) );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 349 );
        {
            PyObjectTempKeeper1 call8;
            return ( call8.assign( LOOKUP_ATTRIBUTE( _python_str_chr_10, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_output.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_options.updateLocalsDict( _python_var_app_labels.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_app_output.updateLocalsDict( _python_var_app.updateLocalsDict( _python_var_output.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_app_list.updateLocalsDict( _python_var_models.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base );
           frame_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_app_labels = NULL;
    PyObject *_python_par_options = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_options = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_options = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "handle() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "handle() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_options = (PyObject *)split_copy;
        }
        else
        {
            _python_par_options = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "handle() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, value );

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
            _python_par_options = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_options, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_options, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "handle() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "handle() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "handle() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_app_labels = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_app_labels, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_app_labels = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_app_labels, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_app_labels );
    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_app_label,PyObjectLocalVariable &python_closure_models )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 341 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 341 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_app_label.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( python_closure_models.asObject(), _python_str_plain_get_app ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_app_label.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_app, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_app( _python_str_plain_app, _python_par_app );
    PyObjectLocalParameterVariableNoDel _python_var_options( _python_str_plain_options, _python_par_options );

    // Actual function code.
    static PyFrameObject *frame_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base );
        }

        frame_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_dd454936e5c5a91be18a31fa87feefc7, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 358 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, _python_tuple_empty ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_options.updateLocalsDict( _python_var_app.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base );
           frame_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_app = NULL;
    PyObject *_python_par_options = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_options = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_options = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "handle_app() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "handle_app() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_options = (PyObject *)split_copy;
        }
        else
        {
            _python_par_options = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "handle_app() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, value );

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
            _python_par_options = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_options, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_options, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument app was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_options, _python_str_plain_app );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_app == NULL );

            _python_par_app = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_options, _python_str_plain_app );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_app() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "handle_app() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "handle_app() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_app() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "handle_app() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_app() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "handle_app() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_app() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "handle_app() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle_app() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "handle_app() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "handle_app() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "handle_app() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_app != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_app() got multiple values for keyword argument 'app'" );
             goto error_exit;
         }

        _python_par_app = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_app, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_app );
    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_6_LabelCommand_of_module_django__core__management__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_args( _python_str_plain_args );
    PyObjectLocalVariable _python_var_label( _python_str_plain_label );
    PyObjectLocalVariable _python_var_handle( _python_str_plain_handle );
    PyObjectLocalVariable _python_var_handle_label( _python_str_plain_handle_label );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    _python_var___doc__.assign0( _python_str_digest_e95088bdc6ccd0216adf8de37227853f );
    _python_var_args.assign0( _python_str_digest_6310d984e6d74aa0ca3999b8f7a5ab8d );
    _python_var_label.assign0( _python_str_plain_label );
    _python_var_handle.assign1( MAKE_FUNCTION_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base(  ) );
    _python_var_handle_label.assign1( MAKE_FUNCTION_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base(  ) );
    return _python_var_handle_label.updateLocalsDict( _python_var_handle.updateLocalsDict( _python_var_label.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_labels, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_labels( _python_str_plain_labels, _python_par_labels );
    PyObjectLocalParameterVariableNoDel _python_var_options( _python_str_plain_options, _python_par_options );
    PyObjectLocalVariable _python_var_output( _python_str_plain_output );
    PyObjectLocalVariable _python_var_label( _python_str_plain_label );
    PyObjectLocalVariable _python_var_label_output( _python_str_plain_label_output );

    // Actual function code.
    static PyFrameObject *frame_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base );
        }

        frame_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_57281423915f177cc94cea10cd9e4bb2, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 378 );
        if ( (!( CHECK_IF_TRUE( _python_var_labels.asObject() ) )) )
        {
            frame_guard.setLineNumber( 379 );
            {
                PyObjectTempKeeper0 call1;
                {
                    PyObjectTemporary tmp_exception_type( ( call1.assign( _mvar_django__core__management__base_CommandError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_cddc5d119a9229fc89e58d193d470c97, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_label ) ).asObject() ) ).asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        _python_var_output.assign1( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 382 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_labels.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 382 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_label.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 383 );
                {
                    PyObjectTempKeeper1 call_tmp3;
                    PyObjectTempKeeper1 call_tmp4;
                    _python_var_label_output.assign1( ( call_tmp3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_label ) ), call_tmp4.assign( MAKE_TUPLE1( _python_var_label.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_options.asObject1() ) ) );
                }
                frame_guard.setLineNumber( 384 );
                if ( CHECK_IF_TRUE( _python_var_label_output.asObject() ) )
                {
                    frame_guard.setLineNumber( 385 );
                    {
                        PyObjectTempKeeper1 call6;
                        DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_output.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_label_output.asObject() ) ) );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 386 );
        {
            PyObjectTempKeeper1 call8;
            return ( call8.assign( LOOKUP_ATTRIBUTE( _python_str_chr_10, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_output.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_options.updateLocalsDict( _python_var_labels.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_label_output.updateLocalsDict( _python_var_label.updateLocalsDict( _python_var_output.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base );
           frame_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_labels = NULL;
    PyObject *_python_par_options = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_options = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_options = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "handle() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "handle() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_options = (PyObject *)split_copy;
        }
        else
        {
            _python_par_options = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "handle() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, value );

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
            _python_par_options = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_options, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_options, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "handle() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "handle() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "handle() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_labels = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_labels, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_labels = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_labels, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_labels );
    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_label, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_label( _python_str_plain_label, _python_par_label );
    PyObjectLocalParameterVariableNoDel _python_var_options( _python_str_plain_options, _python_par_options );

    // Actual function code.
    static PyFrameObject *frame_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base );
        }

        frame_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_00c9bae1296ee53041060e398f0ce198, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 394 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, _python_tuple_empty ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_options.updateLocalsDict( _python_var_label.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base );
           frame_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_label = NULL;
    PyObject *_python_par_options = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_options = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_options = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "handle_label() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "handle_label() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_options = (PyObject *)split_copy;
        }
        else
        {
            _python_par_options = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "handle_label() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, value );

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
            _python_par_options = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_options, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_options, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument label was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_options, _python_str_plain_label );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_label == NULL );

            _python_par_label = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_options, _python_str_plain_label );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_label() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "handle_label() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "handle_label() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_label() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "handle_label() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_label() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "handle_label() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_label() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "handle_label() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle_label() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "handle_label() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "handle_label() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "handle_label() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_label != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_label() got multiple values for keyword argument 'label'" );
             goto error_exit;
         }

        _python_par_label = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_label, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_label );
    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_7_NoArgsCommand_of_module_django__core__management__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_args( _python_str_plain_args );
    PyObjectLocalVariable _python_var_handle( _python_str_plain_handle );
    PyObjectLocalVariable _python_var_handle_noargs( _python_str_plain_handle_noargs );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    _python_var___doc__.assign0( _python_str_digest_eaad500827727158248e4f29de716daa );
    _python_var_args.assign0( _python_str_empty );
    _python_var_handle.assign1( MAKE_FUNCTION_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base(  ) );
    _python_var_handle_noargs.assign1( MAKE_FUNCTION_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base(  ) );
    return _python_var_handle_noargs.updateLocalsDict( _python_var_handle.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_options( _python_str_plain_options, _python_par_options );

    // Actual function code.
    static PyFrameObject *frame_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base );
        }

        frame_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_f2e2d05d6e8480f53ec1d0dd5f28be02, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 411 );
        if ( CHECK_IF_TRUE( _python_var_args.asObject() ) )
        {
            frame_guard.setLineNumber( 412 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__core__management__base_CommandError.asObject0(), _python_str_digest_1e77a6b5293200ae7ce6ff642f88f1e9 ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 413 );
        {
            PyObjectTempKeeper1 call_tmp1;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_noargs ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp1.asObject(), _python_var_options.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_options.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base );
           frame_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_options = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_options = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_options = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "handle() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "handle() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_options = (PyObject *)split_copy;
        }
        else
        {
            _python_par_options = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "handle() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, value );

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
            _python_par_options = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_options, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_options, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "handle() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "handle() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "handle() got multiple values for keyword argument 'self'" );
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


    return impl_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_args, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_options( _python_str_plain_options, _python_par_options );

    // Actual function code.
    static PyFrameObject *frame_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base = NULL;

    if ( isFrameUnusable( frame_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base ) )
    {
        if ( frame_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base" );
#endif
            Py_DECREF( frame_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base );
        }

        frame_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base = MAKE_FRAME( _codeobj_ded829dc06cbda367a01492b46a552da, _module_django__core__management__base );
    }

    FrameGuard frame_guard( frame_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 420 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, _python_tuple_empty ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_options.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base )
        {
           Py_DECREF( frame_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base );
           frame_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_options = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_options = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_options = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "handle_noargs() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "handle_noargs() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_options = (PyObject *)split_copy;
        }
        else
        {
            _python_par_options = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "handle_noargs() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_options, entry->me_key, value );

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
            _python_par_options = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_options, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_options, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_noargs() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "handle_noargs() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "handle_noargs() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_noargs() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "handle_noargs() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_noargs() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "handle_noargs() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_noargs() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "handle_noargs() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle_noargs() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "handle_noargs() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "handle_noargs() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "handle_noargs() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base( self, _python_par_self, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base( self, INCREASE_REFCOUNT( args[ 0 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base,
        dparse_function_1___init___of_class_3_OutputWrapper_of_module_django__core__management__base,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ac3f6f09ac37ce5b3ac3ebcea5b390e1,
        INCREASE_REFCOUNT( _python_tuple_none_str_chr_10_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base,
        dparse_function_1___init___of_class_4_BaseCommand_of_module_django__core__management__base,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_85c5c33943201b94b7deaff7b94e54db,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base,
        dparse_function_1_handle_of_class_5_AppCommand_of_module_django__core__management__base,
        _python_str_plain_handle,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3e850e5bf2a87256ec0f8ae87d7eee76,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base,
        dparse_function_1_handle_of_class_6_LabelCommand_of_module_django__core__management__base,
        _python_str_plain_handle,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_57281423915f177cc94cea10cd9e4bb2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base,
        dparse_function_1_handle_of_class_7_NoArgsCommand_of_module_django__core__management__base,
        _python_str_plain_handle,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f2e2d05d6e8480f53ec1d0dd5f28be02,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base,
        dparse_function_2___getattr___of_class_3_OutputWrapper_of_module_django__core__management__base,
        _python_str_plain___getattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a38997c5984ef813148c39645b230119,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base,
        dparse_function_2_get_version_of_class_4_BaseCommand_of_module_django__core__management__base,
        _python_str_plain_get_version,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bdce9355c3442b9d89438844c28d2c6b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        _python_str_digest_6e8aa257d8c8c8d15f1488d51405508d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base,
        dparse_function_2_handle_app_of_class_5_AppCommand_of_module_django__core__management__base,
        _python_str_plain_handle_app,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_dd454936e5c5a91be18a31fa87feefc7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        _python_str_digest_582b04eb6d0b6ee13e96257b4af920d8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_handle_default_options_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_handle_default_options_of_module_django__core__management__base,
        dparse_function_2_handle_default_options_of_module_django__core__management__base,
        _python_str_plain_handle_default_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b7f0fc020054d04cdfe73513f3ce87cb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        _python_str_digest_357866e052e4ace97d944727d846ce0e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base,
        dparse_function_2_handle_label_of_class_6_LabelCommand_of_module_django__core__management__base,
        _python_str_plain_handle_label,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_00c9bae1296ee53041060e398f0ce198,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        _python_str_digest_913628b0bf3b754c43a65c00244b1823
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base,
        dparse_function_2_handle_noargs_of_class_7_NoArgsCommand_of_module_django__core__management__base,
        _python_str_plain_handle_noargs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ded829dc06cbda367a01492b46a552da,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        _python_str_digest_fe2c4019e247aca8de590207396ace2c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base,
        dparse_function_3_usage_of_class_4_BaseCommand_of_module_django__core__management__base,
        _python_str_plain_usage,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_75a419711cb1a1d8fd839c037ed018a0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        _python_str_digest_a94758a2830058e36b3328a11d863315
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base,
        dparse_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base,
        _python_str_plain_write,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5b7fd55016fa1ea798962df3df0bbda5,
        INCREASE_REFCOUNT( _python_tuple_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base,
        dparse_function_4_create_parser_of_class_4_BaseCommand_of_module_django__core__management__base,
        _python_str_plain_create_parser,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_308411daa96b899d3fdc98b72a6204e8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        _python_str_digest_3298ecf38db2bb33d917e2be828ce143
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base,
        dparse_function_5_print_help_of_class_4_BaseCommand_of_module_django__core__management__base,
        _python_str_plain_print_help,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0ffc1a0c95765f2c14aae12186448d99,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        _python_str_digest_15ddc9652c5e0c79b9ddf3e1c8a5fa30
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base,
        dparse_function_6_run_from_argv_of_class_4_BaseCommand_of_module_django__core__management__base,
        _python_str_plain_run_from_argv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3d3f75cf8084ffae97209393e83e929e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        _python_str_digest_56a65156b9818b25f8a70fa4e6b6267c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base,
        dparse_function_7_execute_of_class_4_BaseCommand_of_module_django__core__management__base,
        _python_str_plain_execute,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_394bc3b7cb516d2de53e9f05b5609ff5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        _python_str_digest_93bb23d7119767d71174f944e1020b1a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base,
        dparse_function_8_validate_of_class_4_BaseCommand_of_module_django__core__management__base,
        _python_str_plain_validate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_54424968a4ec422385a48c98c11761e1,
        INCREASE_REFCOUNT( _python_tuple_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        _python_str_digest_fc9f10a9f5d8dd1df8aba7449469927d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base,
        dparse_function_9_handle_of_class_4_BaseCommand_of_module_django__core__management__base,
        _python_str_plain_handle,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7636536a66993b9480f025894ad2fb4d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        _python_str_digest_35ecd48ef1037874e6d17af0270bcb44
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base,
        dparse_lambda_2_lambda_of_function_3_write_of_class_3_OutputWrapper_of_module_django__core__management__base,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_30d0ed0851dbcdb245053fe723377a80,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__base,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.management.base",   /* m_name */
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

MOD_INIT_DECL( django__core__management__base )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__management__base );
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

    // puts( "in initdjango__core__management__base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__management__base = Py_InitModule4(
        "django.core.management.base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__management__base = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__management__base = (PyDictObject *)((PyModuleObject *)_module_django__core__management__base)->md_dict;

    assertObject( _module_django__core__management__base );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_7c3a0ed952763ef5d97ebc15bd26f92c, _module_django__core__management__base );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__management__base );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__management__base != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_acf327fbfaf2d4ac9b6b98e8b5d2a588 );
    UPDATE_STRING_DICT0( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_2e87d2e7fb19abc23e3fd41c6f352278 );
    PyFrameObject *frame_module_django__core__management__base = MAKE_FRAME( _codeobj_0b1017ac35085ceb9878dc4434d20a8a, _module_django__core__management__base );

    FrameGuard frame_guard( frame_module_django__core__management__base );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__management__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__core__management__base)->md_dict, ((PyModuleObject *)_module_django__core__management__base)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__core__management__base)->md_dict, ((PyModuleObject *)_module_django__core__management__base)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_make_option, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_optparse, ((PyModuleObject *)_module_django__core__management__base)->md_dict, ((PyModuleObject *)_module_django__core__management__base)->md_dict, _python_list_str_plain_make_option_str_plain_OptionParser_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_make_option ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_OptionParser, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_optparse, ((PyModuleObject *)_module_django__core__management__base)->md_dict, ((PyModuleObject *)_module_django__core__management__base)->md_dict, _python_list_str_plain_make_option_str_plain_OptionParser_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_OptionParser ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_django, IMPORT_MODULE( _python_str_plain_django, ((PyModuleObject *)_module_django__core__management__base)->md_dict, ((PyModuleObject *)_module_django__core__management__base)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_ImproperlyConfigured, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__core__management__base)->md_dict, ((PyModuleObject *)_module_django__core__management__base)->md_dict, _python_list_str_plain_ImproperlyConfigured_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImproperlyConfigured ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_color_style, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7788709b924fa7e8af007652f7c24252, ((PyModuleObject *)_module_django__core__management__base)->md_dict, ((PyModuleObject *)_module_django__core__management__base)->md_dict, _python_list_str_plain_color_style_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_color_style ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_force_str, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__management__base)->md_dict, ((PyModuleObject *)_module_django__core__management__base)->md_dict, _python_list_str_plain_force_str_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_str ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_StringIO, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_772afb12ed313dc4d07194ad296c647d, ((PyModuleObject *)_module_django__core__management__base)->md_dict, ((PyModuleObject *)_module_django__core__management__base)->md_dict, _python_list_str_plain_StringIO_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_StringIO ) );
        {
            frame_guard.setLineNumber( 18 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_Exception ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_CommandError_of_module_django__core__management__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__management__base___metaclass__.isInitialized( false ) ? _mvar_django__core__management__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_CommandError, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_CommandError, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_handle_default_options, MAKE_FUNCTION_function_2_handle_default_options_of_module_django__core__management__base(  ) );
        {
            frame_guard.setLineNumber( 47 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_OutputWrapper_of_module_django__core__management__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__management__base___metaclass__.isInitialized( false ) ? _mvar_django__core__management__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_OutputWrapper, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_OutputWrapper, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 70 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_BaseCommand_of_module_django__core__management__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__management__base___metaclass__.isInitialized( false ) ? _mvar_django__core__management__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_BaseCommand, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_BaseCommand, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 325 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__management__base_BaseCommand.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_5_AppCommand_of_module_django__core__management__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__management__base___metaclass__.isInitialized( false ) ? _mvar_django__core__management__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call15;
                _tmp_python_tmp_class = ( call13.assign( _python_tmp_metaclass.asObject() ), call15.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_str_plain_AppCommand, call15.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_AppCommand, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 361 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__management__base_BaseCommand.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_6_LabelCommand_of_module_django__core__management__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__management__base___metaclass__.isInitialized( false ) ? _mvar_django__core__management__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call17;
                PyObjectTempKeeper0 call19;
                _tmp_python_tmp_class = ( call17.assign( _python_tmp_metaclass.asObject() ), call19.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_str_plain_LabelCommand, call19.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_LabelCommand, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 397 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__management__base_BaseCommand.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_7_NoArgsCommand_of_module_django__core__management__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__management__base___metaclass__.isInitialized( false ) ? _mvar_django__core__management__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call21;
                PyObjectTempKeeper0 call23;
                _tmp_python_tmp_class = ( call21.assign( _python_tmp_metaclass.asObject() ), call23.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), _python_str_plain_NoArgsCommand, call23.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__management__base, (Nuitka_StringObject *)_python_str_plain_NoArgsCommand, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__management__base)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__core__management__base );
}
