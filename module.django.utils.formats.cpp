// Generated code for Python source for module 'django.utils.formats'
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

// The _module_django__utils__formats is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__formats;
PyDictObject *_moduledict_django__utils__formats;

// The module level variables.
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_ISO_INPUT_FORMATS( &_module_django__utils__formats, &_python_str_plain_ISO_INPUT_FORMATS );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats__format_cache( &_module_django__utils__formats, &_python_str_plain__format_cache );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats__format_modules_cache( &_module_django__utils__formats, &_python_str_plain__format_modules_cache );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_check_for_language( &_module_django__utils__formats, &_python_str_plain_check_for_language );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_date_format( &_module_django__utils__formats, &_python_str_plain_date_format );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_dateformat( &_module_django__utils__formats, &_python_str_plain_dateformat );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_datetime( &_module_django__utils__formats, &_python_str_plain_datetime );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_datetime_safe( &_module_django__utils__formats, &_python_str_plain_datetime_safe );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_decimal( &_module_django__utils__formats, &_python_str_plain_decimal );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_force_str( &_module_django__utils__formats, &_python_str_plain_force_str );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_get_format( &_module_django__utils__formats, &_python_str_plain_get_format );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_get_format_modules( &_module_django__utils__formats, &_python_str_plain_get_format_modules );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_get_language( &_module_django__utils__formats, &_python_str_plain_get_language );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_import_module( &_module_django__utils__formats, &_python_str_plain_import_module );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_iter_format_modules( &_module_django__utils__formats, &_python_str_plain_iter_format_modules );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_lazy( &_module_django__utils__formats, &_python_str_plain_lazy );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_mark_safe( &_module_django__utils__formats, &_python_str_plain_mark_safe );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_number_format( &_module_django__utils__formats, &_python_str_plain_number_format );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_numberformat( &_module_django__utils__formats, &_python_str_plain_numberformat );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_settings( &_module_django__utils__formats, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_six( &_module_django__utils__formats, &_python_str_plain_six );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_time_format( &_module_django__utils__formats, &_python_str_plain_time_format );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_to_locale( &_module_django__utils__formats, &_python_str_plain_to_locale );
static PyObjectGlobalVariable_django__utils__formats _mvar_django__utils__formats_unicodedata( &_module_django__utils__formats, &_python_str_plain_unicodedata );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_10_sanitize_separators_of_module_django__utils__formats(  );


static PyObject *MAKE_FUNCTION_function_1_reset_format_cache_of_module_django__utils__formats(  );


static PyObject *MAKE_FUNCTION_function_2_iter_format_modules_of_module_django__utils__formats(  );


static PyObject *MAKE_FUNCTION_function_3_get_format_modules_of_module_django__utils__formats(  );


static PyObject *MAKE_FUNCTION_function_4_get_format_of_module_django__utils__formats(  );


static PyObject *MAKE_FUNCTION_function_5_date_format_of_module_django__utils__formats(  );


static PyObject *MAKE_FUNCTION_function_6_time_format_of_module_django__utils__formats(  );


static PyObject *MAKE_FUNCTION_function_7_number_format_of_module_django__utils__formats(  );


static PyObject *MAKE_FUNCTION_function_8_localize_of_module_django__utils__formats(  );


static PyObject *MAKE_FUNCTION_function_9_localize_input_of_module_django__utils__formats(  );


// The module function definitions.
static PyObject *impl_function_1_reset_format_cache_of_module_django__utils__formats( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain__format_cache, PyDict_New() );
    UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain__format_modules_cache, PyDict_New() );
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_reset_format_cache_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "reset_format_cache() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "reset_format_cache() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "reset_format_cache() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_1_reset_format_cache_of_module_django__utils__formats( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1_reset_format_cache_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_1_reset_format_cache_of_module_django__utils__formats( self );
    }
    else
    {
        PyObject *result = fparse_function_1_reset_format_cache_of_module_django__utils__formats( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_2_iter_format_modules_of_module_django__utils__formats_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var_lang;
    PyObjectLocalVariable python_var_format_locations;
    PyObjectLocalVariable python_var_locale;
    PyObjectLocalVariable python_var_locales;
    PyObjectLocalVariable python_var_location;
    PyObjectLocalVariable python_var_loc;
};

static void _context_generator_function_2_iter_format_modules_of_module_django__utils__formats_destructor( void *context_voidptr )
{
    _context_generator_function_2_iter_format_modules_of_module_django__utils__formats_t *_python_context = (struct _context_generator_function_2_iter_format_modules_of_module_django__utils__formats_t *)context_voidptr;

    delete _python_context;
}

static void function_2_iter_format_modules_of_module_django__utils__formats_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_2_iter_format_modules_of_module_django__utils__formats_t *_python_context = (_context_generator_function_2_iter_format_modules_of_module_django__utils__formats_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_format_locations.setVariableName( _python_str_plain_format_locations );
        _python_context->python_var_locale.setVariableName( _python_str_plain_locale );
        _python_context->python_var_locales.setVariableName( _python_str_plain_locales );
        _python_context->python_var_location.setVariableName( _python_str_plain_location );
        _python_context->python_var_loc.setVariableName( _python_str_plain_loc );

        // Actual function code.
        static PyFrameObject *frame_function_2_iter_format_modules_of_module_django__utils__formats = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_2_iter_format_modules_of_module_django__utils__formats ) )
        {
            if ( frame_function_2_iter_format_modules_of_module_django__utils__formats )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_2_iter_format_modules_of_module_django__utils__formats" );
#endif
                Py_DECREF( frame_function_2_iter_format_modules_of_module_django__utils__formats );
            }

            frame_function_2_iter_format_modules_of_module_django__utils__formats = MAKE_FRAME( _codeobj_6649cb6726da760e73abcebf8e0fceec, _module_django__utils__formats );
        }

        Py_INCREF( frame_function_2_iter_format_modules_of_module_django__utils__formats );
        generator->m_frame = frame_function_2_iter_format_modules_of_module_django__utils__formats;

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

            frame_guard.setLineNumber( 45 );
            {
                PyObjectTempKeeper0 call12;
                if ( CHECK_IF_TRUE( PyObjectTemporary( ( call12.assign( _mvar_django__utils__formats_check_for_language.asObject0() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_context->python_var_lang.asObject() ) ) ).asObject() ) )
            {
                _python_context->python_var_format_locations.assign1( LIST_COPY( _python_list_str_digest_c43120b93a662270df847f464ba23e14_list ) );
                frame_guard.setLineNumber( 47 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_settings.asObject0(), _python_str_plain_FORMAT_MODULE_PATH ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 48 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_context->python_var_format_locations.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_settings.asObject0(), _python_str_plain_FORMAT_MODULE_PATH ) ).asObject(), _python_str_digest_925e52aa1cdd9e2c1f41328578b5d79e ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 49 );
                    DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_format_locations.asObject(), _python_str_plain_reverse ) ).asObject() ) );
                }
                frame_guard.setLineNumber( 50 );
                {
                    PyObjectTempKeeper0 call3;
                    _python_context->python_var_locale.assign1( ( call3.assign( _mvar_django__utils__formats_to_locale.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_context->python_var_lang.asObject() ) ) );
                }
                frame_guard.setLineNumber( 51 );
                _python_context->python_var_locales.assign1( MAKE_LIST1( _python_context->python_var_locale.asObject1() ) );
                frame_guard.setLineNumber( 52 );
                if ( SEQUENCE_CONTAINS_BOOL( _python_str_plain__, _python_context->python_var_locale.asObject() ) )
                {
                    frame_guard.setLineNumber( 53 );
                    {
                        PyObjectTempKeeper1 call5;
                        DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _python_context->python_var_locales.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_locale.asObject(), _python_str_plain_split ) ).asObject(), _python_str_plain__ ) ).asObject(), _python_int_0, 0 ) ).asObject() ) ) );
                    }
                }
                {
                    frame_guard.setLineNumber( 54 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_context->python_var_format_locations.asObject() ) );
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
                            _python_context->python_var_location.assign0( _python_tmp_iter_value.asObject() );
                        }
                        {
                            frame_guard.setLineNumber( 55 );
                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_context->python_var_locales.asObject() ) );
                            while( true )
                            {
                                {
                                    frame_guard.setLineNumber( 55 );
                                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                    if ( _tmp_unpack_2 == NULL )
                                    {
                                        break;
                                    }
                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                    _python_context->python_var_loc.assign0( _python_tmp_iter_value.asObject() );
                                }
                                frame_guard.setLineNumber( 56 );
                                try
                                {
                                    frame_guard.setLineNumber( 57 );
                                    {
                                        PyObjectTempKeeper0 call9;
                                        PyObjectTempKeeper0 op7;
                                        YIELD_VALUE( generator, ( call9.assign( _mvar_django__utils__formats_import_module.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_digest_ade6e7d147be12a4649813358667eb42, PyObjectTemporary( ( op7.assign( _python_context->python_var_location.asObject() ), BINARY_OPERATION_REMAINDER( op7.asObject0(), _python_context->python_var_loc.asObject() ) ) ).asObject() ) ) );
                                    }
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

                                    if ( _exception.matches( PyExc_ImportError ) )
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

                               CONSIDER_THREADING();
                            }
                        }

                       CONSIDER_THREADING();
                    }
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

