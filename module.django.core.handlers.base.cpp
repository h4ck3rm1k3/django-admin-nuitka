// Generated code for Python source for module 'django.core.handlers.base'
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

// The _module_django__core__handlers__base is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__handlers__base;
PyDictObject *_moduledict_django__core__handlers__base;

// The module level variables.
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_MiddlewareNotUsed( &_module_django__core__handlers__base, &_python_str_plain_MiddlewareNotUsed );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_PermissionDenied( &_module_django__core__handlers__base, &_python_str_plain_PermissionDenied );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_SuspiciousOperation( &_module_django__core__handlers__base, &_python_str_plain_SuspiciousOperation );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base___metaclass__( &_module_django__core__handlers__base, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_connections( &_module_django__core__handlers__base, &_python_str_plain_connections );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_debug( &_module_django__core__handlers__base, &_python_str_plain_debug );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_force_text( &_module_django__core__handlers__base, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_http( &_module_django__core__handlers__base, &_python_str_plain_http );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_import_by_path( &_module_django__core__handlers__base, &_python_str_plain_import_by_path );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_logger( &_module_django__core__handlers__base, &_python_str_plain_logger );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_logging( &_module_django__core__handlers__base, &_python_str_plain_logging );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_settings( &_module_django__core__handlers__base, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_signals( &_module_django__core__handlers__base, &_python_str_plain_signals );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_six( &_module_django__core__handlers__base, &_python_str_plain_six );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_sys( &_module_django__core__handlers__base, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_transaction( &_module_django__core__handlers__base, &_python_str_plain_transaction );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_types( &_module_django__core__handlers__base, &_python_str_plain_types );
static PyObjectGlobalVariable_django__core__handlers__base _mvar_django__core__handlers__base_urlresolvers( &_module_django__core__handlers__base, &_python_str_plain_urlresolvers );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_BaseHandler_of_module_django__core__handlers__base(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base(  );


static PyObject *MAKE_FUNCTION_function_2_get_path_info_of_module_django__core__handlers__base(  );


static PyObject *MAKE_FUNCTION_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base(  );


static PyObject *MAKE_FUNCTION_function_3_get_script_name_of_module_django__core__handlers__base(  );


static PyObject *MAKE_FUNCTION_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base(  );


static PyObject *MAKE_FUNCTION_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base(  );


static PyObject *MAKE_FUNCTION_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base(  );


static PyObject *MAKE_FUNCTION_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_BaseHandler_of_module_django__core__handlers__base(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_response_fixes( _python_str_plain_response_fixes );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_load_middleware( _python_str_plain_load_middleware );
    PyObjectLocalVariable _python_var_make_view_atomic( _python_str_plain_make_view_atomic );
    PyObjectLocalVariable _python_var_get_response( _python_str_plain_get_response );
    PyObjectLocalVariable _python_var_handle_uncaught_exception( _python_str_plain_handle_uncaught_exception );
    PyObjectLocalVariable _python_var_apply_response_fixes( _python_str_plain_apply_response_fixes );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_base );
    static PyFrameObject *frame_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;

    if ( isFrameUnusable( frame_class_1_BaseHandler_of_module_django__core__handlers__base ) )
    {
        if ( frame_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_1_BaseHandler_of_module_django__core__handlers__base" );
#endif
            Py_DECREF( frame_class_1_BaseHandler_of_module_django__core__handlers__base );
        }

        frame_class_1_BaseHandler_of_module_django__core__handlers__base = MAKE_FRAME( _codeobj_f1f51476a9b9e43dccb1151318cf810d, _module_django__core__handlers__base );
    }

    FrameGuard frame_guard( frame_class_1_BaseHandler_of_module_django__core__handlers__base );
    try
    {
        assert( Py_REFCNT( frame_class_1_BaseHandler_of_module_django__core__handlers__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 23 );
        {
            PyObjectTempKeeper1 make_list1;
            PyObjectTempKeeper1 make_list2;
            PyObjectTempKeeper1 make_list3;
            _python_var_response_fixes.assign1( ( make_list1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_http.asObject0(), _python_str_plain_fix_location_header ) ), make_list2.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_http.asObject0(), _python_str_plain_conditional_content_removal ) ), make_list3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_http.asObject0(), _python_str_plain_fix_IE_for_attach ) ), MAKE_LIST4( make_list1.asObject(), make_list2.asObject(), make_list3.asObject(), LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_http.asObject0(), _python_str_plain_fix_IE_for_vary ) ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_apply_response_fixes.updateLocalsDict( _python_var_handle_uncaught_exception.updateLocalsDict( _python_var_get_response.updateLocalsDict( _python_var_make_view_atomic.updateLocalsDict( _python_var_load_middleware.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_response_fixes.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
           Py_DECREF( frame_class_1_BaseHandler_of_module_django__core__handlers__base );
           frame_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;
        }

        throw;
    }
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base(  ) );
    _python_var_load_middleware.assign1( MAKE_FUNCTION_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base(  ) );
    _python_var_make_view_atomic.assign1( MAKE_FUNCTION_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base(  ) );
    _python_var_get_response.assign1( MAKE_FUNCTION_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base(  ) );
    _python_var_handle_uncaught_exception.assign1( MAKE_FUNCTION_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base(  ) );
    _python_var_apply_response_fixes.assign1( MAKE_FUNCTION_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base(  ) );
    return _python_var_apply_response_fixes.updateLocalsDict( _python_var_handle_uncaught_exception.updateLocalsDict( _python_var_get_response.updateLocalsDict( _python_var_make_view_atomic.updateLocalsDict( _python_var_load_middleware.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_response_fixes.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base ) )
    {
        if ( frame_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base );
        }

        frame_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base = MAKE_FRAME( _codeobj_2d1931858649a1727537d4636a24df17, _module_django__core__handlers__base );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base ) == 2 ); // Frame stack
        {
            PyObject *_python_tmp_assign_source = Py_None;
            frame_guard.setLineNumber( 31 );
            {
                    PyObject *tmp_identifier = _python_tmp_assign_source;
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__request_middleware );
            }
            {
                    PyObject *tmp_identifier = _python_tmp_assign_source;
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__view_middleware );
            }
            {
                    PyObject *tmp_identifier = _python_tmp_assign_source;
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__template_response_middleware );
            }
            {
                    PyObject *tmp_identifier = _python_tmp_assign_source;
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__response_middleware );
            }
            {
                    PyObject *tmp_identifier = _python_tmp_assign_source;
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__exception_middleware );
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

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
           Py_DECREF( frame_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base );
           frame_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_request_middleware( _python_str_plain_request_middleware );
    PyObjectLocalVariable _python_var_middleware_path( _python_str_plain_middleware_path );
    PyObjectLocalVariable _python_var_mw_class( _python_str_plain_mw_class );
    PyObjectLocalVariable _python_var_mw_instance( _python_str_plain_mw_instance );

    // Actual function code.
    static PyFrameObject *frame_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;

    if ( isFrameUnusable( frame_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base ) )
    {
        if ( frame_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base" );
#endif
            Py_DECREF( frame_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base );
        }

        frame_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base = MAKE_FRAME( _codeobj_fec41f7b36af961c7f75eab4f30ed058, _module_django__core__handlers__base );
    }

    FrameGuard frame_guard( frame_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base );
    try
    {
        assert( Py_REFCNT( frame_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 40 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain__view_middleware );
        frame_guard.setLineNumber( 41 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain__template_response_middleware );
        frame_guard.setLineNumber( 42 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain__response_middleware );
        frame_guard.setLineNumber( 43 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain__exception_middleware );
        _python_var_request_middleware.assign1( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 46 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_settings.asObject0(), _python_str_plain_MIDDLEWARE_CLASSES ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 46 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_middleware_path.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 47 );
                {
                    PyObjectTempKeeper0 call1;
                    _python_var_mw_class.assign1( ( call1.assign( _mvar_django__core__handlers__base_import_by_path.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_middleware_path.asObject() ) ) );
                }
                frame_guard.setLineNumber( 48 );
                try
                {
                    frame_guard.setLineNumber( 49 );
                    _python_var_mw_instance.assign1( CALL_FUNCTION_NO_ARGS( _python_var_mw_class.asObject() ) );
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

                    if ( _exception.matches( _mvar_django__core__handlers__base_MiddlewareNotUsed.asObject0() ) )
                    {
                        frame_guard.detachFrame();
                        frame_guard.setLineNumber( 51 );
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
                frame_guard.setLineNumber( 53 );
                if ( HAS_ATTRIBUTE( _python_var_mw_instance.asObject(), _python_unicode_plain_process_request ) )
                {
                    frame_guard.setLineNumber( 54 );
                    {
                        PyObjectTempKeeper1 call3;
                        DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_request_middleware.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_mw_instance.asObject(), _python_str_plain_process_request ) ).asObject() ) ) );
                    }
                }
                frame_guard.setLineNumber( 55 );
                if ( HAS_ATTRIBUTE( _python_var_mw_instance.asObject(), _python_unicode_plain_process_view ) )
                {
                    frame_guard.setLineNumber( 56 );
                    {
                        PyObjectTempKeeper1 call5;
                        DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__view_middleware ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_mw_instance.asObject(), _python_str_plain_process_view ) ).asObject() ) ) );
                    }
                }
                frame_guard.setLineNumber( 57 );
                if ( HAS_ATTRIBUTE( _python_var_mw_instance.asObject(), _python_unicode_plain_process_template_response ) )
                {
                    frame_guard.setLineNumber( 58 );
                    {
                        PyObjectTempKeeper1 call7;
                        DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__template_response_middleware ) ).asObject(), _python_str_plain_insert ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_int_0, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_mw_instance.asObject(), _python_str_plain_process_template_response ) ).asObject() ) ) );
                    }
                }
                frame_guard.setLineNumber( 59 );
                if ( HAS_ATTRIBUTE( _python_var_mw_instance.asObject(), _python_unicode_plain_process_response ) )
                {
                    frame_guard.setLineNumber( 60 );
                    {
                        PyObjectTempKeeper1 call10;
                        DECREASE_REFCOUNT( ( call10.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__response_middleware ) ).asObject(), _python_str_plain_insert ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_int_0, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_mw_instance.asObject(), _python_str_plain_process_response ) ).asObject() ) ) );
                    }
                }
                frame_guard.setLineNumber( 61 );
                if ( HAS_ATTRIBUTE( _python_var_mw_instance.asObject(), _python_unicode_plain_process_exception ) )
                {
                    frame_guard.setLineNumber( 62 );
                    {
                        PyObjectTempKeeper1 call13;
                        DECREASE_REFCOUNT( ( call13.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__exception_middleware ) ).asObject(), _python_str_plain_insert ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_int_0, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_mw_instance.asObject(), _python_str_plain_process_exception ) ).asObject() ) ) );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 66 );
        {
                PyObject *tmp_identifier = _python_var_request_middleware.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__request_middleware );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_mw_instance.updateLocalsDict( _python_var_mw_class.updateLocalsDict( _python_var_middleware_path.updateLocalsDict( _python_var_request_middleware.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
           Py_DECREF( frame_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base );
           frame_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "load_middleware() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "load_middleware() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "load_middleware() got multiple values for keyword argument 'self'" );
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
                   "load_middleware() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "load_middleware() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "load_middleware() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "load_middleware() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "load_middleware() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "load_middleware() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "load_middleware() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "load_middleware() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "load_middleware() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "load_middleware() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "load_middleware() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "load_middleware() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "load_middleware() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "load_middleware() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_view )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_view( _python_str_plain_view, _python_par_view );
    PyObjectLocalVariable _python_var_non_atomic_requests( _python_str_plain_non_atomic_requests );
    PyObjectLocalVariable _python_var_db( _python_str_plain_db );

    // Actual function code.
    static PyFrameObject *frame_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;

    if ( isFrameUnusable( frame_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base ) )
    {
        if ( frame_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base" );
#endif
            Py_DECREF( frame_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base );
        }

        frame_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base = MAKE_FRAME( _codeobj_4743cb22d9fb1ca4ca27ae9f8628095e, _module_django__core__handlers__base );
    }

    FrameGuard frame_guard( frame_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base );
    try
    {
        assert( Py_REFCNT( frame_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 69 );
        {
            PyObjectTempKeeper0 getattr1;
            _python_var_non_atomic_requests.assign1( ( getattr1.assign( _python_var_view.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_unicode_plain__non_atomic_requests, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ) ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 70 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_connections.asObject0(), _python_str_plain_all ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 70 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_db.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 71 );
                {
                    PyObjectTempKeeper1 cmp9;
                    if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_db.asObject(), _python_str_plain_settings_dict ) ).asObject(), _python_unicode_plain_ATOMIC_REQUESTS ) ).asObject() ) && ( cmp9.assign( LOOKUP_ATTRIBUTE( _python_var_db.asObject(), _python_str_plain_alias ) ), SEQUENCE_CONTAINS_NOT_BOOL( cmp9.asObject0(), _python_var_non_atomic_requests.asObject() ) ) ) )
                {
                    frame_guard.setLineNumber( 73 );
                    {
                        PyObjectTempKeeper1 call4;
                        PyObjectTempKeeper1 call7;
                        _python_var_view.assign1( ( call7.assign( ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_transaction.asObject0(), _python_str_plain_atomic ) ), CALL_FUNCTION( call4.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_db.asObject(), _python_str_plain_alias ) ).asObject(), _python_str_plain_using ) ).asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_view.asObject() ) ) );
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 74 );
        return _python_var_view.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_view.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_db.updateLocalsDict( _python_var_non_atomic_requests.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
           Py_DECREF( frame_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base );
           frame_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_view = NULL;
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
                PyErr_Format( PyExc_TypeError, "make_view_atomic() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "make_view_atomic() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_view == key )
            {
                if (unlikely( _python_par_view ))
                {
                    PyErr_Format( PyExc_TypeError, "make_view_atomic() got multiple values for keyword argument 'view'" );
                    goto error_exit;
                }

                _python_par_view = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "make_view_atomic() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_view, key ) )
            {
                if (unlikely( _python_par_view ))
                {
                    PyErr_Format( PyExc_TypeError, "make_view_atomic() got multiple values for keyword argument 'view'" );
                    goto error_exit;
                }

                _python_par_view = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "make_view_atomic() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "make_view_atomic() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "make_view_atomic() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "make_view_atomic() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "make_view_atomic() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "make_view_atomic() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_view_atomic() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "make_view_atomic() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_view_atomic() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "make_view_atomic() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_view_atomic() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "make_view_atomic() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "make_view_atomic() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "make_view_atomic() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_view != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_view_atomic() got multiple values for keyword argument 'view'" );
             goto error_exit;
         }

        _python_par_view = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, _python_par_self, _python_par_view );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_view );

    return NULL;
}

