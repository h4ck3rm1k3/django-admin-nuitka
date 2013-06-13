// Generated code for Python source for module 'django.views.debug'
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

// The _module_django__views__debug is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__views__debug;
PyDictObject *_moduledict_django__views__debug;

// The module level variables.
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_CLEANSED_SUBSTITUTE( &_module_django__views__debug, &_python_str_plain_CLEANSED_SUBSTITUTE );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_Context( &_module_django__views__debug, &_python_str_plain_Context );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_DEFAULT_URLCONF_TEMPLATE( &_module_django__views__debug, &_python_str_plain_DEFAULT_URLCONF_TEMPLATE );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_ExceptionReporter( &_module_django__views__debug, &_python_str_plain_ExceptionReporter );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_ExceptionReporterFilter( &_module_django__views__debug, &_python_str_plain_ExceptionReporterFilter );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_HIDDEN_SETTINGS( &_module_django__views__debug, &_python_str_plain_HIDDEN_SETTINGS );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_HttpRequest( &_module_django__views__debug, &_python_str_plain_HttpRequest );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_HttpResponse( &_module_django__views__debug, &_python_str_plain_HttpResponse );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_HttpResponseNotFound( &_module_django__views__debug, &_python_str_plain_HttpResponseNotFound );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_HttpResponseServerError( &_module_django__views__debug, &_python_str_plain_HttpResponseServerError );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_TECHNICAL_404_TEMPLATE( &_module_django__views__debug, &_python_str_plain_TECHNICAL_404_TEMPLATE );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_TECHNICAL_500_TEMPLATE( &_module_django__views__debug, &_python_str_plain_TECHNICAL_500_TEMPLATE );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_TECHNICAL_500_TEXT_TEMPLATE( &_module_django__views__debug, &_python_str_plain_TECHNICAL_500_TEXT_TEMPLATE );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_Template( &_module_django__views__debug, &_python_str_plain_Template );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_TemplateDoesNotExist( &_module_django__views__debug, &_python_str_plain_TemplateDoesNotExist );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug___metaclass__( &_module_django__views__debug, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_build_request_repr( &_module_django__views__debug, &_python_str_plain_build_request_repr );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_cleanse_setting( &_module_django__views__debug, &_python_str_plain_cleanse_setting );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_datetime( &_module_django__views__debug, &_python_str_plain_datetime );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_default_exception_reporter_filter( &_module_django__views__debug, &_python_str_plain_default_exception_reporter_filter );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_default_urlconf( &_module_django__views__debug, &_python_str_plain_default_urlconf );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_escape( &_module_django__views__debug, &_python_str_plain_escape );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_force_bytes( &_module_django__views__debug, &_python_str_plain_force_bytes );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_force_escape( &_module_django__views__debug, &_python_str_plain_force_escape );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_get_exception_reporter_filter( &_module_django__views__debug, &_python_str_plain_get_exception_reporter_filter );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_get_safe_settings( &_module_django__views__debug, &_python_str_plain_get_safe_settings );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_import_by_path( &_module_django__views__debug, &_python_str_plain_import_by_path );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_linebreak_iter( &_module_django__views__debug, &_python_str_plain_linebreak_iter );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_os( &_module_django__views__debug, &_python_str_plain_os );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_pprint( &_module_django__views__debug, &_python_str_plain_pprint );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_re( &_module_django__views__debug, &_python_str_plain_re );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_settings( &_module_django__views__debug, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_six( &_module_django__views__debug, &_python_str_plain_six );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_smart_text( &_module_django__views__debug, &_python_str_plain_smart_text );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_sys( &_module_django__views__debug, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__views__debug _mvar_django__views__debug_types( &_module_django__views__debug, &_python_str_plain_types );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_ExceptionReporterFilter_of_module_django__views__debug(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_SafeExceptionReporterFilter_of_module_django__views__debug(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_ExceptionReporter_of_module_django__views__debug(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug( PyObject *_python_par___iterator, PyObjectLocalParameterVariableNoDel &python_closure_self, PyObjectLocalVariable &python_closure_t );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_k, PyObjectLocalVariable &python_closure_v );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_encoding, PyObjectLocalVariable &python_closure_sline );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_f );


static PyObject *MAKE_FUNCTION_function_10_default_urlconf_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_1_linebreak_iter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_2_cleanse_setting_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_3_get_safe_settings_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_4_technical_500_response_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_5_get_exception_reporter_filter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug(  );


static PyObject *MAKE_FUNCTION_function_9_technical_404_response_of_module_django__views__debug(  );


// The module function definitions.

struct _context_generator_function_1_linebreak_iter_of_module_django__views__debug_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var_template_source;
    PyObjectLocalVariable python_var_p;
};

static void _context_generator_function_1_linebreak_iter_of_module_django__views__debug_destructor( void *context_voidptr )
{
    _context_generator_function_1_linebreak_iter_of_module_django__views__debug_t *_python_context = (struct _context_generator_function_1_linebreak_iter_of_module_django__views__debug_t *)context_voidptr;

    delete _python_context;
}

static void function_1_linebreak_iter_of_module_django__views__debug_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_1_linebreak_iter_of_module_django__views__debug_t *_python_context = (_context_generator_function_1_linebreak_iter_of_module_django__views__debug_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_p.setVariableName( _python_str_plain_p );

        // Actual function code.
        static PyFrameObject *frame_function_1_linebreak_iter_of_module_django__views__debug = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_1_linebreak_iter_of_module_django__views__debug ) )
        {
            if ( frame_function_1_linebreak_iter_of_module_django__views__debug )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_1_linebreak_iter_of_module_django__views__debug" );
#endif
                Py_DECREF( frame_function_1_linebreak_iter_of_module_django__views__debug );
            }

            frame_function_1_linebreak_iter_of_module_django__views__debug = MAKE_FRAME( _codeobj_b6e3a3bbd20f35ea304155b78eb8ebd6, _module_django__views__debug );
        }

        Py_INCREF( frame_function_1_linebreak_iter_of_module_django__views__debug );
        generator->m_frame = frame_function_1_linebreak_iter_of_module_django__views__debug;

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

            frame_guard.setLineNumber( 25 );
            YIELD_VALUE( generator, INCREASE_REFCOUNT( _python_int_0 ) );
            frame_guard.setLineNumber( 26 );
            _python_context->python_var_p.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_template_source.asObject(), _python_str_plain_find ) ).asObject(), _python_unicode_chr_10 ) );
            frame_guard.setLineNumber( 27 );
            while( true )
            {
                frame_guard.setLineNumber( 27 );
                if ( (!( RICH_COMPARE_BOOL_GE( _python_context->python_var_p.asObject(), _python_int_0 ) )) )
                {
                    frame_guard.setLineNumber( 27 );
                    break;
                }
                frame_guard.setLineNumber( 28 );
                YIELD_VALUE( generator, BINARY_OPERATION_ADD( _python_context->python_var_p.asObject(), _python_int_pos_1 ) );
                frame_guard.setLineNumber( 29 );
                {
                    PyObjectTempKeeper1 call1;
                    _python_context->python_var_p.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_context->python_var_template_source.asObject(), _python_str_plain_find ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_unicode_chr_10, PyObjectTemporary( BINARY_OPERATION_ADD( _python_context->python_var_p.asObject(), _python_int_pos_1 ) ).asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
            frame_guard.setLineNumber( 30 );
            YIELD_VALUE( generator, BINARY_OPERATION_ADD( PyObjectTemporary( BUILTIN_LEN( _python_context->python_var_template_source.asObject() ) ).asObject(), _python_int_pos_1 ) );

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

static PyObject *impl_function_1_linebreak_iter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_template_source )
{
    // Create context if any
    struct _context_generator_function_1_linebreak_iter_of_module_django__views__debug_t *_python_context = new _context_generator_function_1_linebreak_iter_of_module_django__views__debug_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_1_linebreak_iter_of_module_django__views__debug_context,
            _python_str_plain_linebreak_iter,
            _codeobj_b6e3a3bbd20f35ea304155b78eb8ebd6,
            _python_context,
            _context_generator_function_1_linebreak_iter_of_module_django__views__debug_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function linebreak_iter" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.
        _python_context->python_var_template_source.setVariableNameAndValue( _python_str_plain_template_source, _python_par_template_source );

        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}
static PyObject *fparse_function_1_linebreak_iter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_template_source = NULL;
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
                PyErr_Format( PyExc_TypeError, "linebreak_iter() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_template_source == key )
            {
                if (unlikely( _python_par_template_source ))
                {
                    PyErr_Format( PyExc_TypeError, "linebreak_iter() got multiple values for keyword argument 'template_source'" );
                    goto error_exit;
                }

                _python_par_template_source = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_template_source, key ) )
            {
                if (unlikely( _python_par_template_source ))
                {
                    PyErr_Format( PyExc_TypeError, "linebreak_iter() got multiple values for keyword argument 'template_source'" );
                    goto error_exit;
                }

                _python_par_template_source = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "linebreak_iter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "linebreak_iter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "linebreak_iter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "linebreak_iter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "linebreak_iter() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "linebreak_iter() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "linebreak_iter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "linebreak_iter() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "linebreak_iter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "linebreak_iter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "linebreak_iter() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "linebreak_iter() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "linebreak_iter() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_template_source != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "linebreak_iter() got multiple values for keyword argument 'template_source'" );
             goto error_exit;
         }

        _python_par_template_source = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_linebreak_iter_of_module_django__views__debug( self, _python_par_template_source );

error_exit:;

    Py_XDECREF( _python_par_template_source );

    return NULL;
}

static PyObject *dparse_function_1_linebreak_iter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_linebreak_iter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_linebreak_iter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_cleanse_setting_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_key, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalVariable _python_var_cleansed( _python_str_plain_cleansed );

    // Actual function code.
    static PyFrameObject *frame_function_2_cleanse_setting_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_2_cleanse_setting_of_module_django__views__debug ) )
    {
        if ( frame_function_2_cleanse_setting_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_cleanse_setting_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_2_cleanse_setting_of_module_django__views__debug );
        }

        frame_function_2_cleanse_setting_of_module_django__views__debug = MAKE_FRAME( _codeobj_01361b7a6a8dd86ac81e3894f628a05e, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_2_cleanse_setting_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_2_cleanse_setting_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 38 );
        try
        {
            frame_guard.setLineNumber( 39 );
            {
                PyObjectTempKeeper1 call1;
                if ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_HIDDEN_SETTINGS.asObject0(), _python_str_plain_search ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_key.asObject() ) ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 40 );
                _python_var_cleansed.assign0( _mvar_django__views__debug_CLEANSED_SUBSTITUTE.asObject0() );
            }
            else
            {
                frame_guard.setLineNumber( 42 );
                if ( BUILTIN_ISINSTANCE_BOOL( _python_var_value.asObject(), LOOKUP_BUILTIN( _python_str_plain_dict ) ) )
                {
                    frame_guard.setLineNumber( 43 );
                    _python_var_cleansed.assign1( TO_DICT( PyObjectTemporary( impl_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) ) ).asObject(), NULL ) );
                }
                else
                {
                    frame_guard.setLineNumber( 45 );
                    _python_var_cleansed.assign0( _python_var_value.asObject() );
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

            frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
            ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
            _exception.toExceptionHandler();

            if ( _exception.matches( PyExc_TypeError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 48 );
                _python_var_cleansed.assign0( _python_var_value.asObject() );
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
        return _python_var_cleansed.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_cleansed.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_cleanse_setting_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_2_cleanse_setting_of_module_django__views__debug );
           frame_function_2_cleanse_setting_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_cleanse_setting_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_key = NULL;
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
                PyErr_Format( PyExc_TypeError, "cleanse_setting() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "cleanse_setting() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "cleanse_setting() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "cleanse_setting() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "cleanse_setting() got multiple values for keyword argument 'value'" );
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
                   "cleanse_setting() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "cleanse_setting() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "cleanse_setting() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "cleanse_setting() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "cleanse_setting() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "cleanse_setting() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "cleanse_setting() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "cleanse_setting() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "cleanse_setting() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "cleanse_setting() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "cleanse_setting() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "cleanse_setting() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "cleanse_setting() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "cleanse_setting() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "cleanse_setting() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_cleanse_setting_of_module_django__views__debug( self, _python_par_key, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_2_cleanse_setting_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_cleanse_setting_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_cleanse_setting_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_k;
    PyObjectLocalVariable python_var_v;
};

static void _context_generator_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug_t *_python_context = (struct _context_generator_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug_t *_python_context = (_context_generator_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_k.setVariableName( _python_str_plain_k );
        _python_context->python_var_v.setVariableName( _python_str_plain_v );

        // Actual function code.
        static PyFrameObject *frame_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug ) )
        {
            if ( frame_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug" );
#endif
                Py_DECREF( frame_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug );
            }

            frame_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug = MAKE_FRAME( _codeobj_9158d2073cf98963406d3d3f09baade1, _module_django__views__debug );
        }

        Py_INCREF( frame_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug );
        generator->m_frame = frame_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug;

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
                {
                    frame_guard.setLineNumber( 43 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 43 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        {
                            frame_guard.setLineNumber( 43 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_context->python_var_k.assign0( _python_tmp_element_1.asObject() );
                            _python_context->python_var_v.assign0( _python_tmp_element_2.asObject() );
                        }
                        {
                            PyObjectTempKeeper0 call1;
                            PyObjectTempKeeper0 call2;
                            PyObjectTempKeeper0 make_tuple4;
                            YIELD_VALUE( generator, ( make_tuple4.assign( _python_context->python_var_k.asObject() ), MAKE_TUPLE2( make_tuple4.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__views__debug_cleanse_setting.asObject0() ), call2.assign( _python_context->python_var_k.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_context->python_var_v.asObject() ) ) ).asObject() ) ) );
                        }

                       CONSIDER_THREADING();
                    }
                }
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

static PyObject *impl_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug_t *_python_context = new _context_generator_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug_context,
            _python_str_angle_genexpr,
            _codeobj_4efecfb3acb82a835ba2f7f13173b509,
            _python_context,
            _context_generator_genexpr_1_of_function_2_cleanse_setting_of_module_django__views__debug_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function <genexpr>" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.
        _python_context->python_var___iterator.setVariableNameAndValue( _python_str_plain___iterator, _python_par___iterator );

        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}