static PyObject *impl_function_2_iter_format_modules_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject *_python_par_lang )
{
    // Create context if any
    struct _context_generator_function_2_iter_format_modules_of_module_django__utils__formats_t *_python_context = new _context_generator_function_2_iter_format_modules_of_module_django__utils__formats_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_2_iter_format_modules_of_module_django__utils__formats_context,
            _python_str_plain_iter_format_modules,
            _codeobj_6649cb6726da760e73abcebf8e0fceec,
            _python_context,
            _context_generator_function_2_iter_format_modules_of_module_django__utils__formats_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function iter_format_modules" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.
        _python_context->python_var_lang.setVariableNameAndValue( _python_str_plain_lang, _python_par_lang );

        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}
static PyObject *fparse_function_2_iter_format_modules_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_lang = NULL;
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
                PyErr_Format( PyExc_TypeError, "iter_format_modules() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_lang == key )
            {
                if (unlikely( _python_par_lang ))
                {
                    PyErr_Format( PyExc_TypeError, "iter_format_modules() got multiple values for keyword argument 'lang'" );
                    goto error_exit;
                }

                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_lang, key ) )
            {
                if (unlikely( _python_par_lang ))
                {
                    PyErr_Format( PyExc_TypeError, "iter_format_modules() got multiple values for keyword argument 'lang'" );
                    goto error_exit;
                }

                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "iter_format_modules() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "iter_format_modules() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "iter_format_modules() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "iter_format_modules() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "iter_format_modules() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "iter_format_modules() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "iter_format_modules() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "iter_format_modules() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "iter_format_modules() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "iter_format_modules() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "iter_format_modules() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "iter_format_modules() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "iter_format_modules() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_lang != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "iter_format_modules() got multiple values for keyword argument 'lang'" );
             goto error_exit;
         }

        _python_par_lang = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_iter_format_modules_of_module_django__utils__formats( self, _python_par_lang );

error_exit:;

    Py_XDECREF( _python_par_lang );

    return NULL;
}

static PyObject *dparse_function_2_iter_format_modules_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_iter_format_modules_of_module_django__utils__formats( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_iter_format_modules_of_module_django__utils__formats( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_format_modules_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject *_python_par_lang, PyObject *_python_par_reverse )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_lang( _python_str_plain_lang, _python_par_lang );
    PyObjectLocalParameterVariableNoDel _python_var_reverse( _python_str_plain_reverse, _python_par_reverse );
    PyObjectLocalVariable _python_var_modules( _python_str_plain_modules );

    // Actual function code.
    static PyFrameObject *frame_function_3_get_format_modules_of_module_django__utils__formats = NULL;

    if ( isFrameUnusable( frame_function_3_get_format_modules_of_module_django__utils__formats ) )
    {
        if ( frame_function_3_get_format_modules_of_module_django__utils__formats )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_get_format_modules_of_module_django__utils__formats" );
#endif
            Py_DECREF( frame_function_3_get_format_modules_of_module_django__utils__formats );
        }

        frame_function_3_get_format_modules_of_module_django__utils__formats = MAKE_FRAME( _codeobj_0f35308a4e545fd7c7917f742c467393, _module_django__utils__formats );
    }

    FrameGuard frame_guard( frame_function_3_get_format_modules_of_module_django__utils__formats );
    try
    {
        assert( Py_REFCNT( frame_function_3_get_format_modules_of_module_django__utils__formats ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 65 );
        if ( ( _python_var_lang.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 66 );
            _python_var_lang.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__formats_get_language.asObject0() ) );
        }
        frame_guard.setLineNumber( 67 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call4;
            _python_var_modules.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats__format_modules_cache.asObject0(), _python_str_plain_setdefault ) ), call4.assign( _python_var_lang.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), PyObjectTemporary( TO_LIST( PyObjectTemporary( ( call1.assign( _mvar_django__utils__formats_iter_format_modules.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_lang.asObject() ) ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 68 );
        if ( CHECK_IF_TRUE( _python_var_reverse.asObject() ) )
        {
            frame_guard.setLineNumber( 69 );
            return TO_LIST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_reversed ), _python_var_modules.asObject() ) ).asObject() );
        }
        frame_guard.setLineNumber( 70 );
        return _python_var_modules.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_reverse.updateLocalsDict( _python_var_lang.updateLocalsDict( _python_var_modules.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_get_format_modules_of_module_django__utils__formats )
        {
           Py_DECREF( frame_function_3_get_format_modules_of_module_django__utils__formats );
           frame_function_3_get_format_modules_of_module_django__utils__formats = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_get_format_modules_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_lang = NULL;
    PyObject *_python_par_reverse = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_format_modules() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_lang == key )
            {
                if (unlikely( _python_par_lang ))
                {
                    PyErr_Format( PyExc_TypeError, "get_format_modules() got multiple values for keyword argument 'lang'" );
                    goto error_exit;
                }

                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_reverse == key )
            {
                if (unlikely( _python_par_reverse ))
                {
                    PyErr_Format( PyExc_TypeError, "get_format_modules() got multiple values for keyword argument 'reverse'" );
                    goto error_exit;
                }

                _python_par_reverse = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_lang, key ) )
            {
                if (unlikely( _python_par_lang ))
                {
                    PyErr_Format( PyExc_TypeError, "get_format_modules() got multiple values for keyword argument 'lang'" );
                    goto error_exit;
                }

                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_reverse, key ) )
            {
                if (unlikely( _python_par_reverse ))
                {
                    PyErr_Format( PyExc_TypeError, "get_format_modules() got multiple values for keyword argument 'reverse'" );
                    goto error_exit;
                }

                _python_par_reverse = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_format_modules() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_format_modules() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_format_modules() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_format_modules() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_format_modules() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_format_modules() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_format_modules() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_format_modules() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_format_modules() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_format_modules() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_format_modules() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "get_format_modules() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_format_modules() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_lang != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_format_modules() got multiple values for keyword argument 'lang'" );
             goto error_exit;
         }

        _python_par_lang = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_reverse != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_format_modules() got multiple values for keyword argument 'reverse'" );
             goto error_exit;
         }

        _python_par_reverse = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_lang == NULL )
    {
        _python_par_lang = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_lang );
    }
    if ( _python_par_reverse == NULL )
    {
        _python_par_reverse = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_reverse );
    }


    return impl_function_3_get_format_modules_of_module_django__utils__formats( self, _python_par_lang, _python_par_reverse );

error_exit:;

    Py_XDECREF( _python_par_lang );
    Py_XDECREF( _python_par_reverse );

    return NULL;
}