static PyObject *dparse_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_request )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalVariable _python_var_urlconf( _python_str_plain_urlconf );
    PyObjectLocalVariable _python_var_resolver( _python_str_plain_resolver );
    PyObjectLocalVariable _python_var_response( _python_str_plain_response );
    PyObjectLocalVariable _python_var_middleware_method( _python_str_plain_middleware_method );
    PyObjectLocalVariable _python_var_resolver_match( _python_str_plain_resolver_match );
    PyObjectLocalVariable _python_var_callback( _python_str_plain_callback );
    PyObjectLocalVariable _python_var_callback_args( _python_str_plain_callback_args );
    PyObjectLocalVariable _python_var_callback_kwargs( _python_str_plain_callback_kwargs );
    PyObjectLocalVariable _python_var_wrapped_callback( _python_str_plain_wrapped_callback );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_view_name( _python_str_plain_view_name );
    PyObjectLocalVariable _python_var_param_dict( _python_str_plain_param_dict );
    PyObjectLocalVariable _python_var_security_logger( _python_str_plain_security_logger );

    // Actual function code.
    static PyFrameObject *frame_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;

    if ( isFrameUnusable( frame_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base ) )
    {
        if ( frame_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base" );
#endif
            Py_DECREF( frame_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base );
        }

        frame_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base = MAKE_FRAME( _codeobj_9c5bbb5c998dcf4f2f16f52871b1bced, _module_django__core__handlers__base );
    }

    FrameGuard frame_guard( frame_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base );
    try
    {
        assert( Py_REFCNT( frame_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 83 );
        _python_var_urlconf.assign1( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_settings.asObject0(), _python_str_plain_ROOT_URLCONF ) );
        frame_guard.setLineNumber( 84 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_urlresolvers.asObject0(), _python_str_plain_set_urlconf ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_urlconf.asObject() ) ) );
        }
        frame_guard.setLineNumber( 85 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_resolver.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_urlresolvers.asObject0(), _python_str_plain_RegexURLResolver ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_unicode_digest_5e3697fa25fe821332b316dd47429e55, _python_var_urlconf.asObject() ) ) );
        }
        frame_guard.setLineNumber( 86 );
        try
        {
            _python_var_response.assign0( Py_None );
            {
                frame_guard.setLineNumber( 89 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__request_middleware ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 89 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_middleware_method.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 90 );
                    {
                        PyObjectTempKeeper0 call74;
                        _python_var_response.assign1( ( call74.assign( _python_var_middleware_method.asObject() ), CALL_FUNCTION_WITH_ARGS( call74.asObject0(), _python_var_request.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 91 );
                    if ( CHECK_IF_TRUE( _python_var_response.asObject() ) )
                    {
                        frame_guard.setLineNumber( 92 );
                        break;
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 94 );
            if ( ( _python_var_response.asObject() == Py_None ) )
            {
                frame_guard.setLineNumber( 95 );
                if ( HAS_ATTRIBUTE( _python_var_request.asObject(), _python_unicode_plain_urlconf ) )
                {
                    frame_guard.setLineNumber( 97 );
                    _python_var_urlconf.assign1( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_urlconf ) );
                    frame_guard.setLineNumber( 98 );
                    {
                        PyObjectTempKeeper1 call76;
                        DECREASE_REFCOUNT( ( call76.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_urlresolvers.asObject0(), _python_str_plain_set_urlconf ) ), CALL_FUNCTION_WITH_ARGS( call76.asObject0(), _python_var_urlconf.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 99 );
                    {
                        PyObjectTempKeeper1 call78;
                        _python_var_resolver.assign1( ( call78.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_urlresolvers.asObject0(), _python_str_plain_RegexURLResolver ) ), CALL_FUNCTION_WITH_ARGS( call78.asObject0(), _python_unicode_digest_5e3697fa25fe821332b316dd47429e55, _python_var_urlconf.asObject() ) ) );
                    }
                }
                frame_guard.setLineNumber( 101 );
                {
                    PyObjectTempKeeper1 call81;
                    _python_var_resolver_match.assign1( ( call81.assign( LOOKUP_ATTRIBUTE( _python_var_resolver.asObject(), _python_str_plain_resolve ) ), CALL_FUNCTION_WITH_ARGS( call81.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_path_info ) ).asObject() ) ) );
                }
                {
                    frame_guard.setLineNumber( 102 );
                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_var_resolver_match.asObject() ) );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                    _python_var_callback.assign0( _python_tmp_element_1.asObject() );
                    _python_var_callback_args.assign0( _python_tmp_element_2.asObject() );
                    _python_var_callback_kwargs.assign0( _python_tmp_element_3.asObject() );
                }
                frame_guard.setLineNumber( 103 );
                {
                        PyObject *tmp_identifier = _python_var_resolver_match.asObject();
                        SET_ATTRIBUTE( tmp_identifier, _python_var_request.asObject(), _python_str_plain_resolver_match );
                }
                {
                    frame_guard.setLineNumber( 106 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__view_middleware ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 106 );
                            PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_2 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                            _python_var_middleware_method.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 107 );
                        {
                            PyObjectTempKeeper0 call83;
                            PyObjectTempKeeper0 call84;
                            PyObjectTempKeeper0 call85;
                            PyObjectTempKeeper0 call86;
                            _python_var_response.assign1( ( call83.assign( _python_var_middleware_method.asObject() ), call84.assign( _python_var_request.asObject() ), call85.assign( _python_var_callback.asObject() ), call86.assign( _python_var_callback_args.asObject() ), CALL_FUNCTION_WITH_ARGS( call83.asObject0(), call84.asObject0(), call85.asObject0(), call86.asObject0(), _python_var_callback_kwargs.asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 108 );
                        if ( CHECK_IF_TRUE( _python_var_response.asObject() ) )
                        {
                            frame_guard.setLineNumber( 109 );
                            break;
                        }

                       CONSIDER_THREADING();
                    }
                }
            }
            frame_guard.setLineNumber( 111 );
            if ( ( _python_var_response.asObject() == Py_None ) )
            {
                frame_guard.setLineNumber( 112 );
                {
                    PyObjectTempKeeper1 call88;
                    _python_var_wrapped_callback.assign1( ( call88.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_make_view_atomic ) ), CALL_FUNCTION_WITH_ARGS( call88.asObject0(), _python_var_callback.asObject() ) ) );
                }
                frame_guard.setLineNumber( 113 );
                try
                {
                    frame_guard.setLineNumber( 114 );
                    {
                        PyObjectTempKeeper0 call_tmp93;
                        PyObjectTempKeeper1 call_tmp94;
                        PyObjectTempKeeper0 call_tmp95;
                        _python_var_response.assign1( ( call_tmp93.assign( _python_var_wrapped_callback.asObject() ), call_tmp94.assign( MAKE_TUPLE1( _python_var_request.asObject() ) ), call_tmp95.assign( _python_var_callback_args.asObject() ), impl_function_8_complex_call_helper_pos_star_list_star_dict_of_module___internal__( call_tmp93.asObject(), call_tmp94.asObject(), call_tmp95.asObject(), _python_var_callback_kwargs.asObject1() ) ) );
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
                        {
                            frame_guard.setLineNumber( 119 );
                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__exception_middleware ) ).asObject() ) );
                            while( true )
                            {
                                {
                                    frame_guard.setLineNumber( 119 );
                                    PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                    if ( _tmp_unpack_3 == NULL )
                                    {
                                        break;
                                    }
                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                                    _python_var_middleware_method.assign0( _python_tmp_iter_value.asObject() );
                                }
                                frame_guard.setLineNumber( 120 );
                                {
                                    PyObjectTempKeeper0 call90;
                                    PyObjectTempKeeper0 call91;
                                    _python_var_response.assign1( ( call90.assign( _python_var_middleware_method.asObject() ), call91.assign( _python_var_request.asObject() ), CALL_FUNCTION_WITH_ARGS( call90.asObject0(), call91.asObject0(), _python_var_e.asObject() ) ) );
                                }
                                frame_guard.setLineNumber( 121 );
                                if ( CHECK_IF_TRUE( _python_var_response.asObject() ) )
                                {
                                    frame_guard.setLineNumber( 122 );
                                    break;
                                }

                               CONSIDER_THREADING();
                            }
                        }
                        frame_guard.setLineNumber( 123 );
                        if ( ( _python_var_response.asObject() == Py_None ) )
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
            frame_guard.setLineNumber( 127 );
            if ( ( _python_var_response.asObject() == Py_None ) )
            {
                frame_guard.setLineNumber( 128 );
                {
                    PyObjectTempKeeper0 isinstance97;
                    if ( ( isinstance97.assign( _python_var_callback.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance97.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_types.asObject0(), _python_str_plain_FunctionType ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 129 );
                    _python_var_view_name.assign1( LOOKUP_ATTRIBUTE( _python_var_callback.asObject(), _python_str_plain___name__ ) );
                }
                else
                {
                    frame_guard.setLineNumber( 131 );
                    _python_var_view_name.assign1( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_callback.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ).asObject(), _python_unicode_digest_00aae7a2c3e452c68293598c99f827e8 ) );
                }
                }
                frame_guard.setLineNumber( 132 );
                {
                    PyObjectTempKeeper1 make_tuple99;
                    {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_252f165323f3a48c38476ee521a073db, PyObjectTemporary( ( make_tuple99.assign( LOOKUP_ATTRIBUTE( _python_var_callback.asObject(), _python_str_plain___module__ ) ), MAKE_TUPLE2( make_tuple99.asObject0(), _python_var_view_name.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
                }
            }
            frame_guard.setLineNumber( 136 );
            if ( ( HAS_ATTRIBUTE( _python_var_response.asObject(), _python_unicode_plain_render ) && CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_callable ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_response.asObject(), _python_str_plain_render ) ).asObject() ) ).asObject() ) ) )
            {
                {
                    frame_guard.setLineNumber( 137 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__template_response_middleware ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 137 );
                            PyObject *_tmp_unpack_4 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_4 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_4 );
                            _python_var_middleware_method.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 138 );
                        {
                            PyObjectTempKeeper0 call101;
                            PyObjectTempKeeper0 call102;
                            _python_var_response.assign1( ( call101.assign( _python_var_middleware_method.asObject() ), call102.assign( _python_var_request.asObject() ), CALL_FUNCTION_WITH_ARGS( call101.asObject0(), call102.asObject0(), _python_var_response.asObject() ) ) );
                        }

                       CONSIDER_THREADING();
                    }
                }
                frame_guard.setLineNumber( 139 );
                _python_var_response.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_response.asObject(), _python_str_plain_render ) ).asObject() ) );
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

            if ( _exception.matches( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_http.asObject0(), _python_str_plain_Http404 ) ).asObject() ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 142 );
                {
                    PyObjectTempKeeper1 call6;
                    PyObjectTempKeeper1 call7;
                    DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_logger.asObject0(), _python_str_plain_warning ) ), call7.assign( MAKE_TUPLE2( _python_unicode_digest_68b292ee7826a57fc5688ce378b3559e, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_path ) ).asObject() ) ), CALL_FUNCTION( call6.asObject0(), call7.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( MAKE_DICT2( _python_int_pos_404, _python_unicode_plain_status_code, _python_var_request.asObject(), _python_unicode_plain_request ) ).asObject(), _python_str_plain_extra ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 147 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_settings.asObject0(), _python_str_plain_DEBUG ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 148 );
                    {
                        PyObjectTempKeeper0 call10;
                        PyObjectTempKeeper1 call9;
                        _python_var_response.assign1( ( call9.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_debug.asObject0(), _python_str_plain_technical_404_response ) ), call10.assign( _python_var_request.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), call10.asObject0(), _python_var_e.asObject() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 150 );
                    try
                    {
                        {
                            frame_guard.setLineNumber( 151 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_resolver.asObject(), _python_str_plain_resolve404 ) ).asObject() ) ).asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_callback.assign0( _python_tmp_element_1.asObject() );
                            _python_var_param_dict.assign0( _python_tmp_element_2.asObject() );
                        }
                        frame_guard.setLineNumber( 152 );
                        {
                            PyObjectTempKeeper0 call_tmp23;
                            PyObjectTempKeeper1 call_tmp24;
                            _python_var_response.assign1( ( call_tmp23.assign( _python_var_callback.asObject() ), call_tmp24.assign( MAKE_TUPLE1( _python_var_request.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp23.asObject(), call_tmp24.asObject(), _python_var_param_dict.asObject1() ) ) );
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

                        if (true)
                        {
                            frame_guard.detachFrame();
                            frame_guard.setLineNumber( 154 );
                            {
                                PyObjectTempKeeper1 call16;
                                PyObjectTempKeeper1 make_dict12;
                                DECREASE_REFCOUNT( ( call16.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_signals.asObject0(), _python_str_plain_got_request_exception ) ).asObject(), _python_str_plain_send ) ), CALL_FUNCTION( call16.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict12.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), MAKE_DICT2( make_dict12.asObject0(), _python_str_plain_sender, _python_var_request.asObject(), _python_str_plain_request ) ) ).asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 155 );
                            {
                                PyObjectTempKeeper1 call19;
                                PyObjectTempKeeper0 call20;
                                PyObjectTempKeeper0 call21;
                                _python_var_response.assign1( ( call19.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_uncaught_exception ) ), call20.assign( _python_var_request.asObject() ), call21.assign( _python_var_resolver.asObject() ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), call20.asObject0(), call21.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_sys.asObject0(), _python_str_plain_exc_info ) ).asObject() ) ).asObject() ) ) );
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
            else if ( _exception.matches( _mvar_django__core__handlers__base_PermissionDenied.asObject0() ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 158 );
                {
                    PyObjectTempKeeper1 call26;
                    PyObjectTempKeeper1 call27;
                    DECREASE_REFCOUNT( ( call26.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_logger.asObject0(), _python_str_plain_warning ) ), call27.assign( MAKE_TUPLE2( _python_unicode_digest_0b0b91ccc09ba902ed86ffd1399df3fc, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_path ) ).asObject() ) ), CALL_FUNCTION( call26.asObject0(), call27.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( MAKE_DICT2( _python_int_pos_403, _python_unicode_plain_status_code, _python_var_request.asObject(), _python_unicode_plain_request ) ).asObject(), _python_str_plain_extra ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 164 );
                try
                {
                    {
                        frame_guard.setLineNumber( 165 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_resolver.asObject(), _python_str_plain_resolve403 ) ).asObject() ) ).asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_callback.assign0( _python_tmp_element_1.asObject() );
                        _python_var_param_dict.assign0( _python_tmp_element_2.asObject() );
                    }
                    frame_guard.setLineNumber( 166 );
                    {
                        PyObjectTempKeeper0 call_tmp40;
                        PyObjectTempKeeper1 call_tmp41;
                        _python_var_response.assign1( ( call_tmp40.assign( _python_var_callback.asObject() ), call_tmp41.assign( MAKE_TUPLE1( _python_var_request.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp40.asObject(), call_tmp41.asObject(), _python_var_param_dict.asObject1() ) ) );
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

                    if (true)
                    {
                        frame_guard.detachFrame();
                        frame_guard.setLineNumber( 168 );
                        {
                            PyObjectTempKeeper1 call33;
                            PyObjectTempKeeper1 make_dict29;
                            DECREASE_REFCOUNT( ( call33.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_signals.asObject0(), _python_str_plain_got_request_exception ) ).asObject(), _python_str_plain_send ) ), CALL_FUNCTION( call33.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict29.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), MAKE_DICT2( make_dict29.asObject0(), _python_str_plain_sender, _python_var_request.asObject(), _python_str_plain_request ) ) ).asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 170 );
                        {
                            PyObjectTempKeeper1 call36;
                            PyObjectTempKeeper0 call37;
                            PyObjectTempKeeper0 call38;
                            _python_var_response.assign1( ( call36.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_uncaught_exception ) ), call37.assign( _python_var_request.asObject() ), call38.assign( _python_var_resolver.asObject() ), CALL_FUNCTION_WITH_ARGS( call36.asObject0(), call37.asObject0(), call38.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_sys.asObject0(), _python_str_plain_exc_info ) ).asObject() ) ).asObject() ) ) );
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
            else if ( _exception.matches( _mvar_django__core__handlers__base_SuspiciousOperation.asObject0() ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 176 );
                {
                    PyObjectTempKeeper1 call43;
                    _python_var_security_logger.assign1( ( call43.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_logging.asObject0(), _python_str_plain_getLogger ) ), CALL_FUNCTION_WITH_ARGS( call43.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_449976f29ceb85721e36733f494e19cd, PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 178 );
                {
                    PyObjectTempKeeper0 call45;
                    PyObjectTempKeeper1 call47;
                    DECREASE_REFCOUNT( ( call47.assign( LOOKUP_ATTRIBUTE( _python_var_security_logger.asObject(), _python_str_plain_error ) ), CALL_FUNCTION_WITH_ARGS( call47.asObject0(), PyObjectTemporary( ( call45.assign( _mvar_django__core__handlers__base_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call45.asObject0(), _python_var_e.asObject() ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 180 );
                try
                {
                    {
                        frame_guard.setLineNumber( 181 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_resolver.asObject(), _python_str_plain_resolve400 ) ).asObject() ) ).asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_callback.assign0( _python_tmp_element_1.asObject() );
                        _python_var_param_dict.assign0( _python_tmp_element_2.asObject() );
                    }
                    frame_guard.setLineNumber( 182 );
                    {
                        PyObjectTempKeeper0 call_tmp60;
                        PyObjectTempKeeper1 call_tmp61;
                        _python_var_response.assign1( ( call_tmp60.assign( _python_var_callback.asObject() ), call_tmp61.assign( MAKE_TUPLE1( _python_var_request.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp60.asObject(), call_tmp61.asObject(), _python_var_param_dict.asObject1() ) ) );
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

                    if (true)
                    {
                        frame_guard.detachFrame();
                        frame_guard.setLineNumber( 184 );
                        {
                            PyObjectTempKeeper1 call53;
                            PyObjectTempKeeper1 make_dict49;
                            DECREASE_REFCOUNT( ( call53.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_signals.asObject0(), _python_str_plain_got_request_exception ) ).asObject(), _python_str_plain_send ) ), CALL_FUNCTION( call53.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict49.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), MAKE_DICT2( make_dict49.asObject0(), _python_str_plain_sender, _python_var_request.asObject(), _python_str_plain_request ) ) ).asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 186 );
                        {
                            PyObjectTempKeeper1 call56;
                            PyObjectTempKeeper0 call57;
                            PyObjectTempKeeper0 call58;
                            _python_var_response.assign1( ( call56.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_uncaught_exception ) ), call57.assign( _python_var_request.asObject() ), call58.assign( _python_var_resolver.asObject() ), CALL_FUNCTION_WITH_ARGS( call56.asObject0(), call57.asObject0(), call58.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_sys.asObject0(), _python_str_plain_exc_info ) ).asObject() ) ).asObject() ) ) );
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
            else if ( _exception.matches( PyExc_SystemExit ) )
            {
                frame_guard.detachFrame();
                {
                    PyTracebackObject *tb = _exception.getTraceback();
                    frame_guard.setLineNumber( tb->tb_lineno );
                    _exception.setTraceback( tb->tb_next );
                    tb->tb_next = NULL;

                    throw;
                }
            }
            else if (true)
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 195 );
                {
                    PyObjectTempKeeper1 call67;
                    PyObjectTempKeeper1 make_dict63;
                    DECREASE_REFCOUNT( ( call67.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_signals.asObject0(), _python_str_plain_got_request_exception ) ).asObject(), _python_str_plain_send ) ), CALL_FUNCTION( call67.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict63.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), MAKE_DICT2( make_dict63.asObject0(), _python_str_plain_sender, _python_var_request.asObject(), _python_str_plain_request ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 196 );
                {
                    PyObjectTempKeeper1 call70;
                    PyObjectTempKeeper0 call71;
                    PyObjectTempKeeper0 call72;
                    _python_var_response.assign1( ( call70.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_uncaught_exception ) ), call71.assign( _python_var_request.asObject() ), call72.assign( _python_var_resolver.asObject() ), CALL_FUNCTION_WITH_ARGS( call70.asObject0(), call71.asObject0(), call72.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_sys.asObject0(), _python_str_plain_exc_info ) ).asObject() ) ).asObject() ) ) );
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
        frame_guard.setLineNumber( 198 );
        try
        {
            {
                frame_guard.setLineNumber( 200 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__response_middleware ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 200 );
                        PyObject *_tmp_unpack_5 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_5 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_5 );
                        _python_var_middleware_method.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 201 );
                    {
                        PyObjectTempKeeper0 call115;
                        PyObjectTempKeeper0 call116;
                        _python_var_response.assign1( ( call115.assign( _python_var_middleware_method.asObject() ), call116.assign( _python_var_request.asObject() ), CALL_FUNCTION_WITH_ARGS( call115.asObject0(), call116.asObject0(), _python_var_response.asObject() ) ) );
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 202 );
            {
                PyObjectTempKeeper1 call118;
                PyObjectTempKeeper0 call119;
                _python_var_response.assign1( ( call118.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_apply_response_fixes ) ), call119.assign( _python_var_request.asObject() ), CALL_FUNCTION_WITH_ARGS( call118.asObject0(), call119.asObject0(), _python_var_response.asObject() ) ) );
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

            if (true)
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 204 );
                {
                    PyObjectTempKeeper1 call108;
                    PyObjectTempKeeper1 make_dict104;
                    DECREASE_REFCOUNT( ( call108.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_signals.asObject0(), _python_str_plain_got_request_exception ) ).asObject(), _python_str_plain_send ) ), CALL_FUNCTION( call108.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict104.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), MAKE_DICT2( make_dict104.asObject0(), _python_str_plain_sender, _python_var_request.asObject(), _python_str_plain_request ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 205 );
                {
                    PyObjectTempKeeper1 call111;
                    PyObjectTempKeeper0 call112;
                    PyObjectTempKeeper0 call113;
                    _python_var_response.assign1( ( call111.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_uncaught_exception ) ), call112.assign( _python_var_request.asObject() ), call113.assign( _python_var_resolver.asObject() ), CALL_FUNCTION_WITH_ARGS( call111.asObject0(), call112.asObject0(), call113.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_sys.asObject0(), _python_str_plain_exc_info ) ).asObject() ) ).asObject() ) ) );
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
        frame_guard.setLineNumber( 207 );
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
        frame_guard.getFrame0()->f_locals = _python_var_request.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_security_logger.updateLocalsDict( _python_var_param_dict.updateLocalsDict( _python_var_view_name.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_wrapped_callback.updateLocalsDict( _python_var_callback_kwargs.updateLocalsDict( _python_var_callback_args.updateLocalsDict( _python_var_callback.updateLocalsDict( _python_var_resolver_match.updateLocalsDict( _python_var_middleware_method.updateLocalsDict( _python_var_response.updateLocalsDict( _python_var_resolver.updateLocalsDict( _python_var_urlconf.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
           Py_DECREF( frame_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base );
           frame_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_request = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_response() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_response() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_request == key )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "get_response() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "get_response() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "get_response() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_response() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_response() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_response() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_response() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_response() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_response() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_response() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_response() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_response() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_response() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_response() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "get_response() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_response() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_response() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_response() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, _python_par_self, _python_par_request );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_request );

    return NULL;
}

static PyObject *dparse_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_request, PyObject *_python_par_resolver, PyObject *_python_par_exc_info )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_resolver( _python_str_plain_resolver, _python_par_resolver );
    PyObjectLocalParameterVariableNoDel _python_var_exc_info( _python_str_plain_exc_info, _python_par_exc_info );
    PyObjectLocalVariable _python_var_callback( _python_str_plain_callback );
    PyObjectLocalVariable _python_var_param_dict( _python_str_plain_param_dict );

    // Actual function code.
    static PyFrameObject *frame_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;

    if ( isFrameUnusable( frame_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base ) )
    {
        if ( frame_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base" );
#endif
            Py_DECREF( frame_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base );
        }

        frame_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base = MAKE_FRAME( _codeobj_adf757f05121274b2dcdddf703349fd3, _module_django__core__handlers__base );
    }

    FrameGuard frame_guard( frame_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base );
    try
    {
        assert( Py_REFCNT( frame_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 219 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_settings.asObject0(), _python_str_plain_DEBUG_PROPAGATE_EXCEPTIONS ) ).asObject() ) )
        {
            RERAISE_EXCEPTION();
        }
        frame_guard.setLineNumber( 222 );
        {
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper1 call6;
            PyObjectTempKeeper0 make_dict1;
            DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_logger.asObject0(), _python_str_plain_error ) ), call6.assign( MAKE_TUPLE2( _python_unicode_digest_2ed35a96fbd08944bf8c320d93f829d5, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_path ) ).asObject() ) ), CALL_FUNCTION( call5.asObject0(), call6.asObject0(), PyObjectTemporary( ( make_dict1.assign( _python_var_exc_info.asObject() ), MAKE_DICT2( make_dict1.asObject0(), _python_str_plain_exc_info, PyObjectTemporary( MAKE_DICT2( _python_int_pos_500, _python_unicode_plain_status_code, _python_var_request.asObject(), _python_unicode_plain_request ) ).asObject(), _python_str_plain_extra ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 230 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_settings.asObject0(), _python_str_plain_DEBUG ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 231 );
            {
                PyObjectTempKeeper1 call_tmp8;
                PyObjectTempKeeper1 call_tmp9;
                return ( call_tmp8.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_debug.asObject0(), _python_str_plain_technical_500_response ) ), call_tmp9.assign( MAKE_TUPLE1( _python_var_request.asObject() ) ), impl_function_5_complex_call_helper_pos_star_list_of_module___internal__( call_tmp8.asObject(), call_tmp9.asObject(), _python_var_exc_info.asObject1() ) );
            }
        }
        frame_guard.setLineNumber( 234 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_resolver.asObject(), _python_str_plain_urlconf_module ) ).asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 235 );
            {
                PyObjectTempKeeper1 call_tmp11;
                DECREASE_REFCOUNT( ( call_tmp11.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_six.asObject0(), _python_str_plain_reraise ) ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp11.asObject(), _python_var_exc_info.asObject1() ) ) );
            }
        }
        {
            frame_guard.setLineNumber( 237 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_resolver.asObject(), _python_str_plain_resolve500 ) ).asObject() ) ).asObject() ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_callback.assign0( _python_tmp_element_1.asObject() );
            _python_var_param_dict.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 238 );
        {
            PyObjectTempKeeper0 call_tmp13;
            PyObjectTempKeeper1 call_tmp14;
            return ( call_tmp13.assign( _python_var_callback.asObject() ), call_tmp14.assign( MAKE_TUPLE1( _python_var_request.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp13.asObject(), call_tmp14.asObject(), _python_var_param_dict.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_exc_info.updateLocalsDict( _python_var_resolver.updateLocalsDict( _python_var_request.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_param_dict.updateLocalsDict( _python_var_callback.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
           Py_DECREF( frame_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base );
           frame_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_resolver = NULL;
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
                PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_request == key )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_resolver == key )
            {
                if (unlikely( _python_par_resolver ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() got multiple values for keyword argument 'resolver'" );
                    goto error_exit;
                }

                _python_par_resolver = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exc_info == key )
            {
                if (unlikely( _python_par_exc_info ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() got multiple values for keyword argument 'exc_info'" );
                    goto error_exit;
                }

                _python_par_exc_info = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_resolver, key ) )
            {
                if (unlikely( _python_par_resolver ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() got multiple values for keyword argument 'resolver'" );
                    goto error_exit;
                }

                _python_par_resolver = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_info, key ) )
            {
                if (unlikely( _python_par_exc_info ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() got multiple values for keyword argument 'exc_info'" );
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
                   "handle_uncaught_exception() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_resolver != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() got multiple values for keyword argument 'resolver'" );
             goto error_exit;
         }

        _python_par_resolver = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_info != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_uncaught_exception() got multiple values for keyword argument 'exc_info'" );
             goto error_exit;
         }

        _python_par_exc_info = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, _python_par_self, _python_par_request, _python_par_resolver, _python_par_exc_info );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_resolver );
    Py_XDECREF( _python_par_exc_info );

    return NULL;
}

static PyObject *dparse_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_request, PyObject *_python_par_response )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_response( _python_str_plain_response, _python_par_response );
    PyObjectLocalVariable _python_var_func( _python_str_plain_func );

    // Actual function code.
    static PyFrameObject *frame_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;

    if ( isFrameUnusable( frame_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base ) )
    {
        if ( frame_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base" );
#endif
            Py_DECREF( frame_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base );
        }

        frame_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base = MAKE_FRAME( _codeobj_eab812325369360ee8bd6f145b637796, _module_django__core__handlers__base );
    }

    FrameGuard frame_guard( frame_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base );
    try
    {
        assert( Py_REFCNT( frame_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 246 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_response_fixes ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 246 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_func.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 247 );
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper0 call2;
                    _python_var_response.assign1( ( call1.assign( _python_var_func.asObject() ), call2.assign( _python_var_request.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_response.asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 248 );
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
        frame_guard.getFrame0()->f_locals = _python_var_response.updateLocalsDict( _python_var_request.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_func.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base )
        {
           Py_DECREF( frame_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base );
           frame_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "apply_response_fixes() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "apply_response_fixes() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_request == key )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "apply_response_fixes() got multiple values for keyword argument 'request'" );
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
                    PyErr_Format( PyExc_TypeError, "apply_response_fixes() got multiple values for keyword argument 'response'" );
                    goto error_exit;
                }

                _python_par_response = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "apply_response_fixes() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "apply_response_fixes() got multiple values for keyword argument 'request'" );
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
                    PyErr_Format( PyExc_TypeError, "apply_response_fixes() got multiple values for keyword argument 'response'" );
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
                   "apply_response_fixes() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "apply_response_fixes() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "apply_response_fixes() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "apply_response_fixes() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "apply_response_fixes() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "apply_response_fixes() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "apply_response_fixes() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "apply_response_fixes() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "apply_response_fixes() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "apply_response_fixes() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "apply_response_fixes() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "apply_response_fixes() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "apply_response_fixes() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "apply_response_fixes() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "apply_response_fixes() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_response != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "apply_response_fixes() got multiple values for keyword argument 'response'" );
             goto error_exit;
         }

        _python_par_response = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, _python_par_self, _python_par_request, _python_par_response );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_response );

    return NULL;
}