static PyObject *impl_function_3_get_safe_settings_of_module_django__views__debug( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var_settings_dict( _python_str_plain_settings_dict );
    PyObjectLocalVariable _python_var_k( _python_str_plain_k );

    // Actual function code.
    _python_var_settings_dict.assign1( PyDict_New() );
    static PyFrameObject *frame_function_3_get_safe_settings_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_3_get_safe_settings_of_module_django__views__debug ) )
    {
        if ( frame_function_3_get_safe_settings_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_get_safe_settings_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_3_get_safe_settings_of_module_django__views__debug );
        }

        frame_function_3_get_safe_settings_of_module_django__views__debug = MAKE_FRAME( _codeobj_5648a39c62e0bdfcf664577a6ada36ef, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_3_get_safe_settings_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_3_get_safe_settings_of_module_django__views__debug ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 54 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_DIR1( _mvar_django__views__debug_settings.asObject0() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 54 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_k.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 55 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_k.asObject(), _python_str_plain_isupper ) ).asObject() ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 56 );
                    {
                        PyObjectTempKeeper0 call4;
                        PyObjectTempKeeper0 call5;
                        PyObjectTempKeeper0 getattr1;
                        {
                            PyObjectTemporary tmp_identifier( ( call4.assign( _mvar_django__views__debug_cleanse_setting.asObject0() ), call5.assign( _python_var_k.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), PyObjectTemporary( ( getattr1.assign( _mvar_django__views__debug_settings.asObject0() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_var_k.asObject(), NULL ) ) ).asObject() ) ) );
                            PyObject *tmp_subscribed = _python_var_settings_dict.asObject();
                            SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_k.asObject() );
                    }
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 57 );
        return _python_var_settings_dict.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_k.updateLocalsDict( _python_var_settings_dict.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_get_safe_settings_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_3_get_safe_settings_of_module_django__views__debug );
           frame_function_3_get_safe_settings_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_3_get_safe_settings_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "get_safe_settings() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "get_safe_settings() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "get_safe_settings() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_3_get_safe_settings_of_module_django__views__debug( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_3_get_safe_settings_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_3_get_safe_settings_of_module_django__views__debug( self );
    }
    else
    {
        PyObject *result = fparse_function_3_get_safe_settings_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_technical_500_response_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_request, PyObject *_python_par_exc_type, PyObject *_python_par_exc_value, PyObject *_python_par_tb )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_exc_type( _python_str_plain_exc_type, _python_par_exc_type );
    PyObjectLocalParameterVariableNoDel _python_var_exc_value( _python_str_plain_exc_value, _python_par_exc_value );
    PyObjectLocalParameterVariableNoDel _python_var_tb( _python_str_plain_tb, _python_par_tb );
    PyObjectLocalVariable _python_var_reporter( _python_str_plain_reporter );
    PyObjectLocalVariable _python_var_text( _python_str_plain_text );
    PyObjectLocalVariable _python_var_html( _python_str_plain_html );

    // Actual function code.
    static PyFrameObject *frame_function_4_technical_500_response_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_4_technical_500_response_of_module_django__views__debug ) )
    {
        if ( frame_function_4_technical_500_response_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_technical_500_response_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_4_technical_500_response_of_module_django__views__debug );
        }

        frame_function_4_technical_500_response_of_module_django__views__debug = MAKE_FRAME( _codeobj_ae06f263974054a3bfe20199a3f4772d, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_4_technical_500_response_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_4_technical_500_response_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 64 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper0 call4;
            _python_var_reporter.assign1( ( call1.assign( _mvar_django__views__debug_ExceptionReporter.asObject0() ), call2.assign( _python_var_request.asObject() ), call3.assign( _python_var_exc_type.asObject() ), call4.assign( _python_var_exc_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), call4.asObject0(), _python_var_tb.asObject() ) ) );
        }
        frame_guard.setLineNumber( 65 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_is_ajax ) ).asObject() ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 66 );
            _python_var_text.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_reporter.asObject(), _python_str_plain_get_traceback_text ) ).asObject() ) );
            frame_guard.setLineNumber( 67 );
            {
                PyObjectTempKeeper0 call6;
                return ( call6.assign( _mvar_django__views__debug_HttpResponseServerError.asObject0() ), CALL_FUNCTION( call6.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_text.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_1db6b8c3f063843b9129e72959fce70e ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 69 );
            _python_var_html.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_reporter.asObject(), _python_str_plain_get_traceback_html ) ).asObject() ) );
            frame_guard.setLineNumber( 70 );
            {
                PyObjectTempKeeper0 call9;
                return ( call9.assign( _mvar_django__views__debug_HttpResponseServerError.asObject0() ), CALL_FUNCTION( call9.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_html.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_328fb611d3d83ac86bda66b950410b38 ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_tb.updateLocalsDict( _python_var_exc_value.updateLocalsDict( _python_var_exc_type.updateLocalsDict( _python_var_request.updateLocalsDict( _python_var_html.updateLocalsDict( _python_var_text.updateLocalsDict( _python_var_reporter.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_technical_500_response_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_4_technical_500_response_of_module_django__views__debug );
           frame_function_4_technical_500_response_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_technical_500_response_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_request = NULL;
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
                PyErr_Format( PyExc_TypeError, "technical_500_response() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_request == key )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "technical_500_response() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exc_type == key )
            {
                if (unlikely( _python_par_exc_type ))
                {
                    PyErr_Format( PyExc_TypeError, "technical_500_response() got multiple values for keyword argument 'exc_type'" );
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
                    PyErr_Format( PyExc_TypeError, "technical_500_response() got multiple values for keyword argument 'exc_value'" );
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
                    PyErr_Format( PyExc_TypeError, "technical_500_response() got multiple values for keyword argument 'tb'" );
                    goto error_exit;
                }

                _python_par_tb = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "technical_500_response() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_type, key ) )
            {
                if (unlikely( _python_par_exc_type ))
                {
                    PyErr_Format( PyExc_TypeError, "technical_500_response() got multiple values for keyword argument 'exc_type'" );
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
                    PyErr_Format( PyExc_TypeError, "technical_500_response() got multiple values for keyword argument 'exc_value'" );
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
                    PyErr_Format( PyExc_TypeError, "technical_500_response() got multiple values for keyword argument 'tb'" );
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
                   "technical_500_response() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "technical_500_response() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "technical_500_response() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "technical_500_response() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "technical_500_response() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "technical_500_response() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "technical_500_response() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "technical_500_response() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "technical_500_response() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "technical_500_response() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "technical_500_response() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "technical_500_response() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "technical_500_response() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "technical_500_response() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "technical_500_response() got multiple values for keyword argument 'exc_type'" );
             goto error_exit;
         }

        _python_par_exc_type = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "technical_500_response() got multiple values for keyword argument 'exc_value'" );
             goto error_exit;
         }

        _python_par_exc_value = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_tb != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "technical_500_response() got multiple values for keyword argument 'tb'" );
             goto error_exit;
         }

        _python_par_tb = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_4_technical_500_response_of_module_django__views__debug( self, _python_par_request, _python_par_exc_type, _python_par_exc_value, _python_par_tb );

error_exit:;

    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_exc_type );
    Py_XDECREF( _python_par_exc_value );
    Py_XDECREF( _python_par_tb );

    return NULL;
}

static PyObject *dparse_function_4_technical_500_response_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_4_technical_500_response_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_technical_500_response_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_get_exception_reporter_filter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_request )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );

    // Actual function code.
    static PyFrameObject *frame_function_5_get_exception_reporter_filter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_5_get_exception_reporter_filter_of_module_django__views__debug ) )
    {
        if ( frame_function_5_get_exception_reporter_filter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_get_exception_reporter_filter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_5_get_exception_reporter_filter_of_module_django__views__debug );
        }

        frame_function_5_get_exception_reporter_filter_of_module_django__views__debug = MAKE_FRAME( _codeobj_2a92615a95e0a06a831ce770dc37a4b2, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_5_get_exception_reporter_filter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_5_get_exception_reporter_filter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 77 );
        if ( ( _mvar_django__views__debug_default_exception_reporter_filter.asObject0() == Py_None ) )
        {
            frame_guard.setLineNumber( 79 );
            {
                PyObjectTempKeeper0 call1;
                UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_default_exception_reporter_filter, CALL_FUNCTION_NO_ARGS( PyObjectTemporary( ( call1.assign( _mvar_django__views__debug_import_by_path.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_settings.asObject0(), _python_str_plain_DEFAULT_EXCEPTION_REPORTER_FILTER ) ).asObject() ) ) ).asObject() ) );
            }
        }
        frame_guard.setLineNumber( 81 );
        if ( CHECK_IF_TRUE( _python_var_request.asObject() ) )
        {
            frame_guard.setLineNumber( 82 );
            {
                PyObjectTempKeeper0 getattr3;
                return ( getattr3.assign( _python_var_request.asObject() ), BUILTIN_GETATTR( getattr3.asObject0(), _python_unicode_plain_exception_reporter_filter, _mvar_django__views__debug_default_exception_reporter_filter.asObject0() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 84 );
            return _mvar_django__views__debug_default_exception_reporter_filter.asObject();
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
        frame_guard.getFrame0()->f_locals = _python_var_request.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_5_get_exception_reporter_filter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_5_get_exception_reporter_filter_of_module_django__views__debug );
           frame_function_5_get_exception_reporter_filter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_get_exception_reporter_filter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_request == key )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() got multiple values for keyword argument 'request'" );
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
                   "get_exception_reporter_filter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_exception_reporter_filter() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_get_exception_reporter_filter_of_module_django__views__debug( self, _python_par_request );

error_exit:;

    Py_XDECREF( _python_par_request );

    return NULL;
}

static PyObject *dparse_function_5_get_exception_reporter_filter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_get_exception_reporter_filter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_get_exception_reporter_filter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_6_ExceptionReporterFilter_of_module_django__views__debug(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_get_request_repr( _python_str_plain_get_request_repr );
    PyObjectLocalVariable _python_var_get_post_parameters( _python_str_plain_get_post_parameters );
    PyObjectLocalVariable _python_var_get_traceback_frame_variables( _python_str_plain_get_traceback_frame_variables );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_debug );
    _python_var___doc__.assign0( _python_unicode_digest_86b048673eb07344df06abc46a7f14aa );
    _python_var_get_request_repr.assign1( MAKE_FUNCTION_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug(  ) );
    _python_var_get_post_parameters.assign1( MAKE_FUNCTION_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug(  ) );
    _python_var_get_traceback_frame_variables.assign1( MAKE_FUNCTION_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug(  ) );
    return _python_var_get_traceback_frame_variables.updateLocalsDict( _python_var_get_post_parameters.updateLocalsDict( _python_var_get_request_repr.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_request )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );

    // Actual function code.
    static PyFrameObject *frame_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug ) )
    {
        if ( frame_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug );
        }

        frame_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug = MAKE_FRAME( _codeobj_02fb6b98313d10af5f957feadcdc8e9d, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 93 );
        if ( ( _python_var_request.asObject() == Py_None ) )
        {
            return INCREASE_REFCOUNT( _python_str_plain_None );
        }
        else
        {
            frame_guard.setLineNumber( 96 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call3;
                PyObjectTempKeeper1 call4;
                return ( call3.assign( _mvar_django__views__debug_build_request_repr.asObject0() ), call4.assign( MAKE_TUPLE1( _python_var_request.asObject() ) ), CALL_FUNCTION( call3.asObject0(), call4.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_post_parameters ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_request.asObject() ) ) ).asObject(), _python_str_plain_POST_override ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_request.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug );
           frame_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_request_repr() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_request_repr() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_request_repr() got multiple values for keyword argument 'request'" );
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
                    PyErr_Format( PyExc_TypeError, "get_request_repr() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_request_repr() got multiple values for keyword argument 'request'" );
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
                   "get_request_repr() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_request_repr() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_request_repr() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_request_repr() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_request_repr() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_request_repr() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_request_repr() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_request_repr() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_request_repr() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_request_repr() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_request_repr() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "get_request_repr() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_request_repr() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_request_repr() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_request_repr() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( self, _python_par_self, _python_par_request );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_request );

    return NULL;
}

static PyObject *dparse_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_request )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug ) )
    {
        if ( frame_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug );
        }

        frame_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug = MAKE_FRAME( _codeobj_95c0b6a3b59aafcabb09da11056898f6, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 99 );
        if ( ( _python_var_request.asObject() == Py_None ) )
        {
            return PyDict_New();
        }
        else
        {
            frame_guard.setLineNumber( 102 );
            return LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_POST );
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
        frame_guard.getFrame0()->f_locals = _python_var_request.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug );
           frame_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_post_parameters() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_post_parameters() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_post_parameters() got multiple values for keyword argument 'request'" );
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
                    PyErr_Format( PyExc_TypeError, "get_post_parameters() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_post_parameters() got multiple values for keyword argument 'request'" );
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
                   "get_post_parameters() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_post_parameters() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_post_parameters() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_post_parameters() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_post_parameters() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_post_parameters() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_post_parameters() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_post_parameters() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( self, _python_par_self, _python_par_request );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_request );

    return NULL;
}

static PyObject *dparse_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_request, PyObject *_python_par_tb_frame )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_tb_frame( _python_str_plain_tb_frame, _python_par_tb_frame );

    // Actual function code.
    static PyFrameObject *frame_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug ) )
    {
        if ( frame_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug );
        }

        frame_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug = MAKE_FRAME( _codeobj_c2ebb1805558dbe7f5c69050ec78db65, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 105 );
        {
            PyObjectTempKeeper1 call1;
            return TO_LIST( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_six.asObject0(), _python_str_plain_iteritems ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb_frame.asObject(), _python_str_plain_f_locals ) ).asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_tb_frame.updateLocalsDict( _python_var_request.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug );
           frame_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_tb_frame = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_tb_frame == key )
            {
                if (unlikely( _python_par_tb_frame ))
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'tb_frame'" );
                    goto error_exit;
                }

                _python_par_tb_frame = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_tb_frame, key ) )
            {
                if (unlikely( _python_par_tb_frame ))
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'tb_frame'" );
                    goto error_exit;
                }

                _python_par_tb_frame = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_traceback_frame_variables() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_tb_frame != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'tb_frame'" );
             goto error_exit;
         }

        _python_par_tb_frame = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( self, _python_par_self, _python_par_request, _python_par_tb_frame );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_tb_frame );

    return NULL;
}

static PyObject *dparse_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_7_SafeExceptionReporterFilter_of_module_django__views__debug(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_is_active( _python_str_plain_is_active );
    PyObjectLocalVariable _python_var_get_post_parameters( _python_str_plain_get_post_parameters );
    PyObjectLocalVariable _python_var_get_traceback_frame_variables( _python_str_plain_get_traceback_frame_variables );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_debug );
    _python_var___doc__.assign0( _python_unicode_digest_c4e91ea00cb4809576c7745bd9eab873 );
    _python_var_is_active.assign1( MAKE_FUNCTION_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug(  ) );
    _python_var_get_post_parameters.assign1( MAKE_FUNCTION_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug(  ) );
    _python_var_get_traceback_frame_variables.assign1( MAKE_FUNCTION_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug(  ) );
    return _python_var_get_traceback_frame_variables.updateLocalsDict( _python_var_get_post_parameters.updateLocalsDict( _python_var_is_active.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_request )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );

    // Actual function code.
    static PyFrameObject *frame_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug ) )
    {
        if ( frame_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug );
        }

        frame_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug = MAKE_FRAME( _codeobj_fb3a73a9555aafb2b9bddf6cf957944a, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 120 );
        return INCREASE_REFCOUNT( BOOL_FROM( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_settings.asObject0(), _python_str_plain_DEBUG ) ).asObject() == Py_False ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_request.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug );
           frame_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "is_active() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "is_active() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "is_active() got multiple values for keyword argument 'request'" );
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
                    PyErr_Format( PyExc_TypeError, "is_active() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "is_active() got multiple values for keyword argument 'request'" );
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
                   "is_active() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "is_active() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "is_active() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "is_active() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "is_active() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "is_active() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_active() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "is_active() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_active() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "is_active() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_active() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "is_active() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "is_active() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "is_active() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "is_active() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( self, _python_par_self, _python_par_request );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_request );

    return NULL;
}