static PyObject *dparse_function_3_get_format_modules_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_get_format_modules_of_module_django__utils__formats( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_format_modules_of_module_django__utils__formats( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_get_format_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject *_python_par_format_type, PyObject *_python_par_lang, PyObject *_python_par_use_l10n )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_format_type( _python_str_plain_format_type, _python_par_format_type );
    PyObjectLocalParameterVariableNoDel _python_var_lang( _python_str_plain_lang, _python_par_lang );
    PyObjectLocalParameterVariableNoDel _python_var_use_l10n( _python_str_plain_use_l10n, _python_par_use_l10n );
    PyObjectLocalVariable _python_var_cache_key( _python_str_plain_cache_key );
    PyObjectLocalVariable _python_var_cached( _python_str_plain_cached );
    PyObjectLocalVariable _python_var_module( _python_str_plain_module );
    PyObjectLocalVariable _python_var_val( _python_str_plain_val );
    PyObjectLocalVariable _python_var_iso_input( _python_str_plain_iso_input );

    // Actual function code.
    static PyFrameObject *frame_function_4_get_format_of_module_django__utils__formats = NULL;

    if ( isFrameUnusable( frame_function_4_get_format_of_module_django__utils__formats ) )
    {
        if ( frame_function_4_get_format_of_module_django__utils__formats )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_get_format_of_module_django__utils__formats" );
#endif
            Py_DECREF( frame_function_4_get_format_of_module_django__utils__formats );
        }

        frame_function_4_get_format_of_module_django__utils__formats = MAKE_FRAME( _codeobj_4a746a7e26d3854dc9135d54b9d511f6, _module_django__utils__formats );
    }

    FrameGuard frame_guard( frame_function_4_get_format_of_module_django__utils__formats );
    try
    {
        assert( Py_REFCNT( frame_function_4_get_format_of_module_django__utils__formats ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 81 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_format_type.assign1( ( call1.assign( _mvar_django__utils__formats_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_format_type.asObject() ) ) );
        }
        frame_guard.setLineNumber( 82 );
        if ( ( CHECK_IF_TRUE( _python_var_use_l10n.asObject() ) || ( ( _python_var_use_l10n.asObject() == Py_None ) && CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_settings.asObject0(), _python_str_plain_USE_L10N ) ).asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 83 );
            if ( ( _python_var_lang.asObject() == Py_None ) )
            {
                frame_guard.setLineNumber( 84 );
                _python_var_lang.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__formats_get_language.asObject0() ) );
            }
            frame_guard.setLineNumber( 85 );
            {
                PyObjectTempKeeper0 make_tuple3;
                _python_var_cache_key.assign1( ( make_tuple3.assign( _python_var_format_type.asObject() ), MAKE_TUPLE2( make_tuple3.asObject0(), _python_var_lang.asObject() ) ) );
            }
            frame_guard.setLineNumber( 86 );
            try
            {
                frame_guard.setLineNumber( 87 );
                {
                    PyObjectTempKeeper0 subscr17;
                    _python_var_cached.assign1( ( subscr17.assign( _mvar_django__utils__formats__format_cache.asObject0() ), LOOKUP_SUBSCRIPT( subscr17.asObject0(), _python_var_cache_key.asObject() ) ) );
                }
                frame_guard.setLineNumber( 88 );
                if ( ( _python_var_cached.asObject() != Py_None ) )
                {
                    frame_guard.setLineNumber( 89 );
                    return _python_var_cached.asObject1();
                }
                else
                {
                    frame_guard.setLineNumber( 92 );
                    {
                        PyObjectTempKeeper0 getattr19;
                        return ( getattr19.assign( _mvar_django__utils__formats_settings.asObject0() ), BUILTIN_GETATTR( getattr19.asObject0(), _python_var_format_type.asObject(), NULL ) );
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

                if ( _exception.matches( PyExc_KeyError ) )
                {
                    frame_guard.detachFrame();
                    {
                        frame_guard.setLineNumber( 94 );
                        PyObject *_tmp_python_tmp_for_iterator;
                        {
                            PyObjectTempKeeper0 call5;
                            _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call5.assign( _mvar_django__utils__formats_get_format_modules.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_lang.asObject() ) ) ).asObject() );
                        }
                        PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 94 );
                                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_1 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                                _python_var_module.assign0( _python_tmp_iter_value.asObject() );
                            }
                            frame_guard.setLineNumber( 95 );
                            try
                            {
                                frame_guard.setLineNumber( 96 );
                                {
                                    PyObjectTempKeeper0 getattr7;
                                    _python_var_val.assign1( ( getattr7.assign( _python_var_module.asObject() ), BUILTIN_GETATTR( getattr7.asObject0(), _python_var_format_type.asObject(), NULL ) ) );
                                }
                                {
                                    frame_guard.setLineNumber( 97 );
                                    PyObject *_tmp_python_tmp_for_iterator;
                                    {
                                        PyObjectTempKeeper1 call10;
                                        _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call10.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_ISO_INPUT_FORMATS.asObject0(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_format_type.asObject(), _python_tuple_empty ) ) ).asObject() );
                                    }
                                    PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                                    while( true )
                                    {
                                        {
                                            frame_guard.setLineNumber( 97 );
                                            PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                            if ( _tmp_unpack_2 == NULL )
                                            {
                                                break;
                                            }
                                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                            _python_var_iso_input.assign0( _python_tmp_iter_value.asObject() );
                                        }
                                        frame_guard.setLineNumber( 98 );
                                        {
                                            PyObjectTempKeeper0 cmp15;
                                            if ( ( cmp15.assign( _python_var_iso_input.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp15.asObject0(), _python_var_val.asObject() ) ) )
                                        {
                                            frame_guard.setLineNumber( 99 );
                                            if ( BUILTIN_ISINSTANCE_BOOL( _python_var_val.asObject(), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) )
                                            {
                                                frame_guard.setLineNumber( 100 );
                                                _python_var_val.assign1( TO_LIST( _python_var_val.asObject() ) );
                                            }
                                            frame_guard.setLineNumber( 101 );
                                            {
                                                PyObjectTempKeeper1 call13;
                                                DECREASE_REFCOUNT( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_val.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_var_iso_input.asObject() ) ) );
                                            }
                                        }
                                        }

                                       CONSIDER_THREADING();
                                    }
                                }
                                frame_guard.setLineNumber( 102 );
                                {
                                        PyObject *tmp_identifier = _python_var_val.asObject();
                                        PyObject *tmp_subscribed = _mvar_django__utils__formats__format_cache.asObject0();
                                        SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_cache_key.asObject() );
                                }
                                frame_guard.setLineNumber( 103 );
                                return _python_var_val.asObject1();
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

                           CONSIDER_THREADING();
                        }
                    }
                    frame_guard.setLineNumber( 106 );
                    {
                            PyObject *tmp_subscribed = _mvar_django__utils__formats__format_cache.asObject0();
                            SET_SUBSCRIPT( Py_None, tmp_subscribed, _python_var_cache_key.asObject() );
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
        frame_guard.setLineNumber( 107 );
        {
            PyObjectTempKeeper0 getattr22;
            return ( getattr22.assign( _mvar_django__utils__formats_settings.asObject0() ), BUILTIN_GETATTR( getattr22.asObject0(), _python_var_format_type.asObject(), NULL ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_use_l10n.updateLocalsDict( _python_var_lang.updateLocalsDict( _python_var_format_type.updateLocalsDict( _python_var_iso_input.updateLocalsDict( _python_var_val.updateLocalsDict( _python_var_module.updateLocalsDict( _python_var_cached.updateLocalsDict( _python_var_cache_key.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_get_format_of_module_django__utils__formats )
        {
           Py_DECREF( frame_function_4_get_format_of_module_django__utils__formats );
           frame_function_4_get_format_of_module_django__utils__formats = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_get_format_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_format_type = NULL;
    PyObject *_python_par_lang = NULL;
    PyObject *_python_par_use_l10n = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_format() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_format_type == key )
            {
                if (unlikely( _python_par_format_type ))
                {
                    PyErr_Format( PyExc_TypeError, "get_format() got multiple values for keyword argument 'format_type'" );
                    goto error_exit;
                }

                _python_par_format_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_lang == key )
            {
                if (unlikely( _python_par_lang ))
                {
                    PyErr_Format( PyExc_TypeError, "get_format() got multiple values for keyword argument 'lang'" );
                    goto error_exit;
                }

                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_use_l10n == key )
            {
                if (unlikely( _python_par_use_l10n ))
                {
                    PyErr_Format( PyExc_TypeError, "get_format() got multiple values for keyword argument 'use_l10n'" );
                    goto error_exit;
                }

                _python_par_use_l10n = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_format_type, key ) )
            {
                if (unlikely( _python_par_format_type ))
                {
                    PyErr_Format( PyExc_TypeError, "get_format() got multiple values for keyword argument 'format_type'" );
                    goto error_exit;
                }

                _python_par_format_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_lang, key ) )
            {
                if (unlikely( _python_par_lang ))
                {
                    PyErr_Format( PyExc_TypeError, "get_format() got multiple values for keyword argument 'lang'" );
                    goto error_exit;
                }

                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_use_l10n, key ) )
            {
                if (unlikely( _python_par_use_l10n ))
                {
                    PyErr_Format( PyExc_TypeError, "get_format() got multiple values for keyword argument 'use_l10n'" );
                    goto error_exit;
                }

                _python_par_use_l10n = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_format() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_format() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_format() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_format() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_format() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_format() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_format() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_format() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_format() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_format() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_format() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_format() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_format() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_format_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_format() got multiple values for keyword argument 'format_type'" );
             goto error_exit;
         }

        _python_par_format_type = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_lang != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_format() got multiple values for keyword argument 'lang'" );
             goto error_exit;
         }

        _python_par_lang = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_use_l10n != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_format() got multiple values for keyword argument 'use_l10n'" );
             goto error_exit;
         }

        _python_par_use_l10n = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_lang == NULL )
    {
        _python_par_lang = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_lang );
    }
    if ( _python_par_use_l10n == NULL )
    {
        _python_par_use_l10n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_use_l10n );
    }


    return impl_function_4_get_format_of_module_django__utils__formats( self, _python_par_format_type, _python_par_lang, _python_par_use_l10n );

error_exit:;

    Py_XDECREF( _python_par_format_type );
    Py_XDECREF( _python_par_lang );
    Py_XDECREF( _python_par_use_l10n );

    return NULL;
}

static PyObject *dparse_function_4_get_format_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_4_get_format_of_module_django__utils__formats( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_get_format_of_module_django__utils__formats( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_date_format_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_format, PyObject *_python_par_use_l10n )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_format( _python_str_plain_format, _python_par_format );
    PyObjectLocalParameterVariableNoDel _python_var_use_l10n( _python_str_plain_use_l10n, _python_par_use_l10n );

    // Actual function code.
    static PyFrameObject *frame_function_5_date_format_of_module_django__utils__formats = NULL;

    if ( isFrameUnusable( frame_function_5_date_format_of_module_django__utils__formats ) )
    {
        if ( frame_function_5_date_format_of_module_django__utils__formats )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_date_format_of_module_django__utils__formats" );
#endif
            Py_DECREF( frame_function_5_date_format_of_module_django__utils__formats );
        }

        frame_function_5_date_format_of_module_django__utils__formats = MAKE_FRAME( _codeobj_2fb1cc9bc38dcdd75d007acd0ea7bcc5, _module_django__utils__formats );
    }

    FrameGuard frame_guard( frame_function_5_date_format_of_module_django__utils__formats );
    try
    {
        assert( Py_REFCNT( frame_function_5_date_format_of_module_django__utils__formats ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 119 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper0 keeper_0;
            return ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_dateformat.asObject0(), _python_str_plain_format ) ), call5.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__utils__formats_get_format.asObject0() ), call2.assign( MAKE_TUPLE1( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_format.asObject() ) ) ? keeper_0.asObject0() : _python_str_plain_DATE_FORMAT ) ) ), CALL_FUNCTION( call1.asObject0(), call2.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_use_l10n.asObject(), _python_str_plain_use_l10n ) ).asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_use_l10n.updateLocalsDict( _python_var_format.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_date_format_of_module_django__utils__formats )
        {
           Py_DECREF( frame_function_5_date_format_of_module_django__utils__formats );
           frame_function_5_date_format_of_module_django__utils__formats = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_date_format_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_format = NULL;
    PyObject *_python_par_use_l10n = NULL;
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
                PyErr_Format( PyExc_TypeError, "date_format() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "date_format() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_format == key )
            {
                if (unlikely( _python_par_format ))
                {
                    PyErr_Format( PyExc_TypeError, "date_format() got multiple values for keyword argument 'format'" );
                    goto error_exit;
                }

                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_use_l10n == key )
            {
                if (unlikely( _python_par_use_l10n ))
                {
                    PyErr_Format( PyExc_TypeError, "date_format() got multiple values for keyword argument 'use_l10n'" );
                    goto error_exit;
                }

                _python_par_use_l10n = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "date_format() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_format, key ) )
            {
                if (unlikely( _python_par_format ))
                {
                    PyErr_Format( PyExc_TypeError, "date_format() got multiple values for keyword argument 'format'" );
                    goto error_exit;
                }

                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_use_l10n, key ) )
            {
                if (unlikely( _python_par_use_l10n ))
                {
                    PyErr_Format( PyExc_TypeError, "date_format() got multiple values for keyword argument 'use_l10n'" );
                    goto error_exit;
                }

                _python_par_use_l10n = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "date_format() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "date_format() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "date_format() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "date_format() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "date_format() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "date_format() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "date_format() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "date_format() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "date_format() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "date_format() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "date_format() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "date_format() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "date_format() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "date_format() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_format != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "date_format() got multiple values for keyword argument 'format'" );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_use_l10n != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "date_format() got multiple values for keyword argument 'use_l10n'" );
             goto error_exit;
         }

        _python_par_use_l10n = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_format == NULL )
    {
        _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_format );
    }
    if ( _python_par_use_l10n == NULL )
    {
        _python_par_use_l10n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_use_l10n );
    }


    return impl_function_5_date_format_of_module_django__utils__formats( self, _python_par_value, _python_par_format, _python_par_use_l10n );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_format );
    Py_XDECREF( _python_par_use_l10n );

    return NULL;
}