static PyObject *dparse_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_get_path_info_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject *_python_par_environ )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_environ( _python_str_plain_environ, _python_par_environ );
    PyObjectLocalVariable _python_var_path_info( _python_str_plain_path_info );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_path_info_of_module_django__core__handlers__base = NULL;

    if ( isFrameUnusable( frame_function_2_get_path_info_of_module_django__core__handlers__base ) )
    {
        if ( frame_function_2_get_path_info_of_module_django__core__handlers__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_path_info_of_module_django__core__handlers__base" );
#endif
            Py_DECREF( frame_function_2_get_path_info_of_module_django__core__handlers__base );
        }

        frame_function_2_get_path_info_of_module_django__core__handlers__base = MAKE_FRAME( _codeobj_1f32ee8c158d6ad82d43eac93483e12b, _module_django__core__handlers__base );
    }

    FrameGuard frame_guard( frame_function_2_get_path_info_of_module_django__core__handlers__base );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_path_info_of_module_django__core__handlers__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 255 );
        _python_var_path_info.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_environ.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_PATH_INFO, _python_str_chr_47 ) );
        frame_guard.setLineNumber( 258 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 259 );
            _python_var_path_info.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_path_info.asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_digest_36e48c5d322c489dd3ee4e51ffda1494 ) );
        }
        frame_guard.setLineNumber( 261 );
        return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_path_info.asObject(), _python_str_plain_decode ) ).asObject(), _python_unicode_digest_e9e2aa8136260a22b0b09fdee43ccb8a );
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
        frame_guard.getFrame0()->f_locals = _python_var_environ.updateLocalsDict( _python_var_path_info.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_get_path_info_of_module_django__core__handlers__base )
        {
           Py_DECREF( frame_function_2_get_path_info_of_module_django__core__handlers__base );
           frame_function_2_get_path_info_of_module_django__core__handlers__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_path_info_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_environ = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_path_info() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_environ == key )
            {
                if (unlikely( _python_par_environ ))
                {
                    PyErr_Format( PyExc_TypeError, "get_path_info() got multiple values for keyword argument 'environ'" );
                    goto error_exit;
                }

                _python_par_environ = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_environ, key ) )
            {
                if (unlikely( _python_par_environ ))
                {
                    PyErr_Format( PyExc_TypeError, "get_path_info() got multiple values for keyword argument 'environ'" );
                    goto error_exit;
                }

                _python_par_environ = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_path_info() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_path_info() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_path_info() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_path_info() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_path_info() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_path_info() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_path_info() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_environ != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_path_info() got multiple values for keyword argument 'environ'" );
             goto error_exit;
         }

        _python_par_environ = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_get_path_info_of_module_django__core__handlers__base( self, _python_par_environ );