static PyObject *dparse_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_request )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalVariable _python_var_sensitive_post_parameters( _python_str_plain_sensitive_post_parameters );
    PyObjectLocalVariable _python_var_cleansed( _python_str_plain_cleansed );
    PyObjectLocalVariable _python_var_k( _python_str_plain_k );
    PyObjectLocalVariable _python_var_v( _python_str_plain_v );
    PyObjectLocalVariable _python_var_param( _python_str_plain_param );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug ) )
    {
        if ( frame_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug );
        }

        frame_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug = MAKE_FRAME( _codeobj_a35bf983a1decdec2ea808302c5e6bbe, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 127 );
        if ( ( _python_var_request.asObject() == Py_None ) )
        {
            return PyDict_New();
        }
        else
        {
            frame_guard.setLineNumber( 130 );
            _python_var_sensitive_post_parameters.assign1( BUILTIN_GETATTR( _python_var_request.asObject(), _python_unicode_plain_sensitive_post_parameters, PyObjectTemporary( PyList_New( 0 ) ).asObject() ) );
            frame_guard.setLineNumber( 131 );
            {
                PyObjectTempKeeper1 call3;
                if ( ( CHECK_IF_TRUE( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_is_active ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_request.asObject() ) ) ).asObject() ) && CHECK_IF_TRUE( _python_var_sensitive_post_parameters.asObject() ) ) )
            {
                frame_guard.setLineNumber( 132 );
                _python_var_cleansed.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_POST ) ).asObject(), _python_str_plain_copy ) ).asObject() ) );
                frame_guard.setLineNumber( 133 );
                if ( RICH_COMPARE_BOOL_EQ( _python_var_sensitive_post_parameters.asObject(), _python_unicode_plain___ALL__ ) )
                {
                    {
                        frame_guard.setLineNumber( 135 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cleansed.asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 135 );
                                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_1 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                                {
                                    frame_guard.setLineNumber( 135 );
                                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                    _python_var_k.assign0( _python_tmp_element_1.asObject() );
                                    _python_var_v.assign0( _python_tmp_element_2.asObject() );
                                }
                            }
                            frame_guard.setLineNumber( 136 );
                            {
                                    PyObject *tmp_identifier = _mvar_django__views__debug_CLEANSED_SUBSTITUTE.asObject0();
                                    PyObject *tmp_subscribed = _python_var_cleansed.asObject();
                                    SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_k.asObject() );
                            }

                           CONSIDER_THREADING();
                        }
                    }
                    frame_guard.setLineNumber( 137 );
                    return _python_var_cleansed.asObject1();
                }
                else
                {
                    {
                        frame_guard.setLineNumber( 140 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_sensitive_post_parameters.asObject() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 140 );
                                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_2 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                _python_var_param.assign0( _python_tmp_iter_value.asObject() );
                            }
                            frame_guard.setLineNumber( 141 );
                            {
                                PyObjectTempKeeper0 cmp1;
                                if ( ( cmp1.assign( _python_var_param.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), _python_var_cleansed.asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 142 );
                                {
                                        PyObject *tmp_identifier = _mvar_django__views__debug_CLEANSED_SUBSTITUTE.asObject0();
                                        PyObject *tmp_subscribed = _python_var_cleansed.asObject();
                                        SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_param.asObject() );
                                }
                            }
                            }

                           CONSIDER_THREADING();
                        }
                    }
                    frame_guard.setLineNumber( 143 );
                    return _python_var_cleansed.asObject1();
                }
            }
            else
            {
                frame_guard.setLineNumber( 145 );
                return LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_POST );
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
        frame_guard.getFrame0()->f_locals = _python_var_request.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_param.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_cleansed.updateLocalsDict( _python_var_sensitive_post_parameters.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug );
           frame_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_post_parameters() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_post_parameters() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_post_parameters() got multiple values for keyword argument 'request'" );
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
                    PyErr_Format( PyExc_TypeError, "get_post_parameters() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_post_parameters() got multiple values for keyword argument 'request'" );
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
                   "get_post_parameters() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_post_parameters() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_post_parameters() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_post_parameters() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_post_parameters() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "get_post_parameters() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_post_parameters() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_post_parameters() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_post_parameters() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( self, _python_par_self, _python_par_request );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_request );

    return NULL;
}

static PyObject *dparse_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_request, PyObject *_python_par_tb_frame )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_tb_frame( _python_str_plain_tb_frame, _python_par_tb_frame );
    PyObjectLocalVariable _python_var_current_frame( _python_str_plain_current_frame );
    PyObjectLocalVariable _python_var_sensitive_variables( _python_str_plain_sensitive_variables );
    PyObjectLocalVariable _python_var_wrapper( _python_str_plain_wrapper );
    PyObjectLocalVariable _python_var_cleansed( _python_str_plain_cleansed );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug ) )
    {
        if ( frame_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug );
        }

        frame_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug = MAKE_FRAME( _codeobj_a5562e974ed0aaf4d5cbaffd807b7b06, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 154 );
        _python_var_current_frame.assign1( LOOKUP_ATTRIBUTE( _python_var_tb_frame.asObject(), _python_str_plain_f_back ) );
        _python_var_sensitive_variables.assign0( Py_None );
        frame_guard.setLineNumber( 156 );
        while( true )
        {
            frame_guard.setLineNumber( 156 );
            if ( ( _python_var_current_frame.asObject() == Py_None ) )
            {
                frame_guard.setLineNumber( 156 );
                break;
            }
            frame_guard.setLineNumber( 157 );
            if ( ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_current_frame.asObject(), _python_str_plain_f_code ) ).asObject(), _python_str_plain_co_name ) ).asObject(), _python_unicode_plain_sensitive_variables_wrapper ) && SEQUENCE_CONTAINS_BOOL( _python_unicode_plain_sensitive_variables_wrapper, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_current_frame.asObject(), _python_str_plain_f_locals ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 161 );
                _python_var_wrapper.assign1( LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_current_frame.asObject(), _python_str_plain_f_locals ) ).asObject(), _python_unicode_plain_sensitive_variables_wrapper ) );
                frame_guard.setLineNumber( 162 );
                _python_var_sensitive_variables.assign1( BUILTIN_GETATTR( _python_var_wrapper.asObject(), _python_unicode_plain_sensitive_variables, Py_None ) );
                frame_guard.setLineNumber( 163 );
                break;
            }
            frame_guard.setLineNumber( 164 );
            _python_var_current_frame.assign1( LOOKUP_ATTRIBUTE( _python_var_current_frame.asObject(), _python_str_plain_f_back ) );

           CONSIDER_THREADING();
        }
        _python_var_cleansed.assign1( PyDict_New() );
        frame_guard.setLineNumber( 167 );
        {
            PyObjectTempKeeper1 call11;
            if ( ( CHECK_IF_TRUE( PyObjectTemporary( ( call11.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_is_active ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_request.asObject() ) ) ).asObject() ) && CHECK_IF_TRUE( _python_var_sensitive_variables.asObject() ) ) )
        {
            frame_guard.setLineNumber( 168 );
            if ( RICH_COMPARE_BOOL_EQ( _python_var_sensitive_variables.asObject(), _python_unicode_plain___ALL__ ) )
            {
                {
                    frame_guard.setLineNumber( 170 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb_frame.asObject(), _python_str_plain_f_locals ) ).asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 170 );
                            PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_1 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                            {
                                frame_guard.setLineNumber( 170 );
                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                _python_var_name.assign0( _python_tmp_element_1.asObject() );
                                _python_var_value.assign0( _python_tmp_element_2.asObject() );
                            }
                        }
                        frame_guard.setLineNumber( 171 );
                        {
                                PyObject *tmp_identifier = _mvar_django__views__debug_CLEANSED_SUBSTITUTE.asObject0();
                                PyObject *tmp_subscribed = _python_var_cleansed.asObject();
                                SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_name.asObject() );
                        }

                       CONSIDER_THREADING();
                    }
                }
            }
            else
            {
                {
                    frame_guard.setLineNumber( 174 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb_frame.asObject(), _python_str_plain_f_locals ) ).asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 174 );
                            PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_2 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                            {
                                frame_guard.setLineNumber( 174 );
                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                _python_var_name.assign0( _python_tmp_element_1.asObject() );
                                _python_var_value.assign0( _python_tmp_element_2.asObject() );
                            }
                        }
                        frame_guard.setLineNumber( 175 );
                        {
                            PyObjectTempKeeper0 cmp5;
                            if ( ( cmp5.assign( _python_var_name.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp5.asObject0(), _python_var_sensitive_variables.asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 176 );
                            _python_var_value.assign0( _mvar_django__views__debug_CLEANSED_SUBSTITUTE.asObject0() );
                        }
                        else
                        {
                            frame_guard.setLineNumber( 177 );
                            {
                                PyObjectTempKeeper0 isinstance3;
                                if ( ( isinstance3.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), _mvar_django__views__debug_HttpRequest.asObject0() ) ) )
                            {
                                frame_guard.setLineNumber( 179 );
                                {
                                    PyObjectTempKeeper1 call1;
                                    _python_var_value.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_request_repr ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) );
                                }
                            }
                            }
                        }
                        }
                        frame_guard.setLineNumber( 180 );
                        {
                                PyObject *tmp_identifier = _python_var_value.asObject();
                                PyObject *tmp_subscribed = _python_var_cleansed.asObject();
                                SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_name.asObject() );
                        }

                       CONSIDER_THREADING();
                    }
                }
            }
        }
        else
        {
            {
                frame_guard.setLineNumber( 183 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb_frame.asObject(), _python_str_plain_f_locals ) ).asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 183 );
                        PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_3 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                        {
                            frame_guard.setLineNumber( 183 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_name.assign0( _python_tmp_element_1.asObject() );
                            _python_var_value.assign0( _python_tmp_element_2.asObject() );
                        }
                    }
                    frame_guard.setLineNumber( 184 );
                    {
                        PyObjectTempKeeper0 isinstance9;
                        if ( ( isinstance9.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance9.asObject0(), _mvar_django__views__debug_HttpRequest.asObject0() ) ) )
                    {
                        frame_guard.setLineNumber( 186 );
                        {
                            PyObjectTempKeeper1 call7;
                            _python_var_value.assign1( ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_request_repr ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_value.asObject() ) ) );
                        }
                    }
                    }
                    frame_guard.setLineNumber( 187 );
                    {
                            PyObject *tmp_identifier = _python_var_value.asObject();
                            PyObject *tmp_subscribed = _python_var_cleansed.asObject();
                            SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_name.asObject() );
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        }
        frame_guard.setLineNumber( 189 );
        if ( ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb_frame.asObject(), _python_str_plain_f_code ) ).asObject(), _python_str_plain_co_name ) ).asObject(), _python_unicode_plain_sensitive_variables_wrapper ) && SEQUENCE_CONTAINS_BOOL( _python_unicode_plain_sensitive_variables_wrapper, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb_frame.asObject(), _python_str_plain_f_locals ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 195 );
            {
                    PyObject *tmp_identifier = _mvar_django__views__debug_CLEANSED_SUBSTITUTE.asObject0();
                    SET_SUBSCRIPT( tmp_identifier, _python_var_cleansed.asObject(), _python_unicode_plain_func_args );
            }
            frame_guard.setLineNumber( 196 );
            {
                    PyObject *tmp_identifier = _mvar_django__views__debug_CLEANSED_SUBSTITUTE.asObject0();
                    SET_SUBSCRIPT( tmp_identifier, _python_var_cleansed.asObject(), _python_unicode_plain_func_kwargs );
            }
        }
        frame_guard.setLineNumber( 198 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cleansed.asObject(), _python_str_plain_items ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_tb_frame.updateLocalsDict( _python_var_request.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_cleansed.updateLocalsDict( _python_var_wrapper.updateLocalsDict( _python_var_sensitive_variables.updateLocalsDict( _python_var_current_frame.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug );
           frame_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_tb_frame = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_tb_frame == key )
            {
                if (unlikely( _python_par_tb_frame ))
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'tb_frame'" );
                    goto error_exit;
                }

                _python_par_tb_frame = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_tb_frame, key ) )
            {
                if (unlikely( _python_par_tb_frame ))
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'tb_frame'" );
                    goto error_exit;
                }

                _python_par_tb_frame = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_traceback_frame_variables() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_tb_frame != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_traceback_frame_variables() got multiple values for keyword argument 'tb_frame'" );
             goto error_exit;
         }

        _python_par_tb_frame = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( self, _python_par_self, _python_par_request, _python_par_tb_frame );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_tb_frame );

    return NULL;
}