static PyObject *dparse_function_5_date_format_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_5_date_format_of_module_django__utils__formats( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_date_format_of_module_django__utils__formats( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_time_format_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_format, PyObject *_python_par_use_l10n )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_format( _python_str_plain_format, _python_par_format );
    PyObjectLocalParameterVariableNoDel _python_var_use_l10n( _python_str_plain_use_l10n, _python_par_use_l10n );

    // Actual function code.
    static PyFrameObject *frame_function_6_time_format_of_module_django__utils__formats = NULL;

    if ( isFrameUnusable( frame_function_6_time_format_of_module_django__utils__formats ) )
    {
        if ( frame_function_6_time_format_of_module_django__utils__formats )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_time_format_of_module_django__utils__formats" );
#endif
            Py_DECREF( frame_function_6_time_format_of_module_django__utils__formats );
        }

        frame_function_6_time_format_of_module_django__utils__formats = MAKE_FRAME( _codeobj_998fd93f1c5d69850e7c79d1902d502b, _module_django__utils__formats );
    }

    FrameGuard frame_guard( frame_function_6_time_format_of_module_django__utils__formats );
    try
    {
        assert( Py_REFCNT( frame_function_6_time_format_of_module_django__utils__formats ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 128 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper0 keeper_0;
            return ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_dateformat.asObject0(), _python_str_plain_time_format ) ), call5.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__utils__formats_get_format.asObject0() ), call2.assign( MAKE_TUPLE1( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_format.asObject() ) ) ? keeper_0.asObject0() : _python_str_plain_TIME_FORMAT ) ) ), CALL_FUNCTION( call1.asObject0(), call2.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_use_l10n.asObject(), _python_str_plain_use_l10n ) ).asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_use_l10n.updateLocalsDict( _python_var_format.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_time_format_of_module_django__utils__formats )
        {
           Py_DECREF( frame_function_6_time_format_of_module_django__utils__formats );
           frame_function_6_time_format_of_module_django__utils__formats = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_time_format_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_format = NULL;
    PyObject *_python_par_use_l10n = NULL;
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
                PyErr_Format( PyExc_TypeError, "time_format() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_format == key )
            {
                if (unlikely( _python_par_format ))
                {
                    PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'format'" );
                    goto error_exit;
                }

                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_use_l10n == key )
            {
                if (unlikely( _python_par_use_l10n ))
                {
                    PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'use_l10n'" );
                    goto error_exit;
                }

                _python_par_use_l10n = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_format, key ) )
            {
                if (unlikely( _python_par_format ))
                {
                    PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'format'" );
                    goto error_exit;
                }

                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_use_l10n, key ) )
            {
                if (unlikely( _python_par_use_l10n ))
                {
                    PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'use_l10n'" );
                    goto error_exit;
                }

                _python_par_use_l10n = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "time_format() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "time_format() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "time_format() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "time_format() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "time_format() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "time_format() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "time_format() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "time_format() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "time_format() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "time_format() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "time_format() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "time_format() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "time_format() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_format != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'format'" );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_use_l10n != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'use_l10n'" );
             goto error_exit;
         }

        _python_par_use_l10n = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_format == NULL )
    {
        _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_format );
    }
    if ( _python_par_use_l10n == NULL )
    {
        _python_par_use_l10n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_use_l10n );
    }


    return impl_function_6_time_format_of_module_django__utils__formats( self, _python_par_value, _python_par_format, _python_par_use_l10n );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_format );
    Py_XDECREF( _python_par_use_l10n );

    return NULL;
}