error_exit:;

    Py_XDECREF( _python_par_environ );

    return NULL;
}

static PyObject *dparse_function_2_get_path_info_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_get_path_info_of_module_django__core__handlers__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_path_info_of_module_django__core__handlers__base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_script_name_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject *_python_par_environ )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_environ( _python_str_plain_environ, _python_par_environ );
    PyObjectLocalVariable _python_var_script_url( _python_str_plain_script_url );
    PyObjectLocalVariable _python_var_script_name( _python_str_plain_script_name );

    // Actual function code.
    static PyFrameObject *frame_function_3_get_script_name_of_module_django__core__handlers__base = NULL;

    if ( isFrameUnusable( frame_function_3_get_script_name_of_module_django__core__handlers__base ) )
    {
        if ( frame_function_3_get_script_name_of_module_django__core__handlers__base )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_get_script_name_of_module_django__core__handlers__base" );
#endif
            Py_DECREF( frame_function_3_get_script_name_of_module_django__core__handlers__base );
        }

        frame_function_3_get_script_name_of_module_django__core__handlers__base = MAKE_FRAME( _codeobj_c04245f2c9603e226816b9064bc725da, _module_django__core__handlers__base );
    }

    FrameGuard frame_guard( frame_function_3_get_script_name_of_module_django__core__handlers__base );
    try
    {
        assert( Py_REFCNT( frame_function_3_get_script_name_of_module_django__core__handlers__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 272 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_settings.asObject0(), _python_str_plain_FORCE_SCRIPT_NAME ) ).asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 273 );
            {
                PyObjectTempKeeper0 call1;
                return ( call1.assign( _mvar_django__core__handlers__base_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_settings.asObject0(), _python_str_plain_FORCE_SCRIPT_NAME ) ).asObject() ) );
            }
        }
        frame_guard.setLineNumber( 280 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_script_url.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_environ.asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_unicode_plain_SCRIPT_URL, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_environ.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_REDIRECT_URL, _python_str_empty ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 281 );
        if ( CHECK_IF_TRUE( _python_var_script_url.asObject() ) )
        {
            frame_guard.setLineNumber( 282 );
            {
                PyObjectTempKeeper0 slice6;
                _python_var_script_name.assign1( ( slice6.assign( _python_var_script_url.asObject() ), LOOKUP_SLICE( slice6.asObject0(), Py_None, PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_environ.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_PATH_INFO, _python_str_empty ) ).asObject() ) ).asObject() ) ).asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 284 );
            _python_var_script_name.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_environ.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_SCRIPT_NAME, _python_str_empty ) );
        }
        frame_guard.setLineNumber( 287 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 288 );
            _python_var_script_name.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_script_name.asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_digest_36e48c5d322c489dd3ee4e51ffda1494 ) );
        }
        frame_guard.setLineNumber( 290 );
        return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_script_name.asObject(), _python_str_plain_decode ) ).asObject(), _python_unicode_digest_e9e2aa8136260a22b0b09fdee43ccb8a );
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
        frame_guard.getFrame0()->f_locals = _python_var_environ.updateLocalsDict( _python_var_script_name.updateLocalsDict( _python_var_script_url.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_get_script_name_of_module_django__core__handlers__base )
        {
           Py_DECREF( frame_function_3_get_script_name_of_module_django__core__handlers__base );
           frame_function_3_get_script_name_of_module_django__core__handlers__base = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_get_script_name_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_environ = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_script_name() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_environ == key )
            {
                if (unlikely( _python_par_environ ))
                {
                    PyErr_Format( PyExc_TypeError, "get_script_name() got multiple values for keyword argument 'environ'" );
                    goto error_exit;
                }

                _python_par_environ = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_environ, key ) )
            {
                if (unlikely( _python_par_environ ))
                {
                    PyErr_Format( PyExc_TypeError, "get_script_name() got multiple values for keyword argument 'environ'" );
                    goto error_exit;
                }

                _python_par_environ = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_script_name() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_script_name() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_script_name() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_script_name() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_script_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_script_name() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_script_name() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_script_name() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_script_name() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_script_name() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_script_name() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_script_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_script_name() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_environ != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_script_name() got multiple values for keyword argument 'environ'" );
             goto error_exit;
         }

        _python_par_environ = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_get_script_name_of_module_django__core__handlers__base( self, _python_par_environ );

