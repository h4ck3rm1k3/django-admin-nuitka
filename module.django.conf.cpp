// Generated code for Python source for module 'django.conf'
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

// The _module_django__conf is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__conf;
PyDictObject *_moduledict_django__conf;

// The module level variables.
static PyObjectGlobalVariable_django__conf _mvar_django__conf_BaseSettings( &_module_django__conf, &_python_str_plain_BaseSettings );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_DeprecationWarning( &_module_django__conf, &_python_str_plain_DeprecationWarning );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_ENVIRONMENT_VARIABLE( &_module_django__conf, &_python_str_plain_ENVIRONMENT_VARIABLE );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_ImproperlyConfigured( &_module_django__conf, &_python_str_plain_ImproperlyConfigured );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_LazyObject( &_module_django__conf, &_python_str_plain_LazyObject );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_LazySettings( &_module_django__conf, &_python_str_plain_LazySettings );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_Settings( &_module_django__conf, &_python_str_plain_Settings );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_UserSettingsHolder( &_module_django__conf, &_python_str_plain_UserSettingsHolder );
static PyObjectGlobalVariable_django__conf _mvar_django__conf___metaclass__( &_module_django__conf, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_empty( &_module_django__conf, &_python_str_plain_empty );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_global_settings( &_module_django__conf, &_python_str_plain_global_settings );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_import_by_path( &_module_django__conf, &_python_str_plain_import_by_path );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_importlib( &_module_django__conf, &_python_str_plain_importlib );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_logging( &_module_django__conf, &_python_str_plain_logging );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_os( &_module_django__conf, &_python_str_plain_os );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_six( &_module_django__conf, &_python_str_plain_six );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_sys( &_module_django__conf, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_time( &_module_django__conf, &_python_str_plain_time );
static PyObjectGlobalVariable_django__conf _mvar_django__conf_warnings( &_module_django__conf, &_python_str_plain_warnings );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_LazySettings_of_module_django__conf(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_BaseSettings_of_module_django__conf(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_Settings_of_module_django__conf(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_UserSettingsHolder_of_module_django__conf(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_Settings_of_module_django__conf(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf(  );


static PyObject *MAKE_FUNCTION_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf(  );


static PyObject *MAKE_FUNCTION_function_1__setup_of_class_1_LazySettings_of_module_django__conf(  );


static PyObject *MAKE_FUNCTION_function_2___getattr___of_class_1_LazySettings_of_module_django__conf(  );


static PyObject *MAKE_FUNCTION_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf(  );


static PyObject *MAKE_FUNCTION_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf(  );


static PyObject *MAKE_FUNCTION_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf(  );


static PyObject *MAKE_FUNCTION_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf(  );


static PyObject *MAKE_FUNCTION_function_4_configure_of_class_1_LazySettings_of_module_django__conf( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf(  );


static PyObject *MAKE_FUNCTION_function_5_configured_of_class_1_LazySettings_of_module_django__conf(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_LazySettings_of_module_django__conf(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var__setup( _python_str_plain__setup );
    PyObjectLocalVariable _python_var___getattr__( _python_str_plain___getattr__ );
    PyObjectLocalVariable _python_var__configure_logging( _python_str_plain__configure_logging );
    PyObjectLocalVariable _python_var_configure( _python_str_plain_configure );
    PyObjectLocalVariable _python_var_configured( _python_str_plain_configured );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_conf );
    _python_var___doc__.assign0( _python_str_digest_f961b7016f8e2e58cb355e0ea0870f37 );
    _python_var__setup.assign1( MAKE_FUNCTION_function_1__setup_of_class_1_LazySettings_of_module_django__conf(  ) );
    _python_var___getattr__.assign1( MAKE_FUNCTION_function_2___getattr___of_class_1_LazySettings_of_module_django__conf(  ) );
    _python_var__configure_logging.assign1( MAKE_FUNCTION_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf(  ) );
    static PyFrameObject *frame_class_1_LazySettings_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_class_1_LazySettings_of_module_django__conf ) )
    {
        if ( frame_class_1_LazySettings_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_1_LazySettings_of_module_django__conf" );
#endif
            Py_DECREF( frame_class_1_LazySettings_of_module_django__conf );
        }

        frame_class_1_LazySettings_of_module_django__conf = MAKE_FRAME( _codeobj_a863d78503ab57afb4afd83847671702, _module_django__conf );
    }

    FrameGuard frame_guard( frame_class_1_LazySettings_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_class_1_LazySettings_of_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 82 );
        _python_var_configure.assign1( MAKE_FUNCTION_function_4_configure_of_class_1_LazySettings_of_module_django__conf( MAKE_TUPLE1( _mvar_django__conf_global_settings.asObject0() ) ) );
        frame_guard.setLineNumber( 96 );
        _python_var_configured.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_5_configured_of_class_1_LazySettings_of_module_django__conf(  ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_configured.updateLocalsDict( _python_var_configure.updateLocalsDict( _python_var__configure_logging.updateLocalsDict( _python_var___getattr__.updateLocalsDict( _python_var__setup.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_1_LazySettings_of_module_django__conf )
        {
           Py_DECREF( frame_class_1_LazySettings_of_module_django__conf );
           frame_class_1_LazySettings_of_module_django__conf = NULL;
        }

        throw;
    }
    return _python_var_configured.updateLocalsDict( _python_var_configure.updateLocalsDict( _python_var__configure_logging.updateLocalsDict( _python_var___getattr__.updateLocalsDict( _python_var__setup.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );
}


static PyObject *impl_function_1__setup_of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalVariable _python_var_settings_module( _python_str_plain_settings_module );
    PyObjectLocalVariable _python_var_desc( _python_str_plain_desc );

    // Actual function code.
    static PyFrameObject *frame_function_1__setup_of_class_1_LazySettings_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_function_1__setup_of_class_1_LazySettings_of_module_django__conf ) )
    {
        if ( frame_function_1__setup_of_class_1_LazySettings_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__setup_of_class_1_LazySettings_of_module_django__conf" );
#endif
            Py_DECREF( frame_function_1__setup_of_class_1_LazySettings_of_module_django__conf );
        }

        frame_function_1__setup_of_class_1_LazySettings_of_module_django__conf = MAKE_FRAME( _codeobj_c1288b3eb08d0831ad942a8be414b832, _module_django__conf );
    }

    FrameGuard frame_guard( frame_function_1__setup_of_class_1_LazySettings_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_function_1__setup_of_class_1_LazySettings_of_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 37 );
        try
        {
            frame_guard.setLineNumber( 38 );
            {
                PyObjectTempKeeper1 subscr5;
                _python_var_settings_module.assign1( ( subscr5.assign( LOOKUP_ATTRIBUTE( _mvar_django__conf_os.asObject0(), _python_str_plain_environ ) ), LOOKUP_SUBSCRIPT( subscr5.asObject0(), _mvar_django__conf_ENVIRONMENT_VARIABLE.asObject0() ) ) );
            }
            frame_guard.setLineNumber( 39 );
            if ( (!( CHECK_IF_TRUE( _python_var_settings_module.asObject() ) )) )
            {
                frame_guard.setLineNumber( 40 );
                RAISE_EXCEPTION_WITH_TYPE( PyExc_KeyError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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

            if ( _exception.matches( PyExc_KeyError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 42 );
                _python_var_desc.assign1( ( CHECK_IF_TRUE( _python_var_name.asObject() ) ? BINARY_OPERATION_REMAINDER( _python_str_digest_48523dd032eb0b22c63bc8733406fdd5, _python_var_name.asObject() ) : INCREASE_REFCOUNT( _python_str_plain_settings ) ) );
                frame_guard.setLineNumber( 43 );
                {
                    PyObjectTempKeeper0 call3;
                    PyObjectTempKeeper0 make_tuple1;
                    {
                        PyObjectTemporary tmp_exception_type( ( call3.assign( _mvar_django__conf_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_bf0ae023636a9a21e28b74ff1aa72543, PyObjectTemporary( ( make_tuple1.assign( _python_var_desc.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), _mvar_django__conf_ENVIRONMENT_VARIABLE.asObject0() ) ) ).asObject() ) ).asObject() ) ) );
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
        frame_guard.setLineNumber( 49 );
        {
            PyObjectTempKeeper0 call7;
            {
                PyObjectTemporary tmp_identifier( ( call7.assign( _mvar_django__conf_Settings.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_settings_module.asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__wrapped );
        }
        }
        frame_guard.setLineNumber( 50 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__configure_logging ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_desc.updateLocalsDict( _python_var_settings_module.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1__setup_of_class_1_LazySettings_of_module_django__conf )
        {
           Py_DECREF( frame_function_1__setup_of_class_1_LazySettings_of_module_django__conf );
           frame_function_1__setup_of_class_1_LazySettings_of_module_django__conf = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1__setup_of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_setup() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_setup() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_setup() got multiple values for keyword argument 'name'" );
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
                    PyErr_Format( PyExc_TypeError, "_setup() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_setup() got multiple values for keyword argument 'name'" );
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
                   "_setup() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_setup() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_setup() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_setup() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_setup() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_setup() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_setup() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_setup() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_setup() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_setup() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_setup() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_setup() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_setup() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_setup() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_setup() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_name == NULL )
    {
        _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_name );
    }


    return impl_function_1__setup_of_class_1_LazySettings_of_module_django__conf( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_1__setup_of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1__setup_of_class_1_LazySettings_of_module_django__conf( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__setup_of_class_1_LazySettings_of_module_django__conf( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___getattr___of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_2___getattr___of_class_1_LazySettings_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_function_2___getattr___of_class_1_LazySettings_of_module_django__conf ) )
    {
        if ( frame_function_2___getattr___of_class_1_LazySettings_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___getattr___of_class_1_LazySettings_of_module_django__conf" );
#endif
            Py_DECREF( frame_function_2___getattr___of_class_1_LazySettings_of_module_django__conf );
        }

        frame_function_2___getattr___of_class_1_LazySettings_of_module_django__conf = MAKE_FRAME( _codeobj_958fd32db225644fe84048185ea292fd, _module_django__conf );
    }

    FrameGuard frame_guard( frame_function_2___getattr___of_class_1_LazySettings_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_function_2___getattr___of_class_1_LazySettings_of_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 53 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__wrapped ) ).asObject() == _mvar_django__conf_empty.asObject0() ) )
        {
            frame_guard.setLineNumber( 54 );
            {
                PyObjectTempKeeper1 call1;
                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__setup ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 55 );
        {
            PyObjectTempKeeper1 getattr3;
            return ( getattr3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__wrapped ) ), BUILTIN_GETATTR( getattr3.asObject0(), _python_var_name.asObject(), NULL ) );
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

        if ( frame_guard.getFrame0() == frame_function_2___getattr___of_class_1_LazySettings_of_module_django__conf )
        {
           Py_DECREF( frame_function_2___getattr___of_class_1_LazySettings_of_module_django__conf );
           frame_function_2___getattr___of_class_1_LazySettings_of_module_django__conf = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___getattr___of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2___getattr___of_class_1_LazySettings_of_module_django__conf( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_2___getattr___of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2___getattr___of_class_1_LazySettings_of_module_django__conf( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___getattr___of_class_1_LazySettings_of_module_django__conf( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_DEFAULT_LOGGING( _python_str_plain_DEFAULT_LOGGING );
    PyObjectLocalVariable _python_var_logging_config_func( _python_str_plain_logging_config_func );

    // Actual function code.
    static PyFrameObject *frame_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf ) )
    {
        if ( frame_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf" );
#endif
            Py_DECREF( frame_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf );
        }

        frame_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf = MAKE_FRAME( _codeobj_b0b6e813ba9f3942fe93794a4fc7531b, _module_django__conf );
    }

    FrameGuard frame_guard( frame_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 61 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__conf_sys.asObject0(), _python_str_plain_warnoptions ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 62 );
            try
            {
                frame_guard.setLineNumber( 64 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__conf_logging.asObject0(), _python_str_plain_captureWarnings ) ).asObject(), Py_True ) );
                frame_guard.setLineNumber( 66 );
                {
                    PyObjectTempKeeper1 call1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__conf_warnings.asObject0(), _python_str_plain_simplefilter ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_default, _mvar_django__conf_DeprecationWarning.asObject0() ) ) );
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

                if ( _exception.matches( PyExc_AttributeError ) )
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
        frame_guard.setLineNumber( 71 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_LOGGING_CONFIG ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 72 );
            _python_var_DEFAULT_LOGGING.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_757406db1d9f861d55460430f537cbf8, ((PyModuleObject *)_module_django__conf)->md_dict, PyObjectTemporary( _python_var_self.updateLocalsDict( _python_var_logging_config_func.updateLocalsDict( _python_var_DEFAULT_LOGGING.updateLocalsDict( PyDict_New() ) ) ) ).asObject(), _python_list_str_plain_DEFAULT_LOGGING_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DEFAULT_LOGGING ) );
            frame_guard.setLineNumber( 74 );
            {
                PyObjectTempKeeper0 call4;
                _python_var_logging_config_func.assign1( ( call4.assign( _mvar_django__conf_import_by_path.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_LOGGING_CONFIG ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 76 );
            {
                PyObjectTempKeeper0 call6;
                DECREASE_REFCOUNT( ( call6.assign( _python_var_logging_config_func.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_DEFAULT_LOGGING.asObject() ) ) );
            }
            frame_guard.setLineNumber( 79 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_LOGGING ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 80 );
                {
                    PyObjectTempKeeper0 call8;
                    DECREASE_REFCOUNT( ( call8.assign( _python_var_logging_config_func.asObject() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_LOGGING ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_logging_config_func.updateLocalsDict( _python_var_DEFAULT_LOGGING.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf )
        {
           Py_DECREF( frame_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf );
           frame_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_configure_logging() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_configure_logging() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_configure_logging() got multiple values for keyword argument 'self'" );
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
                   "_configure_logging() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_configure_logging() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_configure_logging() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_configure_logging() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_configure_logging() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_configure_logging() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_configure_logging() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_configure_logging() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_configure_logging() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_configure_logging() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_configure_logging() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_configure_logging() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_configure_logging() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_configure_logging() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_configure_of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_default_settings, PyObject *_python_par_options )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_default_settings( _python_str_plain_default_settings, _python_par_default_settings );
    PyObjectLocalParameterVariableNoDel _python_var_options( _python_str_plain_options, _python_par_options );
    PyObjectLocalVariable _python_var_holder( _python_str_plain_holder );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_4_configure_of_class_1_LazySettings_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_function_4_configure_of_class_1_LazySettings_of_module_django__conf ) )
    {
        if ( frame_function_4_configure_of_class_1_LazySettings_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_configure_of_class_1_LazySettings_of_module_django__conf" );
#endif
            Py_DECREF( frame_function_4_configure_of_class_1_LazySettings_of_module_django__conf );
        }

        frame_function_4_configure_of_class_1_LazySettings_of_module_django__conf = MAKE_FRAME( _codeobj_ecd3ecaf3bdff02f0ce8481af6f6c14a, _module_django__conf );
    }

    FrameGuard frame_guard( frame_function_4_configure_of_class_1_LazySettings_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_function_4_configure_of_class_1_LazySettings_of_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 88 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__wrapped ) ).asObject() != _mvar_django__conf_empty.asObject0() ) )
        {
            frame_guard.setLineNumber( 89 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_RuntimeError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_b2621d7b9944cef8775f6475c787087f ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 90 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_holder.assign1( ( call1.assign( _mvar_django__conf_UserSettingsHolder.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_default_settings.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 91 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_options.asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 91 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 91 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_name.assign0( _python_tmp_element_1.asObject() );
                        _python_var_value.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 92 );
                {
                    PyObjectTempKeeper0 setattr3;
                    PyObjectTempKeeper0 setattr4;
                    ( ( setattr3.assign( _python_var_holder.asObject() ), setattr4.assign( _python_var_name.asObject() ), BUILTIN_SETATTR( setattr3.asObject0(), setattr4.asObject0(), _python_var_value.asObject() ) ), Py_None );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 93 );
        {
                PyObject *tmp_identifier = _python_var_holder.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__wrapped );
        }
        frame_guard.setLineNumber( 94 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__configure_logging ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_options.updateLocalsDict( _python_var_default_settings.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_holder.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_configure_of_class_1_LazySettings_of_module_django__conf )
        {
           Py_DECREF( frame_function_4_configure_of_class_1_LazySettings_of_module_django__conf );
           frame_function_4_configure_of_class_1_LazySettings_of_module_django__conf = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_4_configure_of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_default_settings = NULL;
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
                        PyErr_Format( PyExc_TypeError, "configure() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "configure() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "configure() keywords must be strings" );
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

    // Check if argument default_settings was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_options, _python_str_plain_default_settings );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_default_settings == NULL );

            _python_par_default_settings = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_options, _python_str_plain_default_settings );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "configure() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "configure() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "configure() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "configure() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "configure() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "configure() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "configure() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "configure() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "configure() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "configure() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "configure() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "configure() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "configure() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_default_settings != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "configure() got multiple values for keyword argument 'default_settings'" );
             goto error_exit;
         }

        _python_par_default_settings = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_default_settings == NULL )
    {
        _python_par_default_settings = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_default_settings );
    }


    return impl_function_4_configure_of_class_1_LazySettings_of_module_django__conf( self, _python_par_self, _python_par_default_settings, _python_par_options );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_default_settings );
    Py_XDECREF( _python_par_options );

    return NULL;
}

static PyObject *dparse_function_4_configure_of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_4_configure_of_class_1_LazySettings_of_module_django__conf( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_4_configure_of_class_1_LazySettings_of_module_django__conf( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_configured_of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5_configured_of_class_1_LazySettings_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_function_5_configured_of_class_1_LazySettings_of_module_django__conf ) )
    {
        if ( frame_function_5_configured_of_class_1_LazySettings_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_configured_of_class_1_LazySettings_of_module_django__conf" );
#endif
            Py_DECREF( frame_function_5_configured_of_class_1_LazySettings_of_module_django__conf );
        }

        frame_function_5_configured_of_class_1_LazySettings_of_module_django__conf = MAKE_FRAME( _codeobj_46301147af5818a711cc3bd504aebf3f, _module_django__conf );
    }

    FrameGuard frame_guard( frame_function_5_configured_of_class_1_LazySettings_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_function_5_configured_of_class_1_LazySettings_of_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 101 );
        return INCREASE_REFCOUNT( BOOL_FROM( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__wrapped ) ).asObject() != _mvar_django__conf_empty.asObject0() ) ) );
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

        if ( frame_guard.getFrame0() == frame_function_5_configured_of_class_1_LazySettings_of_module_django__conf )
        {
           Py_DECREF( frame_function_5_configured_of_class_1_LazySettings_of_module_django__conf );
           frame_function_5_configured_of_class_1_LazySettings_of_module_django__conf = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_configured_of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "configured() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "configured() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "configured() got multiple values for keyword argument 'self'" );
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
                   "configured() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "configured() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "configured() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "configured() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "configured() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "configured() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "configured() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "configured() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "configured() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "configured() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "configured() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "configured() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "configured() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "configured() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_configured_of_class_1_LazySettings_of_module_django__conf( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_configured_of_class_1_LazySettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_configured_of_class_1_LazySettings_of_module_django__conf( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_configured_of_class_1_LazySettings_of_module_django__conf( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_BaseSettings_of_module_django__conf(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___setattr__( _python_str_plain___setattr__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_conf );
    _python_var___doc__.assign0( _python_str_digest_24d79264ceda5a2ff498b7c3a64d17c1 );
    _python_var___setattr__.assign1( MAKE_FUNCTION_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf(  ) );
    return _python_var___setattr__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf ) )
    {
        if ( frame_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___setattr___of_class_2_BaseSettings_of_module_django__conf" );
#endif
            Py_DECREF( frame_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf );
        }

        frame_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf = MAKE_FRAME( _codeobj_56043cf7338d56d63a3017da43e20c42, _module_django__conf );
    }

    FrameGuard frame_guard( frame_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 109 );
        if ( ( SEQUENCE_CONTAINS_BOOL( _python_var_name.asObject(), _python_tuple_str_plain_MEDIA_URL_str_plain_STATIC_URL_tuple ) && ( CHECK_IF_TRUE( _python_var_value.asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_endswith ) ).asObject(), _python_str_chr_47 ) ).asObject() ) )) ) ) )
        {
            frame_guard.setLineNumber( 110 );
            {
                PyObjectTempKeeper0 call1;
                {
                    PyObjectTemporary tmp_exception_type( ( call1.assign( _mvar_django__conf_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_c2842ab034f810671477278bf40c8009, _python_var_name.asObject() ) ).asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        else
        {
            frame_guard.setLineNumber( 111 );
            {
                PyObjectTempKeeper0 isinstance3;
                if ( ( RICH_COMPARE_BOOL_EQ( _python_var_name.asObject(), _python_str_plain_ALLOWED_INCLUDE_ROOTS ) && ( isinstance3.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__conf_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) ) )
            {
                frame_guard.setLineNumber( 112 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_1d78f1fd3f804d2c5c16aaee16ea0be5 ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            }
        }
        frame_guard.setLineNumber( 114 );
        {
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper0 call7;
            DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( LOOKUP_BUILTIN( _python_str_plain_object ), _python_str_plain___setattr__ ) ), call6.assign( _python_var_self.asObject() ), call7.assign( _python_var_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), call7.asObject0(), _python_var_value.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf )
        {
           Py_DECREF( frame_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf );
           frame_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_value = NULL;
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
                PyErr_Format( PyExc_TypeError, "__setattr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__setattr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__setattr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf( self, _python_par_self, _python_par_name, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_Settings_of_module_django__conf(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_conf );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_Settings_of_module_django__conf(  ) );
    return _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


static PyObject *impl_function_1___init___of_class_3_Settings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_settings_module )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_settings_module( _python_str_plain_settings_module, _python_par_settings_module );
    PyObjectLocalVariable _python_var_setting( _python_str_plain_setting );
    PyObjectLocalVariable _python_var_mod( _python_str_plain_mod );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_tuple_settings( _python_str_plain_tuple_settings );
    PyObjectLocalVariable _python_var_setting_value( _python_str_plain_setting_value );
    PyObjectLocalVariable _python_var_zoneinfo_root( _python_str_plain_zoneinfo_root );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_Settings_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_Settings_of_module_django__conf ) )
    {
        if ( frame_function_1___init___of_class_3_Settings_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_Settings_of_module_django__conf" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_Settings_of_module_django__conf );
        }

        frame_function_1___init___of_class_3_Settings_of_module_django__conf = MAKE_FRAME( _codeobj_02b620f617dfeb04a7e00b06a72bdc53, _module_django__conf );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_Settings_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_Settings_of_module_django__conf ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 120 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_DIR1( _mvar_django__conf_global_settings.asObject0() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 120 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_setting.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 121 );
                {
                    PyObjectTempKeeper0 cmp7;
                    if ( ( cmp7.assign( _python_var_setting.asObject() ), RICH_COMPARE_BOOL_EQ( cmp7.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_setting.asObject(), _python_str_plain_upper ) ).asObject() ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 122 );
                    {
                        PyObjectTempKeeper0 getattr1;
                        PyObjectTempKeeper0 setattr4;
                        PyObjectTempKeeper0 setattr5;
                        ( ( setattr4.assign( _python_var_self.asObject() ), setattr5.assign( _python_var_setting.asObject() ), BUILTIN_SETATTR( setattr4.asObject0(), setattr5.asObject0(), PyObjectTemporary( ( getattr1.assign( _mvar_django__conf_global_settings.asObject0() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_var_setting.asObject(), NULL ) ) ).asObject() ) ), Py_None );
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 125 );
        {
                PyObject *tmp_identifier = _python_var_settings_module.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_SETTINGS_MODULE );
        }
        frame_guard.setLineNumber( 127 );
        try
        {
            frame_guard.setLineNumber( 128 );
            {
                PyObjectTempKeeper1 call11;
                _python_var_mod.assign1( ( call11.assign( LOOKUP_ATTRIBUTE( _mvar_django__conf_importlib.asObject0(), _python_str_plain_import_module ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_SETTINGS_MODULE ) ).asObject() ) ) );
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

            if ( _exception.matches( PyExc_ImportError ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 130 );
                {
                    PyObjectTempKeeper1 make_tuple9;
                    {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ImportError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_262cee567cd8e122ab9fa5f8ff38ec57, PyObjectTemporary( ( make_tuple9.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_SETTINGS_MODULE ) ), MAKE_TUPLE2( make_tuple9.asObject0(), _python_var_e.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
        _python_var_tuple_settings.assign0( _python_tuple_str_plain_INSTALLED_APPS_str_plain_TEMPLATE_DIRS_tuple );
        {
            frame_guard.setLineNumber( 139 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_DIR1( _python_var_mod.asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 139 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    _python_var_setting.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 140 );
                {
                    PyObjectTempKeeper0 cmp28;
                    if ( ( cmp28.assign( _python_var_setting.asObject() ), RICH_COMPARE_BOOL_EQ( cmp28.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_setting.asObject(), _python_str_plain_upper ) ).asObject() ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 141 );
                    {
                        PyObjectTempKeeper0 getattr13;
                        _python_var_setting_value.assign1( ( getattr13.assign( _python_var_mod.asObject() ), BUILTIN_GETATTR( getattr13.asObject0(), _python_var_setting.asObject(), NULL ) ) );
                    }
                    frame_guard.setLineNumber( 142 );
                    {
                        PyObjectTempKeeper0 cmp21;
                        PyObjectTempKeeper0 isinstance23;
                        if ( ( ( cmp21.assign( _python_var_setting.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp21.asObject0(), _python_var_tuple_settings.asObject() ) ) && ( isinstance23.assign( _python_var_setting_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance23.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__conf_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) ) )
                    {
                        frame_guard.setLineNumber( 144 );
                        {
                            PyObjectTempKeeper1 call18;
                            PyObjectTempKeeper1 make_tuple16;
                            DECREASE_REFCOUNT( ( call18.assign( LOOKUP_ATTRIBUTE( _mvar_django__conf_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION( call18.asObject0(), PyObjectTemporary( ( make_tuple16.assign( BINARY_OPERATION_REMAINDER( _python_str_digest_fd3bd03a0de430abd7be8052560ef399, _python_var_setting.asObject() ) ), MAKE_TUPLE2( make_tuple16.asObject0(), _mvar_django__conf_DeprecationWarning.asObject0() ) ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f154c9a58c9419d7e391901d7b7fe49e ) ).asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 147 );
                        _python_var_setting_value.assign1( MAKE_TUPLE1( _python_var_setting_value.asObject() ) );
                    }
                    }
                    frame_guard.setLineNumber( 148 );
                    {
                        PyObjectTempKeeper0 setattr25;
                        PyObjectTempKeeper0 setattr26;
                        ( ( setattr25.assign( _python_var_self.asObject() ), setattr26.assign( _python_var_setting.asObject() ), BUILTIN_SETATTR( setattr25.asObject0(), setattr26.asObject0(), _python_var_setting_value.asObject() ) ), Py_None );
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 150 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_SECRET_KEY ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 151 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf_ImproperlyConfigured.asObject0(), _python_str_digest_a67ead981ea34be0c24e7e311bc3a2a7 ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 153 );
        if ( ( HAS_ATTRIBUTE( _mvar_django__conf_time.asObject0(), _python_str_plain_tzset ) && CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_TIME_ZONE ) ).asObject() ) ) )
        {
            _python_var_zoneinfo_root.assign0( _python_str_digest_0494ad24fd830ec609d053695b4b1829 );
            frame_guard.setLineNumber( 157 );
            {
                PyObjectTempKeeper1 call30;
                PyObjectTempKeeper1 call35;
                PyObjectTempKeeper1 call_tmp32;
                PyObjectTempKeeper1 call_tmp33;
                if ( ( CHECK_IF_TRUE( PyObjectTemporary( ( call30.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__conf_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_exists ) ), CALL_FUNCTION_WITH_ARGS( call30.asObject0(), _python_var_zoneinfo_root.asObject() ) ) ).asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( ( call35.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__conf_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_exists ) ), CALL_FUNCTION_WITH_ARGS( call35.asObject0(), PyObjectTemporary( ( call_tmp32.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__conf_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_join ) ), call_tmp33.assign( MAKE_TUPLE1( _python_var_zoneinfo_root.asObject() ) ), impl_function_5_complex_call_helper_pos_star_list_of_module___internal__( call_tmp32.asObject(), call_tmp33.asObject(), CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_TIME_ZONE ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_47 ) ) ) ).asObject() ) ) ).asObject() ) )) ) )
            {
                frame_guard.setLineNumber( 159 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_c3fa7cf34604119f1c8d9d232dd0c83f, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_TIME_ZONE ) ).asObject() ) ).asObject() ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            }
            frame_guard.setLineNumber( 162 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_TIME_ZONE ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__conf_os.asObject0(), _python_str_plain_environ ) ).asObject(), _python_str_plain_TZ );
            }
            frame_guard.setLineNumber( 163 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__conf_time.asObject0(), _python_str_plain_tzset ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_settings_module.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_zoneinfo_root.updateLocalsDict( _python_var_setting_value.updateLocalsDict( _python_var_tuple_settings.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_mod.updateLocalsDict( _python_var_setting.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_Settings_of_module_django__conf )
        {
           Py_DECREF( frame_function_1___init___of_class_3_Settings_of_module_django__conf );
           frame_function_1___init___of_class_3_Settings_of_module_django__conf = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_Settings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_settings_module = NULL;
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
            if ( found == false && _python_str_plain_settings_module == key )
            {
                if (unlikely( _python_par_settings_module ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'settings_module'" );
                    goto error_exit;
                }

                _python_par_settings_module = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_settings_module, key ) )
            {
                if (unlikely( _python_par_settings_module ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'settings_module'" );
                    goto error_exit;
                }

                _python_par_settings_module = value;

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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
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
    args_usable_count = args_given < 2 ? args_given : 2;

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
         if (unlikely( _python_par_settings_module != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'settings_module'" );
             goto error_exit;
         }

        _python_par_settings_module = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_3_Settings_of_module_django__conf( self, _python_par_self, _python_par_settings_module );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_settings_module );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_Settings_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_3_Settings_of_module_django__conf( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_Settings_of_module_django__conf( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_UserSettingsHolder_of_module_django__conf(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_SETTINGS_MODULE( _python_str_plain_SETTINGS_MODULE );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___getattr__( _python_str_plain___getattr__ );
    PyObjectLocalVariable _python_var___setattr__( _python_str_plain___setattr__ );
    PyObjectLocalVariable _python_var___delattr__( _python_str_plain___delattr__ );
    PyObjectLocalVariable _python_var___dir__( _python_str_plain___dir__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_conf );
    _python_var___doc__.assign0( _python_str_digest_e89eb5526b540b76c3a9d5638356cd63 );
    _python_var_SETTINGS_MODULE.assign0( Py_None );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf(  ) );
    _python_var___getattr__.assign1( MAKE_FUNCTION_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf(  ) );
    _python_var___setattr__.assign1( MAKE_FUNCTION_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf(  ) );
    _python_var___delattr__.assign1( MAKE_FUNCTION_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf(  ) );
    _python_var___dir__.assign1( MAKE_FUNCTION_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf(  ) );
    return _python_var___dir__.updateLocalsDict( _python_var___delattr__.updateLocalsDict( _python_var___setattr__.updateLocalsDict( _python_var___getattr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_SETTINGS_MODULE.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_default_settings )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_default_settings( _python_str_plain_default_settings, _python_par_default_settings );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf ) )
    {
        if ( frame_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf" );
#endif
            Py_DECREF( frame_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf );
        }

        frame_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf = MAKE_FRAME( _codeobj_fc356dc8a18961602d1c2aa9a8e27f72, _module_django__conf );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 179 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ) ) );
                SET_SUBSCRIPT( tmp_identifier.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___dict__ ) ).asObject(), _python_str_plain__deleted );
        }
        frame_guard.setLineNumber( 180 );
        {
                PyObject *tmp_identifier = _python_var_default_settings.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_default_settings );
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
        frame_guard.getFrame0()->f_locals = _python_var_default_settings.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf )
        {
           Py_DECREF( frame_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf );
           frame_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_default_settings = NULL;
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
            if ( found == false && _python_str_plain_default_settings == key )
            {
                if (unlikely( _python_par_default_settings ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'default_settings'" );
                    goto error_exit;
                }

                _python_par_default_settings = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_default_settings, key ) )
            {
                if (unlikely( _python_par_default_settings ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'default_settings'" );
                    goto error_exit;
                }

                _python_par_default_settings = value;

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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
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
    args_usable_count = args_given < 2 ? args_given : 2;

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
         if (unlikely( _python_par_default_settings != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'default_settings'" );
             goto error_exit;
         }

        _python_par_default_settings = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf( self, _python_par_self, _python_par_default_settings );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_default_settings );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf ) )
    {
        if ( frame_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf" );
#endif
            Py_DECREF( frame_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf );
        }

        frame_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf = MAKE_FRAME( _codeobj_ac7f2dbe7aeee891201a8e1a1baa6f41, _module_django__conf );
    }

    FrameGuard frame_guard( frame_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 183 );
        {
            PyObjectTempKeeper0 cmp1;
            if ( ( cmp1.assign( _python_var_name.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__deleted ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 184 );
            RAISE_EXCEPTION_WITH_TYPE( PyExc_AttributeError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
        }
        }
        frame_guard.setLineNumber( 185 );
        {
            PyObjectTempKeeper1 getattr3;
            return ( getattr3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_default_settings ) ), BUILTIN_GETATTR( getattr3.asObject0(), _python_var_name.asObject(), NULL ) );
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

        if ( frame_guard.getFrame0() == frame_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf )
        {
           Py_DECREF( frame_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf );
           frame_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf ) )
    {
        if ( frame_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf" );
#endif
            Py_DECREF( frame_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf );
        }

        frame_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf = MAKE_FRAME( _codeobj_bbaf0ca2c70129d632b81a74deccf7f0, _module_django__conf );
    }

    FrameGuard frame_guard( frame_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 188 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__deleted ) ).asObject(), _python_str_plain_discard ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) );
        }
        frame_guard.setLineNumber( 189 );
        {
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper0 super3;
            return ( call5.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super3.assign( _mvar_django__conf_UserSettingsHolder.asObject0() ), BUILTIN_SUPER( super3.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___setattr__ ) ), call6.assign( _python_var_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), _python_var_value.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf )
        {
           Py_DECREF( frame_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf );
           frame_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_value = NULL;
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
                PyErr_Format( PyExc_TypeError, "__setattr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__setattr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__setattr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf( self, _python_par_self, _python_par_name, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf ) )
    {
        if ( frame_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf" );
#endif
            Py_DECREF( frame_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf );
        }

        frame_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf = MAKE_FRAME( _codeobj_fa2f93f9c20981407e8166b595a3e16a, _module_django__conf );
    }

    FrameGuard frame_guard( frame_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 192 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__deleted ) ).asObject(), _python_str_plain_add ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) );
        }
        frame_guard.setLineNumber( 193 );
        {
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper0 super3;
            return ( call5.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super3.assign( _mvar_django__conf_UserSettingsHolder.asObject0() ), BUILTIN_SUPER( super3.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___delattr__ ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_name.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf )
        {
           Py_DECREF( frame_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf );
           frame_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__delattr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'name'" );
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
                    PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'name'" );
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
                   "__delattr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__delattr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__delattr__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf = NULL;

    if ( isFrameUnusable( frame_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf ) )
    {
        if ( frame_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf" );
#endif
            Py_DECREF( frame_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf );
        }

        frame_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf = MAKE_FRAME( _codeobj_84791279faab5a9128be73b5e5f5f619, _module_django__conf );
    }

    FrameGuard frame_guard( frame_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 196 );
        {
            PyObjectTempKeeper1 op1;
            return ( op1.assign( TO_LIST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___dict__ ) ).asObject() ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( BUILTIN_DIR1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_default_settings ) ).asObject() ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf )
        {
           Py_DECREF( frame_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf );
           frame_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__dir__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__dir__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__dir__() got multiple values for keyword argument 'self'" );
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
                   "__dir__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__dir__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__dir__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__dir__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__dir__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__dir__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__dir__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__dir__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__dir__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__dir__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__dir__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__dir__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__dir__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__dir__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_Settings_of_module_django__conf(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_Settings_of_module_django__conf,
        dparse_function_1___init___of_class_3_Settings_of_module_django__conf,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_02b620f617dfeb04a7e00b06a72bdc53,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf,
        dparse_function_1___init___of_class_4_UserSettingsHolder_of_module_django__conf,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fc356dc8a18961602d1c2aa9a8e27f72,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf,
        _python_str_digest_261eb06c4ed9e14ac110c8dadcd72469
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf,
        dparse_function_1___setattr___of_class_2_BaseSettings_of_module_django__conf,
        _python_str_plain___setattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_56043cf7338d56d63a3017da43e20c42,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__setup_of_class_1_LazySettings_of_module_django__conf(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__setup_of_class_1_LazySettings_of_module_django__conf,
        dparse_function_1__setup_of_class_1_LazySettings_of_module_django__conf,
        _python_str_plain__setup,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c1288b3eb08d0831ad942a8be414b832,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf,
        _python_str_digest_a5bb3ab678d8ee69ceb877f28705dd3b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___getattr___of_class_1_LazySettings_of_module_django__conf(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___getattr___of_class_1_LazySettings_of_module_django__conf,
        dparse_function_2___getattr___of_class_1_LazySettings_of_module_django__conf,
        _python_str_plain___getattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_958fd32db225644fe84048185ea292fd,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf,
        dparse_function_2___getattr___of_class_4_UserSettingsHolder_of_module_django__conf,
        _python_str_plain___getattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ac7f2dbe7aeee891201a8e1a1baa6f41,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf,
        dparse_function_3___setattr___of_class_4_UserSettingsHolder_of_module_django__conf,
        _python_str_plain___setattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bbaf0ca2c70129d632b81a74deccf7f0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf,
        dparse_function_3__configure_logging_of_class_1_LazySettings_of_module_django__conf,
        _python_str_plain__configure_logging,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b0b6e813ba9f3942fe93794a4fc7531b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf,
        _python_str_digest_e459b3e05a3478694f8c35a8e80ebf06
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf,
        dparse_function_4___delattr___of_class_4_UserSettingsHolder_of_module_django__conf,
        _python_str_plain___delattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fa2f93f9c20981407e8166b595a3e16a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_configure_of_class_1_LazySettings_of_module_django__conf( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_configure_of_class_1_LazySettings_of_module_django__conf,
        dparse_function_4_configure_of_class_1_LazySettings_of_module_django__conf,
        _python_str_plain_configure,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ecd3ecaf3bdff02f0ce8481af6f6c14a,
        defaults,
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf,
        _python_str_digest_e3c8651ce07b4bce16f0747c71324be0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf,
        dparse_function_5___dir___of_class_4_UserSettingsHolder_of_module_django__conf,
        _python_str_plain___dir__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_84791279faab5a9128be73b5e5f5f619,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_configured_of_class_1_LazySettings_of_module_django__conf(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_configured_of_class_1_LazySettings_of_module_django__conf,
        dparse_function_5_configured_of_class_1_LazySettings_of_module_django__conf,
        _python_str_plain_configured,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_46301147af5818a711cc3bd504aebf3f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf,
        _python_str_digest_a21424fb4eb2e6c7c393e6f852571a8b
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.conf",   /* m_name */
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

MOD_INIT_DECL( django__conf )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__conf );
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

    // puts( "in initdjango__conf" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__conf = Py_InitModule4(
        "django.conf",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__conf = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__conf = (PyDictObject *)((PyModuleObject *)_module_django__conf)->md_dict;

    assertObject( _module_django__conf );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_262bd828f67160809670905d543ae3a0, _module_django__conf );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__conf );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__conf != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_4972568d1c9bcaddda62abc43d050f2b );
    UPDATE_STRING_DICT0( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_f378e0a2e76add1c21305b5920e67be6 );
    UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain___path__, LIST_COPY( _python_list_str_digest_f5410b0e4f9f8ecfeb23d0da15133d6e_list ) );
    PyFrameObject *frame_module_django__conf = MAKE_FRAME( _codeobj_d35db99c5614d27269c647b1acb0ac7d, _module_django__conf );

    FrameGuard frame_guard( frame_module_django__conf );
    try
    {
        assert( Py_REFCNT( frame_module_django__conf ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_logging, IMPORT_MODULE( _python_str_plain_logging, ((PyModuleObject *)_module_django__conf)->md_dict, ((PyModuleObject *)_module_django__conf)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__conf)->md_dict, ((PyModuleObject *)_module_django__conf)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__conf)->md_dict, ((PyModuleObject *)_module_django__conf)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_time, IMPORT_MODULE( _python_str_plain_time, ((PyModuleObject *)_module_django__conf)->md_dict, ((PyModuleObject *)_module_django__conf)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_warnings, IMPORT_MODULE( _python_str_plain_warnings, ((PyModuleObject *)_module_django__conf)->md_dict, ((PyModuleObject *)_module_django__conf)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_global_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__conf)->md_dict, ((PyModuleObject *)_module_django__conf)->md_dict, _python_list_str_plain_global_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_global_settings ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_ImproperlyConfigured, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__conf)->md_dict, ((PyModuleObject *)_module_django__conf)->md_dict, _python_list_str_plain_ImproperlyConfigured_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImproperlyConfigured ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_LazyObject, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__conf)->md_dict, ((PyModuleObject *)_module_django__conf)->md_dict, _python_list_str_plain_LazyObject_str_plain_empty_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_LazyObject ) );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_empty, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__conf)->md_dict, ((PyModuleObject *)_module_django__conf)->md_dict, _python_list_str_plain_LazyObject_str_plain_empty_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_empty ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_importlib, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__conf)->md_dict, ((PyModuleObject *)_module_django__conf)->md_dict, _python_list_str_plain_importlib_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_importlib ) );
        frame_guard.setLineNumber( 19 );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_import_by_path, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_03bb9f131d782ff4dbd31e0966379285, ((PyModuleObject *)_module_django__conf)->md_dict, ((PyModuleObject *)_module_django__conf)->md_dict, _python_list_str_plain_import_by_path_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_by_path ) );
        frame_guard.setLineNumber( 20 );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__conf)->md_dict, ((PyModuleObject *)_module_django__conf)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        UPDATE_STRING_DICT0( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_ENVIRONMENT_VARIABLE, _python_str_plain_DJANGO_SETTINGS_MODULE );
        {
            frame_guard.setLineNumber( 25 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__conf_LazyObject.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_LazySettings_of_module_django__conf(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__conf___metaclass__.isInitialized( false ) ? _mvar_django__conf___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_LazySettings, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_LazySettings, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 104 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_BaseSettings_of_module_django__conf(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__conf___metaclass__.isInitialized( false ) ? _mvar_django__conf___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_BaseSettings, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_BaseSettings, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 117 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__conf_BaseSettings.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_Settings_of_module_django__conf(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__conf___metaclass__.isInitialized( false ) ? _mvar_django__conf___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_Settings, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_Settings, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 166 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__conf_BaseSettings.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_UserSettingsHolder_of_module_django__conf(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__conf___metaclass__.isInitialized( false ) ? _mvar_django__conf___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call15;
                _tmp_python_tmp_class = ( call13.assign( _python_tmp_metaclass.asObject() ), call15.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_str_plain_UserSettingsHolder, call15.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_UserSettingsHolder, _python_tmp_class.asObject() );
        }
        frame_guard.setLineNumber( 198 );
        UPDATE_STRING_DICT1( _moduledict_django__conf, (Nuitka_StringObject *)_python_str_plain_settings, CALL_FUNCTION_NO_ARGS( _mvar_django__conf_LazySettings.asObject0() ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__conf)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__conf );
}