static PyObject *dparse_function_6_time_format_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_6_time_format_of_module_django__utils__formats( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_time_format_of_module_django__utils__formats( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_number_format_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_decimal_pos, PyObject *_python_par_use_l10n, PyObject *_python_par_force_grouping )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_decimal_pos( _python_str_plain_decimal_pos, _python_par_decimal_pos );
    PyObjectLocalParameterVariableNoDel _python_var_use_l10n( _python_str_plain_use_l10n, _python_par_use_l10n );
    PyObjectLocalParameterVariableNoDel _python_var_force_grouping( _python_str_plain_force_grouping, _python_par_force_grouping );
    PyObjectLocalVariable _python_var_lang( _python_str_plain_lang );

    // Actual function code.
    static PyFrameObject *frame_function_7_number_format_of_module_django__utils__formats = NULL;

    if ( isFrameUnusable( frame_function_7_number_format_of_module_django__utils__formats ) )
    {
        if ( frame_function_7_number_format_of_module_django__utils__formats )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_number_format_of_module_django__utils__formats" );
#endif
            Py_DECREF( frame_function_7_number_format_of_module_django__utils__formats );
        }

        frame_function_7_number_format_of_module_django__utils__formats = MAKE_FRAME( _codeobj_9d7122527d39435895716cf670ae3069, _module_django__utils__formats );
    }

    FrameGuard frame_guard( frame_function_7_number_format_of_module_django__utils__formats );
    try
    {
        assert( Py_REFCNT( frame_function_7_number_format_of_module_django__utils__formats ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 137 );
        if ( ( CHECK_IF_TRUE( _python_var_use_l10n.asObject() ) || ( ( _python_var_use_l10n.asObject() == Py_None ) && CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_settings.asObject0(), _python_str_plain_USE_L10N ) ).asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 138 );
            _python_var_lang.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__formats_get_language.asObject0() ) );
        }
        else
        {
            _python_var_lang.assign0( Py_None );
        }
        frame_guard.setLineNumber( 141 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call15;
            PyObjectTempKeeper1 call16;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper0 make_tuple10;
            PyObjectTempKeeper1 make_tuple11;
            PyObjectTempKeeper0 make_tuple12;
            PyObjectTempKeeper1 make_tuple13;
            return ( call15.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_numberformat.asObject0(), _python_str_plain_format ) ), call16.assign( ( make_tuple10.assign( _python_var_value.asObject() ), make_tuple11.assign( ( call1.assign( _mvar_django__utils__formats_get_format.asObject0() ), call2.assign( MAKE_TUPLE2( _python_str_plain_DECIMAL_SEPARATOR, _python_var_lang.asObject() ) ), CALL_FUNCTION( call1.asObject0(), call2.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_use_l10n.asObject(), _python_str_plain_use_l10n ) ).asObject() ) ) ), make_tuple12.assign( _python_var_decimal_pos.asObject() ), make_tuple13.assign( ( call4.assign( _mvar_django__utils__formats_get_format.asObject0() ), call5.assign( MAKE_TUPLE2( _python_str_plain_NUMBER_GROUPING, _python_var_lang.asObject() ) ), CALL_FUNCTION( call4.asObject0(), call5.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_use_l10n.asObject(), _python_str_plain_use_l10n ) ).asObject() ) ) ), MAKE_TUPLE5( make_tuple10.asObject0(), make_tuple11.asObject0(), make_tuple12.asObject0(), make_tuple13.asObject0(), PyObjectTemporary( ( call7.assign( _mvar_django__utils__formats_get_format.asObject0() ), call8.assign( MAKE_TUPLE2( _python_str_plain_THOUSAND_SEPARATOR, _python_var_lang.asObject() ) ), CALL_FUNCTION( call7.asObject0(), call8.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_use_l10n.asObject(), _python_str_plain_use_l10n ) ).asObject() ) ) ).asObject() ) ) ), CALL_FUNCTION( call15.asObject0(), call16.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_force_grouping.asObject(), _python_str_plain_force_grouping ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_force_grouping.updateLocalsDict( _python_var_use_l10n.updateLocalsDict( _python_var_decimal_pos.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_lang.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_number_format_of_module_django__utils__formats )
        {
           Py_DECREF( frame_function_7_number_format_of_module_django__utils__formats );
           frame_function_7_number_format_of_module_django__utils__formats = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_number_format_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_decimal_pos = NULL;
    PyObject *_python_par_use_l10n = NULL;
    PyObject *_python_par_force_grouping = NULL;
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
                PyErr_Format( PyExc_TypeError, "number_format() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "number_format() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_decimal_pos == key )
            {
                if (unlikely( _python_par_decimal_pos ))
                {
                    PyErr_Format( PyExc_TypeError, "number_format() got multiple values for keyword argument 'decimal_pos'" );
                    goto error_exit;
                }

                _python_par_decimal_pos = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_use_l10n == key )
            {
                if (unlikely( _python_par_use_l10n ))
                {
                    PyErr_Format( PyExc_TypeError, "number_format() got multiple values for keyword argument 'use_l10n'" );
                    goto error_exit;
                }

                _python_par_use_l10n = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_force_grouping == key )
            {
                if (unlikely( _python_par_force_grouping ))
                {
                    PyErr_Format( PyExc_TypeError, "number_format() got multiple values for keyword argument 'force_grouping'" );
                    goto error_exit;
                }

                _python_par_force_grouping = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "number_format() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_decimal_pos, key ) )
            {
                if (unlikely( _python_par_decimal_pos ))
                {
                    PyErr_Format( PyExc_TypeError, "number_format() got multiple values for keyword argument 'decimal_pos'" );
                    goto error_exit;
                }

                _python_par_decimal_pos = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_use_l10n, key ) )
            {
                if (unlikely( _python_par_use_l10n ))
                {
                    PyErr_Format( PyExc_TypeError, "number_format() got multiple values for keyword argument 'use_l10n'" );
                    goto error_exit;
                }

                _python_par_use_l10n = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_force_grouping, key ) )
            {
                if (unlikely( _python_par_force_grouping ))
                {
                    PyErr_Format( PyExc_TypeError, "number_format() got multiple values for keyword argument 'force_grouping'" );
                    goto error_exit;
                }

                _python_par_force_grouping = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "number_format() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "number_format() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "number_format() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "number_format() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "number_format() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "number_format() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "number_format() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "number_format() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "number_format() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "number_format() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "number_format() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "number_format() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "number_format() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "number_format() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_decimal_pos != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "number_format() got multiple values for keyword argument 'decimal_pos'" );
             goto error_exit;
         }

        _python_par_decimal_pos = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_use_l10n != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "number_format() got multiple values for keyword argument 'use_l10n'" );
             goto error_exit;
         }

        _python_par_use_l10n = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_force_grouping != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "number_format() got multiple values for keyword argument 'force_grouping'" );
             goto error_exit;
         }

        _python_par_force_grouping = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_decimal_pos == NULL )
    {
        _python_par_decimal_pos = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_decimal_pos );
    }
    if ( _python_par_use_l10n == NULL )
    {
        _python_par_use_l10n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_use_l10n );
    }
    if ( _python_par_force_grouping == NULL )
    {
        _python_par_force_grouping = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_force_grouping );
    }


    return impl_function_7_number_format_of_module_django__utils__formats( self, _python_par_value, _python_par_decimal_pos, _python_par_use_l10n, _python_par_force_grouping );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_decimal_pos );
    Py_XDECREF( _python_par_use_l10n );
    Py_XDECREF( _python_par_force_grouping );

    return NULL;
}