error_exit:;

    Py_XDECREF( _python_par_environ );

    return NULL;
}

static PyObject *dparse_function_3_get_script_name_of_module_django__core__handlers__base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_get_script_name_of_module_django__core__handlers__base( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_script_name_of_module_django__core__handlers__base( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base,
        dparse_function_1___init___of_class_1_BaseHandler_of_module_django__core__handlers__base,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2d1931858649a1727537d4636a24df17,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__handlers__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_path_info_of_module_django__core__handlers__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_path_info_of_module_django__core__handlers__base,
        dparse_function_2_get_path_info_of_module_django__core__handlers__base,
        _python_str_plain_get_path_info,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1f32ee8c158d6ad82d43eac93483e12b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__handlers__base,
        _python_unicode_digest_768ecddd2c16a4c5aceaaab185358a01
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base,
        dparse_function_2_load_middleware_of_class_1_BaseHandler_of_module_django__core__handlers__base,
        _python_str_plain_load_middleware,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fec41f7b36af961c7f75eab4f30ed058,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__handlers__base,
        _python_unicode_digest_cf23e5258a38de15f36f4551402c8ea9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_script_name_of_module_django__core__handlers__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_script_name_of_module_django__core__handlers__base,
        dparse_function_3_get_script_name_of_module_django__core__handlers__base,
        _python_str_plain_get_script_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c04245f2c9603e226816b9064bc725da,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__handlers__base,
        _python_unicode_digest_adc58fe55f4ef3e23a4fa0838162981f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base,
        dparse_function_3_make_view_atomic_of_class_1_BaseHandler_of_module_django__core__handlers__base,
        _python_str_plain_make_view_atomic,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4743cb22d9fb1ca4ca27ae9f8628095e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__handlers__base,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base,
        dparse_function_4_get_response_of_class_1_BaseHandler_of_module_django__core__handlers__base,
        _python_str_plain_get_response,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9c5bbb5c998dcf4f2f16f52871b1bced,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__handlers__base,
        _python_unicode_digest_25e6f41ba44a1173f422b8f7c986e1ab
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base,
        dparse_function_5_handle_uncaught_exception_of_class_1_BaseHandler_of_module_django__core__handlers__base,
        _python_str_plain_handle_uncaught_exception,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_adf757f05121274b2dcdddf703349fd3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__handlers__base,
        _python_unicode_digest_6f8c414cf9259e3e1ab805bd8384f420
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base,
        dparse_function_6_apply_response_fixes_of_class_1_BaseHandler_of_module_django__core__handlers__base,
        _python_str_plain_apply_response_fixes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_eab812325369360ee8bd6f145b637796,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__handlers__base,
        _python_unicode_digest_924f25c47cf1104e0a4d529f483518ec
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.handlers.base",   /* m_name */
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

MOD_INIT_DECL( django__core__handlers__base )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__handlers__base );
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

    // puts( "in initdjango__core__handlers__base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__handlers__base = Py_InitModule4(
        "django.core.handlers.base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__handlers__base = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__handlers__base = (PyDictObject *)((PyModuleObject *)_module_django__core__handlers__base)->md_dict;

    assertObject( _module_django__core__handlers__base );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_9adbd1f5818dbdf67090e8c89d182c9c, _module_django__core__handlers__base );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__handlers__base );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__handlers__base != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_857a0f4c31b70f63780e018618cafa4b );
    PyFrameObject *frame_module_django__core__handlers__base = MAKE_FRAME( _codeobj_e7329863a264a1f0c5bca8543a7c1698, _module_django__core__handlers__base );

    FrameGuard frame_guard( frame_module_django__core__handlers__base );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__handlers__base ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_logging, IMPORT_MODULE( _python_str_plain_logging, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_types, IMPORT_MODULE( _python_str_plain_types, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_http, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_django, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_str_plain_http_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_http ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_urlresolvers, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7fde38a6b8ad78c8ebb1bdff593c9e48, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_str_plain_urlresolvers_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urlresolvers ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_signals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7fde38a6b8ad78c8ebb1bdff593c9e48, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_str_plain_signals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_signals ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_MiddlewareNotUsed, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_c0c96d57d739b0b0d2854751ad626de8_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_MiddlewareNotUsed ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_PermissionDenied, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_c0c96d57d739b0b0d2854751ad626de8_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_PermissionDenied ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_SuspiciousOperation, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_c0c96d57d739b0b0d2854751ad626de8_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SuspiciousOperation ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_connections, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_str_plain_connections_str_plain_transaction_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_connections ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_transaction, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_str_plain_connections_str_plain_transaction_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_transaction ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_import_by_path, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_03bb9f131d782ff4dbd31e0966379285, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_str_plain_import_by_path_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_by_path ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_debug, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_89dfa43709f46a484dd9d7756d4ea736, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, ((PyModuleObject *)_module_django__core__handlers__base)->md_dict, _python_list_str_plain_debug_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_debug ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_logger, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__handlers__base_logging.asObject0(), _python_str_plain_getLogger ) ).asObject(), _python_unicode_digest_62b3f671777cd348390a3b2a70236231 ) );
        {
            frame_guard.setLineNumber( 21 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_BaseHandler_of_module_django__core__handlers__base(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__handlers__base___metaclass__.isInitialized( false ) ? _mvar_django__core__handlers__base___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_BaseHandler, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_BaseHandler, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__handlers__base)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_get_path_info, MAKE_FUNCTION_function_2_get_path_info_of_module_django__core__handlers__base(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__handlers__base, (Nuitka_StringObject *)_python_str_plain_get_script_name, MAKE_FUNCTION_function_3_get_script_name_of_module_django__core__handlers__base(  ) );

   return MOD_RETURN_VALUE( _module_django__core__handlers__base );
}