static PyObject *dparse_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_8_ExceptionReporter_of_module_django__views__debug(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_format_path_status( _python_str_plain_format_path_status );
    PyObjectLocalVariable _python_var_get_traceback_data( _python_str_plain_get_traceback_data );
    PyObjectLocalVariable _python_var_get_traceback_html( _python_str_plain_get_traceback_html );
    PyObjectLocalVariable _python_var_get_traceback_text( _python_str_plain_get_traceback_text );
    PyObjectLocalVariable _python_var_get_template_exception_info( _python_str_plain_get_template_exception_info );
    PyObjectLocalVariable _python_var__get_lines_from_file( _python_str_plain__get_lines_from_file );
    PyObjectLocalVariable _python_var_get_traceback_frames( _python_str_plain_get_traceback_frames );
    PyObjectLocalVariable _python_var_format_exception( _python_str_plain_format_exception );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_debug );
    _python_var___doc__.assign0( _python_unicode_digest_5975a2d7c3b570db2e33e009d6b00fae );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug(  ) );
    _python_var_format_path_status.assign1( MAKE_FUNCTION_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug(  ) );
    _python_var_get_traceback_data.assign1( MAKE_FUNCTION_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug(  ) );
    _python_var_get_traceback_html.assign1( MAKE_FUNCTION_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug(  ) );
    _python_var_get_traceback_text.assign1( MAKE_FUNCTION_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug(  ) );
    _python_var_get_template_exception_info.assign1( MAKE_FUNCTION_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug(  ) );
    _python_var__get_lines_from_file.assign1( MAKE_FUNCTION_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug(  ) );
    _python_var_get_traceback_frames.assign1( MAKE_FUNCTION_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug(  ) );
    _python_var_format_exception.assign1( MAKE_FUNCTION_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug(  ) );
    return _python_var_format_exception.updateLocalsDict( _python_var_get_traceback_frames.updateLocalsDict( _python_var__get_lines_from_file.updateLocalsDict( _python_var_get_template_exception_info.updateLocalsDict( _python_var_get_traceback_text.updateLocalsDict( _python_var_get_traceback_html.updateLocalsDict( _python_var_get_traceback_data.updateLocalsDict( _python_var_format_path_status.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_request, PyObject *_python_par_exc_type, PyObject *_python_par_exc_value, PyObject *_python_par_tb, PyObject *_python_par_is_email )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_exc_type( _python_str_plain_exc_type, _python_par_exc_type );
    PyObjectLocalParameterVariableNoDel _python_var_exc_value( _python_str_plain_exc_value, _python_par_exc_value );
    PyObjectLocalParameterVariableNoDel _python_var_tb( _python_str_plain_tb, _python_par_tb );
    PyObjectLocalParameterVariableNoDel _python_var_is_email( _python_str_plain_is_email, _python_par_is_email );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug ) )
    {
        if ( frame_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug );
        }

        frame_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug = MAKE_FRAME( _codeobj_63f2a2fba3d955501fbb2de1eb33b59b, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 205 );
        {
                PyObject *tmp_identifier = _python_var_request.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_request );
        }
        frame_guard.setLineNumber( 206 );
        {
            PyObjectTempKeeper0 call1;
            {
                PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__views__debug_get_exception_reporter_filter.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_request ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_filter );
        }
        }
        frame_guard.setLineNumber( 207 );
        {
                PyObject *tmp_identifier = _python_var_exc_type.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_exc_type );
        }
        frame_guard.setLineNumber( 208 );
        {
                PyObject *tmp_identifier = _python_var_exc_value.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_exc_value );
        }
        frame_guard.setLineNumber( 209 );
        {
                PyObject *tmp_identifier = _python_var_tb.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_tb );
        }
        frame_guard.setLineNumber( 210 );
        {
                PyObject *tmp_identifier = _python_var_is_email.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_is_email );
        }
        frame_guard.setLineNumber( 212 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_template_info );
        frame_guard.setLineNumber( 213 );
        SET_ATTRIBUTE( Py_False, _python_var_self.asObject(), _python_str_plain_template_does_not_exist );
        frame_guard.setLineNumber( 214 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_loader_debug_info );
        frame_guard.setLineNumber( 217 );
        {
            PyObjectTempKeeper1 isinstance3;
            if ( ( isinstance3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_type ) ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 218 );
            {
                    PyObjectTemporary tmp_identifier( CALL_FUNCTION_WITH_POSARGS( PyExc_Exception, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_d061e593a5f4db3beebc12458962fffd, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_type ) ).asObject() ) ).asObject() ) ).asObject() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_exc_value );
            }
            frame_guard.setLineNumber( 219 );
            {
                    PyObjectTemporary tmp_identifier( BUILTIN_TYPE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_value ) ).asObject() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_exc_type );
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
        frame_guard.getFrame0()->f_locals = _python_var_is_email.updateLocalsDict( _python_var_tb.updateLocalsDict( _python_var_exc_value.updateLocalsDict( _python_var_exc_type.updateLocalsDict( _python_var_request.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug );
           frame_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_exc_type = NULL;
    PyObject *_python_par_exc_value = NULL;
    PyObject *_python_par_tb = NULL;
    PyObject *_python_par_is_email = NULL;
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
            if ( found == false && _python_str_plain_request == key )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exc_type == key )
            {
                if (unlikely( _python_par_exc_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'exc_type'" );
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
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'exc_value'" );
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
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'tb'" );
                    goto error_exit;
                }

                _python_par_tb = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_is_email == key )
            {
                if (unlikely( _python_par_is_email ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'is_email'" );
                    goto error_exit;
                }

                _python_par_is_email = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_type, key ) )
            {
                if (unlikely( _python_par_exc_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'exc_type'" );
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
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'exc_value'" );
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
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'tb'" );
                    goto error_exit;
                }

                _python_par_tb = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_is_email, key ) )
            {
                if (unlikely( _python_par_is_email ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'is_email'" );
                    goto error_exit;
                }

                _python_par_is_email = value;

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
            if ( 6 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 5 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 5 ))
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
                if ( 6 == 5 )
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
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'exc_type'" );
             goto error_exit;
         }

        _python_par_exc_type = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'exc_value'" );
             goto error_exit;
         }

        _python_par_exc_value = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_tb != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'tb'" );
             goto error_exit;
         }

        _python_par_tb = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_is_email != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'is_email'" );
             goto error_exit;
         }

        _python_par_is_email = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_is_email == NULL )
    {
        _python_par_is_email = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_is_email );
    }


    return impl_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug( self, _python_par_self, _python_par_request, _python_par_exc_type, _python_par_exc_value, _python_par_tb, _python_par_is_email );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_exc_type );
    Py_XDECREF( _python_par_exc_value );
    Py_XDECREF( _python_par_tb );
    Py_XDECREF( _python_par_is_email );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );

    // Actual function code.
    static PyFrameObject *frame_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug ) )
    {
        if ( frame_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug );
        }

        frame_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug = MAKE_FRAME( _codeobj_c140b4c08421c9af080cd7f5ed9f786c, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 222 );
        {
            PyObjectTempKeeper1 call1;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_exists ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_path.asObject() ) ) ).asObject() ) )) )
        {
            return INCREASE_REFCOUNT( _python_unicode_digest_e8edb193e1cb171a17efe2765d72af71 );
        }
        }
        frame_guard.setLineNumber( 224 );
        {
            PyObjectTempKeeper1 call3;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_isfile ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_path.asObject() ) ) ).asObject() ) )) )
        {
            return INCREASE_REFCOUNT( _python_unicode_digest_699b4bd44a9927466f8d51c3c3cd0d72 );
        }
        }
        frame_guard.setLineNumber( 226 );
        {
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper0 call6;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_os.asObject0(), _python_str_plain_access ) ), call6.assign( _python_var_path.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_os.asObject0(), _python_str_plain_R_OK ) ).asObject() ) ) ).asObject() ) )) )
        {
            return INCREASE_REFCOUNT( _python_unicode_digest_b1e04f42eafd1f9bfea9b7839a745a76 );
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
        frame_guard.getFrame0()->f_locals = _python_var_path.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug );
           frame_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( _python_unicode_digest_64b4b1405f7ecef7bf165c08af78a1de );
}
static PyObject *fparse_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "format_path_status() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "format_path_status() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_path == key )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "format_path_status() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "format_path_status() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path, key ) )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "format_path_status() got multiple values for keyword argument 'path'" );
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
                   "format_path_status() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "format_path_status() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "format_path_status() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "format_path_status() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "format_path_status() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "format_path_status() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format_path_status() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "format_path_status() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format_path_status() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "format_path_status() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "format_path_status() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "format_path_status() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "format_path_status() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "format_path_status() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format_path_status() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug( self, _python_par_self, _python_par_path );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_path );

    return NULL;
}