static PyObject *dparse_function_7_number_format_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_7_number_format_of_module_django__utils__formats( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_number_format_of_module_django__utils__formats( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_localize_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_use_l10n )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_use_l10n( _python_str_plain_use_l10n, _python_par_use_l10n );

    // Actual function code.
    static PyFrameObject *frame_function_8_localize_of_module_django__utils__formats = NULL;

    if ( isFrameUnusable( frame_function_8_localize_of_module_django__utils__formats ) )
    {
        if ( frame_function_8_localize_of_module_django__utils__formats )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_localize_of_module_django__utils__formats" );
#endif
            Py_DECREF( frame_function_8_localize_of_module_django__utils__formats );
        }

        frame_function_8_localize_of_module_django__utils__formats = MAKE_FRAME( _codeobj_ab467520f34feeb80498d994aa69e30e, _module_django__utils__formats );
    }

    FrameGuard frame_guard( frame_function_8_localize_of_module_django__utils__formats );
    try
    {
        assert( Py_REFCNT( frame_function_8_localize_of_module_django__utils__formats ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 158 );
        if ( BUILTIN_ISINSTANCE_BOOL( _python_var_value.asObject(), LOOKUP_BUILTIN( _python_str_plain_bool ) ) )
        {
            frame_guard.setLineNumber( 159 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call3;
                return ( call3.assign( _mvar_django__utils__formats_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 160 );
            {
                PyObjectTempKeeper0 isinstance25;
                PyObjectTempKeeper1 op23;
                if ( ( isinstance25.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance25.asObject0(), PyObjectTemporary( ( op23.assign( MAKE_TUPLE2( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_decimal.asObject0(), _python_str_plain_Decimal ) ).asObject(), LOOKUP_BUILTIN( _python_str_plain_float ) ) ), BINARY_OPERATION_ADD( op23.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_six.asObject0(), _python_str_plain_integer_types ) ).asObject() ) ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 161 );
                {
                    PyObjectTempKeeper0 call5;
                    PyObjectTempKeeper1 call6;
                    return ( call5.assign( _mvar_django__utils__formats_number_format.asObject0() ), call6.assign( MAKE_TUPLE1( _python_var_value.asObject() ) ), CALL_FUNCTION( call5.asObject0(), call6.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_use_l10n.asObject(), _python_str_plain_use_l10n ) ).asObject() ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 162 );
                {
                    PyObjectTempKeeper0 isinstance21;
                    if ( ( isinstance21.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance21.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_datetime.asObject0(), _python_str_plain_datetime ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 163 );
                    {
                        PyObjectTempKeeper0 call8;
                        PyObjectTempKeeper1 call9;
                        return ( call8.assign( _mvar_django__utils__formats_date_format.asObject0() ), call9.assign( MAKE_TUPLE2( _python_var_value.asObject(), _python_str_plain_DATETIME_FORMAT ) ), CALL_FUNCTION( call8.asObject0(), call9.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_use_l10n.asObject(), _python_str_plain_use_l10n ) ).asObject() ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 164 );
                    {
                        PyObjectTempKeeper0 isinstance19;
                        if ( ( isinstance19.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance19.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_datetime.asObject0(), _python_str_plain_date ) ).asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 165 );
                        {
                            PyObjectTempKeeper0 call11;
                            PyObjectTempKeeper1 call12;
                            return ( call11.assign( _mvar_django__utils__formats_date_format.asObject0() ), call12.assign( MAKE_TUPLE1( _python_var_value.asObject() ) ), CALL_FUNCTION( call11.asObject0(), call12.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_use_l10n.asObject(), _python_str_plain_use_l10n ) ).asObject() ) );
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 166 );
                        {
                            PyObjectTempKeeper0 isinstance17;
                            if ( ( isinstance17.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance17.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_datetime.asObject0(), _python_str_plain_time ) ).asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 167 );
                            {
                                PyObjectTempKeeper0 call14;
                                PyObjectTempKeeper1 call15;
                                return ( call14.assign( _mvar_django__utils__formats_time_format.asObject0() ), call15.assign( MAKE_TUPLE2( _python_var_value.asObject(), _python_str_plain_TIME_FORMAT ) ), CALL_FUNCTION( call14.asObject0(), call15.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_use_l10n.asObject(), _python_str_plain_use_l10n ) ).asObject() ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 169 );
                            return _python_var_value.asObject1();
                        }
                        }
                    }
                    }
                }
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
        frame_guard.getFrame0()->f_locals = _python_var_use_l10n.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_8_localize_of_module_django__utils__formats )
        {
           Py_DECREF( frame_function_8_localize_of_module_django__utils__formats );
           frame_function_8_localize_of_module_django__utils__formats = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_localize_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_use_l10n = NULL;
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
                PyErr_Format( PyExc_TypeError, "localize() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "localize() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_use_l10n == key )
            {
                if (unlikely( _python_par_use_l10n ))
                {
                    PyErr_Format( PyExc_TypeError, "localize() got multiple values for keyword argument 'use_l10n'" );
                    goto error_exit;
                }

                _python_par_use_l10n = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "localize() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_use_l10n, key ) )
            {
                if (unlikely( _python_par_use_l10n ))
                {
                    PyErr_Format( PyExc_TypeError, "localize() got multiple values for keyword argument 'use_l10n'" );
                    goto error_exit;
                }

                _python_par_use_l10n = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "localize() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "localize() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "localize() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "localize() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "localize() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "localize() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "localize() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "localize() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "localize() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "localize() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "localize() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "localize() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "localize() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "localize() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_use_l10n != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "localize() got multiple values for keyword argument 'use_l10n'" );
             goto error_exit;
         }

        _python_par_use_l10n = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_use_l10n == NULL )
    {
        _python_par_use_l10n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_use_l10n );
    }


    return impl_function_8_localize_of_module_django__utils__formats( self, _python_par_value, _python_par_use_l10n );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_use_l10n );

    return NULL;
}

