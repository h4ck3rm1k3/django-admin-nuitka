// Generated code for Python source for module 'django.core.management.validation'
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

// The _module_django__core__management__validation is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__management__validation;
PyDictObject *_moduledict_django__core__management__validation;

// The module level variables.
static PyObjectGlobalVariable_django__core__management__validation _mvar_django__core__management__validation_ModelErrorCollection( &_module_django__core__management__validation, &_python_str_plain_ModelErrorCollection );
static PyObjectGlobalVariable_django__core__management__validation _mvar_django__core__management__validation___metaclass__( &_module_django__core__management__validation, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__management__validation _mvar_django__core__management__validation_collections( &_module_django__core__management__validation, &_python_str_plain_collections );
static PyObjectGlobalVariable_django__core__management__validation _mvar_django__core__management__validation_color_style( &_module_django__core__management__validation, &_python_str_plain_color_style );
static PyObjectGlobalVariable_django__core__management__validation _mvar_django__core__management__validation_force_str( &_module_django__core__management__validation, &_python_str_plain_force_str );
static PyObjectGlobalVariable_django__core__management__validation _mvar_django__core__management__validation_is_iterable( &_module_django__core__management__validation, &_python_str_plain_is_iterable );
static PyObjectGlobalVariable_django__core__management__validation _mvar_django__core__management__validation_settings( &_module_django__core__management__validation, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__core__management__validation _mvar_django__core__management__validation_six( &_module_django__core__management__validation, &_python_str_plain_six );
static PyObjectGlobalVariable_django__core__management__validation _mvar_django__core__management__validation_sys( &_module_django__core__management__validation, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__core__management__validation _mvar_django__core__management__validation_validate_local_fields( &_module_django__core__management__validation, &_python_str_plain_validate_local_fields );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_ModelErrorCollection_of_module_django__core__management__validation(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_2_get_validation_errors_of_module_django__core__management__validation( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_rel_field );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation(  );


static PyObject *MAKE_FUNCTION_function_2_get_validation_errors_of_module_django__core__management__validation(  );


static PyObject *MAKE_FUNCTION_function_3_validate_local_fields_of_module_django__core__management__validation(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_ModelErrorCollection_of_module_django__core__management__validation(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_add( _python_str_plain_add );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_validation );
    static PyFrameObject *frame_class_1_ModelErrorCollection_of_module_django__core__management__validation = NULL;

    if ( isFrameUnusable( frame_class_1_ModelErrorCollection_of_module_django__core__management__validation ) )
    {
        if ( frame_class_1_ModelErrorCollection_of_module_django__core__management__validation )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_1_ModelErrorCollection_of_module_django__core__management__validation" );
#endif
            Py_DECREF( frame_class_1_ModelErrorCollection_of_module_django__core__management__validation );
        }

        frame_class_1_ModelErrorCollection_of_module_django__core__management__validation = MAKE_FRAME( _codeobj_e3dda73fc28a4dcb7a11f4e364d20f93, _module_django__core__management__validation );
    }

    FrameGuard frame_guard( frame_class_1_ModelErrorCollection_of_module_django__core__management__validation );
    try
    {
        assert( Py_REFCNT( frame_class_1_ModelErrorCollection_of_module_django__core__management__validation ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 12 );
        _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__validation_sys.asObject0(), _python_str_plain_stdout ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_add.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_class_1_ModelErrorCollection_of_module_django__core__management__validation )
        {
           Py_DECREF( frame_class_1_ModelErrorCollection_of_module_django__core__management__validation );
           frame_class_1_ModelErrorCollection_of_module_django__core__management__validation = NULL;
        }

        throw;
    }
    _python_var_add.assign1( MAKE_FUNCTION_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation(  ) );
    return _python_var_add.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_outfile )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_outfile( _python_str_plain_outfile, _python_par_outfile );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation ) )
    {
        if ( frame_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation );
        }

        frame_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation = MAKE_FRAME( _codeobj_d354c32de71cac8c090054dc1d694c71, _module_django__core__management__validation );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 13 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain_errors );
        frame_guard.setLineNumber( 14 );
        {
                PyObject *tmp_identifier = _python_var_outfile.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_outfile );
        }
        frame_guard.setLineNumber( 15 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( _mvar_django__core__management__validation_color_style.asObject0() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_outfile.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation )
        {
           Py_DECREF( frame_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation );
           frame_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_outfile = NULL;
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
            if ( found == false && _python_str_plain_outfile == key )
            {
                if (unlikely( _python_par_outfile ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'outfile'" );
                    goto error_exit;
                }

                _python_par_outfile = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_outfile, key ) )
            {
                if (unlikely( _python_par_outfile ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'outfile'" );
                    goto error_exit;
                }

                _python_par_outfile = value;

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
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
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
                if ( 2 == 1 )
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
         if (unlikely( _python_par_outfile != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'outfile'" );
             goto error_exit;
         }

        _python_par_outfile = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_outfile == NULL )
    {
        _python_par_outfile = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_outfile );
    }


    return impl_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation( self, _python_par_self, _python_par_outfile );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_outfile );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_context, PyObject *_python_par_error )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_context( _python_str_plain_context, _python_par_context );
    PyObjectLocalParameterVariableNoDel _python_var_error( _python_str_plain_error, _python_par_error );

    // Actual function code.
    static PyFrameObject *frame_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation = NULL;

    if ( isFrameUnusable( frame_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation ) )
    {
        if ( frame_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation" );
#endif
            Py_DECREF( frame_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation );
        }

        frame_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation = MAKE_FRAME( _codeobj_e62701a83ef005d92de1c752d9859a44, _module_django__core__management__validation );
    }

    FrameGuard frame_guard( frame_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation );
    try
    {
        assert( Py_REFCNT( frame_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 18 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 make_tuple1;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_errors ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( make_tuple1.assign( _python_var_context.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_var_error.asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 19 );
        {
            PyObjectTempKeeper1 call11;
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper1 call9;
            PyObjectTempKeeper0 make_tuple5;
            DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_outfile ) ).asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style ) ).asObject(), _python_str_plain_ERROR ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( ( call7.assign( _mvar_django__core__management__validation_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_cc8c8db62cd576ee568f1aa6c09d5ff3, PyObjectTemporary( ( make_tuple5.assign( _python_var_context.asObject() ), MAKE_TUPLE2( make_tuple5.asObject0(), _python_var_error.asObject() ) ) ).asObject() ) ).asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_error.updateLocalsDict( _python_var_context.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation )
        {
           Py_DECREF( frame_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation );
           frame_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_context = NULL;
    PyObject *_python_par_error = NULL;
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
                PyErr_Format( PyExc_TypeError, "add() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_context == key )
            {
                if (unlikely( _python_par_context ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'context'" );
                    goto error_exit;
                }

                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_error == key )
            {
                if (unlikely( _python_par_error ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'error'" );
                    goto error_exit;
                }

                _python_par_error = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_context, key ) )
            {
                if (unlikely( _python_par_context ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'context'" );
                    goto error_exit;
                }

                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_error, key ) )
            {
                if (unlikely( _python_par_error ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'error'" );
                    goto error_exit;
                }

                _python_par_error = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "add() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "add() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "add() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "add() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "add() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "add() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "add() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "add() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "add() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "add() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_context != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'context'" );
             goto error_exit;
         }

        _python_par_context = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_error != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'error'" );
             goto error_exit;
         }

        _python_par_error = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation( self, _python_par_self, _python_par_context, _python_par_error );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_context );
    Py_XDECREF( _python_par_error );

    return NULL;
}

static PyObject *dparse_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_get_validation_errors_of_module_django__core__management__validation( Nuitka_FunctionObject *self, PyObject *_python_par_outfile, PyObject *_python_par_app )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_outfile( _python_str_plain_outfile, _python_par_outfile );
    PyObjectLocalParameterVariableNoDel _python_var_app( _python_str_plain_app, _python_par_app );
    PyObjectLocalVariable _python_var_models( _python_str_plain_models );
    PyObjectLocalVariable _python_var_connection( _python_str_plain_connection );
    PyObjectLocalVariable _python_var_get_app_errors( _python_str_plain_get_app_errors );
    PyObjectLocalVariable _python_var_SET_NULL( _python_str_plain_SET_NULL );
    PyObjectLocalVariable _python_var_SET_DEFAULT( _python_str_plain_SET_DEFAULT );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_app_name( _python_str_plain_app_name );
    PyObjectLocalVariable _python_var_error( _python_str_plain_error );
    PyObjectLocalVariable _python_var_cls( _python_str_plain_cls );
    PyObjectLocalVariable _python_var_opts( _python_str_plain_opts );
    PyObjectLocalVariable _python_var_app_label( _python_str_plain_app_label );
    PyObjectLocalVariable _python_var_model_name( _python_str_plain_model_name );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );
    PyObjectLocalVariable _python_var_max_length( _python_str_plain_max_length );
    PyObjectLocalVariable _python_var_decimalp_ok( _python_str_plain_decimalp_ok );
    PyObjectLocalVariable _python_var_mdigits_ok( _python_str_plain_mdigits_ok );
    PyObjectLocalVariable _python_var_decimalp_msg( _python_str_plain_decimalp_msg );
    PyObjectLocalVariable _python_var_decimal_places( _python_str_plain_decimal_places );
    PyObjectLocalVariable _python_var_mdigits_msg( _python_str_plain_mdigits_msg );
    PyObjectLocalVariable _python_var_max_digits( _python_str_plain_max_digits );
    PyObjectLocalVariable _python_var_invalid_values_msg( _python_str_plain_invalid_values_msg );
    PyObjectLocalVariable _python_var_Image( _python_str_plain_Image );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );
    PyObjectLocalVariable _python_var_has_unique_field( _python_str_plain_has_unique_field );
    PyObjectLocalVariable _python_var_rel_field( _python_str_plain_rel_field );
    PyObjectLocalVariable _python_var_rel_opts( _python_str_plain_rel_opts );
    PyObjectLocalVariable _python_var_rel_name( _python_str_plain_rel_name );
    PyObjectLocalVariable _python_var_rel_query_name( _python_str_plain_rel_query_name );
    PyObjectLocalVariable _python_var_r( _python_str_plain_r );
    PyObjectLocalVariable _python_var_seen_intermediary_signatures( _python_str_plain_seen_intermediary_signatures );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_from_model( _python_str_plain_from_model );
    PyObjectLocalVariable _python_var_to_model( _python_str_plain_to_model );
    PyObjectLocalVariable _python_var_seen_from( _python_str_plain_seen_from );
    PyObjectLocalVariable _python_var_seen_to( _python_str_plain_seen_to );
    PyObjectLocalVariable _python_var_seen_self( _python_str_plain_seen_self );
    PyObjectLocalVariable _python_var_inter_field( _python_str_plain_inter_field );
    PyObjectLocalVariable _python_var_rel_to( _python_str_plain_rel_to );
    PyObjectLocalVariable _python_var_signature( _python_str_plain_signature );
    PyObjectLocalVariable _python_var_seen_related_fk( _python_str_plain_seen_related_fk );
    PyObjectLocalVariable _python_var_seen_this_fk( _python_str_plain_seen_this_fk );
    PyObjectLocalVariable _python_var_field( _python_str_plain_field );
    PyObjectLocalVariable _python_var_field_name( _python_str_plain_field_name );
    PyObjectLocalVariable _python_var_ut( _python_str_plain_ut );
    PyObjectLocalVariable _python_var_it( _python_str_plain_it );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_validation_errors_of_module_django__core__management__validation = NULL;

    if ( isFrameUnusable( frame_function_2_get_validation_errors_of_module_django__core__management__validation ) )
    {
        if ( frame_function_2_get_validation_errors_of_module_django__core__management__validation )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_validation_errors_of_module_django__core__management__validation" );
#endif
            Py_DECREF( frame_function_2_get_validation_errors_of_module_django__core__management__validation );
        }

        frame_function_2_get_validation_errors_of_module_django__core__management__validation = MAKE_FRAME( _codeobj_555d5fa1a4e4c6f44a610e9a129af647, _module_django__core__management__validation );
    }

    FrameGuard frame_guard( frame_function_2_get_validation_errors_of_module_django__core__management__validation );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_validation_errors_of_module_django__core__management__validation ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 28 );
        _python_var_models.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, PyObjectTemporary( _python_var_app.updateLocalsDict( _python_var_outfile.updateLocalsDict( _python_var_it.updateLocalsDict( _python_var_ut.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_seen_this_fk.updateLocalsDict( _python_var_seen_related_fk.updateLocalsDict( _python_var_signature.updateLocalsDict( _python_var_rel_to.updateLocalsDict( _python_var_inter_field.updateLocalsDict( _python_var_seen_self.updateLocalsDict( _python_var_seen_to.updateLocalsDict( _python_var_seen_from.updateLocalsDict( _python_var_to_model.updateLocalsDict( _python_var_from_model.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_seen_intermediary_signatures.updateLocalsDict( _python_var_r.updateLocalsDict( _python_var_rel_query_name.updateLocalsDict( _python_var_rel_name.updateLocalsDict( _python_var_rel_opts.updateLocalsDict( _python_var_rel_field.updateLocalsDict( _python_var_has_unique_field.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_Image.updateLocalsDict( _python_var_invalid_values_msg.updateLocalsDict( _python_var_max_digits.updateLocalsDict( _python_var_mdigits_msg.updateLocalsDict( _python_var_decimal_places.updateLocalsDict( _python_var_decimalp_msg.updateLocalsDict( _python_var_mdigits_ok.updateLocalsDict( _python_var_decimalp_ok.updateLocalsDict( _python_var_max_length.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_model_name.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_error.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_SET_DEFAULT.updateLocalsDict( _python_var_SET_NULL.updateLocalsDict( _python_var_get_app_errors.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_models.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_models_str_plain_connection_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_models ) );
        _python_var_connection.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, PyObjectTemporary( _python_var_app.updateLocalsDict( _python_var_outfile.updateLocalsDict( _python_var_it.updateLocalsDict( _python_var_ut.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_seen_this_fk.updateLocalsDict( _python_var_seen_related_fk.updateLocalsDict( _python_var_signature.updateLocalsDict( _python_var_rel_to.updateLocalsDict( _python_var_inter_field.updateLocalsDict( _python_var_seen_self.updateLocalsDict( _python_var_seen_to.updateLocalsDict( _python_var_seen_from.updateLocalsDict( _python_var_to_model.updateLocalsDict( _python_var_from_model.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_seen_intermediary_signatures.updateLocalsDict( _python_var_r.updateLocalsDict( _python_var_rel_query_name.updateLocalsDict( _python_var_rel_name.updateLocalsDict( _python_var_rel_opts.updateLocalsDict( _python_var_rel_field.updateLocalsDict( _python_var_has_unique_field.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_Image.updateLocalsDict( _python_var_invalid_values_msg.updateLocalsDict( _python_var_max_digits.updateLocalsDict( _python_var_mdigits_msg.updateLocalsDict( _python_var_decimal_places.updateLocalsDict( _python_var_decimalp_msg.updateLocalsDict( _python_var_mdigits_ok.updateLocalsDict( _python_var_decimalp_ok.updateLocalsDict( _python_var_max_length.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_model_name.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_error.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_SET_DEFAULT.updateLocalsDict( _python_var_SET_NULL.updateLocalsDict( _python_var_get_app_errors.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_models.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_models_str_plain_connection_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_connection ) );
        frame_guard.setLineNumber( 29 );
        _python_var_get_app_errors.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3499135d88f0bcb0b5db570911dd639, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, PyObjectTemporary( _python_var_app.updateLocalsDict( _python_var_outfile.updateLocalsDict( _python_var_it.updateLocalsDict( _python_var_ut.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_seen_this_fk.updateLocalsDict( _python_var_seen_related_fk.updateLocalsDict( _python_var_signature.updateLocalsDict( _python_var_rel_to.updateLocalsDict( _python_var_inter_field.updateLocalsDict( _python_var_seen_self.updateLocalsDict( _python_var_seen_to.updateLocalsDict( _python_var_seen_from.updateLocalsDict( _python_var_to_model.updateLocalsDict( _python_var_from_model.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_seen_intermediary_signatures.updateLocalsDict( _python_var_r.updateLocalsDict( _python_var_rel_query_name.updateLocalsDict( _python_var_rel_name.updateLocalsDict( _python_var_rel_opts.updateLocalsDict( _python_var_rel_field.updateLocalsDict( _python_var_has_unique_field.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_Image.updateLocalsDict( _python_var_invalid_values_msg.updateLocalsDict( _python_var_max_digits.updateLocalsDict( _python_var_mdigits_msg.updateLocalsDict( _python_var_decimal_places.updateLocalsDict( _python_var_decimalp_msg.updateLocalsDict( _python_var_mdigits_ok.updateLocalsDict( _python_var_decimalp_ok.updateLocalsDict( _python_var_max_length.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_model_name.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_error.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_SET_DEFAULT.updateLocalsDict( _python_var_SET_NULL.updateLocalsDict( _python_var_get_app_errors.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_models.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_get_app_errors_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_app_errors ) );
        frame_guard.setLineNumber( 30 );
        _python_var_SET_NULL.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8638e65d7a0f1d4a4dd67c303bb33fe0, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, PyObjectTemporary( _python_var_app.updateLocalsDict( _python_var_outfile.updateLocalsDict( _python_var_it.updateLocalsDict( _python_var_ut.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_seen_this_fk.updateLocalsDict( _python_var_seen_related_fk.updateLocalsDict( _python_var_signature.updateLocalsDict( _python_var_rel_to.updateLocalsDict( _python_var_inter_field.updateLocalsDict( _python_var_seen_self.updateLocalsDict( _python_var_seen_to.updateLocalsDict( _python_var_seen_from.updateLocalsDict( _python_var_to_model.updateLocalsDict( _python_var_from_model.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_seen_intermediary_signatures.updateLocalsDict( _python_var_r.updateLocalsDict( _python_var_rel_query_name.updateLocalsDict( _python_var_rel_name.updateLocalsDict( _python_var_rel_opts.updateLocalsDict( _python_var_rel_field.updateLocalsDict( _python_var_has_unique_field.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_Image.updateLocalsDict( _python_var_invalid_values_msg.updateLocalsDict( _python_var_max_digits.updateLocalsDict( _python_var_mdigits_msg.updateLocalsDict( _python_var_decimal_places.updateLocalsDict( _python_var_decimalp_msg.updateLocalsDict( _python_var_mdigits_ok.updateLocalsDict( _python_var_decimalp_ok.updateLocalsDict( _python_var_max_length.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_model_name.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_error.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_SET_DEFAULT.updateLocalsDict( _python_var_SET_NULL.updateLocalsDict( _python_var_get_app_errors.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_models.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_SET_NULL_str_plain_SET_DEFAULT_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SET_NULL ) );
        _python_var_SET_DEFAULT.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8638e65d7a0f1d4a4dd67c303bb33fe0, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, PyObjectTemporary( _python_var_app.updateLocalsDict( _python_var_outfile.updateLocalsDict( _python_var_it.updateLocalsDict( _python_var_ut.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_seen_this_fk.updateLocalsDict( _python_var_seen_related_fk.updateLocalsDict( _python_var_signature.updateLocalsDict( _python_var_rel_to.updateLocalsDict( _python_var_inter_field.updateLocalsDict( _python_var_seen_self.updateLocalsDict( _python_var_seen_to.updateLocalsDict( _python_var_seen_from.updateLocalsDict( _python_var_to_model.updateLocalsDict( _python_var_from_model.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_seen_intermediary_signatures.updateLocalsDict( _python_var_r.updateLocalsDict( _python_var_rel_query_name.updateLocalsDict( _python_var_rel_name.updateLocalsDict( _python_var_rel_opts.updateLocalsDict( _python_var_rel_field.updateLocalsDict( _python_var_has_unique_field.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_Image.updateLocalsDict( _python_var_invalid_values_msg.updateLocalsDict( _python_var_max_digits.updateLocalsDict( _python_var_mdigits_msg.updateLocalsDict( _python_var_decimal_places.updateLocalsDict( _python_var_decimalp_msg.updateLocalsDict( _python_var_mdigits_ok.updateLocalsDict( _python_var_decimalp_ok.updateLocalsDict( _python_var_max_length.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_model_name.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_error.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_SET_DEFAULT.updateLocalsDict( _python_var_SET_NULL.updateLocalsDict( _python_var_get_app_errors.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_models.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_SET_NULL_str_plain_SET_DEFAULT_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SET_DEFAULT ) );
        frame_guard.setLineNumber( 32 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_e.assign1( ( call1.assign( _mvar_django__core__management__validation_ModelErrorCollection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_outfile.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 34 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _python_var_get_app_errors.asObject() ) ).asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 34 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 34 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_app_name.assign0( _python_tmp_element_1.asObject() );
                        _python_var_error.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 35 );
                {
                    PyObjectTempKeeper1 call3;
                    PyObjectTempKeeper0 call4;
                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call4.assign( _python_var_app_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_error.asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        {
            frame_guard.setLineNumber( 37 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper1 call6;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_get_models ) ), CALL_FUNCTION( call6.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_app.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_d725099f0e2c36edb8e3dbd607bd6891 ) ).asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 37 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    _python_var_cls.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 38 );
                _python_var_opts.assign1( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__meta ) );
                frame_guard.setLineNumber( 41 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_swapped ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 42 );
                    try
                    {
                        {
                            frame_guard.setLineNumber( 43 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_swapped ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_str_dot ) ).asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_app_label.assign0( _python_tmp_element_1.asObject() );
                            _python_var_model_name.assign0( _python_tmp_element_2.asObject() );
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

                        if ( _exception.matches( PyExc_ValueError ) )
                        {
                            frame_guard.detachFrame();
                            frame_guard.setLineNumber( 45 );
                            {
                                PyObjectTempKeeper0 call10;
                                PyObjectTempKeeper1 call9;
                                DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call10.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), call10.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_ebfc3b70c510a4cbfead77ce872efff3, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_swappable ) ).asObject() ) ).asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 46 );
                            CONSIDER_THREADING(); continue;
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
                    frame_guard.setLineNumber( 47 );
                    {
                        PyObjectTempKeeper1 call15;
                        PyObjectTempKeeper0 call16;
                        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call15.assign( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_get_model ) ), call16.assign( _python_var_app_label.asObject() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), call16.asObject0(), _python_var_model_name.asObject() ) ) ).asObject() ) )) )
                    {
                        frame_guard.setLineNumber( 48 );
                        {
                            PyObjectTempKeeper1 call12;
                            PyObjectTempKeeper0 call13;
                            DECREASE_REFCOUNT( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call13.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), call13.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_d3f15021b7a60d4a3225f70d2dc9b945, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_swapped ) ).asObject() ) ).asObject() ) ) );
                        }
                    }
                    }
                    frame_guard.setLineNumber( 50 );
                    CONSIDER_THREADING(); continue;
                }
                frame_guard.setLineNumber( 53 );
                {
                    PyObjectTempKeeper1 cmp33;
                    PyObjectTempKeeper1 make_tuple31;
                    if ( ( cmp33.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__management__validation_settings.asObject0(), _python_str_plain_AUTH_USER_MODEL ) ), RICH_COMPARE_BOOL_EQ( cmp33.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_fffb2b4b5e45eb8109d63f2497fbdbc1, PyObjectTemporary( ( make_tuple31.assign( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_app_label ) ), MAKE_TUPLE2( make_tuple31.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_object_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 55 );
                    if ( (!( BUILTIN_ISINSTANCE_BOOL( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain_REQUIRED_FIELDS ) ).asObject(), PyObjectTemporary( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_list ), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) ).asObject() ) )) )
                    {
                        frame_guard.setLineNumber( 56 );
                        {
                            PyObjectTempKeeper1 call18;
                            DECREASE_REFCOUNT( ( call18.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), _python_var_opts.asObject(), _python_str_digest_fda131b60a09832c078236acc378cf67 ) ) );
                        }
                    }
                    frame_guard.setLineNumber( 59 );
                    {
                        PyObjectTempKeeper1 cmp24;
                        if ( ( cmp24.assign( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain_USERNAME_FIELD ) ), SEQUENCE_CONTAINS_BOOL( cmp24.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain_REQUIRED_FIELDS ) ).asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 60 );
                        {
                            PyObjectTempKeeper1 call21;
                            DECREASE_REFCOUNT( ( call21.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), _python_var_opts.asObject(), _python_str_digest_1a2b705ac67b6a91d8c837eb9b6ef7bf ) ) );
                        }
                    }
                    }
                    frame_guard.setLineNumber( 63 );
                    {
                        PyObjectTempKeeper1 call29;
                        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call29.assign( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_get_field ) ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain_USERNAME_FIELD ) ).asObject() ) ) ).asObject(), _python_str_plain_unique ) ).asObject() ) )) )
                    {
                        frame_guard.setLineNumber( 64 );
                        {
                            PyObjectTempKeeper1 call26;
                            DECREASE_REFCOUNT( ( call26.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), CALL_FUNCTION_WITH_ARGS( call26.asObject0(), _python_var_opts.asObject(), _python_str_digest_3426c1c8f48bad1afefde2d8eaf86a7b ) ) );
                        }
                    }
                    }
                }
                }
                {
                    frame_guard.setLineNumber( 67 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_local_fields ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 67 );
                            PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_3 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                            _python_var_f.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 68 );
                        if ( ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject(), _python_str_plain_id ) && ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_primary_key ) ).asObject() ) )) && RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_pk ) ).asObject(), _python_str_plain_name ) ).asObject(), _python_str_plain_id ) ) ) )
                        {
                            frame_guard.setLineNumber( 69 );
                            {
                                PyObjectTempKeeper1 call35;
                                PyObjectTempKeeper0 call36;
                                DECREASE_REFCOUNT( ( call35.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call36.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call35.asObject0(), call36.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_acc59de55368e6859a090a4ff38601b6, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                            }
                        }
                        frame_guard.setLineNumber( 70 );
                        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject(), _python_str_plain_endswith ) ).asObject(), _python_str_plain__ ) ).asObject() ) )
                        {
                            frame_guard.setLineNumber( 71 );
                            {
                                PyObjectTempKeeper1 call38;
                                PyObjectTempKeeper0 call39;
                                DECREASE_REFCOUNT( ( call38.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call39.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call38.asObject0(), call39.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_4edf861298d2dd86baa907aa572387b1, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                            }
                        }
                        frame_guard.setLineNumber( 72 );
                        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_primary_key ) ).asObject() ) && ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_null ) ).asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_features ) ).asObject(), _python_str_plain_interprets_empty_strings_as_nulls ) ).asObject() ) )) ) ) )
                        {
                            frame_guard.setLineNumber( 77 );
                            {
                                PyObjectTempKeeper1 call41;
                                PyObjectTempKeeper0 call42;
                                DECREASE_REFCOUNT( ( call41.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call42.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call41.asObject0(), call42.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_d107d970249d1b189d3d9e81ba349727, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                            }
                        }
                        frame_guard.setLineNumber( 78 );
                        {
                            PyObjectTempKeeper0 isinstance50;
                            if ( ( isinstance50.assign( _python_var_f.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance50.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_CharField ) ).asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 79 );
                            try
                            {
                                frame_guard.setLineNumber( 80 );
                                _python_var_max_length.assign1( TO_INT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_max_length ) ).asObject() ) );
                                frame_guard.setLineNumber( 81 );
                                if ( RICH_COMPARE_BOOL_LE( _python_var_max_length.asObject(), _python_int_0 ) )
                                {
                                    frame_guard.setLineNumber( 82 );
                                    {
                                        PyObjectTempKeeper1 call47;
                                        PyObjectTempKeeper0 call48;
                                        DECREASE_REFCOUNT( ( call47.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call48.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call47.asObject0(), call48.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_8d132b52edf1f39ba7bbaa4bd49c5919, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
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

                                frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
                                ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
                                _exception.toExceptionHandler();

                                if ( _exception.matches( PyExc_ValueError ) || _exception.matches( PyExc_TypeError ) )
                                {
                                    frame_guard.detachFrame();
                                    frame_guard.setLineNumber( 84 );
                                    {
                                        PyObjectTempKeeper1 call44;
                                        PyObjectTempKeeper0 call45;
                                        DECREASE_REFCOUNT( ( call44.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call45.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call44.asObject0(), call45.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_8d132b52edf1f39ba7bbaa4bd49c5919, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
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
                        }
                        frame_guard.setLineNumber( 85 );
                        {
                            PyObjectTempKeeper0 isinstance79;
                            if ( ( isinstance79.assign( _python_var_f.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance79.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_DecimalField ) ).asObject() ) ) )
                        {
                            {
                                frame_guard.setLineNumber( 86 );
                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tuple_false_false_tuple ) );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                _python_var_decimalp_ok.assign0( _python_tmp_element_1.asObject() );
                                _python_var_mdigits_ok.assign0( _python_tmp_element_2.asObject() );
                            }
                            _python_var_decimalp_msg.assign0( _python_str_digest_cd06eb41caa3781f50f74423bc13a91b );
                            frame_guard.setLineNumber( 88 );
                            try
                            {
                                frame_guard.setLineNumber( 89 );
                                _python_var_decimal_places.assign1( TO_INT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_decimal_places ) ).asObject() ) );
                                frame_guard.setLineNumber( 90 );
                                if ( RICH_COMPARE_BOOL_LT( _python_var_decimal_places.asObject(), _python_int_0 ) )
                                {
                                    frame_guard.setLineNumber( 91 );
                                    {
                                        PyObjectTempKeeper1 call59;
                                        PyObjectTempKeeper0 call60;
                                        PyObjectTempKeeper0 op57;
                                        DECREASE_REFCOUNT( ( call59.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call60.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call59.asObject0(), call60.asObject0(), PyObjectTemporary( ( op57.assign( _python_var_decimalp_msg.asObject() ), BINARY_OPERATION_REMAINDER( op57.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ) );
                                    }
                                }
                                else
                                {
                                    _python_var_decimalp_ok.assign0( Py_True );
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

                                if ( _exception.matches( PyExc_ValueError ) || _exception.matches( PyExc_TypeError ) )
                                {
                                    frame_guard.detachFrame();
                                    frame_guard.setLineNumber( 95 );
                                    {
                                        PyObjectTempKeeper1 call54;
                                        PyObjectTempKeeper0 call55;
                                        PyObjectTempKeeper0 op52;
                                        DECREASE_REFCOUNT( ( call54.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call55.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call54.asObject0(), call55.asObject0(), PyObjectTemporary( ( op52.assign( _python_var_decimalp_msg.asObject() ), BINARY_OPERATION_REMAINDER( op52.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ) );
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
                            _python_var_mdigits_msg.assign0( _python_str_digest_6441ce221f92369db49f01ff67e5b3c5 );
                            frame_guard.setLineNumber( 97 );
                            try
                            {
                                frame_guard.setLineNumber( 98 );
                                _python_var_max_digits.assign1( TO_INT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_max_digits ) ).asObject() ) );
                                frame_guard.setLineNumber( 99 );
                                if ( RICH_COMPARE_BOOL_LE( _python_var_max_digits.asObject(), _python_int_0 ) )
                                {
                                    frame_guard.setLineNumber( 100 );
                                    {
                                        PyObjectTempKeeper1 call69;
                                        PyObjectTempKeeper0 call70;
                                        PyObjectTempKeeper0 op67;
                                        DECREASE_REFCOUNT( ( call69.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call70.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call69.asObject0(), call70.asObject0(), PyObjectTemporary( ( op67.assign( _python_var_mdigits_msg.asObject() ), BINARY_OPERATION_REMAINDER( op67.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ) );
                                    }
                                }
                                else
                                {
                                    _python_var_mdigits_ok.assign0( Py_True );
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

                                if ( _exception.matches( PyExc_ValueError ) || _exception.matches( PyExc_TypeError ) )
                                {
                                    frame_guard.detachFrame();
                                    frame_guard.setLineNumber( 104 );
                                    {
                                        PyObjectTempKeeper1 call64;
                                        PyObjectTempKeeper0 call65;
                                        PyObjectTempKeeper0 op62;
                                        DECREASE_REFCOUNT( ( call64.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call65.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call64.asObject0(), call65.asObject0(), PyObjectTemporary( ( op62.assign( _python_var_mdigits_msg.asObject() ), BINARY_OPERATION_REMAINDER( op62.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ) );
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
                            _python_var_invalid_values_msg.assign0( _python_str_digest_7f0e25376a9401a39d4f3ebb19332865 );
                            frame_guard.setLineNumber( 106 );
                            if ( ( CHECK_IF_TRUE( _python_var_decimalp_ok.asObject() ) && CHECK_IF_TRUE( _python_var_mdigits_ok.asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 107 );
                                {
                                    PyObjectTempKeeper0 cmp77;
                                    if ( ( cmp77.assign( _python_var_decimal_places.asObject() ), RICH_COMPARE_BOOL_GT( cmp77.asObject0(), _python_var_max_digits.asObject() ) ) )
                                {
                                    frame_guard.setLineNumber( 108 );
                                    {
                                        PyObjectTempKeeper1 call74;
                                        PyObjectTempKeeper0 call75;
                                        PyObjectTempKeeper0 op72;
                                        DECREASE_REFCOUNT( ( call74.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call75.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call74.asObject0(), call75.asObject0(), PyObjectTemporary( ( op72.assign( _python_var_invalid_values_msg.asObject() ), BINARY_OPERATION_REMAINDER( op72.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ) );
                                    }
                                }
                                }
                            }
                        }
                        }
                        frame_guard.setLineNumber( 109 );
                        {
                            PyObjectTempKeeper0 isinstance84;
                            if ( ( ( isinstance84.assign( _python_var_f.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance84.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_FileField ) ).asObject() ) ) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_upload_to ) ).asObject() ) )) ) )
                        {
                            frame_guard.setLineNumber( 110 );
                            {
                                PyObjectTempKeeper1 call81;
                                PyObjectTempKeeper0 call82;
                                DECREASE_REFCOUNT( ( call81.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call82.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call81.asObject0(), call82.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_4024e52e127be5b581fd434c3ce82e8f, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                            }
                        }
                        }
                        frame_guard.setLineNumber( 111 );
                        {
                            PyObjectTempKeeper0 isinstance89;
                            if ( ( isinstance89.assign( _python_var_f.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance89.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_ImageField ) ).asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 112 );
                            try
                            {
                                frame_guard.setLineNumber( 113 );
                                _python_var_Image.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_e738cb01fb9731f7df53867340473848, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, PyObjectTemporary( _python_var_app.updateLocalsDict( _python_var_outfile.updateLocalsDict( _python_var_it.updateLocalsDict( _python_var_ut.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_seen_this_fk.updateLocalsDict( _python_var_seen_related_fk.updateLocalsDict( _python_var_signature.updateLocalsDict( _python_var_rel_to.updateLocalsDict( _python_var_inter_field.updateLocalsDict( _python_var_seen_self.updateLocalsDict( _python_var_seen_to.updateLocalsDict( _python_var_seen_from.updateLocalsDict( _python_var_to_model.updateLocalsDict( _python_var_from_model.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_seen_intermediary_signatures.updateLocalsDict( _python_var_r.updateLocalsDict( _python_var_rel_query_name.updateLocalsDict( _python_var_rel_name.updateLocalsDict( _python_var_rel_opts.updateLocalsDict( _python_var_rel_field.updateLocalsDict( _python_var_has_unique_field.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_Image.updateLocalsDict( _python_var_invalid_values_msg.updateLocalsDict( _python_var_max_digits.updateLocalsDict( _python_var_mdigits_msg.updateLocalsDict( _python_var_decimal_places.updateLocalsDict( _python_var_decimalp_msg.updateLocalsDict( _python_var_mdigits_ok.updateLocalsDict( _python_var_decimalp_ok.updateLocalsDict( _python_var_max_length.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_model_name.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_error.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_SET_DEFAULT.updateLocalsDict( _python_var_SET_NULL.updateLocalsDict( _python_var_get_app_errors.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_models.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_Image_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Image ) );
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
                                    frame_guard.setLineNumber( 115 );
                                    {
                                        PyObjectTempKeeper1 call86;
                                        PyObjectTempKeeper0 call87;
                                        DECREASE_REFCOUNT( ( call86.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call87.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call86.asObject0(), call87.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_e73173b0adf61d86f44b6beea3d6d0c3, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
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
                        }
                        frame_guard.setLineNumber( 116 );
                        {
                            PyObjectTempKeeper0 isinstance94;
                            if ( ( ( isinstance94.assign( _python_var_f.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance94.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_BooleanField ) ).asObject() ) ) && CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_f.asObject(), _python_str_plain_null, Py_False ) ).asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 117 );
                            {
                                PyObjectTempKeeper1 call91;
                                PyObjectTempKeeper0 call92;
                                DECREASE_REFCOUNT( ( call91.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call92.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call91.asObject0(), call92.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_952674c3b02b96dfeccbdc7c00094059, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                            }
                        }
                        }
                        frame_guard.setLineNumber( 118 );
                        {
                            PyObjectTempKeeper0 isinstance99;
                            if ( ( ( isinstance99.assign( _python_var_f.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance99.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_FilePathField ) ).asObject() ) ) && (!( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_allow_files ) ).asObject() ) || CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_allow_folders ) ).asObject() ) ) )) ) )
                        {
                            frame_guard.setLineNumber( 119 );
                            {
                                PyObjectTempKeeper1 call96;
                                PyObjectTempKeeper0 call97;
                                DECREASE_REFCOUNT( ( call96.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call97.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call96.asObject0(), call97.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_be1a40efc42a46a1b564002b03d407ed, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                            }
                        }
                        }
                        frame_guard.setLineNumber( 120 );
                        {
                            PyObjectTempKeeper0 isinstance104;
                            if ( ( ( isinstance104.assign( _python_var_f.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance104.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_GenericIPAddressField ) ).asObject() ) ) && ( (!( CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_f.asObject(), _python_str_plain_null, Py_False ) ).asObject() ) )) && CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_f.asObject(), _python_str_plain_blank, Py_False ) ).asObject() ) ) ) )
                        {
                            frame_guard.setLineNumber( 121 );
                            {
                                PyObjectTempKeeper1 call101;
                                PyObjectTempKeeper0 call102;
                                DECREASE_REFCOUNT( ( call101.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call102.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call101.asObject0(), call102.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_db6a0947953eba5e23e8545c7ca5703e, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                            }
                        }
                        }
                        frame_guard.setLineNumber( 122 );
                        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_choices ) ).asObject() ) )
                        {
                            frame_guard.setLineNumber( 123 );
                            {
                                PyObjectTempKeeper0 call118;
                                PyObjectTempKeeper1 isinstance116;
                                if ( ( ( isinstance116.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_choices ) ), BUILTIN_ISINSTANCE_BOOL( isinstance116.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__validation_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) || (!( CHECK_IF_TRUE( PyObjectTemporary( ( call118.assign( _mvar_django__core__management__validation_is_iterable.asObject0() ), CALL_FUNCTION_WITH_ARGS( call118.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_choices ) ).asObject() ) ) ).asObject() ) )) ) )
                            {
                                frame_guard.setLineNumber( 124 );
                                {
                                    PyObjectTempKeeper1 call106;
                                    PyObjectTempKeeper0 call107;
                                    DECREASE_REFCOUNT( ( call106.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call107.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call106.asObject0(), call107.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_6fedfbd08c927c6665b4a998e45e0eb7, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                                }
                            }
                            else
                            {
                                {
                                    frame_guard.setLineNumber( 126 );
                                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_choices ) ).asObject() ) );
                                    while( true )
                                    {
                                        {
                                            frame_guard.setLineNumber( 126 );
                                            PyObject *_tmp_unpack_4 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                            if ( _tmp_unpack_4 == NULL )
                                            {
                                                break;
                                            }
                                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_4 );
                                            _python_var_c.assign0( _python_tmp_iter_value.asObject() );
                                        }
                                        frame_guard.setLineNumber( 127 );
                                        {
                                            PyObjectTempKeeper0 call114;
                                            PyObjectTempKeeper0 isinstance112;
                                            if ( ( ( isinstance112.assign( _python_var_c.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance112.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__validation_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) || ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call114.assign( _mvar_django__core__management__validation_is_iterable.asObject0() ), CALL_FUNCTION_WITH_ARGS( call114.asObject0(), _python_var_c.asObject() ) ) ).asObject() ) )) || RICH_COMPARE_BOOL_NE( PyObjectTemporary( BUILTIN_LEN( _python_var_c.asObject() ) ).asObject(), _python_int_pos_2 ) ) ) )
                                        {
                                            frame_guard.setLineNumber( 128 );
                                            {
                                                PyObjectTempKeeper1 call109;
                                                PyObjectTempKeeper0 call110;
                                                DECREASE_REFCOUNT( ( call109.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call110.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call109.asObject0(), call110.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_fa35b4647547d019f961464fea42673c, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                                            }
                                        }
                                        }

                                       CONSIDER_THREADING();
                                    }
                                }
                            }
                            }
                        }
                        frame_guard.setLineNumber( 129 );
                        if ( SEQUENCE_CONTAINS_NOT_BOOL( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_db_index ) ).asObject(), _python_tuple_none_true_false_tuple ) )
                        {
                            frame_guard.setLineNumber( 130 );
                            {
                                PyObjectTempKeeper1 call120;
                                PyObjectTempKeeper0 call121;
                                DECREASE_REFCOUNT( ( call120.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call121.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call120.asObject0(), call121.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_bce60b3b68d6dd163ba588886da057b8, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                            }
                        }
                        frame_guard.setLineNumber( 133 );
                        {
                            PyObjectTempKeeper1 call123;
                            PyObjectTempKeeper0 call124;
                            PyObjectTempKeeper0 call125;
                            DECREASE_REFCOUNT( ( call123.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_validation ) ).asObject(), _python_str_plain_validate_field ) ), call124.assign( _python_var_e.asObject() ), call125.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call123.asObject0(), call124.asObject0(), call125.asObject0(), _python_var_f.asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 136 );
                        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject() ) && HAS_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_on_delete ) ) )
                        {
                            frame_guard.setLineNumber( 137 );
                            {
                                PyObjectTempKeeper1 cmp135;
                                if ( ( ( cmp135.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_on_delete ) ), RICH_COMPARE_BOOL_EQ( cmp135.asObject0(), _python_var_SET_NULL.asObject() ) ) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_null ) ).asObject() ) )) ) )
                            {
                                frame_guard.setLineNumber( 138 );
                                {
                                    PyObjectTempKeeper1 call127;
                                    PyObjectTempKeeper0 call128;
                                    DECREASE_REFCOUNT( ( call127.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call128.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call127.asObject0(), call128.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_66c864fc834481eccff2b88210193788, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 139 );
                                {
                                    PyObjectTempKeeper1 cmp133;
                                    if ( ( ( cmp133.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_on_delete ) ), RICH_COMPARE_BOOL_EQ( cmp133.asObject0(), _python_var_SET_DEFAULT.asObject() ) ) && (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_has_default ) ).asObject() ) ).asObject() ) )) ) )
                                {
                                    frame_guard.setLineNumber( 140 );
                                    {
                                        PyObjectTempKeeper1 call130;
                                        PyObjectTempKeeper0 call131;
                                        DECREASE_REFCOUNT( ( call130.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call131.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call130.asObject0(), call131.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_50de7fde06c18033f24fa650baf4478a, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                                    }
                                }
                                }
                            }
                            }
                        }
                        frame_guard.setLineNumber( 144 );
                        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject() ) )
                        {
                            frame_guard.setLineNumber( 145 );
                            {
                                PyObjectTempKeeper1 cmp151;
                                if ( ( cmp151.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), SEQUENCE_CONTAINS_NOT_BOOL( cmp151.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_get_models ) ).asObject() ) ).asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 148 );
                                {
                                    PyObjectTempKeeper1 isinstance149;
                                    if ( ( (!( ( isinstance149.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), BUILTIN_ISINSTANCE_BOOL( isinstance149.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__validation_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )) && CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_swapped ) ).asObject() ) ) )
                                {
                                    frame_guard.setLineNumber( 149 );
                                    {
                                        PyObjectTempKeeper1 call141;
                                        PyObjectTempKeeper0 call142;
                                        PyObjectTempKeeper1 make_tuple137;
                                        PyObjectTempKeeper1 make_tuple138;
                                        PyObjectTempKeeper1 make_tuple139;
                                        DECREASE_REFCOUNT( ( call141.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call142.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call141.asObject0(), call142.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_3f47737035e8fbe3f2fcb8b2c5fbced8, PyObjectTemporary( ( make_tuple137.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple138.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_app_label ) ), make_tuple139.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ), MAKE_TUPLE4( make_tuple137.asObject0(), make_tuple138.asObject0(), make_tuple139.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_swappable ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                    }
                                }
                                else
                                {
                                    frame_guard.setLineNumber( 151 );
                                    {
                                        PyObjectTempKeeper1 call146;
                                        PyObjectTempKeeper0 call147;
                                        PyObjectTempKeeper1 make_tuple144;
                                        DECREASE_REFCOUNT( ( call146.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call147.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call146.asObject0(), call147.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_ff766a0b322230358ab806018a954857, PyObjectTemporary( ( make_tuple144.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), MAKE_TUPLE2( make_tuple144.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                    }
                                }
                                }
                            }
                            }
                            frame_guard.setLineNumber( 154 );
                            {
                                PyObjectTempKeeper1 isinstance153;
                                if ( ( isinstance153.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), BUILTIN_ISINSTANCE_BOOL( isinstance153.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__validation_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 155 );
                                CONSIDER_THREADING(); continue;
                            }
                            }
                            frame_guard.setLineNumber( 158 );
                            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_requires_unique_target ) ).asObject() ) )
                            {
                                frame_guard.setLineNumber( 159 );
                                if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_foreign_related_fields ) ).asObject() ) ).asObject(), _python_int_pos_1 ) )
                                {
                                    _python_var_has_unique_field.assign0( Py_False );
                                    {
                                        frame_guard.setLineNumber( 161 );
                                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_foreign_related_fields ) ).asObject() ) );
                                        while( true )
                                        {
                                            {
                                                frame_guard.setLineNumber( 161 );
                                                PyObject *_tmp_unpack_5 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                                if ( _tmp_unpack_5 == NULL )
                                                {
                                                    break;
                                                }
                                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_5 );
                                                _python_var_rel_field.assign0( _python_tmp_iter_value.asObject() );
                                            }
                                            frame_guard.setLineNumber( 162 );
                                            {
                                                PyObjectTempKeeper0 keeper_18;
                                                _python_var_has_unique_field.assign1( ( CHECK_IF_TRUE( keeper_18.assign( _python_var_has_unique_field.asObject() ) ) ? INCREASE_REFCOUNT( keeper_18.asObject0() ) : LOOKUP_ATTRIBUTE( _python_var_rel_field.asObject(), _python_str_plain_unique ) ) );
                                            }

                                           CONSIDER_THREADING();
                                        }
                                    }
                                    frame_guard.setLineNumber( 163 );
                                    if ( (!( CHECK_IF_TRUE( _python_var_has_unique_field.asObject() ) )) )
                                    {
                                        frame_guard.setLineNumber( 164 );
                                        {
                                            PyObjectTempKeeper1 call155;
                                            PyObjectTempKeeper1 call159;
                                            PyObjectTempKeeper0 call160;
                                            PyObjectTempKeeper1 make_tuple157;
                                            DECREASE_REFCOUNT( ( call159.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call160.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call159.asObject0(), call160.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_ba1127d71960f26d633caeadadf38cda, PyObjectTemporary( ( make_tuple157.assign( ( call155.assign( LOOKUP_ATTRIBUTE( _python_str_chr_44, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call155.asObject0(), PyObjectTemporary( impl_listcontr_1_of_function_2_get_validation_errors_of_module_django__core__management__validation( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_foreign_related_fields ) ).asObject() ), _python_var_rel_field ) ).asObject() ) ) ), MAKE_TUPLE2( make_tuple157.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        }
                                    }
                                }
                                else
                                {
                                    frame_guard.setLineNumber( 166 );
                                    if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_foreign_related_fields ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_unique ) ).asObject() ) )) )
                                    {
                                        frame_guard.setLineNumber( 167 );
                                        {
                                            PyObjectTempKeeper1 call164;
                                            PyObjectTempKeeper0 call165;
                                            PyObjectTempKeeper1 make_tuple162;
                                            DECREASE_REFCOUNT( ( call164.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call165.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call164.asObject0(), call165.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_69a3de6b8ee612eeba775ad5e150fccb, PyObjectTemporary( ( make_tuple162.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_foreign_related_fields ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_name ) ), MAKE_TUPLE2( make_tuple162.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        }
                                    }
                                }
                            }
                            frame_guard.setLineNumber( 169 );
                            _python_var_rel_opts.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain__meta ) );
                            frame_guard.setLineNumber( 170 );
                            _python_var_rel_name.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_related ) ).asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) );
                            frame_guard.setLineNumber( 171 );
                            _python_var_rel_query_name.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_related_query_name ) ).asObject() ) );
                            frame_guard.setLineNumber( 172 );
                            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_is_hidden ) ).asObject() ) ).asObject() ) )) )
                            {
                                {
                                    frame_guard.setLineNumber( 173 );
                                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_fields ) ).asObject() ) );
                                    while( true )
                                    {
                                        {
                                            frame_guard.setLineNumber( 173 );
                                            PyObject *_tmp_unpack_6 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                            if ( _tmp_unpack_6 == NULL )
                                            {
                                                break;
                                            }
                                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_6 );
                                            _python_var_r.assign0( _python_tmp_iter_value.asObject() );
                                        }
                                        frame_guard.setLineNumber( 174 );
                                        {
                                            PyObjectTempKeeper1 cmp174;
                                            if ( ( cmp174.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), RICH_COMPARE_BOOL_EQ( cmp174.asObject0(), _python_var_rel_name.asObject() ) ) )
                                        {
                                            frame_guard.setLineNumber( 175 );
                                            {
                                                PyObjectTempKeeper1 call171;
                                                PyObjectTempKeeper0 call172;
                                                PyObjectTempKeeper1 make_tuple167;
                                                PyObjectTempKeeper1 make_tuple168;
                                                PyObjectTempKeeper1 make_tuple169;
                                                DECREASE_REFCOUNT( ( call171.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call172.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call171.asObject0(), call172.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_b1278438ce8dc1d0571b21b9a3ff2ea4, PyObjectTemporary( ( make_tuple167.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple168.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple169.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), MAKE_TUPLE4( make_tuple167.asObject0(), make_tuple168.asObject0(), make_tuple169.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                            }
                                        }
                                        }
                                        frame_guard.setLineNumber( 176 );
                                        {
                                            PyObjectTempKeeper1 cmp183;
                                            if ( ( cmp183.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), RICH_COMPARE_BOOL_EQ( cmp183.asObject0(), _python_var_rel_query_name.asObject() ) ) )
                                        {
                                            frame_guard.setLineNumber( 177 );
                                            {
                                                PyObjectTempKeeper1 call180;
                                                PyObjectTempKeeper0 call181;
                                                PyObjectTempKeeper1 make_tuple176;
                                                PyObjectTempKeeper1 make_tuple177;
                                                PyObjectTempKeeper1 make_tuple178;
                                                DECREASE_REFCOUNT( ( call180.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call181.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call180.asObject0(), call181.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_7e3f4e19e73d958388731e08909e54f5, PyObjectTemporary( ( make_tuple176.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple177.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple178.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), MAKE_TUPLE4( make_tuple176.asObject0(), make_tuple177.asObject0(), make_tuple178.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                            }
                                        }
                                        }

                                       CONSIDER_THREADING();
                                    }
                                }
                                {
                                    frame_guard.setLineNumber( 178 );
                                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_local_many_to_many ) ).asObject() ) );
                                    while( true )
                                    {
                                        {
                                            frame_guard.setLineNumber( 178 );
                                            PyObject *_tmp_unpack_7 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                            if ( _tmp_unpack_7 == NULL )
                                            {
                                                break;
                                            }
                                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_7 );
                                            _python_var_r.assign0( _python_tmp_iter_value.asObject() );
                                        }
                                        frame_guard.setLineNumber( 179 );
                                        {
                                            PyObjectTempKeeper1 cmp192;
                                            if ( ( cmp192.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), RICH_COMPARE_BOOL_EQ( cmp192.asObject0(), _python_var_rel_name.asObject() ) ) )
                                        {
                                            frame_guard.setLineNumber( 180 );
                                            {
                                                PyObjectTempKeeper1 call189;
                                                PyObjectTempKeeper0 call190;
                                                PyObjectTempKeeper1 make_tuple185;
                                                PyObjectTempKeeper1 make_tuple186;
                                                PyObjectTempKeeper1 make_tuple187;
                                                DECREASE_REFCOUNT( ( call189.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call190.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call189.asObject0(), call190.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_a469622b6691f3f81a86ffcc47d4749c, PyObjectTemporary( ( make_tuple185.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple186.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple187.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), MAKE_TUPLE4( make_tuple185.asObject0(), make_tuple186.asObject0(), make_tuple187.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                            }
                                        }
                                        }
                                        frame_guard.setLineNumber( 181 );
                                        {
                                            PyObjectTempKeeper1 cmp201;
                                            if ( ( cmp201.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), RICH_COMPARE_BOOL_EQ( cmp201.asObject0(), _python_var_rel_query_name.asObject() ) ) )
                                        {
                                            frame_guard.setLineNumber( 182 );
                                            {
                                                PyObjectTempKeeper1 call198;
                                                PyObjectTempKeeper0 call199;
                                                PyObjectTempKeeper1 make_tuple194;
                                                PyObjectTempKeeper1 make_tuple195;
                                                PyObjectTempKeeper1 make_tuple196;
                                                DECREASE_REFCOUNT( ( call198.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call199.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call198.asObject0(), call199.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_32f8658c24d86a762a0f61e0a3d9efbf, PyObjectTemporary( ( make_tuple194.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple195.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple196.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), MAKE_TUPLE4( make_tuple194.asObject0(), make_tuple195.asObject0(), make_tuple196.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                            }
                                        }
                                        }

                                       CONSIDER_THREADING();
                                    }
                                }
                                {
                                    frame_guard.setLineNumber( 183 );
                                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_get_all_related_many_to_many_objects ) ).asObject() ) ).asObject() ) );
                                    while( true )
                                    {
                                        {
                                            frame_guard.setLineNumber( 183 );
                                            PyObject *_tmp_unpack_8 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                            if ( _tmp_unpack_8 == NULL )
                                            {
                                                break;
                                            }
                                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_8 );
                                            _python_var_r.assign0( _python_tmp_iter_value.asObject() );
                                        }
                                        frame_guard.setLineNumber( 184 );
                                        {
                                            PyObjectTempKeeper1 cmp210;
                                            if ( ( cmp210.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), RICH_COMPARE_BOOL_EQ( cmp210.asObject0(), _python_var_rel_name.asObject() ) ) )
                                        {
                                            frame_guard.setLineNumber( 185 );
                                            {
                                                PyObjectTempKeeper1 call207;
                                                PyObjectTempKeeper0 call208;
                                                PyObjectTempKeeper1 make_tuple203;
                                                PyObjectTempKeeper1 make_tuple204;
                                                PyObjectTempKeeper1 make_tuple205;
                                                DECREASE_REFCOUNT( ( call207.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call208.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call207.asObject0(), call208.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_67664a02e6afd57b2693451a497f59f0, PyObjectTemporary( ( make_tuple203.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple204.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple205.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), MAKE_TUPLE4( make_tuple203.asObject0(), make_tuple204.asObject0(), make_tuple205.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                            }
                                        }
                                        }
                                        frame_guard.setLineNumber( 186 );
                                        {
                                            PyObjectTempKeeper1 cmp219;
                                            if ( ( cmp219.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), RICH_COMPARE_BOOL_EQ( cmp219.asObject0(), _python_var_rel_query_name.asObject() ) ) )
                                        {
                                            frame_guard.setLineNumber( 187 );
                                            {
                                                PyObjectTempKeeper1 call216;
                                                PyObjectTempKeeper0 call217;
                                                PyObjectTempKeeper1 make_tuple212;
                                                PyObjectTempKeeper1 make_tuple213;
                                                PyObjectTempKeeper1 make_tuple214;
                                                DECREASE_REFCOUNT( ( call216.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call217.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call216.asObject0(), call217.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_77fa472b6eb276f78d25848e1a07e791, PyObjectTemporary( ( make_tuple212.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple213.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple214.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), MAKE_TUPLE4( make_tuple212.asObject0(), make_tuple213.asObject0(), make_tuple214.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                            }
                                        }
                                        }

                                       CONSIDER_THREADING();
                                    }
                                }
                                {
                                    frame_guard.setLineNumber( 188 );
                                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_get_all_related_objects ) ).asObject() ) ).asObject() ) );
                                    while( true )
                                    {
                                        {
                                            frame_guard.setLineNumber( 188 );
                                            PyObject *_tmp_unpack_9 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                            if ( _tmp_unpack_9 == NULL )
                                            {
                                                break;
                                            }
                                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_9 );
                                            _python_var_r.assign0( _python_tmp_iter_value.asObject() );
                                        }
                                        frame_guard.setLineNumber( 189 );
                                        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_field ) ).asObject() != _python_var_f.asObject() ) )
                                        {
                                            frame_guard.setLineNumber( 190 );
                                            {
                                                PyObjectTempKeeper1 cmp228;
                                                if ( ( cmp228.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), RICH_COMPARE_BOOL_EQ( cmp228.asObject0(), _python_var_rel_name.asObject() ) ) )
                                            {
                                                frame_guard.setLineNumber( 191 );
                                                {
                                                    PyObjectTempKeeper1 call225;
                                                    PyObjectTempKeeper0 call226;
                                                    PyObjectTempKeeper1 make_tuple221;
                                                    PyObjectTempKeeper1 make_tuple222;
                                                    PyObjectTempKeeper1 make_tuple223;
                                                    DECREASE_REFCOUNT( ( call225.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call226.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call225.asObject0(), call226.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_06943b0c0e57216757236b353bc826f4, PyObjectTemporary( ( make_tuple221.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple222.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple223.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), MAKE_TUPLE4( make_tuple221.asObject0(), make_tuple222.asObject0(), make_tuple223.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                                }
                                            }
                                            }
                                            frame_guard.setLineNumber( 192 );
                                            {
                                                PyObjectTempKeeper1 cmp237;
                                                if ( ( cmp237.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), RICH_COMPARE_BOOL_EQ( cmp237.asObject0(), _python_var_rel_query_name.asObject() ) ) )
                                            {
                                                frame_guard.setLineNumber( 193 );
                                                {
                                                    PyObjectTempKeeper1 call234;
                                                    PyObjectTempKeeper0 call235;
                                                    PyObjectTempKeeper1 make_tuple230;
                                                    PyObjectTempKeeper1 make_tuple231;
                                                    PyObjectTempKeeper1 make_tuple232;
                                                    DECREASE_REFCOUNT( ( call234.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call235.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call234.asObject0(), call235.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_185576f47abaf080fe28811cfbaa15d1, PyObjectTemporary( ( make_tuple230.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple231.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple232.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), MAKE_TUPLE4( make_tuple230.asObject0(), make_tuple231.asObject0(), make_tuple232.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                                }
                                            }
                                            }
                                        }

                                       CONSIDER_THREADING();
                                    }
                                }
                            }
                        }

                       CONSIDER_THREADING();
                    }
                }
                _python_var_seen_intermediary_signatures.assign1( PyList_New( 0 ) );
                {
                    frame_guard.setLineNumber( 196 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_local_many_to_many ) ).asObject() ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 196 );
                            PyObject *_tmp_unpack_10 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_10 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_10 );
                            {
                                frame_guard.setLineNumber( 196 );
                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                _python_var_i.assign0( _python_tmp_element_1.asObject() );
                                _python_var_f.assign0( _python_tmp_element_2.asObject() );
                            }
                        }
                        frame_guard.setLineNumber( 200 );
                        {
                            PyObjectTempKeeper1 cmp255;
                            if ( ( cmp255.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), SEQUENCE_CONTAINS_NOT_BOOL( cmp255.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_get_models ) ).asObject() ) ).asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 203 );
                            {
                                PyObjectTempKeeper1 isinstance251;
                                if ( ( (!( ( isinstance251.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), BUILTIN_ISINSTANCE_BOOL( isinstance251.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__validation_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )) && CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_swapped ) ).asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 204 );
                                {
                                    PyObjectTempKeeper1 call243;
                                    PyObjectTempKeeper0 call244;
                                    PyObjectTempKeeper1 make_tuple239;
                                    PyObjectTempKeeper1 make_tuple240;
                                    PyObjectTempKeeper1 make_tuple241;
                                    DECREASE_REFCOUNT( ( call243.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call244.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call243.asObject0(), call244.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_3f47737035e8fbe3f2fcb8b2c5fbced8, PyObjectTemporary( ( make_tuple239.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple240.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_app_label ) ), make_tuple241.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ), MAKE_TUPLE4( make_tuple239.asObject0(), make_tuple240.asObject0(), make_tuple241.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_swappable ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 206 );
                                {
                                    PyObjectTempKeeper1 call248;
                                    PyObjectTempKeeper0 call249;
                                    PyObjectTempKeeper1 make_tuple246;
                                    DECREASE_REFCOUNT( ( call248.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call249.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call248.asObject0(), call249.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_d42071dfbc30b9d58555f9383427d1ca, PyObjectTemporary( ( make_tuple246.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), MAKE_TUPLE2( make_tuple246.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                }
                            }
                            }
                            frame_guard.setLineNumber( 210 );
                            {
                                PyObjectTempKeeper1 isinstance253;
                                if ( ( isinstance253.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), BUILTIN_ISINSTANCE_BOOL( isinstance253.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__validation_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 211 );
                                CONSIDER_THREADING(); continue;
                            }
                            }
                        }
                        }
                        frame_guard.setLineNumber( 214 );
                        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_unique ) ).asObject() ) )
                        {
                            frame_guard.setLineNumber( 215 );
                            {
                                PyObjectTempKeeper1 call257;
                                PyObjectTempKeeper0 call258;
                                DECREASE_REFCOUNT( ( call257.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call258.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call257.asObject0(), call258.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_0b7df5f20bb5e0007e256e8874e7018a, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ).asObject() ) ) );
                            }
                        }
                        frame_guard.setLineNumber( 217 );
                        {
                            PyObjectTempKeeper1 isinstance327;
                            if ( ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject() != Py_None ) && (!( ( isinstance327.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ), BUILTIN_ISINSTANCE_BOOL( isinstance327.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__validation_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )) ) )
                        {
                            {
                                frame_guard.setLineNumber( 218 );
                                PyObject *_tmp_python_tmp_source_iter;
                                {
                                    PyObjectTempKeeper0 make_tuple260;
                                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple260.assign( _python_var_cls.asObject() ), MAKE_TUPLE2( make_tuple260.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject() ) ) ).asObject() );
                                }
                                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                _python_var_from_model.assign0( _python_tmp_element_1.asObject() );
                                _python_var_to_model.assign0( _python_tmp_element_2.asObject() );
                            }
                            frame_guard.setLineNumber( 219 );
                            {
                                PyObjectTempKeeper0 cmp265;
                                if ( ( ( cmp265.assign( _python_var_from_model.asObject() ), RICH_COMPARE_BOOL_EQ( cmp265.asObject0(), _python_var_to_model.asObject() ) ) && ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_symmetrical ) ).asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_auto_created ) ).asObject() ) )) ) ) )
                            {
                                frame_guard.setLineNumber( 220 );
                                {
                                    PyObjectTempKeeper1 call262;
                                    DECREASE_REFCOUNT( ( call262.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), CALL_FUNCTION_WITH_ARGS( call262.asObject0(), _python_var_opts.asObject(), _python_str_digest_f6d1f2616dbb423a747f7f422b70c950 ) ) );
                                }
                            }
                            }
                            {
                                frame_guard.setLineNumber( 221 );
                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tuple_false_false_int_0_tuple ) );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                                _python_var_seen_from.assign0( _python_tmp_element_1.asObject() );
                                _python_var_seen_to.assign0( _python_tmp_element_2.asObject() );
                                _python_var_seen_self.assign0( _python_tmp_element_3.asObject() );
                            }
                            {
                                frame_guard.setLineNumber( 222 );
                                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_fields ) ).asObject() ) );
                                while( true )
                                {
                                    {
                                        frame_guard.setLineNumber( 222 );
                                        PyObject *_tmp_unpack_11 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                        if ( _tmp_unpack_11 == NULL )
                                        {
                                            break;
                                        }
                                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_11 );
                                        _python_var_inter_field.assign0( _python_tmp_iter_value.asObject() );
                                    }
                                    frame_guard.setLineNumber( 223 );
                                    _python_var_rel_to.assign1( BUILTIN_GETATTR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_inter_field.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to, Py_None ) );
                                    frame_guard.setLineNumber( 224 );
                                    {
                                        PyObjectTempKeeper0 cmp288;
                                        if ( ( cmp288.assign( _python_var_from_model.asObject() ), RICH_COMPARE_BOOL_EQ( cmp288.asObject0(), _python_var_to_model.asObject() ) ) )
                                    {
                                        frame_guard.setLineNumber( 225 );
                                        {
                                            PyObjectTempKeeper0 cmp267;
                                            if ( ( cmp267.assign( _python_var_rel_to.asObject() ), RICH_COMPARE_BOOL_EQ( cmp267.asObject0(), _python_var_from_model.asObject() ) ) )
                                        {
                                            {
                                                frame_guard.setLineNumber( 226 );
                                                PyObject *_python_tmp_inplace_start = _python_var_seen_self.asObject();
                                                PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_int_pos_1 ) );
                                                if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                                                {
                                                    _python_var_seen_self.assign0( _python_tmp_inplace_end.asObject() );
                                                }
                                            }
                                        }
                                        }
                                        frame_guard.setLineNumber( 227 );
                                        if ( RICH_COMPARE_BOOL_GT( _python_var_seen_self.asObject(), _python_int_pos_2 ) )
                                        {
                                            frame_guard.setLineNumber( 228 );
                                            {
                                                PyObjectTempKeeper1 call271;
                                                PyObjectTempKeeper0 call272;
                                                PyObjectTempKeeper1 make_tuple269;
                                                DECREASE_REFCOUNT( ( call271.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call272.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call271.asObject0(), call272.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_28a3ec155532272965a1f93b8e8d8377, PyObjectTemporary( ( make_tuple269.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ), MAKE_TUPLE2( make_tuple269.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_from_model.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                            }
                                        }
                                    }
                                    else
                                    {
                                        frame_guard.setLineNumber( 236 );
                                        {
                                            PyObjectTempKeeper0 cmp286;
                                            if ( ( cmp286.assign( _python_var_rel_to.asObject() ), RICH_COMPARE_BOOL_EQ( cmp286.asObject0(), _python_var_from_model.asObject() ) ) )
                                        {
                                            frame_guard.setLineNumber( 237 );
                                            if ( CHECK_IF_TRUE( _python_var_seen_from.asObject() ) )
                                            {
                                                frame_guard.setLineNumber( 238 );
                                                {
                                                    PyObjectTempKeeper1 call276;
                                                    PyObjectTempKeeper0 call277;
                                                    PyObjectTempKeeper1 make_tuple274;
                                                    DECREASE_REFCOUNT( ( call276.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call277.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call276.asObject0(), call277.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_707bbbc5e691d231a2887af962126c69, PyObjectTemporary( ( make_tuple274.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ), MAKE_TUPLE2( make_tuple274.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_from_model.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                                }
                                            }
                                            else
                                            {
                                                _python_var_seen_from.assign0( Py_True );
                                            }
                                        }
                                        else
                                        {
                                            frame_guard.setLineNumber( 247 );
                                            {
                                                PyObjectTempKeeper0 cmp284;
                                                if ( ( cmp284.assign( _python_var_rel_to.asObject() ), RICH_COMPARE_BOOL_EQ( cmp284.asObject0(), _python_var_to_model.asObject() ) ) )
                                            {
                                                frame_guard.setLineNumber( 248 );
                                                if ( CHECK_IF_TRUE( _python_var_seen_to.asObject() ) )
                                                {
                                                    frame_guard.setLineNumber( 249 );
                                                    {
                                                        PyObjectTempKeeper1 call281;
                                                        PyObjectTempKeeper0 call282;
                                                        PyObjectTempKeeper1 make_tuple279;
                                                        DECREASE_REFCOUNT( ( call281.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call282.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call281.asObject0(), call282.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_707bbbc5e691d231a2887af962126c69, PyObjectTemporary( ( make_tuple279.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ), MAKE_TUPLE2( make_tuple279.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_rel_to.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                                    }
                                                }
                                                else
                                                {
                                                    _python_var_seen_to.assign0( Py_True );
                                                }
                                            }
                                            }
                                        }
                                        }
                                    }
                                    }

                                   CONSIDER_THREADING();
                                }
                            }
                            frame_guard.setLineNumber( 258 );
                            {
                                PyObjectTempKeeper1 cmp295;
                                if ( ( cmp295.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ), SEQUENCE_CONTAINS_NOT_BOOL( cmp295.asObject0(), PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_get_models ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_4bdaa4dac2088f4ef25b63d20be32642 ) ).asObject() ) ).asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 259 );
                                {
                                    PyObjectTempKeeper1 call292;
                                    PyObjectTempKeeper0 call293;
                                    PyObjectTempKeeper1 make_tuple290;
                                    DECREASE_REFCOUNT( ( call292.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call293.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call292.asObject0(), call293.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_59655595ac2b7fc0f70239b0c4b40799, PyObjectTemporary( ( make_tuple290.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), MAKE_TUPLE2( make_tuple290.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                }
                            }
                            }
                            frame_guard.setLineNumber( 262 );
                            {
                                PyObjectTempKeeper1 make_tuple297;
                                PyObjectTempKeeper0 make_tuple298;
                                _python_var_signature.assign1( ( make_tuple297.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), make_tuple298.assign( _python_var_cls.asObject() ), MAKE_TUPLE3( make_tuple297.asObject0(), make_tuple298.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 263 );
                            {
                                PyObjectTempKeeper0 cmp307;
                                if ( ( cmp307.assign( _python_var_signature.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp307.asObject0(), _python_var_seen_intermediary_signatures.asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 264 );
                                {
                                    PyObjectTempKeeper1 call302;
                                    PyObjectTempKeeper0 call303;
                                    PyObjectTempKeeper1 make_tuple300;
                                    DECREASE_REFCOUNT( ( call302.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call303.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call302.asObject0(), call303.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_3b56127dc54addc3245b1d319b2ca117, PyObjectTemporary( ( make_tuple300.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ), MAKE_TUPLE2( make_tuple300.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 273 );
                                {
                                    PyObjectTempKeeper1 call305;
                                    DECREASE_REFCOUNT( ( call305.assign( LOOKUP_ATTRIBUTE( _python_var_seen_intermediary_signatures.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call305.asObject0(), _python_var_signature.asObject() ) ) );
                                }
                            }
                            }
                            frame_guard.setLineNumber( 274 );
                            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_auto_created ) ).asObject() ) )) )
                            {
                                {
                                    frame_guard.setLineNumber( 275 );
                                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tuple_false_false_tuple ) );
                                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                    _python_var_seen_related_fk.assign0( _python_tmp_element_1.asObject() );
                                    _python_var_seen_this_fk.assign0( _python_tmp_element_2.asObject() );
                                }
                                {
                                    frame_guard.setLineNumber( 276 );
                                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_fields ) ).asObject() ) );
                                    while( true )
                                    {
                                        {
                                            frame_guard.setLineNumber( 276 );
                                            PyObject *_tmp_unpack_12 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                            if ( _tmp_unpack_12 == NULL )
                                            {
                                                break;
                                            }
                                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_12 );
                                            _python_var_field.assign0( _python_tmp_iter_value.asObject() );
                                        }
                                        frame_guard.setLineNumber( 277 );
                                        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_rel ) ).asObject() ) )
                                        {
                                            frame_guard.setLineNumber( 278 );
                                            {
                                                PyObjectTempKeeper1 cmp311;
                                                if ( ( (!( CHECK_IF_TRUE( _python_var_seen_related_fk.asObject() ) )) && ( cmp311.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), RICH_COMPARE_BOOL_EQ( cmp311.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject() ) ) ) )
                                            {
                                                _python_var_seen_related_fk.assign0( Py_True );
                                            }
                                            else
                                            {
                                                frame_guard.setLineNumber( 280 );
                                                {
                                                    PyObjectTempKeeper1 cmp309;
                                                    if ( ( cmp309.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ), RICH_COMPARE_BOOL_EQ( cmp309.asObject0(), _python_var_cls.asObject() ) ) )
                                                {
                                                    _python_var_seen_this_fk.assign0( Py_True );
                                                }
                                                }
                                            }
                                            }
                                        }

                                       CONSIDER_THREADING();
                                    }
                                }
                                frame_guard.setLineNumber( 282 );
                                if ( ( (!( CHECK_IF_TRUE( _python_var_seen_related_fk.asObject() ) )) || (!( CHECK_IF_TRUE( _python_var_seen_this_fk.asObject() ) )) ) )
                                {
                                    frame_guard.setLineNumber( 283 );
                                    {
                                        PyObjectTempKeeper1 call317;
                                        PyObjectTempKeeper0 call318;
                                        PyObjectTempKeeper1 make_tuple313;
                                        PyObjectTempKeeper1 make_tuple314;
                                        PyObjectTempKeeper1 make_tuple315;
                                        DECREASE_REFCOUNT( ( call317.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call318.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call317.asObject0(), call318.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_52bf9990eb96afcd11e47ba55b2433f4, PyObjectTemporary( ( make_tuple313.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple314.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ), make_tuple315.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ), MAKE_TUPLE4( make_tuple313.asObject0(), make_tuple314.asObject0(), make_tuple315.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cls.asObject(), _python_str_plain__meta ) ).asObject(), _python_str_plain_object_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                    }
                                }
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 288 );
                            {
                                PyObjectTempKeeper1 isinstance325;
                                if ( ( isinstance325.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ), BUILTIN_ISINSTANCE_BOOL( isinstance325.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__validation_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 289 );
                                {
                                    PyObjectTempKeeper1 call322;
                                    PyObjectTempKeeper0 call323;
                                    PyObjectTempKeeper1 make_tuple320;
                                    DECREASE_REFCOUNT( ( call322.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call323.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call322.asObject0(), call323.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_b6dc7cf8e4d102731de6edcf949ec514, PyObjectTemporary( ( make_tuple320.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), MAKE_TUPLE2( make_tuple320.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_through ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                }
                            }
                            }
                        }
                        }
                        frame_guard.setLineNumber( 293 );
                        _python_var_rel_opts.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ).asObject(), _python_str_plain_to ) ).asObject(), _python_str_plain__meta ) );
                        frame_guard.setLineNumber( 294 );
                        _python_var_rel_name.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_related ) ).asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) );
                        frame_guard.setLineNumber( 295 );
                        _python_var_rel_query_name.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_related_query_name ) ).asObject() ) );
                        frame_guard.setLineNumber( 300 );
                        if ( ( _python_var_rel_name.asObject() != Py_None ) )
                        {
                            {
                                frame_guard.setLineNumber( 301 );
                                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_fields ) ).asObject() ) );
                                while( true )
                                {
                                    {
                                        frame_guard.setLineNumber( 301 );
                                        PyObject *_tmp_unpack_13 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                        if ( _tmp_unpack_13 == NULL )
                                        {
                                            break;
                                        }
                                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_13 );
                                        _python_var_r.assign0( _python_tmp_iter_value.asObject() );
                                    }
                                    frame_guard.setLineNumber( 302 );
                                    {
                                        PyObjectTempKeeper1 cmp336;
                                        if ( ( cmp336.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), RICH_COMPARE_BOOL_EQ( cmp336.asObject0(), _python_var_rel_name.asObject() ) ) )
                                    {
                                        frame_guard.setLineNumber( 303 );
                                        {
                                            PyObjectTempKeeper1 call333;
                                            PyObjectTempKeeper0 call334;
                                            PyObjectTempKeeper1 make_tuple329;
                                            PyObjectTempKeeper1 make_tuple330;
                                            PyObjectTempKeeper1 make_tuple331;
                                            DECREASE_REFCOUNT( ( call333.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call334.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call333.asObject0(), call334.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_95b72244f5cc35a370cb7d397898eea0, PyObjectTemporary( ( make_tuple329.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple330.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple331.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), MAKE_TUPLE4( make_tuple329.asObject0(), make_tuple330.asObject0(), make_tuple331.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        }
                                    }
                                    }
                                    frame_guard.setLineNumber( 304 );
                                    {
                                        PyObjectTempKeeper1 cmp345;
                                        if ( ( cmp345.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), RICH_COMPARE_BOOL_EQ( cmp345.asObject0(), _python_var_rel_query_name.asObject() ) ) )
                                    {
                                        frame_guard.setLineNumber( 305 );
                                        {
                                            PyObjectTempKeeper1 call342;
                                            PyObjectTempKeeper0 call343;
                                            PyObjectTempKeeper1 make_tuple338;
                                            PyObjectTempKeeper1 make_tuple339;
                                            PyObjectTempKeeper1 make_tuple340;
                                            DECREASE_REFCOUNT( ( call342.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call343.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call342.asObject0(), call343.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_f8c544d7c100f0aa6e146075da8b995b, PyObjectTemporary( ( make_tuple338.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple339.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple340.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), MAKE_TUPLE4( make_tuple338.asObject0(), make_tuple339.asObject0(), make_tuple340.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        }
                                    }
                                    }

                                   CONSIDER_THREADING();
                                }
                            }
                            {
                                frame_guard.setLineNumber( 306 );
                                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_local_many_to_many ) ).asObject() ) );
                                while( true )
                                {
                                    {
                                        frame_guard.setLineNumber( 306 );
                                        PyObject *_tmp_unpack_14 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                        if ( _tmp_unpack_14 == NULL )
                                        {
                                            break;
                                        }
                                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_14 );
                                        _python_var_r.assign0( _python_tmp_iter_value.asObject() );
                                    }
                                    frame_guard.setLineNumber( 307 );
                                    {
                                        PyObjectTempKeeper1 cmp354;
                                        if ( ( cmp354.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), RICH_COMPARE_BOOL_EQ( cmp354.asObject0(), _python_var_rel_name.asObject() ) ) )
                                    {
                                        frame_guard.setLineNumber( 308 );
                                        {
                                            PyObjectTempKeeper1 call351;
                                            PyObjectTempKeeper0 call352;
                                            PyObjectTempKeeper1 make_tuple347;
                                            PyObjectTempKeeper1 make_tuple348;
                                            PyObjectTempKeeper1 make_tuple349;
                                            DECREASE_REFCOUNT( ( call351.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call352.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call351.asObject0(), call352.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_57e29e7e34d77824373ec7e7ba430071, PyObjectTemporary( ( make_tuple347.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple348.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple349.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), MAKE_TUPLE4( make_tuple347.asObject0(), make_tuple348.asObject0(), make_tuple349.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        }
                                    }
                                    }
                                    frame_guard.setLineNumber( 309 );
                                    {
                                        PyObjectTempKeeper1 cmp363;
                                        if ( ( cmp363.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), RICH_COMPARE_BOOL_EQ( cmp363.asObject0(), _python_var_rel_query_name.asObject() ) ) )
                                    {
                                        frame_guard.setLineNumber( 310 );
                                        {
                                            PyObjectTempKeeper1 call360;
                                            PyObjectTempKeeper0 call361;
                                            PyObjectTempKeeper1 make_tuple356;
                                            PyObjectTempKeeper1 make_tuple357;
                                            PyObjectTempKeeper1 make_tuple358;
                                            DECREASE_REFCOUNT( ( call360.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call361.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call360.asObject0(), call361.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_149a4fb19842238a8d355e1d7486c820, PyObjectTemporary( ( make_tuple356.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple357.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple358.assign( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_name ) ), MAKE_TUPLE4( make_tuple356.asObject0(), make_tuple357.asObject0(), make_tuple358.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        }
                                    }
                                    }

                                   CONSIDER_THREADING();
                                }
                            }
                            {
                                frame_guard.setLineNumber( 311 );
                                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_get_all_related_many_to_many_objects ) ).asObject() ) ).asObject() ) );
                                while( true )
                                {
                                    {
                                        frame_guard.setLineNumber( 311 );
                                        PyObject *_tmp_unpack_15 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                        if ( _tmp_unpack_15 == NULL )
                                        {
                                            break;
                                        }
                                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_15 );
                                        _python_var_r.assign0( _python_tmp_iter_value.asObject() );
                                    }
                                    frame_guard.setLineNumber( 312 );
                                    if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_field ) ).asObject() != _python_var_f.asObject() ) )
                                    {
                                        frame_guard.setLineNumber( 313 );
                                        {
                                            PyObjectTempKeeper1 cmp372;
                                            if ( ( cmp372.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), RICH_COMPARE_BOOL_EQ( cmp372.asObject0(), _python_var_rel_name.asObject() ) ) )
                                        {
                                            frame_guard.setLineNumber( 314 );
                                            {
                                                PyObjectTempKeeper1 call369;
                                                PyObjectTempKeeper0 call370;
                                                PyObjectTempKeeper1 make_tuple365;
                                                PyObjectTempKeeper1 make_tuple366;
                                                PyObjectTempKeeper1 make_tuple367;
                                                DECREASE_REFCOUNT( ( call369.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call370.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call369.asObject0(), call370.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_d80181d100a81c467ddcfff543a231fc, PyObjectTemporary( ( make_tuple365.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple366.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple367.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), MAKE_TUPLE4( make_tuple365.asObject0(), make_tuple366.asObject0(), make_tuple367.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                            }
                                        }
                                        }
                                        frame_guard.setLineNumber( 315 );
                                        {
                                            PyObjectTempKeeper1 cmp381;
                                            if ( ( cmp381.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), RICH_COMPARE_BOOL_EQ( cmp381.asObject0(), _python_var_rel_query_name.asObject() ) ) )
                                        {
                                            frame_guard.setLineNumber( 316 );
                                            {
                                                PyObjectTempKeeper1 call378;
                                                PyObjectTempKeeper0 call379;
                                                PyObjectTempKeeper1 make_tuple374;
                                                PyObjectTempKeeper1 make_tuple375;
                                                PyObjectTempKeeper1 make_tuple376;
                                                DECREASE_REFCOUNT( ( call378.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call379.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call378.asObject0(), call379.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_cf4a27e4b6d46e6f3ec98598272ad85d, PyObjectTemporary( ( make_tuple374.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple375.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple376.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), MAKE_TUPLE4( make_tuple374.asObject0(), make_tuple375.asObject0(), make_tuple376.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                            }
                                        }
                                        }
                                    }

                                   CONSIDER_THREADING();
                                }
                            }
                            {
                                frame_guard.setLineNumber( 317 );
                                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_get_all_related_objects ) ).asObject() ) ).asObject() ) );
                                while( true )
                                {
                                    {
                                        frame_guard.setLineNumber( 317 );
                                        PyObject *_tmp_unpack_16 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                        if ( _tmp_unpack_16 == NULL )
                                        {
                                            break;
                                        }
                                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_16 );
                                        _python_var_r.assign0( _python_tmp_iter_value.asObject() );
                                    }
                                    frame_guard.setLineNumber( 318 );
                                    {
                                        PyObjectTempKeeper1 cmp390;
                                        if ( ( cmp390.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), RICH_COMPARE_BOOL_EQ( cmp390.asObject0(), _python_var_rel_name.asObject() ) ) )
                                    {
                                        frame_guard.setLineNumber( 319 );
                                        {
                                            PyObjectTempKeeper1 call387;
                                            PyObjectTempKeeper0 call388;
                                            PyObjectTempKeeper1 make_tuple383;
                                            PyObjectTempKeeper1 make_tuple384;
                                            PyObjectTempKeeper1 make_tuple385;
                                            DECREASE_REFCOUNT( ( call387.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call388.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call387.asObject0(), call388.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_3c481f9b2da4fb9a9d3b4dc69424db3c, PyObjectTemporary( ( make_tuple383.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple384.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple385.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), MAKE_TUPLE4( make_tuple383.asObject0(), make_tuple384.asObject0(), make_tuple385.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        }
                                    }
                                    }
                                    frame_guard.setLineNumber( 320 );
                                    {
                                        PyObjectTempKeeper1 cmp399;
                                        if ( ( cmp399.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), RICH_COMPARE_BOOL_EQ( cmp399.asObject0(), _python_var_rel_query_name.asObject() ) ) )
                                    {
                                        frame_guard.setLineNumber( 321 );
                                        {
                                            PyObjectTempKeeper1 call396;
                                            PyObjectTempKeeper0 call397;
                                            PyObjectTempKeeper1 make_tuple392;
                                            PyObjectTempKeeper1 make_tuple393;
                                            PyObjectTempKeeper1 make_tuple394;
                                            DECREASE_REFCOUNT( ( call396.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call397.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call396.asObject0(), call397.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_8688c21a81e2d37b2a5b0b2008a0714b, PyObjectTemporary( ( make_tuple392.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), make_tuple393.assign( LOOKUP_ATTRIBUTE( _python_var_rel_opts.asObject(), _python_str_plain_object_name ) ), make_tuple394.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_r.asObject(), _python_str_plain_get_accessor_name ) ).asObject() ) ), MAKE_TUPLE4( make_tuple392.asObject0(), make_tuple393.asObject0(), make_tuple394.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        }
                                    }
                                    }

                                   CONSIDER_THREADING();
                                }
                            }
                        }

                       CONSIDER_THREADING();
                    }
                }
                frame_guard.setLineNumber( 324 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_ordering ) ).asObject() ) )
                {
                    {
                        frame_guard.setLineNumber( 325 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_ordering ) ).asObject() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 325 );
                                PyObject *_tmp_unpack_17 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_17 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_17 );
                                _python_var_field_name.assign0( _python_tmp_iter_value.asObject() );
                            }
                            frame_guard.setLineNumber( 326 );
                            if ( RICH_COMPARE_BOOL_EQ( _python_var_field_name.asObject(), _python_str_chr_63 ) )
                            {
                                frame_guard.setLineNumber( 327 );
                                CONSIDER_THREADING(); continue;
                            }
                            frame_guard.setLineNumber( 328 );
                            if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field_name.asObject(), _python_str_plain_startswith ) ).asObject(), _python_str_chr_45 ) ).asObject() ) )
                            {
                                frame_guard.setLineNumber( 329 );
                                _python_var_field_name.assign1( LOOKUP_INDEX_SLICE( _python_var_field_name.asObject(), 1, PY_SSIZE_T_MAX ) );
                            }
                            frame_guard.setLineNumber( 330 );
                            if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_order_with_respect_to ) ).asObject() ) && RICH_COMPARE_BOOL_EQ( _python_var_field_name.asObject(), _python_str_plain__order ) ) )
                            {
                                frame_guard.setLineNumber( 331 );
                                CONSIDER_THREADING(); continue;
                            }
                            frame_guard.setLineNumber( 334 );
                            if ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___, _python_var_field_name.asObject() ) )
                            {
                                frame_guard.setLineNumber( 335 );
                                CONSIDER_THREADING(); continue;
                            }
                            frame_guard.setLineNumber( 338 );
                            if ( RICH_COMPARE_BOOL_EQ( _python_var_field_name.asObject(), _python_str_plain_pk ) )
                            {
                                frame_guard.setLineNumber( 339 );
                                CONSIDER_THREADING(); continue;
                            }
                            frame_guard.setLineNumber( 340 );
                            try
                            {
                                frame_guard.setLineNumber( 341 );
                                {
                                    PyObjectTempKeeper1 call404;
                                    DECREASE_REFCOUNT( ( call404.assign( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_get_field ) ), CALL_FUNCTION( call404.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_field_name.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_cc6090cd09b86016355551e6cea88cb6 ) ).asObject() ) ) );
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

                                if ( _exception.matches( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_FieldDoesNotExist ) ).asObject() ) )
                                {
                                    frame_guard.detachFrame();
                                    frame_guard.setLineNumber( 343 );
                                    {
                                        PyObjectTempKeeper1 call401;
                                        PyObjectTempKeeper0 call402;
                                        DECREASE_REFCOUNT( ( call401.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call402.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call401.asObject0(), call402.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_432a3387e9b70a7018a7f542e66e890a, _python_var_field_name.asObject() ) ).asObject() ) ) );
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

                           CONSIDER_THREADING();
                        }
                    }
                }
                {
                    frame_guard.setLineNumber( 346 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_unique_together ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 346 );
                            PyObject *_tmp_unpack_18 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_18 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_18 );
                            _python_var_ut.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 347 );
                        {
                            PyObjectTempKeeper0 call407;
                            PyObjectTempKeeper0 call408;
                            PyObjectTempKeeper0 call409;
                            DECREASE_REFCOUNT( ( call407.assign( _mvar_django__core__management__validation_validate_local_fields.asObject0() ), call408.assign( _python_var_e.asObject() ), call409.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call407.asObject0(), call408.asObject0(), call409.asObject0(), _python_str_plain_unique_together, _python_var_ut.asObject() ) ) );
                        }

                       CONSIDER_THREADING();
                    }
                }
                frame_guard.setLineNumber( 348 );
                {
                    PyObjectTempKeeper1 isinstance420;
                    if ( (!( ( isinstance420.assign( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_index_together ) ), BUILTIN_ISINSTANCE_BOOL( isinstance420.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__validation_collections.asObject0(), _python_str_plain_Sequence ) ).asObject() ) ) )) )
                {
                    frame_guard.setLineNumber( 349 );
                    {
                        PyObjectTempKeeper1 call412;
                        DECREASE_REFCOUNT( ( call412.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), CALL_FUNCTION_WITH_ARGS( call412.asObject0(), _python_var_opts.asObject(), _python_str_digest_243a2e31308d657608e01feeab4583c8 ) ) );
                    }
                }
                else
                {
                    {
                        frame_guard.setLineNumber( 351 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_index_together ) ).asObject() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 351 );
                                PyObject *_tmp_unpack_19 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_19 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_19 );
                                _python_var_it.assign0( _python_tmp_iter_value.asObject() );
                            }
                            frame_guard.setLineNumber( 352 );
                            {
                                PyObjectTempKeeper0 call415;
                                PyObjectTempKeeper0 call416;
                                PyObjectTempKeeper0 call417;
                                DECREASE_REFCOUNT( ( call415.assign( _mvar_django__core__management__validation_validate_local_fields.asObject0() ), call416.assign( _python_var_e.asObject() ), call417.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call415.asObject0(), call416.asObject0(), call417.asObject0(), _python_str_plain_index_together, _python_var_it.asObject() ) ) );
                            }

                           CONSIDER_THREADING();
                        }
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 354 );
        return BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_errors ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_app.updateLocalsDict( _python_var_outfile.updateLocalsDict( _python_var_it.updateLocalsDict( _python_var_ut.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_seen_this_fk.updateLocalsDict( _python_var_seen_related_fk.updateLocalsDict( _python_var_signature.updateLocalsDict( _python_var_rel_to.updateLocalsDict( _python_var_inter_field.updateLocalsDict( _python_var_seen_self.updateLocalsDict( _python_var_seen_to.updateLocalsDict( _python_var_seen_from.updateLocalsDict( _python_var_to_model.updateLocalsDict( _python_var_from_model.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_seen_intermediary_signatures.updateLocalsDict( _python_var_r.updateLocalsDict( _python_var_rel_query_name.updateLocalsDict( _python_var_rel_name.updateLocalsDict( _python_var_rel_opts.updateLocalsDict( _python_var_rel_field.updateLocalsDict( _python_var_has_unique_field.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_Image.updateLocalsDict( _python_var_invalid_values_msg.updateLocalsDict( _python_var_max_digits.updateLocalsDict( _python_var_mdigits_msg.updateLocalsDict( _python_var_decimal_places.updateLocalsDict( _python_var_decimalp_msg.updateLocalsDict( _python_var_mdigits_ok.updateLocalsDict( _python_var_decimalp_ok.updateLocalsDict( _python_var_max_length.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_model_name.updateLocalsDict( _python_var_app_label.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_cls.updateLocalsDict( _python_var_error.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_SET_DEFAULT.updateLocalsDict( _python_var_SET_NULL.updateLocalsDict( _python_var_get_app_errors.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_models.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_get_validation_errors_of_module_django__core__management__validation )
        {
           Py_DECREF( frame_function_2_get_validation_errors_of_module_django__core__management__validation );
           frame_function_2_get_validation_errors_of_module_django__core__management__validation = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_validation_errors_of_module_django__core__management__validation( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_outfile = NULL;
    PyObject *_python_par_app = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_validation_errors() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_outfile == key )
            {
                if (unlikely( _python_par_outfile ))
                {
                    PyErr_Format( PyExc_TypeError, "get_validation_errors() got multiple values for keyword argument 'outfile'" );
                    goto error_exit;
                }

                _python_par_outfile = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_app == key )
            {
                if (unlikely( _python_par_app ))
                {
                    PyErr_Format( PyExc_TypeError, "get_validation_errors() got multiple values for keyword argument 'app'" );
                    goto error_exit;
                }

                _python_par_app = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_outfile, key ) )
            {
                if (unlikely( _python_par_outfile ))
                {
                    PyErr_Format( PyExc_TypeError, "get_validation_errors() got multiple values for keyword argument 'outfile'" );
                    goto error_exit;
                }

                _python_par_outfile = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_app, key ) )
            {
                if (unlikely( _python_par_app ))
                {
                    PyErr_Format( PyExc_TypeError, "get_validation_errors() got multiple values for keyword argument 'app'" );
                    goto error_exit;
                }

                _python_par_app = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_validation_errors() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_validation_errors() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_validation_errors() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_validation_errors() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_validation_errors() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_validation_errors() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_validation_errors() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_validation_errors() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_validation_errors() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_validation_errors() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_validation_errors() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_validation_errors() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_validation_errors() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_outfile != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_validation_errors() got multiple values for keyword argument 'outfile'" );
             goto error_exit;
         }

        _python_par_outfile = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_app != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_validation_errors() got multiple values for keyword argument 'app'" );
             goto error_exit;
         }

        _python_par_app = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_app == NULL )
    {
        _python_par_app = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_app );
    }


    return impl_function_2_get_validation_errors_of_module_django__core__management__validation( self, _python_par_outfile, _python_par_app );

error_exit:;

    Py_XDECREF( _python_par_outfile );
    Py_XDECREF( _python_par_app );

    return NULL;
}

static PyObject *dparse_function_2_get_validation_errors_of_module_django__core__management__validation( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_get_validation_errors_of_module_django__core__management__validation( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_validation_errors_of_module_django__core__management__validation( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_2_get_validation_errors_of_module_django__core__management__validation( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_rel_field )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 164 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 164 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_rel_field.assign0( _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_rel_field.asObject(), _python_str_plain_name ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_3_validate_local_fields_of_module_django__core__management__validation( Nuitka_FunctionObject *self, PyObject *_python_par_e, PyObject *_python_par_opts, PyObject *_python_par_field_name, PyObject *_python_par_fields )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_e( _python_str_plain_e, _python_par_e );
    PyObjectLocalParameterVariableNoDel _python_var_opts( _python_str_plain_opts, _python_par_opts );
    PyObjectLocalParameterVariableNoDel _python_var_field_name( _python_str_plain_field_name, _python_par_field_name );
    PyObjectLocalParameterVariableNoDel _python_var_fields( _python_str_plain_fields, _python_par_fields );
    PyObjectLocalVariable _python_var_models( _python_str_plain_models );
    PyObjectLocalVariable _python_var_field( _python_str_plain_field );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );

    // Actual function code.
    static PyFrameObject *frame_function_3_validate_local_fields_of_module_django__core__management__validation = NULL;

    if ( isFrameUnusable( frame_function_3_validate_local_fields_of_module_django__core__management__validation ) )
    {
        if ( frame_function_3_validate_local_fields_of_module_django__core__management__validation )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_validate_local_fields_of_module_django__core__management__validation" );
#endif
            Py_DECREF( frame_function_3_validate_local_fields_of_module_django__core__management__validation );
        }

        frame_function_3_validate_local_fields_of_module_django__core__management__validation = MAKE_FRAME( _codeobj_06dfdc62ce94c7bba9575c3292a8c1e9, _module_django__core__management__validation );
    }

    FrameGuard frame_guard( frame_function_3_validate_local_fields_of_module_django__core__management__validation );
    try
    {
        assert( Py_REFCNT( frame_function_3_validate_local_fields_of_module_django__core__management__validation ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 358 );
        _python_var_models.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, PyObjectTemporary( _python_var_fields.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_models.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_models_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_models ) );
        frame_guard.setLineNumber( 360 );
        {
            PyObjectTempKeeper0 isinstance28;
            if ( (!( ( isinstance28.assign( _python_var_fields.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance28.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__validation_collections.asObject0(), _python_str_plain_Sequence ) ).asObject() ) ) )) )
        {
            frame_guard.setLineNumber( 361 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call2;
                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call2.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_885357ff2674f3f2faeca57b71660d33, _python_var_field_name.asObject() ) ).asObject() ) ) );
            }
        }
        else
        {
            {
                frame_guard.setLineNumber( 363 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_fields.asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 363 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_field.assign0( _python_tmp_iter_value.asObject() );
                    }
                    {
                        PyObject *_python_tmp_unhandled_indicator = Py_True;
                        frame_guard.setLineNumber( 364 );
                        try
                        {
                            frame_guard.setLineNumber( 365 );
                            {
                                PyObjectTempKeeper1 call9;
                                _python_var_f.assign1( ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_get_field ) ), CALL_FUNCTION( call9.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_field.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_4191d242e92d6b7a31015c9cafa9d1a6 ) ).asObject() ) ) );
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

                            if ( _exception.matches( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_FieldDoesNotExist ) ).asObject() ) )
                            {
                                frame_guard.detachFrame();
                                _python_tmp_unhandled_indicator = Py_False;
                                frame_guard.setLineNumber( 367 );
                                {
                                    PyObjectTempKeeper1 call6;
                                    PyObjectTempKeeper0 call7;
                                    PyObjectTempKeeper0 make_tuple4;
                                    DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call7.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_eaa6a6e2260cecf7abcd179ac435063c, PyObjectTemporary( ( make_tuple4.assign( _python_var_field_name.asObject() ), MAKE_TUPLE2( make_tuple4.asObject0(), _python_var_field.asObject() ) ) ).asObject() ) ).asObject() ) ) );
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
                        if ( ( _python_tmp_unhandled_indicator == Py_True ) )
                        {
                            frame_guard.setLineNumber( 369 );
                            {
                                PyObjectTempKeeper1 isinstance18;
                                if ( ( isinstance18.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_rel ) ), BUILTIN_ISINSTANCE_BOOL( isinstance18.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_models.asObject(), _python_str_plain_ManyToManyRel ) ).asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 370 );
                                {
                                    PyObjectTempKeeper1 call15;
                                    PyObjectTempKeeper0 call16;
                                    PyObjectTempKeeper0 make_tuple12;
                                    PyObjectTempKeeper1 make_tuple13;
                                    DECREASE_REFCOUNT( ( call15.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call16.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), call16.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_8733df12256af7500620711213db17af, PyObjectTemporary( ( make_tuple12.assign( _python_var_field_name.asObject() ), make_tuple13.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), MAKE_TUPLE3( make_tuple12.asObject0(), make_tuple13.asObject0(), _python_var_field_name.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                }
                            }
                            }
                            frame_guard.setLineNumber( 371 );
                            {
                                PyObjectTempKeeper0 cmp26;
                                if ( ( cmp26.assign( _python_var_f.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp26.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_local_fields ) ).asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 372 );
                                {
                                    PyObjectTempKeeper1 call23;
                                    PyObjectTempKeeper0 call24;
                                    PyObjectTempKeeper0 make_tuple20;
                                    PyObjectTempKeeper1 make_tuple21;
                                    DECREASE_REFCOUNT( ( call23.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_add ) ), call24.assign( _python_var_opts.asObject() ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), call24.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_146dda4b231acd7cd92a1708a3e72ccf, PyObjectTemporary( ( make_tuple20.assign( _python_var_field_name.asObject() ), make_tuple21.assign( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_name ) ), MAKE_TUPLE3( make_tuple20.asObject0(), make_tuple21.asObject0(), _python_var_field_name.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                }
                            }
                            }
                        }
                    }

                   CONSIDER_THREADING();
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
        frame_guard.getFrame0()->f_locals = _python_var_fields.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_field.updateLocalsDict( _python_var_models.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_validate_local_fields_of_module_django__core__management__validation )
        {
           Py_DECREF( frame_function_3_validate_local_fields_of_module_django__core__management__validation );
           frame_function_3_validate_local_fields_of_module_django__core__management__validation = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_validate_local_fields_of_module_django__core__management__validation( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_e = NULL;
    PyObject *_python_par_opts = NULL;
    PyObject *_python_par_field_name = NULL;
    PyObject *_python_par_fields = NULL;
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
                PyErr_Format( PyExc_TypeError, "validate_local_fields() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_e == key )
            {
                if (unlikely( _python_par_e ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_local_fields() got multiple values for keyword argument 'e'" );
                    goto error_exit;
                }

                _python_par_e = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_opts == key )
            {
                if (unlikely( _python_par_opts ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_local_fields() got multiple values for keyword argument 'opts'" );
                    goto error_exit;
                }

                _python_par_opts = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_field_name == key )
            {
                if (unlikely( _python_par_field_name ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_local_fields() got multiple values for keyword argument 'field_name'" );
                    goto error_exit;
                }

                _python_par_field_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_fields == key )
            {
                if (unlikely( _python_par_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_local_fields() got multiple values for keyword argument 'fields'" );
                    goto error_exit;
                }

                _python_par_fields = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_e, key ) )
            {
                if (unlikely( _python_par_e ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_local_fields() got multiple values for keyword argument 'e'" );
                    goto error_exit;
                }

                _python_par_e = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_opts, key ) )
            {
                if (unlikely( _python_par_opts ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_local_fields() got multiple values for keyword argument 'opts'" );
                    goto error_exit;
                }

                _python_par_opts = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_field_name, key ) )
            {
                if (unlikely( _python_par_field_name ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_local_fields() got multiple values for keyword argument 'field_name'" );
                    goto error_exit;
                }

                _python_par_field_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_fields, key ) )
            {
                if (unlikely( _python_par_fields ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_local_fields() got multiple values for keyword argument 'fields'" );
                    goto error_exit;
                }

                _python_par_fields = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "validate_local_fields() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "validate_local_fields() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "validate_local_fields() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "validate_local_fields() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "validate_local_fields() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "validate_local_fields() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "validate_local_fields() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "validate_local_fields() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "validate_local_fields() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "validate_local_fields() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "validate_local_fields() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "validate_local_fields() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "validate_local_fields() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_e != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "validate_local_fields() got multiple values for keyword argument 'e'" );
             goto error_exit;
         }

        _python_par_e = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_opts != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "validate_local_fields() got multiple values for keyword argument 'opts'" );
             goto error_exit;
         }

        _python_par_opts = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_field_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "validate_local_fields() got multiple values for keyword argument 'field_name'" );
             goto error_exit;
         }

        _python_par_field_name = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_fields != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "validate_local_fields() got multiple values for keyword argument 'fields'" );
             goto error_exit;
         }

        _python_par_fields = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_3_validate_local_fields_of_module_django__core__management__validation( self, _python_par_e, _python_par_opts, _python_par_field_name, _python_par_fields );

error_exit:;

    Py_XDECREF( _python_par_e );
    Py_XDECREF( _python_par_opts );
    Py_XDECREF( _python_par_field_name );
    Py_XDECREF( _python_par_fields );

    return NULL;
}

static PyObject *dparse_function_3_validate_local_fields_of_module_django__core__management__validation( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_3_validate_local_fields_of_module_django__core__management__validation( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_validate_local_fields_of_module_django__core__management__validation( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation,
        dparse_function_1___init___of_class_1_ModelErrorCollection_of_module_django__core__management__validation,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d354c32de71cac8c090054dc1d694c71,
        defaults,
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__validation,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation,
        dparse_function_2_add_of_class_1_ModelErrorCollection_of_module_django__core__management__validation,
        _python_str_plain_add,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e62701a83ef005d92de1c752d9859a44,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__validation,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_validation_errors_of_module_django__core__management__validation(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_validation_errors_of_module_django__core__management__validation,
        dparse_function_2_get_validation_errors_of_module_django__core__management__validation,
        _python_str_plain_get_validation_errors,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_555d5fa1a4e4c6f44a610e9a129af647,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__validation,
        _python_str_digest_dc37d6cad8d9063563bdae5a1e2d8abc
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_validate_local_fields_of_module_django__core__management__validation(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_validate_local_fields_of_module_django__core__management__validation,
        dparse_function_3_validate_local_fields_of_module_django__core__management__validation,
        _python_str_plain_validate_local_fields,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_06dfdc62ce94c7bba9575c3292a8c1e9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__validation,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.management.validation",   /* m_name */
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

MOD_INIT_DECL( django__core__management__validation )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__management__validation );
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

    // puts( "in initdjango__core__management__validation" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__management__validation = Py_InitModule4(
        "django.core.management.validation",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__management__validation = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__management__validation = (PyDictObject *)((PyModuleObject *)_module_django__core__management__validation)->md_dict;

    assertObject( _module_django__core__management__validation );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_5fa4c97ca0407519d970227520c96829, _module_django__core__management__validation );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__management__validation );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__management__validation != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__management__validation, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__core__management__validation, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_7ca090ac5460ff7e6c4755817703eb2d );
    PyFrameObject *frame_module_django__core__management__validation = MAKE_FRAME( _codeobj_2292b46b3d948fd125823cdd0eaab656, _module_django__core__management__validation );

    FrameGuard frame_guard( frame_module_django__core__management__validation );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__management__validation ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__validation, (Nuitka_StringObject *)_python_str_plain_collections, IMPORT_MODULE( _python_str_plain_collections, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__validation, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__validation, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__validation, (Nuitka_StringObject *)_python_str_plain_color_style, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7788709b924fa7e8af007652f7c24252, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, _python_list_str_plain_color_style_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_color_style ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__validation, (Nuitka_StringObject *)_python_str_plain_force_str, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, _python_list_str_plain_force_str_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_str ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__validation, (Nuitka_StringObject *)_python_str_plain_is_iterable, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_0599d93f624d0369bf099e5d99880ff0, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, _python_list_str_plain_is_iterable_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_is_iterable ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__validation, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, ((PyModuleObject *)_module_django__core__management__validation)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        {
            PyObject *_python_tmp_bases = _python_tuple_empty;
            frame_guard.setLineNumber( 11 );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_ModelErrorCollection_of_module_django__core__management__validation(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases, ( _mvar_django__core__management__validation___metaclass__.isInitialized( false ) ? _mvar_django__core__management__validation___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_ModelErrorCollection, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__management__validation, (Nuitka_StringObject *)_python_str_plain_ModelErrorCollection, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__management__validation)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__core__management__validation, (Nuitka_StringObject *)_python_str_plain_get_validation_errors, MAKE_FUNCTION_function_2_get_validation_errors_of_module_django__core__management__validation(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__management__validation, (Nuitka_StringObject *)_python_str_plain_validate_local_fields, MAKE_FUNCTION_function_3_validate_local_fields_of_module_django__core__management__validation(  ) );

   return MOD_RETURN_VALUE( _module_django__core__management__validation );
}