static PyObject *dparse_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_template_source_loaders( _python_str_plain_template_source_loaders );
    PyObjectLocalVariable _python_var_loader( _python_str_plain_loader );
    PyObjectLocalVariable _python_var_source_list_func( _python_str_plain_source_list_func );
    PyObjectLocalVariable _python_var_template_list( _python_str_plain_template_list );
    PyObjectLocalVariable _python_var_loader_name( _python_str_plain_loader_name );
    PyObjectLocalVariable _python_var_frames( _python_str_plain_frames );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_frame( _python_str_plain_frame );
    PyObjectLocalVariable _python_var_unicode_hint( _python_str_plain_unicode_hint );
    PyObjectLocalVariable _python_var_start( _python_str_plain_start );
    PyObjectLocalVariable _python_var_end( _python_str_plain_end );
    PyObjectLocalVariable _python_var_unicode_str( _python_str_plain_unicode_str );
    PyObjectLocalVariable _python_var_get_version( _python_str_plain_get_version );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_k( _python_str_plain_k );
    PyObjectLocalVariable _python_var_v( _python_str_plain_v );

    // Actual function code.
    static PyFrameObject *frame_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug ) )
    {
        if ( frame_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug );
        }

        frame_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug = MAKE_FRAME( _codeobj_27057e2378f6a67c422dcb9516de6d15, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 233 );
        {
            PyObjectTempKeeper1 call12;
            if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_type ) ).asObject() ) && CHECK_IF_TRUE( PyObjectTemporary( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_type ) ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_issubclass ), call12.asObject0(), _mvar_django__views__debug_TemplateDoesNotExist.asObject0() ) ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 234 );
            _python_var_template_source_loaders.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_bfd85b841356e595bb02a3878b7bc4a8, ((PyModuleObject *)_module_django__views__debug)->md_dict, PyObjectTemporary( _python_var_self.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_get_version.updateLocalsDict( _python_var_unicode_str.updateLocalsDict( _python_var_end.updateLocalsDict( _python_var_start.updateLocalsDict( _python_var_unicode_hint.updateLocalsDict( _python_var_frame.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_frames.updateLocalsDict( _python_var_loader_name.updateLocalsDict( _python_var_template_list.updateLocalsDict( _python_var_source_list_func.updateLocalsDict( _python_var_loader.updateLocalsDict( _python_var_template_source_loaders.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_template_source_loaders_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_template_source_loaders ) );
            frame_guard.setLineNumber( 235 );
            SET_ATTRIBUTE( Py_True, _python_var_self.asObject(), _python_str_plain_template_does_not_exist );
            frame_guard.setLineNumber( 236 );
            SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain_loader_debug_info );
            {
                frame_guard.setLineNumber( 237 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_template_source_loaders.asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 237 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_loader.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 238 );
                    try
                    {
                        frame_guard.setLineNumber( 239 );
                        _python_var_source_list_func.assign1( LOOKUP_ATTRIBUTE( _python_var_loader.asObject(), _python_str_plain_get_template_sources ) );
                        frame_guard.setLineNumber( 242 );
                        {
                            PyObjectTempKeeper0 call1;
                            _python_var_template_list.assign1( impl_listcontr_1_of_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug( MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( _python_var_source_list_func.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( TO_STR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_value ) ).asObject() ) ).asObject() ) ) ).asObject() ), _python_var_self, _python_var_t ) );
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
                            frame_guard.detachFrame();
                            _python_var_template_list.assign1( PyList_New( 0 ) );
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
                    frame_guard.setLineNumber( 248 );
                    {
                        PyObjectTempKeeper1 op3;
                        _python_var_loader_name.assign1( ( op3.assign( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_loader.asObject(), _python_str_plain___module__ ) ).asObject(), _python_unicode_dot ) ), BINARY_OPERATION_ADD( op3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_loader.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 249 );
                    {
                        PyObjectTempKeeper1 call9;
                        PyObjectTempKeeper0 make_dict5;
                        DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_loader_debug_info ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( ( make_dict5.assign( _python_var_loader_name.asObject() ), MAKE_DICT2( make_dict5.asObject0(), _python_unicode_plain_loader, _python_var_template_list.asObject(), _python_unicode_plain_templates ) ) ).asObject() ) ) );
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        }
        frame_guard.setLineNumber( 253 );
        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_settings.asObject0(), _python_str_plain_TEMPLATE_DEBUG ) ).asObject() ) && HAS_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_value ) ).asObject(), _python_unicode_plain_django_template_source ) ) )
        {
            frame_guard.setLineNumber( 255 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_template_exception_info ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 257 );
        _python_var_frames.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_traceback_frames ) ).asObject() ) );
        {
            frame_guard.setLineNumber( 258 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), _python_var_frames.asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 258 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    {
                        frame_guard.setLineNumber( 258 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_i.assign0( _python_tmp_element_1.asObject() );
                        _python_var_frame.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 259 );
                if ( SEQUENCE_CONTAINS_BOOL( _python_unicode_plain_vars, _python_var_frame.asObject() ) )
                {
                    frame_guard.setLineNumber( 260 );
                    {
                            PyObjectTemporary tmp_identifier( impl_listcontr_2_of_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_frame.asObject(), _python_unicode_plain_vars ) ).asObject() ), _python_var_k, _python_var_v ) );
                            SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_frame.asObject(), _python_unicode_plain_vars );
                    }
                }
                frame_guard.setLineNumber( 261 );
                {
                        PyObject *tmp_identifier = _python_var_frame.asObject();
                        PyObject *tmp_subscribed = _python_var_frames.asObject();
                        SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_i.asObject() );
                }

               CONSIDER_THREADING();
            }
        }
        _python_var_unicode_hint.assign0( _python_unicode_empty );
        frame_guard.setLineNumber( 264 );
        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_type ) ).asObject() ) && CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_issubclass ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_type ) ).asObject(), PyExc_UnicodeError ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 265 );
            _python_var_start.assign1( BUILTIN_GETATTR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_value ) ).asObject(), _python_unicode_plain_start, Py_None ) );
            frame_guard.setLineNumber( 266 );
            _python_var_end.assign1( BUILTIN_GETATTR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_value ) ).asObject(), _python_unicode_plain_end, Py_None ) );
            frame_guard.setLineNumber( 267 );
            if ( ( ( _python_var_start.asObject() != Py_None ) && ( _python_var_end.asObject() != Py_None ) ) )
            {
                frame_guard.setLineNumber( 268 );
                _python_var_unicode_str.assign1( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_value ) ).asObject(), _python_str_plain_args ) ).asObject(), _python_int_pos_1, 1 ) );
                frame_guard.setLineNumber( 269 );
                {
                    PyObjectTempKeeper1 call15;
                    PyObjectTempKeeper0 call20;
                    PyObjectTempKeeper0 slice17;
                    PyObjectTempKeeper1 slice18;
                    _python_var_unicode_hint.assign1( ( call20.assign( _mvar_django__views__debug_smart_text.asObject0() ), CALL_FUNCTION( call20.asObject0(), PyObjectTemporary( MAKE_TUPLE2( PyObjectTemporary( ( slice17.assign( _python_var_unicode_str.asObject() ), slice18.assign( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_max ), PyObjectTemporary( BINARY_OPERATION_SUB( _python_var_start.asObject(), _python_int_pos_5 ) ).asObject(), _python_int_0 ) ), LOOKUP_SLICE( slice17.asObject0(), slice18.asObject0(), PyObjectTemporary( ( call15.assign( BINARY_OPERATION_ADD( _python_var_end.asObject(), _python_int_pos_5 ) ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_min ), call15.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_unicode_str.asObject() ) ).asObject() ) ) ).asObject() ) ) ).asObject(), _python_unicode_plain_ascii ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_4593080baa302c9b17627b104a2461c2 ) ).asObject() ) ) );
                }
            }
        }
        frame_guard.setLineNumber( 270 );
        _python_var_get_version.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_django, ((PyModuleObject *)_module_django__views__debug)->md_dict, PyObjectTemporary( _python_var_self.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_get_version.updateLocalsDict( _python_var_unicode_str.updateLocalsDict( _python_var_end.updateLocalsDict( _python_var_start.updateLocalsDict( _python_var_unicode_hint.updateLocalsDict( _python_var_frame.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_frames.updateLocalsDict( _python_var_loader_name.updateLocalsDict( _python_var_template_list.updateLocalsDict( _python_var_source_list_func.updateLocalsDict( _python_var_loader.updateLocalsDict( _python_var_template_source_loaders.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_get_version_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_version ) );
        frame_guard.setLineNumber( 271 );
        {
            PyObjectTempKeeper1 call23;
            PyObjectTempKeeper1 make_dict25;
            PyObjectTempKeeper0 make_dict27;
            PyObjectTempKeeper0 make_dict29;
            PyObjectTempKeeper1 make_dict31;
            PyObjectTempKeeper1 make_dict33;
            PyObjectTempKeeper1 make_dict35;
            PyObjectTempKeeper1 make_dict37;
            PyObjectTempKeeper1 make_dict39;
            PyObjectTempKeeper1 make_dict41;
            PyObjectTempKeeper1 make_dict43;
            PyObjectTempKeeper1 make_dict45;
            PyObjectTempKeeper1 make_dict47;
            PyObjectTempKeeper1 make_dict49;
            _python_var_c.assign1( ( make_dict25.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_is_email ) ), make_dict27.assign( _python_var_unicode_hint.asObject() ), make_dict29.assign( _python_var_frames.asObject() ), make_dict31.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_request ) ), make_dict33.assign( ( call23.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_filter ) ).asObject(), _python_str_plain_get_post_parameters ) ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_request ) ).asObject() ) ) ), make_dict35.assign( CALL_FUNCTION_NO_ARGS( _mvar_django__views__debug_get_safe_settings.asObject0() ) ), make_dict37.assign( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_sys.asObject0(), _python_str_plain_executable ) ), make_dict39.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_0338ffcc1cb587b5dbf0352a3d3fcea6, PyObjectTemporary( LOOKUP_INDEX_SLICE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_sys.asObject0(), _python_str_plain_version_info ) ).asObject(), 0, 3 ) ).asObject() ) ), make_dict41.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_datetime.asObject0(), _python_str_plain_datetime ) ).asObject(), _python_str_plain_now ) ).asObject() ) ), make_dict43.assign( CALL_FUNCTION_NO_ARGS( _python_var_get_version.asObject() ) ), make_dict45.assign( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_sys.asObject0(), _python_str_plain_path ) ), make_dict47.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_template_info ) ), make_dict49.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_template_does_not_exist ) ), MAKE_DICT14( make_dict25.asObject0(), _python_unicode_plain_is_email, make_dict27.asObject0(), _python_unicode_plain_unicode_hint, make_dict29.asObject0(), _python_unicode_plain_frames, make_dict31.asObject0(), _python_unicode_plain_request, make_dict33.asObject0(), _python_unicode_plain_filtered_POST, make_dict35.asObject0(), _python_unicode_plain_settings, make_dict37.asObject0(), _python_unicode_plain_sys_executable, make_dict39.asObject0(), _python_unicode_plain_sys_version_info, make_dict41.asObject0(), _python_unicode_plain_server_time, make_dict43.asObject0(), _python_unicode_plain_django_version_info, make_dict45.asObject0(), _python_unicode_plain_sys_path, make_dict47.asObject0(), _python_unicode_plain_template_info, make_dict49.asObject0(), _python_unicode_plain_template_does_not_exist, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_loader_debug_info ) ).asObject(), _python_unicode_plain_loader_debug_info ) ) );
        }
        frame_guard.setLineNumber( 288 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_type ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 289 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_type ) ).asObject(), _python_str_plain___name__ ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_c.asObject(), _python_unicode_plain_exception_type );
            }
        }
        frame_guard.setLineNumber( 290 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_value ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 291 );
            {
                PyObjectTempKeeper0 call53;
                {
                    PyObjectTemporary tmp_identifier( ( call53.assign( _mvar_django__views__debug_smart_text.asObject0() ), CALL_FUNCTION( call53.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_value ) ).asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_4593080baa302c9b17627b104a2461c2 ) ).asObject() ) ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_c.asObject(), _python_unicode_plain_exception_value );
            }
            }
        }
        frame_guard.setLineNumber( 292 );
        if ( CHECK_IF_TRUE( _python_var_frames.asObject() ) )
        {
            frame_guard.setLineNumber( 293 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( _python_var_frames.asObject(), _python_int_neg_1, -1 ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_c.asObject(), _python_unicode_plain_lastframe );
            }
        }
        frame_guard.setLineNumber( 294 );
        return _python_var_c.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_get_version.updateLocalsDict( _python_var_unicode_str.updateLocalsDict( _python_var_end.updateLocalsDict( _python_var_start.updateLocalsDict( _python_var_unicode_hint.updateLocalsDict( _python_var_frame.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_frames.updateLocalsDict( _python_var_loader_name.updateLocalsDict( _python_var_template_list.updateLocalsDict( _python_var_source_list_func.updateLocalsDict( _python_var_loader.updateLocalsDict( _python_var_template_source_loaders.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug );
           frame_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_traceback_data() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_data() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_data() got multiple values for keyword argument 'self'" );
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
                   "get_traceback_data() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_traceback_data() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_traceback_data() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_traceback_data() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_traceback_data() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_data() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_data() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_data() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_data() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_traceback_data() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_data() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_data() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_data() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_traceback_data() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug( PyObject *_python_par___iterator,PyObjectLocalParameterVariableNoDel &python_closure_self,PyObjectLocalVariable &python_closure_t )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 242 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 242 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_t.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 make_dict3;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( make_dict3.assign( python_closure_t.asObject() ), MAKE_DICT2( make_dict3.asObject0(), _python_unicode_plain_name, PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( python_closure_self.asObject(), _python_str_plain_format_path_status ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_t.asObject() ) ) ).asObject(), _python_unicode_plain_status ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_k,PyObjectLocalVariable &python_closure_v )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 260 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 260 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                {
                    frame_guard.setLineNumber( 260 );
                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    python_closure_k.assign0( _python_tmp_element_1.asObject() );
                    python_closure_v.assign0( _python_tmp_element_2.asObject() );
                }
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper0 call3;
                    PyObjectTempKeeper0 make_tuple5;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( make_tuple5.assign( python_closure_k.asObject() ), MAKE_TUPLE2( make_tuple5.asObject0(), PyObjectTemporary( ( call3.assign( _mvar_django__views__debug_force_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__views__debug_pprint.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_v.asObject() ) ) ).asObject() ) ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );

    // Actual function code.
    static PyFrameObject *frame_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug ) )
    {
        if ( frame_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug );
        }

        frame_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug = MAKE_FRAME( _codeobj_8b84fc7014482d83eaee568ace850502, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 298 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_t.assign1( ( call1.assign( _mvar_django__views__debug_Template.asObject0() ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _mvar_django__views__debug_TECHNICAL_500_TEMPLATE.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_70d40aba214a4fb91c3603826d74f748 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 299 );
        {
            PyObjectTempKeeper0 call4;
            _python_var_c.assign1( ( call4.assign( _mvar_django__views__debug_Context.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_traceback_data ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 300 );
        {
            PyObjectTempKeeper1 call6;
            return ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_render ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_c.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug );
           frame_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_traceback_html() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_html() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_html() got multiple values for keyword argument 'self'" );
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
                   "get_traceback_html() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_traceback_html() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_traceback_html() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_traceback_html() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_traceback_html() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_html() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_html() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_html() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_html() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_traceback_html() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_html() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_html() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_html() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_traceback_html() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );

    // Actual function code.
    static PyFrameObject *frame_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug ) )
    {
        if ( frame_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug );
        }

        frame_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug = MAKE_FRAME( _codeobj_aac2b2ee2bc170eaffbd295fa532cee8, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 304 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_t.assign1( ( call1.assign( _mvar_django__views__debug_Template.asObject0() ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _mvar_django__views__debug_TECHNICAL_500_TEXT_TEMPLATE.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_70d40aba214a4fb91c3603826d74f748 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 305 );
        {
            PyObjectTempKeeper0 call4;
            _python_var_c.assign1( ( call4.assign( _mvar_django__views__debug_Context.asObject0() ), CALL_FUNCTION( call4.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_traceback_data ) ).asObject() ) ).asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_1bd222170e037bba3ef6c0f4292b29f1 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 306 );
        {
            PyObjectTempKeeper1 call7;
            return ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_render ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_c.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug );
           frame_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_traceback_text() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_text() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_text() got multiple values for keyword argument 'self'" );
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
                   "get_traceback_text() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_traceback_text() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_traceback_text() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_traceback_text() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_traceback_text() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_text() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_text() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_text() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_text() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_traceback_text() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_text() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_text() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_text() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_traceback_text() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_origin( _python_str_plain_origin );
    PyObjectLocalVariable _python_var_start( _python_str_plain_start );
    PyObjectLocalVariable _python_var_end( _python_str_plain_end );
    PyObjectLocalVariable _python_var_template_source( _python_str_plain_template_source );
    PyObjectLocalVariable _python_var_context_lines( _python_str_plain_context_lines );
    PyObjectLocalVariable _python_var_line( _python_str_plain_line );
    PyObjectLocalVariable _python_var_upto( _python_str_plain_upto );
    PyObjectLocalVariable _python_var_source_lines( _python_str_plain_source_lines );
    PyObjectLocalVariable _python_var_before( _python_str_plain_before );
    PyObjectLocalVariable _python_var_during( _python_str_plain_during );
    PyObjectLocalVariable _python_var_after( _python_str_plain_after );
    PyObjectLocalVariable _python_var_num( _python_str_plain_num );
    PyObjectLocalVariable _python_var_next( _python_str_plain_next );
    PyObjectLocalVariable _python_var_total( _python_str_plain_total );
    PyObjectLocalVariable _python_var_top( _python_str_plain_top );
    PyObjectLocalVariable _python_var_bottom( _python_str_plain_bottom );
    PyObjectLocalVariable _python_var_message( _python_str_plain_message );

    // Actual function code.
    static PyFrameObject *frame_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug ) )
    {
        if ( frame_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug );
        }

        frame_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug = MAKE_FRAME( _codeobj_79cf1d91d57fa31759db67b990ffc3b4, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 309 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_value ) ).asObject(), _python_str_plain_django_template_source ) ).asObject() ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_origin.assign0( _python_tmp_element_1.asObject() );
            {
                frame_guard.setLineNumber( 309 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_element_2.asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_start.assign0( _python_tmp_element_1.asObject() );
                _python_var_end.assign0( _python_tmp_element_2.asObject() );
            }
        }
        frame_guard.setLineNumber( 310 );
        _python_var_template_source.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_origin.asObject(), _python_str_plain_reload ) ).asObject() ) );
        _python_var_context_lines.assign0( _python_int_pos_10 );
        _python_var_line.assign0( _python_int_0 );
        _python_var_upto.assign0( _python_int_0 );
        _python_var_source_lines.assign1( PyList_New( 0 ) );
        {
            PyObject *_python_tmp_assign_source = _python_unicode_empty;
            _python_var_before.assign0( _python_tmp_assign_source );
            _python_var_during.assign0( _python_tmp_assign_source );
            _python_var_after.assign0( _python_tmp_assign_source );
        }
        {
            frame_guard.setLineNumber( 316 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper0 call1;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), PyObjectTemporary( ( call1.assign( _mvar_django__views__debug_linebreak_iter.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_template_source.asObject() ) ) ).asObject() ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 316 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 316 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_num.assign0( _python_tmp_element_1.asObject() );
                        _python_var_next.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 317 );
                {
                    PyObjectTempKeeper0 cmp18;
                    PyObjectTempKeeper0 cmp20;
                    if ( ( ( cmp18.assign( _python_var_start.asObject() ), RICH_COMPARE_BOOL_GE( cmp18.asObject0(), _python_var_upto.asObject() ) ) && ( cmp20.assign( _python_var_end.asObject() ), RICH_COMPARE_BOOL_LE( cmp20.asObject0(), _python_var_next.asObject() ) ) ) )
                {
                    frame_guard.setLineNumber( 318 );
                    _python_var_line.assign0( _python_var_num.asObject() );
                    frame_guard.setLineNumber( 319 );
                    {
                        PyObjectTempKeeper0 call6;
                        PyObjectTempKeeper0 slice3;
                        PyObjectTempKeeper0 slice4;
                        _python_var_before.assign1( ( call6.assign( _mvar_django__views__debug_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( ( slice3.assign( _python_var_template_source.asObject() ), slice4.assign( _python_var_upto.asObject() ), LOOKUP_SLICE( slice3.asObject0(), slice4.asObject0(), _python_var_start.asObject() ) ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 320 );
                    {
                        PyObjectTempKeeper0 call11;
                        PyObjectTempKeeper0 slice8;
                        PyObjectTempKeeper0 slice9;
                        _python_var_during.assign1( ( call11.assign( _mvar_django__views__debug_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( ( slice8.assign( _python_var_template_source.asObject() ), slice9.assign( _python_var_start.asObject() ), LOOKUP_SLICE( slice8.asObject0(), slice9.asObject0(), _python_var_end.asObject() ) ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 321 );
                    {
                        PyObjectTempKeeper0 call16;
                        PyObjectTempKeeper0 slice13;
                        PyObjectTempKeeper0 slice14;
                        _python_var_after.assign1( ( call16.assign( _mvar_django__views__debug_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), PyObjectTemporary( ( slice13.assign( _python_var_template_source.asObject() ), slice14.assign( _python_var_end.asObject() ), LOOKUP_SLICE( slice13.asObject0(), slice14.asObject0(), _python_var_next.asObject() ) ) ).asObject() ) ) );
                    }
                }
                }
                frame_guard.setLineNumber( 322 );
                {
                    PyObjectTempKeeper0 call25;
                    PyObjectTempKeeper1 call29;
                    PyObjectTempKeeper0 make_tuple27;
                    PyObjectTempKeeper0 slice22;
                    PyObjectTempKeeper0 slice23;
                    DECREASE_REFCOUNT( ( call29.assign( LOOKUP_ATTRIBUTE( _python_var_source_lines.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), PyObjectTemporary( ( make_tuple27.assign( _python_var_num.asObject() ), MAKE_TUPLE2( make_tuple27.asObject0(), PyObjectTemporary( ( call25.assign( _mvar_django__views__debug_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), PyObjectTemporary( ( slice22.assign( _python_var_template_source.asObject() ), slice23.assign( _python_var_upto.asObject() ), LOOKUP_SLICE( slice22.asObject0(), slice23.asObject0(), _python_var_next.asObject() ) ) ).asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 323 );
                _python_var_upto.assign0( _python_var_next.asObject() );

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 324 );
        _python_var_total.assign1( BUILTIN_LEN( _python_var_source_lines.asObject() ) );
        frame_guard.setLineNumber( 326 );
        {
            PyObjectTempKeeper0 op31;
            _python_var_top.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_max ), _python_int_pos_1, PyObjectTemporary( ( op31.assign( _python_var_line.asObject() ), BINARY_OPERATION_SUB( op31.asObject0(), _python_var_context_lines.asObject() ) ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 327 );
        {
            PyObjectTempKeeper0 call36;
            PyObjectTempKeeper1 op33;
            _python_var_bottom.assign1( ( call36.assign( _python_var_total.asObject() ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_min ), call36.asObject0(), PyObjectTemporary( ( op33.assign( BINARY_OPERATION_ADD( _python_var_line.asObject(), _python_int_pos_1 ) ), BINARY_OPERATION_ADD( op33.asObject0(), _python_var_context_lines.asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 330 );
        try
        {
            frame_guard.setLineNumber( 331 );
            _python_var_message.assign1( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_value ) ).asObject(), _python_str_plain_args ) ).asObject(), _python_int_0, 0 ) );
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

            if ( _exception.matches( PyExc_IndexError ) )
            {
                frame_guard.detachFrame();
                _python_var_message.assign0( _python_unicode_digest_2f056b5026b2e3e691128b38de1e7179 );
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
        frame_guard.setLineNumber( 335 );
        {
            PyObjectTempKeeper0 make_dict41;
            PyObjectTempKeeper1 make_dict43;
            PyObjectTempKeeper0 make_dict45;
            PyObjectTempKeeper0 make_dict47;
            PyObjectTempKeeper0 make_dict49;
            PyObjectTempKeeper0 make_dict51;
            PyObjectTempKeeper0 make_dict53;
            PyObjectTempKeeper0 make_dict55;
            PyObjectTempKeeper0 make_dict57;
            PyObjectTempKeeper0 slice38;
            PyObjectTempKeeper0 slice39;
            {
                PyObjectTemporary tmp_identifier( ( make_dict41.assign( _python_var_message.asObject() ), make_dict43.assign( ( slice38.assign( _python_var_source_lines.asObject() ), slice39.assign( _python_var_top.asObject() ), LOOKUP_SLICE( slice38.asObject0(), slice39.asObject0(), _python_var_bottom.asObject() ) ) ), make_dict45.assign( _python_var_before.asObject() ), make_dict47.assign( _python_var_during.asObject() ), make_dict49.assign( _python_var_after.asObject() ), make_dict51.assign( _python_var_top.asObject() ), make_dict53.assign( _python_var_bottom.asObject() ), make_dict55.assign( _python_var_total.asObject() ), make_dict57.assign( _python_var_line.asObject() ), MAKE_DICT10( make_dict41.asObject0(), _python_unicode_plain_message, make_dict43.asObject0(), _python_unicode_plain_source_lines, make_dict45.asObject0(), _python_unicode_plain_before, make_dict47.asObject0(), _python_unicode_plain_during, make_dict49.asObject0(), _python_unicode_plain_after, make_dict51.asObject0(), _python_unicode_plain_top, make_dict53.asObject0(), _python_unicode_plain_bottom, make_dict55.asObject0(), _python_unicode_plain_total, make_dict57.asObject0(), _python_unicode_plain_line, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_origin.asObject(), _python_str_plain_name ) ).asObject(), _python_unicode_plain_name ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_template_info );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_message.updateLocalsDict( _python_var_bottom.updateLocalsDict( _python_var_top.updateLocalsDict( _python_var_total.updateLocalsDict( _python_var_next.updateLocalsDict( _python_var_num.updateLocalsDict( _python_var_after.updateLocalsDict( _python_var_during.updateLocalsDict( _python_var_before.updateLocalsDict( _python_var_source_lines.updateLocalsDict( _python_var_upto.updateLocalsDict( _python_var_line.updateLocalsDict( _python_var_context_lines.updateLocalsDict( _python_var_template_source.updateLocalsDict( _python_var_end.updateLocalsDict( _python_var_start.updateLocalsDict( _python_var_origin.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug );
           frame_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_template_exception_info() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_template_exception_info() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_template_exception_info() got multiple values for keyword argument 'self'" );
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
                   "get_template_exception_info() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_template_exception_info() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_template_exception_info() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_template_exception_info() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_template_exception_info() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_template_exception_info() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_template_exception_info() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_template_exception_info() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_template_exception_info() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_template_exception_info() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_template_exception_info() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_template_exception_info() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_template_exception_info() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_template_exception_info() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_filename, PyObject *_python_par_lineno, PyObject *_python_par_context_lines, PyObject *_python_par_loader, PyObject *_python_par_module_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_filename( _python_str_plain_filename, _python_par_filename );
    PyObjectLocalParameterVariableNoDel _python_var_lineno( _python_str_plain_lineno, _python_par_lineno );
    PyObjectLocalParameterVariableNoDel _python_var_context_lines( _python_str_plain_context_lines, _python_par_context_lines );
    PyObjectLocalParameterVariableNoDel _python_var_loader( _python_str_plain_loader, _python_par_loader );
    PyObjectLocalParameterVariableNoDel _python_var_module_name( _python_str_plain_module_name, _python_par_module_name );
    PyObjectLocalVariable _python_var_source( _python_str_plain_source );
    PyObjectLocalVariable _python_var_fp( _python_str_plain_fp );
    PyObjectLocalVariable _python_var_encoding( _python_str_plain_encoding );
    PyObjectLocalVariable _python_var_line( _python_str_plain_line );
    PyObjectLocalVariable _python_var_match( _python_str_plain_match );
    PyObjectLocalVariable _python_var_lower_bound( _python_str_plain_lower_bound );
    PyObjectLocalVariable _python_var_upper_bound( _python_str_plain_upper_bound );
    PyObjectLocalVariable _python_var_pre_context( _python_str_plain_pre_context );
    PyObjectLocalVariable _python_var_context_line( _python_str_plain_context_line );
    PyObjectLocalVariable _python_var_post_context( _python_str_plain_post_context );
    PyObjectLocalVariable _python_var_sline( _python_str_plain_sline );

    // Actual function code.
    _python_var_source.assign0( Py_None );
    static PyFrameObject *frame_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug ) )
    {
        if ( frame_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug );
        }

        frame_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug = MAKE_FRAME( _codeobj_067dd55f6f9ebea386004197ab745221, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 354 );
        if ( ( ( _python_var_loader.asObject() != Py_None ) && HAS_ATTRIBUTE( _python_var_loader.asObject(), _python_unicode_plain_get_source ) ) )
        {
            frame_guard.setLineNumber( 355 );
            {
                PyObjectTempKeeper1 call1;
                _python_var_source.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_loader.asObject(), _python_str_plain_get_source ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_module_name.asObject() ) ) );
            }
            frame_guard.setLineNumber( 356 );
            if ( ( _python_var_source.asObject() != Py_None ) )
            {
                frame_guard.setLineNumber( 357 );
                _python_var_source.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_source.asObject(), _python_str_plain_splitlines ) ).asObject() ) );
            }
        }
        frame_guard.setLineNumber( 358 );
        if ( ( _python_var_source.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 359 );
            try
            {
                {
                    frame_guard.setLineNumber( 360 );
                    PyObjectTemporary _python_tmp_with_source( OPEN_FILE( _python_var_filename.asObject(), _python_unicode_plain_rb, NULL ) );
                    PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
                    PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
                    PyObject *_python_tmp_indicator = Py_True;
                    PythonExceptionKeeper _caught_1;


                    try
                    {
                        try
                        {
                            _python_var_fp.assign0( _python_tmp_with_enter.asObject() );
                            frame_guard.setLineNumber( 361 );
                            _python_var_source.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_fp.asObject(), _python_str_plain_read ) ).asObject() ) ).asObject(), _python_str_plain_splitlines ) ).asObject() ) );
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
        }
        frame_guard.setLineNumber( 364 );
        if ( ( _python_var_source.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 365 );
            return MAKE_TUPLE4( Py_None, PyObjectTemporary( PyList_New( 0 ) ).asObject(), Py_None, PyObjectTemporary( PyList_New( 0 ) ).asObject() );
        }
        frame_guard.setLineNumber( 370 );
        {
            PyObjectTempKeeper1 isinstance6;
            if ( ( isinstance6.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_source.asObject(), _python_int_0, 0 ) ), BUILTIN_ISINSTANCE_BOOL( isinstance6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_six.asObject0(), _python_str_plain_binary_type ) ).asObject() ) ) )
        {
            _python_var_encoding.assign0( _python_unicode_plain_ascii );
            {
                frame_guard.setLineNumber( 372 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_source.asObject(), 0, 2 ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 372 );
                        PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_2 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                        _python_var_line.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 375 );
                    {
                        PyObjectTempKeeper1 call3;
                        _python_var_match.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_re.asObject0(), _python_str_plain_search ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_str_digest_12c307ae0021d0c48fa81dc57d96f7bd, _python_var_line.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 376 );
                    if ( CHECK_IF_TRUE( _python_var_match.asObject() ) )
                    {
                        frame_guard.setLineNumber( 377 );
                        _python_var_encoding.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) ).asObject(), _python_str_plain_decode ) ).asObject(), _python_unicode_plain_ascii ) );
                        frame_guard.setLineNumber( 378 );
                        break;
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 379 );
            _python_var_source.assign1( impl_listcontr_1_of_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug( MAKE_ITERATOR( _python_var_source.asObject() ), _python_var_encoding, _python_var_sline ) );
        }
        }
        frame_guard.setLineNumber( 381 );
        {
            PyObjectTempKeeper0 op8;
            _python_var_lower_bound.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_max ), _python_int_0, PyObjectTemporary( ( op8.assign( _python_var_lineno.asObject() ), BINARY_OPERATION_SUB( op8.asObject0(), _python_var_context_lines.asObject() ) ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 382 );
        {
            PyObjectTempKeeper0 op10;
            _python_var_upper_bound.assign1( ( op10.assign( _python_var_lineno.asObject() ), BINARY_OPERATION_ADD( op10.asObject0(), _python_var_context_lines.asObject() ) ) );
        }
        frame_guard.setLineNumber( 384 );
        {
            PyObjectTempKeeper0 slice12;
            PyObjectTempKeeper0 slice13;
            _python_var_pre_context.assign1( ( slice12.assign( _python_var_source.asObject() ), slice13.assign( _python_var_lower_bound.asObject() ), LOOKUP_SLICE( slice12.asObject0(), slice13.asObject0(), _python_var_lineno.asObject() ) ) );
        }
        frame_guard.setLineNumber( 385 );
        {
            PyObjectTempKeeper0 subscr15;
            _python_var_context_line.assign1( ( subscr15.assign( _python_var_source.asObject() ), LOOKUP_SUBSCRIPT( subscr15.asObject0(), _python_var_lineno.asObject() ) ) );
        }
        frame_guard.setLineNumber( 386 );
        {
            PyObjectTempKeeper0 slice17;
            PyObjectTempKeeper1 slice18;
            _python_var_post_context.assign1( ( slice17.assign( _python_var_source.asObject() ), slice18.assign( BINARY_OPERATION_ADD( _python_var_lineno.asObject(), _python_int_pos_1 ) ), LOOKUP_SLICE( slice17.asObject0(), slice18.asObject0(), _python_var_upper_bound.asObject() ) ) );
        }
        frame_guard.setLineNumber( 388 );
        {
            PyObjectTempKeeper0 make_tuple20;
            PyObjectTempKeeper0 make_tuple21;
            PyObjectTempKeeper0 make_tuple22;
            return ( make_tuple20.assign( _python_var_lower_bound.asObject() ), make_tuple21.assign( _python_var_pre_context.asObject() ), make_tuple22.assign( _python_var_context_line.asObject() ), MAKE_TUPLE4( make_tuple20.asObject0(), make_tuple21.asObject0(), make_tuple22.asObject0(), _python_var_post_context.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_module_name.updateLocalsDict( _python_var_loader.updateLocalsDict( _python_var_context_lines.updateLocalsDict( _python_var_lineno.updateLocalsDict( _python_var_filename.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_sline.updateLocalsDict( _python_var_post_context.updateLocalsDict( _python_var_context_line.updateLocalsDict( _python_var_pre_context.updateLocalsDict( _python_var_upper_bound.updateLocalsDict( _python_var_lower_bound.updateLocalsDict( _python_var_match.updateLocalsDict( _python_var_line.updateLocalsDict( _python_var_encoding.updateLocalsDict( _python_var_fp.updateLocalsDict( _python_var_source.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug );
           frame_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_filename = NULL;
    PyObject *_python_par_lineno = NULL;
    PyObject *_python_par_context_lines = NULL;
    PyObject *_python_par_loader = NULL;
    PyObject *_python_par_module_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "_get_lines_from_file() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_filename == key )
            {
                if (unlikely( _python_par_filename ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'filename'" );
                    goto error_exit;
                }

                _python_par_filename = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_lineno == key )
            {
                if (unlikely( _python_par_lineno ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'lineno'" );
                    goto error_exit;
                }

                _python_par_lineno = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_context_lines == key )
            {
                if (unlikely( _python_par_context_lines ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'context_lines'" );
                    goto error_exit;
                }

                _python_par_context_lines = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_loader == key )
            {
                if (unlikely( _python_par_loader ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'loader'" );
                    goto error_exit;
                }

                _python_par_loader = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_module_name == key )
            {
                if (unlikely( _python_par_module_name ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'module_name'" );
                    goto error_exit;
                }

                _python_par_module_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_filename, key ) )
            {
                if (unlikely( _python_par_filename ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'filename'" );
                    goto error_exit;
                }

                _python_par_filename = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_lineno, key ) )
            {
                if (unlikely( _python_par_lineno ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'lineno'" );
                    goto error_exit;
                }

                _python_par_lineno = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_context_lines, key ) )
            {
                if (unlikely( _python_par_context_lines ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'context_lines'" );
                    goto error_exit;
                }

                _python_par_context_lines = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_loader, key ) )
            {
                if (unlikely( _python_par_loader ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'loader'" );
                    goto error_exit;
                }

                _python_par_loader = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_module_name, key ) )
            {
                if (unlikely( _python_par_module_name ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'module_name'" );
                    goto error_exit;
                }

                _python_par_module_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_get_lines_from_file() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_get_lines_from_file() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_lines_from_file() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_lines_from_file() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_lines_from_file() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "_get_lines_from_file() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_lines_from_file() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "_get_lines_from_file() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_lines_from_file() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
    {
        if ( 6 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "_get_lines_from_file() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_lines_from_file() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_lines_from_file() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_filename != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'filename'" );
             goto error_exit;
         }

        _python_par_filename = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_lineno != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'lineno'" );
             goto error_exit;
         }

        _python_par_lineno = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_context_lines != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'context_lines'" );
             goto error_exit;
         }

        _python_par_context_lines = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_loader != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'loader'" );
             goto error_exit;
         }

        _python_par_loader = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_module_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_get_lines_from_file() got multiple values for keyword argument 'module_name'" );
             goto error_exit;
         }

        _python_par_module_name = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_loader == NULL )
    {
        _python_par_loader = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_loader );
    }
    if ( _python_par_module_name == NULL )
    {
        _python_par_module_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_module_name );
    }


    return impl_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug( self, _python_par_self, _python_par_filename, _python_par_lineno, _python_par_context_lines, _python_par_loader, _python_par_module_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_filename );
    Py_XDECREF( _python_par_lineno );
    Py_XDECREF( _python_par_context_lines );
    Py_XDECREF( _python_par_loader );
    Py_XDECREF( _python_par_module_name );

    return NULL;
}

static PyObject *dparse_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_encoding,PyObjectLocalVariable &python_closure_sline )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 379 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 379 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_sline.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 call2;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_six.asObject0(), _python_str_plain_text_type ) ), call2.assign( python_closure_sline.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), python_closure_encoding.asObject(), _python_unicode_plain_replace ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_frames( _python_str_plain_frames );
    PyObjectLocalVariable _python_var_tb( _python_str_plain_tb );
    PyObjectLocalVariable _python_var_filename( _python_str_plain_filename );
    PyObjectLocalVariable _python_var_function( _python_str_plain_function );
    PyObjectLocalVariable _python_var_lineno( _python_str_plain_lineno );
    PyObjectLocalVariable _python_var_loader( _python_str_plain_loader );
    PyObjectLocalVariable _python_var_module_name( _python_str_plain_module_name );
    PyObjectLocalVariable _python_var_pre_context_lineno( _python_str_plain_pre_context_lineno );
    PyObjectLocalVariable _python_var_pre_context( _python_str_plain_pre_context );
    PyObjectLocalVariable _python_var_context_line( _python_str_plain_context_line );
    PyObjectLocalVariable _python_var_post_context( _python_str_plain_post_context );

    // Actual function code.
    _python_var_frames.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug ) )
    {
        if ( frame_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug );
        }

        frame_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug = MAKE_FRAME( _codeobj_cca442270260d3f7e79f5145acef2f33, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 392 );
        _python_var_tb.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_tb ) );
        frame_guard.setLineNumber( 393 );
        while( true )
        {
            frame_guard.setLineNumber( 393 );
            if ( ( _python_var_tb.asObject() == Py_None ) )
            {
                frame_guard.setLineNumber( 393 );
                break;
            }
            frame_guard.setLineNumber( 396 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb.asObject(), _python_str_plain_tb_frame ) ).asObject(), _python_str_plain_f_locals ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain___traceback_hide__ ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 397 );
                _python_var_tb.assign1( LOOKUP_ATTRIBUTE( _python_var_tb.asObject(), _python_str_plain_tb_next ) );
                frame_guard.setLineNumber( 398 );
                CONSIDER_THREADING(); continue;
            }
            frame_guard.setLineNumber( 399 );
            _python_var_filename.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb.asObject(), _python_str_plain_tb_frame ) ).asObject(), _python_str_plain_f_code ) ).asObject(), _python_str_plain_co_filename ) );
            frame_guard.setLineNumber( 400 );
            _python_var_function.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb.asObject(), _python_str_plain_tb_frame ) ).asObject(), _python_str_plain_f_code ) ).asObject(), _python_str_plain_co_name ) );
            frame_guard.setLineNumber( 401 );
            _python_var_lineno.assign1( BINARY_OPERATION_SUB( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb.asObject(), _python_str_plain_tb_lineno ) ).asObject(), _python_int_pos_1 ) );
            frame_guard.setLineNumber( 402 );
            _python_var_loader.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb.asObject(), _python_str_plain_tb_frame ) ).asObject(), _python_str_plain_f_globals ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain___loader__ ) );
            frame_guard.setLineNumber( 403 );
            {
                PyObjectTempKeeper1 keeper_0;
                _python_var_module_name.assign0( ( CHECK_IF_TRUE( keeper_0.assign( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb.asObject(), _python_str_plain_tb_frame ) ).asObject(), _python_str_plain_f_globals ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain___name__ ) ) ) ? PyObjectTemporary( keeper_0.asObject() ).asObject() : _python_unicode_empty ) );
            }
            {
                frame_guard.setLineNumber( 404 );
                PyObject *_tmp_python_tmp_source_iter;
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 call2;
                    PyObjectTempKeeper0 call3;
                    PyObjectTempKeeper0 call5;
                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get_lines_from_file ) ), call2.assign( _python_var_filename.asObject() ), call3.assign( _python_var_lineno.asObject() ), call5.assign( _python_var_loader.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_int_pos_7, call5.asObject0(), _python_var_module_name.asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                PyObjectTemporary _python_tmp_element_4( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 3 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 4 );
                _python_var_pre_context_lineno.assign0( _python_tmp_element_1.asObject() );
                _python_var_pre_context.assign0( _python_tmp_element_2.asObject() );
                _python_var_context_line.assign0( _python_tmp_element_3.asObject() );
                _python_var_post_context.assign0( _python_tmp_element_4.asObject() );
            }
            frame_guard.setLineNumber( 405 );
            if ( ( _python_var_pre_context_lineno.asObject() != Py_None ) )
            {
                frame_guard.setLineNumber( 406 );
                {
                    PyObjectTempKeeper1 call32;
                    PyObjectTempKeeper1 call7;
                    PyObjectTempKeeper1 call8;
                    PyObjectTempKeeper0 make_dict10;
                    PyObjectTempKeeper0 make_dict12;
                    PyObjectTempKeeper0 make_dict14;
                    PyObjectTempKeeper0 make_dict16;
                    PyObjectTempKeeper1 make_dict18;
                    PyObjectTempKeeper1 make_dict20;
                    PyObjectTempKeeper1 make_dict22;
                    PyObjectTempKeeper0 make_dict24;
                    PyObjectTempKeeper0 make_dict26;
                    PyObjectTempKeeper0 make_dict28;
                    DECREASE_REFCOUNT( ( call32.assign( LOOKUP_ATTRIBUTE( _python_var_frames.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), PyObjectTemporary( ( make_dict10.assign( _python_var_tb.asObject() ), make_dict12.assign( ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_module_name.asObject(), _python_str_plain_startswith ) ).asObject(), _python_unicode_digest_1e0fab38b6ed22df3f159754fc6bbe9d ) ).asObject() ) ? _python_unicode_plain_django : _python_unicode_plain_user ) ), make_dict14.assign( _python_var_filename.asObject() ), make_dict16.assign( _python_var_function.asObject() ), make_dict18.assign( BINARY_OPERATION_ADD( _python_var_lineno.asObject(), _python_int_pos_1 ) ), make_dict20.assign( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_filter ) ).asObject(), _python_str_plain_get_traceback_frame_variables ) ), call8.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_request ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), call8.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tb.asObject(), _python_str_plain_tb_frame ) ).asObject() ) ) ), make_dict22.assign( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_id ), _python_var_tb.asObject() ) ), make_dict24.assign( _python_var_pre_context.asObject() ), make_dict26.assign( _python_var_context_line.asObject() ), make_dict28.assign( _python_var_post_context.asObject() ), MAKE_DICT11( make_dict10.asObject0(), _python_unicode_plain_tb, make_dict12.asObject0(), _python_unicode_plain_type, make_dict14.asObject0(), _python_unicode_plain_filename, make_dict16.asObject0(), _python_unicode_plain_function, make_dict18.asObject0(), _python_unicode_plain_lineno, make_dict20.asObject0(), _python_unicode_plain_vars, make_dict22.asObject0(), _python_unicode_plain_id, make_dict24.asObject0(), _python_unicode_plain_pre_context, make_dict26.asObject0(), _python_unicode_plain_context_line, make_dict28.asObject0(), _python_unicode_plain_post_context, PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_pre_context_lineno.asObject(), _python_int_pos_1 ) ).asObject(), _python_unicode_plain_pre_context_lineno ) ) ).asObject() ) ) );
                }
            }
            frame_guard.setLineNumber( 419 );
            _python_var_tb.assign1( LOOKUP_ATTRIBUTE( _python_var_tb.asObject(), _python_str_plain_tb_next ) );

           CONSIDER_THREADING();
        }
        frame_guard.setLineNumber( 421 );
        return _python_var_frames.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_post_context.updateLocalsDict( _python_var_context_line.updateLocalsDict( _python_var_pre_context.updateLocalsDict( _python_var_pre_context_lineno.updateLocalsDict( _python_var_module_name.updateLocalsDict( _python_var_loader.updateLocalsDict( _python_var_lineno.updateLocalsDict( _python_var_function.updateLocalsDict( _python_var_filename.updateLocalsDict( _python_var_tb.updateLocalsDict( _python_var_frames.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug );
           frame_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_traceback_frames() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_frames() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_traceback_frames() got multiple values for keyword argument 'self'" );
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
                   "get_traceback_frames() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_traceback_frames() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_traceback_frames() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_traceback_frames() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_traceback_frames() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frames() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frames() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frames() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frames() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_traceback_frames() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_traceback_frames() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_frames() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_traceback_frames() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_traceback_frames() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_traceback( _python_str_plain_traceback );
    PyObjectLocalVariable _python_var_frames( _python_str_plain_frames );
    PyObjectLocalVariable _python_var_tb( _python_str_plain_tb );
    PyObjectLocalVariable _python_var_list( _python_str_plain_list );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );

    // Actual function code.
    static PyFrameObject *frame_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug ) )
    {
        if ( frame_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug );
        }

        frame_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug = MAKE_FRAME( _codeobj_5e027e7b2a233ae02bc8f1218e3e87f0, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 427 );
        _python_var_traceback.assign1( IMPORT_MODULE( _python_str_plain_traceback, ((PyModuleObject *)_module_django__views__debug)->md_dict, PyObjectTemporary( _python_var_self.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_list.updateLocalsDict( _python_var_tb.updateLocalsDict( _python_var_frames.updateLocalsDict( _python_var_traceback.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 428 );
        _python_var_frames.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_traceback_frames ) ).asObject() ) );
        frame_guard.setLineNumber( 429 );
        _python_var_tb.assign1( impl_listcontr_1_of_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug( MAKE_ITERATOR( _python_var_frames.asObject() ), _python_var_f ) );
        _python_var_list.assign1( LIST_COPY( _python_list_unicode_digest_3ae0122f12a81d1b4fac93830e67bbf1_list ) );
        {
            frame_guard.setLineNumber( 431 );
            PyObject *_python_tmp_inplace_start = _python_var_list.asObject();
            PyObject *_tmp_python_tmp_inplace_end;
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 op3;
                _tmp_python_tmp_inplace_end = ( op3.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op3.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_traceback.asObject(), _python_str_plain_format_list ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_tb.asObject() ) ) ).asObject() ) );
            }
            PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
            if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
            {
                _python_var_list.assign0( _python_tmp_inplace_end.asObject() );
            }
        }
        {
            frame_guard.setLineNumber( 432 );
            PyObject *_python_tmp_inplace_start = _python_var_list.asObject();
            PyObject *_tmp_python_tmp_inplace_end;
            {
                PyObjectTempKeeper1 call5;
                PyObjectTempKeeper1 call6;
                PyObjectTempKeeper0 op8;
                _tmp_python_tmp_inplace_end = ( op8.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op8.asObject0(), PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_traceback.asObject(), _python_str_plain_format_exception_only ) ), call6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_type ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exc_value ) ).asObject() ) ) ).asObject() ) );
            }
            PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
            if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
            {
                _python_var_list.assign0( _python_tmp_inplace_end.asObject() );
            }
        }
        frame_guard.setLineNumber( 433 );
        return _python_var_list.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_list.updateLocalsDict( _python_var_tb.updateLocalsDict( _python_var_frames.updateLocalsDict( _python_var_traceback.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug );
           frame_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "format_exception() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "format_exception() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "format_exception() got multiple values for keyword argument 'self'" );
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
                   "format_exception() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "format_exception() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "format_exception() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "format_exception() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "format_exception() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "format_exception() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format_exception() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "format_exception() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format_exception() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "format_exception() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "format_exception() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "format_exception() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "format_exception() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "format_exception() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_f )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 429 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 429 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_f.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 make_tuple1;
                    PyObjectTempKeeper1 make_tuple2;
                    PyObjectTempKeeper1 make_tuple3;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( make_tuple1.assign( LOOKUP_SUBSCRIPT( python_closure_f.asObject(), _python_unicode_plain_filename ) ), make_tuple2.assign( LOOKUP_SUBSCRIPT( python_closure_f.asObject(), _python_unicode_plain_lineno ) ), make_tuple3.assign( LOOKUP_SUBSCRIPT( python_closure_f.asObject(), _python_unicode_plain_function ) ), MAKE_TUPLE4( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( python_closure_f.asObject(), _python_unicode_plain_context_line ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_9_technical_404_response_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_request, PyObject *_python_par_exception )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_exception( _python_str_plain_exception, _python_par_exception );
    PyObjectLocalVariable _python_var_tried( _python_str_plain_tried );
    PyObjectLocalVariable _python_var_urlconf( _python_str_plain_urlconf );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );

    // Actual function code.
    static PyFrameObject *frame_function_9_technical_404_response_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_9_technical_404_response_of_module_django__views__debug ) )
    {
        if ( frame_function_9_technical_404_response_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_technical_404_response_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_9_technical_404_response_of_module_django__views__debug );
        }

        frame_function_9_technical_404_response_of_module_django__views__debug = MAKE_FRAME( _codeobj_8398dcdc4a960ea2c2bf36fdb1375cc4, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_9_technical_404_response_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_9_technical_404_response_of_module_django__views__debug ) == 2 ); // Frame stack
        {
            PyObject *_python_tmp_unhandled_indicator = Py_True;
            frame_guard.setLineNumber( 438 );
            try
            {
                frame_guard.setLineNumber( 439 );
                _python_var_tried.assign1( LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_exception.asObject(), _python_str_plain_args ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_plain_tried ) );
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

                if ( _exception.matches( PyExc_IndexError ) || _exception.matches( PyExc_TypeError ) || _exception.matches( PyExc_KeyError ) )
                {
                    frame_guard.detachFrame();
                    _python_tmp_unhandled_indicator = Py_False;
                    _python_var_tried.assign1( PyList_New( 0 ) );
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
                frame_guard.setLineNumber( 443 );
                {
                    PyObjectTempKeeper1 cmp3;
                    PyObjectTempKeeper1 keeper_0;
                    if ( ( (!( CHECK_IF_TRUE( _python_var_tried.asObject() ) )) || ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_path ) ).asObject(), _python_unicode_chr_47 ) && ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( _python_var_tried.asObject() ) ).asObject(), _python_int_pos_1 ) && ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_tried.asObject(), _python_int_0, 0 ) ).asObject() ) ).asObject(), _python_int_pos_1 ) && ( ( cmp3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_tried.asObject(), _python_int_0, 0 ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_app_name ) ), RICH_COMPARE_BOOL_EQ( cmp3.asObject0(), keeper_0.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_tried.asObject(), _python_int_0, 0 ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_namespace ) ) ) ) && RICH_COMPARE_BOOL_EQ( PyObjectTemporary( keeper_0.asObject() ).asObject(), _python_unicode_plain_admin ) ) ) ) ) ) )
                {
                    frame_guard.setLineNumber( 448 );
                    {
                        PyObjectTempKeeper0 call1;
                        return ( call1.assign( _mvar_django__views__debug_default_urlconf.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_request.asObject() ) );
                    }
                }
                }
            }
        }
        frame_guard.setLineNumber( 450 );
        {
            PyObjectTempKeeper0 getattr5;
            _python_var_urlconf.assign1( ( getattr5.assign( _python_var_request.asObject() ), BUILTIN_GETATTR( getattr5.asObject0(), _python_unicode_plain_urlconf, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_settings.asObject0(), _python_str_plain_ROOT_URLCONF ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 451 );
        {
            PyObjectTempKeeper0 isinstance8;
            if ( ( isinstance8.assign( _python_var_urlconf.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance8.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_types.asObject0(), _python_str_plain_ModuleType ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 452 );
            _python_var_urlconf.assign1( LOOKUP_ATTRIBUTE( _python_var_urlconf.asObject(), _python_str_plain___name__ ) );
        }
        }
        frame_guard.setLineNumber( 454 );
        {
            PyObjectTempKeeper0 call10;
            _python_var_t.assign1( ( call10.assign( _mvar_django__views__debug_Template.asObject0() ), CALL_FUNCTION( call10.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _mvar_django__views__debug_TECHNICAL_404_TEMPLATE.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_b1dbe76da705a3233943edb4343856f7 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 455 );
        {
            PyObjectTempKeeper0 call13;
            PyObjectTempKeeper0 call30;
            PyObjectTempKeeper0 make_dict16;
            PyObjectTempKeeper1 make_dict18;
            PyObjectTempKeeper1 make_dict20;
            PyObjectTempKeeper0 make_dict22;
            PyObjectTempKeeper1 make_dict24;
            PyObjectTempKeeper0 make_dict26;
            _python_var_c.assign1( ( call30.assign( _mvar_django__views__debug_Context.asObject0() ), CALL_FUNCTION_WITH_ARGS( call30.asObject0(), PyObjectTemporary( ( make_dict16.assign( _python_var_urlconf.asObject() ), make_dict18.assign( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_settings.asObject0(), _python_str_plain_ROOT_URLCONF ) ), make_dict20.assign( LOOKUP_INDEX_SLICE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_path_info ) ).asObject(), 1, PY_SSIZE_T_MAX ) ), make_dict22.assign( _python_var_tried.asObject() ), make_dict24.assign( ( call13.assign( _mvar_django__views__debug_force_bytes.asObject0() ), CALL_FUNCTION( call13.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_exception.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_4593080baa302c9b17627b104a2461c2 ) ).asObject() ) ) ), make_dict26.assign( _python_var_request.asObject() ), MAKE_DICT7( make_dict16.asObject0(), _python_unicode_plain_urlconf, make_dict18.asObject0(), _python_unicode_plain_root_urlconf, make_dict20.asObject0(), _python_unicode_plain_request_path, make_dict22.asObject0(), _python_unicode_plain_urlpatterns, make_dict24.asObject0(), _python_unicode_plain_reason, make_dict26.asObject0(), _python_unicode_plain_request, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__views__debug_get_safe_settings.asObject0() ) ).asObject(), _python_unicode_plain_settings ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 464 );
        {
            PyObjectTempKeeper1 call32;
            PyObjectTempKeeper0 call34;
            return ( call34.assign( _mvar_django__views__debug_HttpResponseNotFound.asObject0() ), CALL_FUNCTION( call34.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( ( call32.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_render ) ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), _python_var_c.asObject() ) ) ).asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_328fb611d3d83ac86bda66b950410b38 ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_exception.updateLocalsDict( _python_var_request.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_urlconf.updateLocalsDict( _python_var_tried.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_technical_404_response_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_9_technical_404_response_of_module_django__views__debug );
           frame_function_9_technical_404_response_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_technical_404_response_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_exception = NULL;
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
                PyErr_Format( PyExc_TypeError, "technical_404_response() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_request == key )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "technical_404_response() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exception == key )
            {
                if (unlikely( _python_par_exception ))
                {
                    PyErr_Format( PyExc_TypeError, "technical_404_response() got multiple values for keyword argument 'exception'" );
                    goto error_exit;
                }

                _python_par_exception = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "technical_404_response() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exception, key ) )
            {
                if (unlikely( _python_par_exception ))
                {
                    PyErr_Format( PyExc_TypeError, "technical_404_response() got multiple values for keyword argument 'exception'" );
                    goto error_exit;
                }

                _python_par_exception = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "technical_404_response() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "technical_404_response() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "technical_404_response() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "technical_404_response() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "technical_404_response() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "technical_404_response() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "technical_404_response() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "technical_404_response() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "technical_404_response() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "technical_404_response() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "technical_404_response() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "technical_404_response() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "technical_404_response() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "technical_404_response() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_exception != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "technical_404_response() got multiple values for keyword argument 'exception'" );
             goto error_exit;
         }

        _python_par_exception = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_9_technical_404_response_of_module_django__views__debug( self, _python_par_request, _python_par_exception );

error_exit:;

    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_exception );

    return NULL;
}

static PyObject *dparse_function_9_technical_404_response_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_9_technical_404_response_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_technical_404_response_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_default_urlconf_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject *_python_par_request )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );

    // Actual function code.
    static PyFrameObject *frame_function_10_default_urlconf_of_module_django__views__debug = NULL;

    if ( isFrameUnusable( frame_function_10_default_urlconf_of_module_django__views__debug ) )
    {
        if ( frame_function_10_default_urlconf_of_module_django__views__debug )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_default_urlconf_of_module_django__views__debug" );
#endif
            Py_DECREF( frame_function_10_default_urlconf_of_module_django__views__debug );
        }

        frame_function_10_default_urlconf_of_module_django__views__debug = MAKE_FRAME( _codeobj_494c767798de08933d6d1f9fac83b62a, _module_django__views__debug );
    }

    FrameGuard frame_guard( frame_function_10_default_urlconf_of_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_function_10_default_urlconf_of_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 468 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_t.assign1( ( call1.assign( _mvar_django__views__debug_Template.asObject0() ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _mvar_django__views__debug_DEFAULT_URLCONF_TEMPLATE.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_60c722e537a64de0f4cdf95ae99151f0 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 469 );
        _python_var_c.assign1( CALL_FUNCTION_WITH_ARGS( _mvar_django__views__debug_Context.asObject0(), PyObjectTemporary( PyDict_New() ).asObject() ) );
        frame_guard.setLineNumber( 470 );
        {
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper0 call6;
            return ( call6.assign( _mvar_django__views__debug_HttpResponse.asObject0() ), CALL_FUNCTION( call6.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_render ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_c.asObject() ) ) ).asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_328fb611d3d83ac86bda66b950410b38 ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_request.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_10_default_urlconf_of_module_django__views__debug )
        {
           Py_DECREF( frame_function_10_default_urlconf_of_module_django__views__debug );
           frame_function_10_default_urlconf_of_module_django__views__debug = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_default_urlconf_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "default_urlconf() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_request == key )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "default_urlconf() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "default_urlconf() got multiple values for keyword argument 'request'" );
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
                   "default_urlconf() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "default_urlconf() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "default_urlconf() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "default_urlconf() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "default_urlconf() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "default_urlconf() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "default_urlconf() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "default_urlconf() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "default_urlconf() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "default_urlconf() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "default_urlconf() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "default_urlconf() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "default_urlconf() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "default_urlconf() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_10_default_urlconf_of_module_django__views__debug( self, _python_par_request );

error_exit:;

    Py_XDECREF( _python_par_request );

    return NULL;
}

static PyObject *dparse_function_10_default_urlconf_of_module_django__views__debug( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_10_default_urlconf_of_module_django__views__debug( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_default_urlconf_of_module_django__views__debug( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_default_urlconf_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_default_urlconf_of_module_django__views__debug,
        dparse_function_10_default_urlconf_of_module_django__views__debug,
        _python_str_plain_default_urlconf,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_494c767798de08933d6d1f9fac83b62a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_ba2df08d8acdc168293607fcbf5ed7fa
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug,
        dparse_function_1___init___of_class_8_ExceptionReporter_of_module_django__views__debug,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_63f2a2fba3d955501fbb2de1eb33b59b,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug,
        dparse_function_1_get_request_repr_of_class_6_ExceptionReporterFilter_of_module_django__views__debug,
        _python_str_plain_get_request_repr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_02fb6b98313d10af5f957feadcdc8e9d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug,
        dparse_function_1_is_active_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug,
        _python_str_plain_is_active,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fb3a73a9555aafb2b9bddf6cf957944a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_ce11c3ae1eac8f489ec4cb4101fd01fb
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_linebreak_iter_of_module_django__views__debug(  )
{
    return Nuitka_Function_New(
        fparse_function_1_linebreak_iter_of_module_django__views__debug,
        dparse_function_1_linebreak_iter_of_module_django__views__debug,
        _python_str_plain_linebreak_iter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b6e3a3bbd20f35ea304155b78eb8ebd6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        Py_None
    );
}



static PyObject *MAKE_FUNCTION_function_2_cleanse_setting_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_cleanse_setting_of_module_django__views__debug,
        dparse_function_2_cleanse_setting_of_module_django__views__debug,
        _python_str_plain_cleanse_setting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_01361b7a6a8dd86ac81e3894f628a05e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_556425b779ee4b02df229a0bff97e471
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug,
        dparse_function_2_format_path_status_of_class_8_ExceptionReporter_of_module_django__views__debug,
        _python_str_plain_format_path_status,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c140b4c08421c9af080cd7f5ed9f786c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug,
        dparse_function_2_get_post_parameters_of_class_6_ExceptionReporterFilter_of_module_django__views__debug,
        _python_str_plain_get_post_parameters,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_95c0b6a3b59aafcabb09da11056898f6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug,
        dparse_function_2_get_post_parameters_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug,
        _python_str_plain_get_post_parameters,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a35bf983a1decdec2ea808302c5e6bbe,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_e74d6bdfb75ff47ce1100c5662dfde28
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_safe_settings_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_safe_settings_of_module_django__views__debug,
        dparse_function_3_get_safe_settings_of_module_django__views__debug,
        _python_str_plain_get_safe_settings,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5648a39c62e0bdfcf664577a6ada36ef,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_6818472a76f63921147f5958fe9243f2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug,
        dparse_function_3_get_traceback_data_of_class_8_ExceptionReporter_of_module_django__views__debug,
        _python_str_plain_get_traceback_data,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_27057e2378f6a67c422dcb9516de6d15,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_c737e53810ae6948139fda97ff7aa511
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug,
        dparse_function_3_get_traceback_frame_variables_of_class_6_ExceptionReporterFilter_of_module_django__views__debug,
        _python_str_plain_get_traceback_frame_variables,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c2ebb1805558dbe7f5c69050ec78db65,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug,
        dparse_function_3_get_traceback_frame_variables_of_class_7_SafeExceptionReporterFilter_of_module_django__views__debug,
        _python_str_plain_get_traceback_frame_variables,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a5562e974ed0aaf4d5cbaffd807b7b06,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_e8e5581fd0543d5592d107ab64b65efd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug,
        dparse_function_4_get_traceback_html_of_class_8_ExceptionReporter_of_module_django__views__debug,
        _python_str_plain_get_traceback_html,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8b84fc7014482d83eaee568ace850502,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_a51a324777bc2bf347c05082354b483c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_technical_500_response_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_technical_500_response_of_module_django__views__debug,
        dparse_function_4_technical_500_response_of_module_django__views__debug,
        _python_str_plain_technical_500_response,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ae06f263974054a3bfe20199a3f4772d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_7a42dd5829154de09f651782b9366093
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_get_exception_reporter_filter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_get_exception_reporter_filter_of_module_django__views__debug,
        dparse_function_5_get_exception_reporter_filter_of_module_django__views__debug,
        _python_str_plain_get_exception_reporter_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2a92615a95e0a06a831ce770dc37a4b2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug,
        dparse_function_5_get_traceback_text_of_class_8_ExceptionReporter_of_module_django__views__debug,
        _python_str_plain_get_traceback_text,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_aac2b2ee2bc170eaffbd295fa532cee8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_acef7269992cd2f872eb2394b88f5d63
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug,
        dparse_function_6_get_template_exception_info_of_class_8_ExceptionReporter_of_module_django__views__debug,
        _python_str_plain_get_template_exception_info,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_79cf1d91d57fa31759db67b990ffc3b4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug,
        dparse_function_7__get_lines_from_file_of_class_8_ExceptionReporter_of_module_django__views__debug,
        _python_str_plain__get_lines_from_file,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_067dd55f6f9ebea386004197ab745221,
        INCREASE_REFCOUNT( _python_tuple_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_f65c8542bebe4a8ae7ee57e132d54002
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug,
        dparse_function_8_get_traceback_frames_of_class_8_ExceptionReporter_of_module_django__views__debug,
        _python_str_plain_get_traceback_frames,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cca442270260d3f7e79f5145acef2f33,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug,
        dparse_function_9_format_exception_of_class_8_ExceptionReporter_of_module_django__views__debug,
        _python_str_plain_format_exception,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5e027e7b2a233ae02bc8f1218e3e87f0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_e8750c6541ce23375efaa5e1244af5f0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_technical_404_response_of_module_django__views__debug(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_technical_404_response_of_module_django__views__debug,
        dparse_function_9_technical_404_response_of_module_django__views__debug,
        _python_str_plain_technical_404_response,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8398dcdc4a960ea2c2bf36fdb1375cc4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__views__debug,
        _python_unicode_digest_e3d63e20f483727f1d4c1cf40257b452
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.views.debug",   /* m_name */
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

MOD_INIT_DECL( django__views__debug )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__views__debug );
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

    // puts( "in initdjango__views__debug" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__views__debug = Py_InitModule4(
        "django.views.debug",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__views__debug = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__views__debug = (PyDictObject *)((PyModuleObject *)_module_django__views__debug)->md_dict;

    assertObject( _module_django__views__debug );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_fb728193c3b7c51365c63de90c1d5dda, _module_django__views__debug );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__views__debug );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__views__debug != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_da21e6c961a4515184765b985e57452a );
    PyFrameObject *frame_module_django__views__debug = MAKE_FRAME( _codeobj_92f702fd070c0ef8c830eb53e248b269, _module_django__views__debug );

    FrameGuard frame_guard( frame_module_django__views__debug );
    try
    {
        assert( Py_REFCNT( frame_module_django__views__debug ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_datetime, IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_re, IMPORT_MODULE( _python_str_plain_re, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_types, IMPORT_MODULE( _python_str_plain_types, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_ImproperlyConfigured, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_str_plain_ImproperlyConfigured_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImproperlyConfigured ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_HttpResponse, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_0086d976470a512ed29688abea23aec5, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_6fcf9a777f4ee324a84f44498d9cc171_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponse ) );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_HttpResponseServerError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_0086d976470a512ed29688abea23aec5, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_6fcf9a777f4ee324a84f44498d9cc171_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponseServerError ) );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_HttpResponseNotFound, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_0086d976470a512ed29688abea23aec5, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_6fcf9a777f4ee324a84f44498d9cc171_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpResponseNotFound ) );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_HttpRequest, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_0086d976470a512ed29688abea23aec5, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_6fcf9a777f4ee324a84f44498d9cc171_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_HttpRequest ) );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_build_request_repr, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_0086d976470a512ed29688abea23aec5, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_6fcf9a777f4ee324a84f44498d9cc171_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_build_request_repr ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_Template, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2c787db14d44c2e8d2ef6ec28149f0b6, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_141cc4d9692184606a535f7766854210_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Template ) );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_Context, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2c787db14d44c2e8d2ef6ec28149f0b6, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_141cc4d9692184606a535f7766854210_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Context ) );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_TemplateDoesNotExist, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2c787db14d44c2e8d2ef6ec28149f0b6, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_141cc4d9692184606a535f7766854210_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TemplateDoesNotExist ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_force_escape, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_cbac6a147ba82985d011af4fb566864b, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_str_plain_force_escape_str_plain_pprint_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_escape ) );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_pprint, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_cbac6a147ba82985d011af4fb566864b, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_str_plain_force_escape_str_plain_pprint_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_pprint ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_escape, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3a0db97fb5d78c487963bfc1490797d, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_str_plain_escape_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_escape ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_force_bytes, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_str_plain_force_bytes_str_plain_smart_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_bytes ) );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_smart_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_str_plain_force_bytes_str_plain_smart_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_smart_text ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_import_by_path, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_03bb9f131d782ff4dbd31e0966379285, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_str_plain_import_by_path_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_by_path ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__views__debug)->md_dict, ((PyModuleObject *)_module_django__views__debug)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 20 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_HIDDEN_SETTINGS, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__views__debug_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_45ea9162e6e31649dab462af945585df ) );
        UPDATE_STRING_DICT0( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_CLEANSED_SUBSTITUTE, _python_unicode_digest_18d2c63568525c2ee882db4b9dddcb01 );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_linebreak_iter, MAKE_FUNCTION_function_1_linebreak_iter_of_module_django__views__debug(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_cleanse_setting, MAKE_FUNCTION_function_2_cleanse_setting_of_module_django__views__debug(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_get_safe_settings, MAKE_FUNCTION_function_3_get_safe_settings_of_module_django__views__debug(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_technical_500_response, MAKE_FUNCTION_function_4_technical_500_response_of_module_django__views__debug(  ) );
        UPDATE_STRING_DICT0( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_default_exception_reporter_filter, Py_None );
        UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_get_exception_reporter_filter, MAKE_FUNCTION_function_5_get_exception_reporter_filter_of_module_django__views__debug(  ) );
        {
            frame_guard.setLineNumber( 86 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_6_ExceptionReporterFilter_of_module_django__views__debug(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__views__debug___metaclass__.isInitialized( false ) ? _mvar_django__views__debug___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_ExceptionReporterFilter, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_ExceptionReporterFilter, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 107 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__views__debug_ExceptionReporterFilter.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_7_SafeExceptionReporterFilter_of_module_django__views__debug(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__views__debug___metaclass__.isInitialized( false ) ? _mvar_django__views__debug___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_SafeExceptionReporterFilter, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_SafeExceptionReporterFilter, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 200 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_8_ExceptionReporter_of_module_django__views__debug(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__views__debug___metaclass__.isInitialized( false ) ? _mvar_django__views__debug___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_ExceptionReporter, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_ExceptionReporter, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__views__debug)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_technical_404_response, MAKE_FUNCTION_function_9_technical_404_response_of_module_django__views__debug(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_default_urlconf, MAKE_FUNCTION_function_10_default_urlconf_of_module_django__views__debug(  ) );
    UPDATE_STRING_DICT0( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_TECHNICAL_500_TEMPLATE, _python_unicode_digest_a72a26122a3710a44f025b1df836f577 );
    UPDATE_STRING_DICT0( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_TECHNICAL_500_TEXT_TEMPLATE, _python_unicode_digest_da6be7e8dc9506cc3965afc34df6888b );
    UPDATE_STRING_DICT0( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_TECHNICAL_404_TEMPLATE, _python_unicode_digest_e3e3c7dfee6391d71e8453589833dbb1 );
    UPDATE_STRING_DICT0( _moduledict_django__views__debug, (Nuitka_StringObject *)_python_str_plain_DEFAULT_URLCONF_TEMPLATE, _python_unicode_digest_add3c019cecbc9984a1d9ca80fcd90b5 );

   return MOD_RETURN_VALUE( _module_django__views__debug );
}