static PyObject *dparse_function_8_localize_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8_localize_of_module_django__utils__formats( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_localize_of_module_django__utils__formats( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_localize_input_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_default )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_default( _python_str_plain_default, _python_par_default );
    PyObjectLocalVariable _python_var_format( _python_str_plain_format );

    // Actual function code.
    static PyFrameObject *frame_function_9_localize_input_of_module_django__utils__formats = NULL;

    if ( isFrameUnusable( frame_function_9_localize_input_of_module_django__utils__formats ) )
    {
        if ( frame_function_9_localize_input_of_module_django__utils__formats )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_localize_input_of_module_django__utils__formats" );
#endif
            Py_DECREF( frame_function_9_localize_input_of_module_django__utils__formats );
        }

        frame_function_9_localize_input_of_module_django__utils__formats = MAKE_FRAME( _codeobj_e6ed6bd040c5b94af9351cdd456677c7, _module_django__utils__formats );
    }

    FrameGuard frame_guard( frame_function_9_localize_input_of_module_django__utils__formats );
    try
    {
        assert( Py_REFCNT( frame_function_9_localize_input_of_module_django__utils__formats ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 176 );
        {
            PyObjectTempKeeper0 isinstance27;
            PyObjectTempKeeper1 op25;
            if ( ( isinstance27.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance27.asObject0(), PyObjectTemporary( ( op25.assign( MAKE_TUPLE2( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_decimal.asObject0(), _python_str_plain_Decimal ) ).asObject(), LOOKUP_BUILTIN( _python_str_plain_float ) ) ), BINARY_OPERATION_ADD( op25.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_six.asObject0(), _python_str_plain_integer_types ) ).asObject() ) ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 177 );
            {
                PyObjectTempKeeper0 call1;
                return ( call1.assign( _mvar_django__utils__formats_number_format.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 178 );
            {
                PyObjectTempKeeper0 isinstance23;
                if ( ( isinstance23.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance23.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_datetime.asObject0(), _python_str_plain_datetime ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 179 );
                {
                    PyObjectTempKeeper1 call3;
                    _python_var_value.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_datetime_safe.asObject0(), _python_str_plain_new_datetime ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_value.asObject() ) ) );
                }
                frame_guard.setLineNumber( 180 );
                {
                    PyObjectTempKeeper0 call5;
                    PyObjectTempKeeper0 keeper_0;
                    _python_var_format.assign1( ( call5.assign( _mvar_django__utils__formats_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_default.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__formats_get_format.asObject0(), _python_str_plain_DATETIME_INPUT_FORMATS ) ).asObject(), _python_int_0, 0 ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 181 );
                {
                    PyObjectTempKeeper1 call7;
                    return ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_strftime ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_format.asObject() ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 182 );
                {
                    PyObjectTempKeeper0 isinstance21;
                    if ( ( isinstance21.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance21.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_datetime.asObject0(), _python_str_plain_date ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 183 );
                    {
                        PyObjectTempKeeper1 call9;
                        _python_var_value.assign1( ( call9.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_datetime_safe.asObject0(), _python_str_plain_new_date ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_value.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 184 );
                    {
                        PyObjectTempKeeper0 call11;
                        PyObjectTempKeeper0 keeper_1;
                        _python_var_format.assign1( ( call11.assign( _mvar_django__utils__formats_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( ( CHECK_IF_TRUE( keeper_1.assign( _python_var_default.asObject() ) ) ? INCREASE_REFCOUNT( keeper_1.asObject0() ) : LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__formats_get_format.asObject0(), _python_str_plain_DATE_INPUT_FORMATS ) ).asObject(), _python_int_0, 0 ) ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 185 );
                    {
                        PyObjectTempKeeper1 call13;
                        return ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_strftime ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_var_format.asObject() ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 186 );
                    {
                        PyObjectTempKeeper0 isinstance19;
                        if ( ( isinstance19.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance19.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_datetime.asObject0(), _python_str_plain_time ) ).asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 187 );
                        {
                            PyObjectTempKeeper0 call15;
                            PyObjectTempKeeper0 keeper_2;
                            _python_var_format.assign1( ( call15.assign( _mvar_django__utils__formats_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), PyObjectTemporary( ( CHECK_IF_TRUE( keeper_2.assign( _python_var_default.asObject() ) ) ? INCREASE_REFCOUNT( keeper_2.asObject0() ) : LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__formats_get_format.asObject0(), _python_str_plain_TIME_INPUT_FORMATS ) ).asObject(), _python_int_0, 0 ) ) ).asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 188 );
                        {
                            PyObjectTempKeeper1 call17;
                            return ( call17.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_strftime ) ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_var_format.asObject() ) );
                        }
                    }
                    }
                }
                }
            }
            }
        }
        }
        frame_guard.setLineNumber( 189 );
        return _python_var_value.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_default.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_format.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_localize_input_of_module_django__utils__formats )
        {
           Py_DECREF( frame_function_9_localize_input_of_module_django__utils__formats );
           frame_function_9_localize_input_of_module_django__utils__formats = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_localize_input_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_default = NULL;
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
                PyErr_Format( PyExc_TypeError, "localize_input() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "localize_input() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_default == key )
            {
                if (unlikely( _python_par_default ))
                {
                    PyErr_Format( PyExc_TypeError, "localize_input() got multiple values for keyword argument 'default'" );
                    goto error_exit;
                }

                _python_par_default = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "localize_input() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_default, key ) )
            {
                if (unlikely( _python_par_default ))
                {
                    PyErr_Format( PyExc_TypeError, "localize_input() got multiple values for keyword argument 'default'" );
                    goto error_exit;
                }

                _python_par_default = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "localize_input() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "localize_input() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "localize_input() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "localize_input() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "localize_input() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "localize_input() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "localize_input() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "localize_input() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "localize_input() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "localize_input() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "localize_input() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "localize_input() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "localize_input() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "localize_input() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_default != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "localize_input() got multiple values for keyword argument 'default'" );
             goto error_exit;
         }

        _python_par_default = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_default == NULL )
    {
        _python_par_default = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_default );
    }


    return impl_function_9_localize_input_of_module_django__utils__formats( self, _python_par_value, _python_par_default );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_default );

    return NULL;
}

static PyObject *dparse_function_9_localize_input_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_9_localize_input_of_module_django__utils__formats( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_localize_input_of_module_django__utils__formats( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_sanitize_separators_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalVariable _python_var_parts( _python_str_plain_parts );
    PyObjectLocalVariable _python_var_decimal_separator( _python_str_plain_decimal_separator );
    PyObjectLocalVariable _python_var_decimals( _python_str_plain_decimals );
    PyObjectLocalVariable _python_var_thousand_sep( _python_str_plain_thousand_sep );
    PyObjectLocalVariable _python_var_replacement( _python_str_plain_replacement );

    // Actual function code.
    static PyFrameObject *frame_function_10_sanitize_separators_of_module_django__utils__formats = NULL;

    if ( isFrameUnusable( frame_function_10_sanitize_separators_of_module_django__utils__formats ) )
    {
        if ( frame_function_10_sanitize_separators_of_module_django__utils__formats )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_sanitize_separators_of_module_django__utils__formats" );
#endif
            Py_DECREF( frame_function_10_sanitize_separators_of_module_django__utils__formats );
        }

        frame_function_10_sanitize_separators_of_module_django__utils__formats = MAKE_FRAME( _codeobj_279cd649d0f49ff088f09c83e63a62fe, _module_django__utils__formats );
    }

    FrameGuard frame_guard( frame_function_10_sanitize_separators_of_module_django__utils__formats );
    try
    {
        assert( Py_REFCNT( frame_function_10_sanitize_separators_of_module_django__utils__formats ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 196 );
        {
            PyObjectTempKeeper0 isinstance20;
            if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_settings.asObject0(), _python_str_plain_USE_L10N ) ).asObject() ) && ( isinstance20.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance20.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) ) )
        {
            _python_var_parts.assign1( PyList_New( 0 ) );
            frame_guard.setLineNumber( 198 );
            _python_var_decimal_separator.assign1( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__formats_get_format.asObject0(), _python_str_plain_DECIMAL_SEPARATOR ) );
            frame_guard.setLineNumber( 199 );
            {
                PyObjectTempKeeper0 cmp6;
                if ( ( cmp6.assign( _python_var_decimal_separator.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp6.asObject0(), _python_var_value.asObject() ) ) )
            {
                {
                    frame_guard.setLineNumber( 200 );
                    PyObject *_tmp_python_tmp_source_iter;
                    {
                        PyObjectTempKeeper1 call1;
                        _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_split ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_decimal_separator.asObject(), _python_int_pos_1 ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    _python_var_value.assign0( _python_tmp_element_1.asObject() );
                    _python_var_decimals.assign0( _python_tmp_element_2.asObject() );
                }
                frame_guard.setLineNumber( 201 );
                {
                    PyObjectTempKeeper1 call4;
                    DECREASE_REFCOUNT( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_parts.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_decimals.asObject() ) ) );
                }
            }
            }
            frame_guard.setLineNumber( 202 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_settings.asObject0(), _python_str_plain_USE_THOUSAND_SEPARATOR ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 203 );
                _python_var_thousand_sep.assign1( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__formats_get_format.asObject0(), _python_str_plain_THOUSAND_SEPARATOR ) );
                {
                    frame_guard.setLineNumber( 204 );
                    PyObject *_tmp_python_tmp_for_iterator;
                    {
                        PyObjectTempKeeper1 call8;
                        PyObjectTempKeeper0 make_list11;
                        _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), PyObjectTemporary( ( make_list11.assign( _python_var_thousand_sep.asObject() ), MAKE_LIST2( make_list11.asObject(), ( call8.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_unicodedata.asObject0(), _python_str_plain_normalize ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_str_plain_NFKD, _python_var_thousand_sep.asObject() ) ) ) ) ).asObject() ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 204 );
                            PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_1 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                            _python_var_replacement.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 206 );
                        {
                            PyObjectTempKeeper1 call13;
                            _python_var_value.assign1( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_replace ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_var_replacement.asObject(), _python_str_empty ) ) );
                        }

                       CONSIDER_THREADING();
                    }
                }
            }
            frame_guard.setLineNumber( 207 );
            {
                PyObjectTempKeeper1 call16;
                DECREASE_REFCOUNT( ( call16.assign( LOOKUP_ATTRIBUTE( _python_var_parts.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), _python_var_value.asObject() ) ) );
            }
            frame_guard.setLineNumber( 208 );
            {
                PyObjectTempKeeper1 call18;
                _python_var_value.assign1( ( call18.assign( LOOKUP_ATTRIBUTE( _python_str_dot, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_reversed ), _python_var_parts.asObject() ) ).asObject() ) ) );
            }
        }
        }
        frame_guard.setLineNumber( 209 );
        return _python_var_value.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_replacement.updateLocalsDict( _python_var_thousand_sep.updateLocalsDict( _python_var_decimals.updateLocalsDict( _python_var_decimal_separator.updateLocalsDict( _python_var_parts.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_10_sanitize_separators_of_module_django__utils__formats )
        {
           Py_DECREF( frame_function_10_sanitize_separators_of_module_django__utils__formats );
           frame_function_10_sanitize_separators_of_module_django__utils__formats = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_sanitize_separators_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "sanitize_separators() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "sanitize_separators() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "sanitize_separators() got multiple values for keyword argument 'value'" );
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
                   "sanitize_separators() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "sanitize_separators() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "sanitize_separators() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "sanitize_separators() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "sanitize_separators() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "sanitize_separators() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "sanitize_separators() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "sanitize_separators() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "sanitize_separators() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "sanitize_separators() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "sanitize_separators() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "sanitize_separators() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "sanitize_separators() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "sanitize_separators() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_10_sanitize_separators_of_module_django__utils__formats( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_10_sanitize_separators_of_module_django__utils__formats( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_10_sanitize_separators_of_module_django__utils__formats( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_sanitize_separators_of_module_django__utils__formats( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_sanitize_separators_of_module_django__utils__formats(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_sanitize_separators_of_module_django__utils__formats,
        dparse_function_10_sanitize_separators_of_module_django__utils__formats,
        _python_str_plain_sanitize_separators,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_279cd649d0f49ff088f09c83e63a62fe,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__formats,
        _python_str_digest_c568231c8caf96becb21a96250dd3b7a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_reset_format_cache_of_module_django__utils__formats(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_reset_format_cache_of_module_django__utils__formats,
        dparse_function_1_reset_format_cache_of_module_django__utils__formats,
        _python_str_plain_reset_format_cache,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1435a30df5c4061a9188c112422e1e56,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__formats,
        _python_str_digest_1b2b71069ec8fcbad3dba88cb0f36026
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_iter_format_modules_of_module_django__utils__formats(  )
{
    return Nuitka_Function_New(
        fparse_function_2_iter_format_modules_of_module_django__utils__formats,
        dparse_function_2_iter_format_modules_of_module_django__utils__formats,
        _python_str_plain_iter_format_modules,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6649cb6726da760e73abcebf8e0fceec,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__formats,
        _python_str_digest_72f8aac921f816d0e4ec669ecd9e117a
    );
}



static PyObject *MAKE_FUNCTION_function_3_get_format_modules_of_module_django__utils__formats(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_format_modules_of_module_django__utils__formats,
        dparse_function_3_get_format_modules_of_module_django__utils__formats,
        _python_str_plain_get_format_modules,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0f35308a4e545fd7c7917f742c467393,
        INCREASE_REFCOUNT( _python_tuple_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__formats,
        _python_str_digest_c6d8ae4fd0db2b57be8431260fc90347
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_get_format_of_module_django__utils__formats(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_get_format_of_module_django__utils__formats,
        dparse_function_4_get_format_of_module_django__utils__formats,
        _python_str_plain_get_format,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4a746a7e26d3854dc9135d54b9d511f6,
        INCREASE_REFCOUNT( _python_tuple_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__formats,
        _python_str_digest_3624886d075cc6cef3f5d1ac4e86c1b2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_date_format_of_module_django__utils__formats(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_date_format_of_module_django__utils__formats,
        dparse_function_5_date_format_of_module_django__utils__formats,
        _python_str_plain_date_format,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2fb1cc9bc38dcdd75d007acd0ea7bcc5,
        INCREASE_REFCOUNT( _python_tuple_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__formats,
        _python_str_digest_1e8ce9a1e09b30fce7527e7ec3838af8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_time_format_of_module_django__utils__formats(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_time_format_of_module_django__utils__formats,
        dparse_function_6_time_format_of_module_django__utils__formats,
        _python_str_plain_time_format,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_998fd93f1c5d69850e7c79d1902d502b,
        INCREASE_REFCOUNT( _python_tuple_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__formats,
        _python_str_digest_d639309b4098769307a48d73d2c39414
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_number_format_of_module_django__utils__formats(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_number_format_of_module_django__utils__formats,
        dparse_function_7_number_format_of_module_django__utils__formats,
        _python_str_plain_number_format,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9d7122527d39435895716cf670ae3069,
        INCREASE_REFCOUNT( _python_tuple_none_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__formats,
        _python_str_digest_88edaf4f730bb410f88f199540a0fb56
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_localize_of_module_django__utils__formats(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_localize_of_module_django__utils__formats,
        dparse_function_8_localize_of_module_django__utils__formats,
        _python_str_plain_localize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ab467520f34feeb80498d994aa69e30e,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__formats,
        _python_str_digest_71f5bf92201aced4f020b83eddf3d56a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_localize_input_of_module_django__utils__formats(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_localize_input_of_module_django__utils__formats,
        dparse_function_9_localize_input_of_module_django__utils__formats,
        _python_str_plain_localize_input,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e6ed6bd040c5b94af9351cdd456677c7,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__formats,
        _python_str_digest_5a7b1b657e5cc7dc488357b4a0287517
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.formats",   /* m_name */
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

MOD_INIT_DECL( django__utils__formats )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__formats );
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

    // puts( "in initdjango__utils__formats" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__formats = Py_InitModule4(
        "django.utils.formats",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__formats = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__formats = (PyDictObject *)((PyModuleObject *)_module_django__utils__formats)->md_dict;

    assertObject( _module_django__utils__formats );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_9600baca1bef71c37deac7bf246177c1, _module_django__utils__formats );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__formats );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__formats != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_65999d8f8752c6c4a3d50299cb854e00 );
    PyFrameObject *frame_module_django__utils__formats = MAKE_FRAME( _codeobj_2d62b8a8d31564fb3fa4a5fd5f10c0d2, _module_django__utils__formats );

    FrameGuard frame_guard( frame_module_django__utils__formats );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__formats ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_decimal, IMPORT_MODULE( _python_str_plain_decimal, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_datetime, IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_unicodedata, IMPORT_MODULE( _python_str_plain_unicodedata, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_dateformat, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, _python_list_710ceb42766b32a56052e2285d77a7c2_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_dateformat ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_numberformat, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, _python_list_710ceb42766b32a56052e2285d77a7c2_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_numberformat ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_datetime_safe, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, _python_list_710ceb42766b32a56052e2285d77a7c2_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_datetime_safe ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_import_module, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_4fc502edf9b4c184659c220d993c01d3, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, _python_list_str_plain_import_module_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_module ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_force_str, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, _python_list_str_plain_force_str_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_str ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_lazy, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, _python_list_str_plain_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_lazy ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_mark_safe, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_33422e2c698707541621bf8ab31ea849, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, _python_list_str_plain_mark_safe_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_mark_safe ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_get_language, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, _python_list_77f2b837defa4ef6b5c69618cf46b76b_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_language ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_to_locale, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, _python_list_77f2b837defa4ef6b5c69618cf46b76b_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_to_locale ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_check_for_language, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__formats)->md_dict, ((PyModuleObject *)_module_django__utils__formats)->md_dict, _python_list_77f2b837defa4ef6b5c69618cf46b76b_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_check_for_language ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain__format_cache, PyDict_New() );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain__format_modules_cache, PyDict_New() );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_ISO_INPUT_FORMATS, PyDict_Copy( _python_dict_23043231a65f3e324392f5024a475fdb ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_reset_format_cache, MAKE_FUNCTION_function_1_reset_format_cache_of_module_django__utils__formats(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_iter_format_modules, MAKE_FUNCTION_function_2_iter_format_modules_of_module_django__utils__formats(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_get_format_modules, MAKE_FUNCTION_function_3_get_format_modules_of_module_django__utils__formats(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_get_format, MAKE_FUNCTION_function_4_get_format_of_module_django__utils__formats(  ) );
        frame_guard.setLineNumber( 109 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_get_format_lazy, ( call1.assign( _mvar_django__utils__formats_lazy.asObject0() ), call2.assign( _mvar_django__utils__formats_get_format.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__formats_six.asObject0(), _python_str_plain_text_type ) ).asObject(), LOOKUP_BUILTIN( _python_str_plain_list ), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__formats)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_date_format, MAKE_FUNCTION_function_5_date_format_of_module_django__utils__formats(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_time_format, MAKE_FUNCTION_function_6_time_format_of_module_django__utils__formats(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_number_format, MAKE_FUNCTION_function_7_number_format_of_module_django__utils__formats(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_localize, MAKE_FUNCTION_function_8_localize_of_module_django__utils__formats(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_localize_input, MAKE_FUNCTION_function_9_localize_input_of_module_django__utils__formats(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__formats, (Nuitka_StringObject *)_python_str_plain_sanitize_separators, MAKE_FUNCTION_function_10_sanitize_separators_of_module_django__utils__formats(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__formats );
}
