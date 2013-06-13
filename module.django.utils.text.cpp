// Generated code for Python source for module 'django.utils.text'
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

// The _module_django__utils__text is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__text;
PyDictObject *_moduledict_django__utils__text;

// The module level variables.
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_BytesIO( &_module_django__utils__text, &_python_str_plain_BytesIO );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_GzipFile( &_module_django__utils__text, &_python_str_plain_GzipFile );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_SimpleLazyObject( &_module_django__utils__text, &_python_str_plain_SimpleLazyObject );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_StreamingBuffer( &_module_django__utils__text, &_python_str_plain_StreamingBuffer );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_Truncator( &_module_django__utils__text, &_python_str_plain_Truncator );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text__( &_module_django__utils__text, &_python_str_plain__ );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text___metaclass__( &_module_django__utils__text, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text__entity_re( &_module_django__utils__text, &_python_str_plain__entity_re );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text__replace_entity( &_module_django__utils__text, &_python_str_plain__replace_entity );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_allow_lazy( &_module_django__utils__text, &_python_str_plain_allow_lazy );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_capfirst( &_module_django__utils__text, &_python_str_plain_capfirst );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_force_text( &_module_django__utils__text, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_get_text_list( &_module_django__utils__text, &_python_str_plain_get_text_list );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_get_valid_filename( &_module_django__utils__text, &_python_str_plain_get_valid_filename );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_html_entities( &_module_django__utils__text, &_python_str_plain_html_entities );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_javascript_quote( &_module_django__utils__text, &_python_str_plain_javascript_quote );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_mark_safe( &_module_django__utils__text, &_python_str_plain_mark_safe );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_normalize_newlines( &_module_django__utils__text, &_python_str_plain_normalize_newlines );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_pgettext( &_module_django__utils__text, &_python_str_plain_pgettext );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_phone2numeric( &_module_django__utils__text, &_python_str_plain_phone2numeric );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_re( &_module_django__utils__text, &_python_str_plain_re );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_re_tag( &_module_django__utils__text, &_python_str_plain_re_tag );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_re_words( &_module_django__utils__text, &_python_str_plain_re_words );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_recapitalize( &_module_django__utils__text, &_python_str_plain_recapitalize );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_six( &_module_django__utils__text, &_python_str_plain_six );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_slugify( &_module_django__utils__text, &_python_str_plain_slugify );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_smart_split_re( &_module_django__utils__text, &_python_str_plain_smart_split_re );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_ugettext_lazy( &_module_django__utils__text, &_python_str_plain_ugettext_lazy );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_unescape_entities( &_module_django__utils__text, &_python_str_plain_unescape_entities );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_unescape_string_literal( &_module_django__utils__text, &_python_str_plain_unescape_string_literal );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_unicodedata( &_module_django__utils__text, &_python_str_plain_unicodedata );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_ustring_re( &_module_django__utils__text, &_python_str_plain_ustring_re );
static PyObjectGlobalVariable_django__utils__text _mvar_django__utils__text_wrap( &_module_django__utils__text, &_python_str_plain_wrap );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_3_Truncator_of_module_django__utils__text(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_5_get_text_list_of_module_django__utils__text( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_i );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text( PyObject *_python_par___iterator, PyObjectSharedLocalVariable &python_closure_char2number );


NUITKA_LOCAL_MODULE PyObject *impl_class_10_StreamingBuffer_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_11_compress_sequence_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_12_javascript_quote_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_13_smart_split_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_14__replace_entity_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_15_unescape_entities_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_16_unescape_string_literal_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_17_slugify_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_Truncator_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_1__generator_of_function_2_wrap_of_module_django__utils__text( PyObjectSharedLocalVariable &python_closure_text, PyObjectSharedLocalVariable &python_closure_width );


static PyObject *MAKE_FUNCTION_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_2_wrap_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_3_chars_of_class_3_Truncator_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_4_flush_of_class_10_StreamingBuffer_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_4_get_valid_filename_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_4_words_of_class_3_Truncator_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_5_close_of_class_10_StreamingBuffer_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_5_get_text_list_of_module_django__utils__text( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_6_normalize_newlines_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_7_recapitalize_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_8_phone2numeric_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_function_9_compress_string_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text( PyObjectSharedLocalVariable &python_closure_text );


// This structure is for attachment as self of lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text.
// It is allocated at the time the function object is created.
struct _context_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_text;
};

static void _context_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text_destructor( void *context_voidptr )
{
    _context_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text_t *_python_context = (_context_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_module_django__utils__text(  );


// The module function definitions.
static PyObject *impl_lambda_1_lambda_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_module_django__utils__text ) )
    {
        if ( frame_lambda_1_lambda_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_module_django__utils__text );
        }

        frame_lambda_1_lambda_of_module_django__utils__text = MAKE_FRAME( _codeobj_ac10f3a7105ff7f349fb5ba7ace73327, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 22 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper0 keeper_0;
            PyObjectTempKeeper1 op5;
            return ( CHECK_IF_TRUE( keeper_0.assign( _python_var_x.asObject() ) ) ? ( op5.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( ( call1.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_x.asObject() ) ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_upper ) ).asObject() ) ), BINARY_OPERATION_ADD( op5.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( PyObjectTemporary( ( call3.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_x.asObject() ) ) ).asObject(), 1, PY_SSIZE_T_MAX ) ).asObject() ) ) : INCREASE_REFCOUNT( keeper_0.asObject0() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_x.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_module_django__utils__text )
        {
           Py_DECREF( frame_lambda_1_lambda_of_module_django__utils__text );
           frame_lambda_1_lambda_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_lambda_1_lambda_of_module_django__utils__text( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_1_lambda_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_wrap_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_text, PyObject *_python_par_width )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_text( _python_str_plain_text, _python_par_text );
    PyObjectSharedLocalVariable _python_var_width( _python_str_plain_width, _python_par_width );
    PyObjectLocalVariable _python_var__generator( _python_str_plain__generator );

    // Actual function code.
    static PyFrameObject *frame_function_2_wrap_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_2_wrap_of_module_django__utils__text ) )
    {
        if ( frame_function_2_wrap_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_wrap_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_2_wrap_of_module_django__utils__text );
        }

        frame_function_2_wrap_of_module_django__utils__text = MAKE_FRAME( _codeobj_68b4b2efcb3a413b5fdd98d82080b4e8, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_2_wrap_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_2_wrap_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 35 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_text.assign1( ( call1.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_text.asObject() ) ) );
        }
        _python_var__generator.assign1( MAKE_FUNCTION_function_1__generator_of_function_2_wrap_of_module_django__utils__text( _python_var_text, _python_var_width ) );
        frame_guard.setLineNumber( 55 );
        {
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _python_var__generator.asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_width.updateLocalsDict( _python_var_text.updateLocalsDict( _python_var__generator.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_wrap_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_2_wrap_of_module_django__utils__text );
           frame_function_2_wrap_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_wrap_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_text = NULL;
    PyObject *_python_par_width = NULL;
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
                PyErr_Format( PyExc_TypeError, "wrap() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_text == key )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "wrap() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_width == key )
            {
                if (unlikely( _python_par_width ))
                {
                    PyErr_Format( PyExc_TypeError, "wrap() got multiple values for keyword argument 'width'" );
                    goto error_exit;
                }

                _python_par_width = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_text, key ) )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "wrap() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_width, key ) )
            {
                if (unlikely( _python_par_width ))
                {
                    PyErr_Format( PyExc_TypeError, "wrap() got multiple values for keyword argument 'width'" );
                    goto error_exit;
                }

                _python_par_width = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "wrap() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "wrap() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "wrap() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "wrap() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "wrap() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "wrap() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "wrap() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "wrap() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "wrap() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "wrap() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "wrap() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "wrap() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "wrap() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_text != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "wrap() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_width != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "wrap() got multiple values for keyword argument 'width'" );
             goto error_exit;
         }

        _python_par_width = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_wrap_of_module_django__utils__text( self, _python_par_text, _python_par_width );

error_exit:;

    Py_XDECREF( _python_par_text );
    Py_XDECREF( _python_par_width );

    return NULL;
}

static PyObject *dparse_function_2_wrap_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_wrap_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_wrap_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}





// This structure is for attachment as self of the generator function function_1__generator_of_function_2_wrap_of_module_django__utils__text and
// contains the common closure. It is allocated at the time the genexpr object is created.
struct _context_common_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t
{
    // Ref count to keep track of common context usage and release only when it's the last one
    int ref_count;

    // The generator function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_text;
    PyObjectClosureVariable python_closure_width;
};

struct _context_generator_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t
{
    _context_common_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t *common_context;

    // The generator function instance can access its parameters from creation time.
    PyObjectLocalVariable python_var_it;
    PyObjectLocalVariable python_var_word;
    PyObjectLocalVariable python_var_pos;
    PyObjectLocalVariable python_var_lines;
};

static void _context_common_function_1__generator_of_function_2_wrap_of_module_django__utils__text_destructor( void *context_voidptr )
{
    _context_common_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t *_python_context = (struct _context_common_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t *)context_voidptr;

    assert( _python_context->ref_count > 0 );
    _python_context->ref_count -= 1;


    if ( _python_context->ref_count == 0 )
    {
        delete _python_context;
    }
}

static void _context_generator_function_1__generator_of_function_2_wrap_of_module_django__utils__text_destructor( void *context_voidptr )
{
    _context_generator_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t *_python_context = (struct _context_generator_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t *)context_voidptr;

    _context_common_function_1__generator_of_function_2_wrap_of_module_django__utils__text_destructor( _python_context->common_context );

    delete _python_context;
}

static void function_1__generator_of_function_2_wrap_of_module_django__utils__text_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t *_python_context = (_context_generator_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_it.setVariableName( _python_str_plain_it );
        _python_context->python_var_word.setVariableName( _python_str_plain_word );
        _python_context->python_var_pos.setVariableName( _python_str_plain_pos );
        _python_context->python_var_lines.setVariableName( _python_str_plain_lines );

        // Actual function code.
        static PyFrameObject *frame_function_1__generator_of_function_2_wrap_of_module_django__utils__text = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_1__generator_of_function_2_wrap_of_module_django__utils__text ) )
        {
            if ( frame_function_1__generator_of_function_2_wrap_of_module_django__utils__text )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_1__generator_of_function_2_wrap_of_module_django__utils__text" );
#endif
                Py_DECREF( frame_function_1__generator_of_function_2_wrap_of_module_django__utils__text );
            }

            frame_function_1__generator_of_function_2_wrap_of_module_django__utils__text = MAKE_FRAME( _codeobj_8597682c1db876e661395b838ca89860, _module_django__utils__text );
        }

        Py_INCREF( frame_function_1__generator_of_function_2_wrap_of_module_django__utils__text );
        generator->m_frame = frame_function_1__generator_of_function_2_wrap_of_module_django__utils__text;

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

            frame_guard.setLineNumber( 37 );
            _python_context->python_var_it.assign1( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->common_context->python_closure_text.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_space ) ).asObject() ) );
            frame_guard.setLineNumber( 38 );
            _python_context->python_var_word.assign1( BUILTIN_NEXT1( _python_context->python_var_it.asObject() ) );
            frame_guard.setLineNumber( 39 );
            YIELD_VALUE( generator, _python_context->python_var_word.asObject1() );
            frame_guard.setLineNumber( 40 );
            {
                PyObjectTempKeeper1 op1;
                _python_context->python_var_pos.assign1( BINARY_OPERATION_SUB( PyObjectTemporary( ( op1.assign( BUILTIN_LEN( _python_context->python_var_word.asObject() ) ), BINARY_OPERATION_SUB( op1.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_word.asObject(), _python_str_plain_rfind ) ).asObject(), _python_unicode_chr_10 ) ).asObject() ) ) ).asObject(), _python_int_pos_1 ) );
            }
            {
                frame_guard.setLineNumber( 41 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_context->python_var_it.asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 41 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_word.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 42 );
                    if ( SEQUENCE_CONTAINS_BOOL( _python_unicode_chr_10, _python_context->python_var_word.asObject() ) )
                    {
                        frame_guard.setLineNumber( 43 );
                        _python_context->python_var_lines.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_word.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_10 ) );
                    }
                    else
                    {
                        frame_guard.setLineNumber( 45 );
                        _python_context->python_var_lines.assign1( MAKE_TUPLE1( _python_context->python_var_word.asObject() ) );
                    }
                    {
                        frame_guard.setLineNumber( 46 );
                        PyObject *_python_tmp_inplace_start = _python_context->python_var_pos.asObject();
                        PyObject *_tmp_python_tmp_inplace_end;
                        {
                            PyObjectTempKeeper0 op3;
                            _tmp_python_tmp_inplace_end = ( op3.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op3.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_context->python_var_lines.asObject(), _python_int_0, 0 ) ).asObject() ) ).asObject(), _python_int_pos_1 ) ).asObject() ) );
                        }
                        PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                        if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                        {
                            _python_context->python_var_pos.assign0( _python_tmp_inplace_end.asObject() );
                        }
                    }
                    frame_guard.setLineNumber( 47 );
                    {
                        PyObjectTempKeeper0 cmp5;
                        if ( ( cmp5.assign( _python_context->python_var_pos.asObject() ), RICH_COMPARE_BOOL_GT( cmp5.asObject0(), _python_context->common_context->python_closure_width.asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 48 );
                        YIELD_VALUE( generator, INCREASE_REFCOUNT( _python_unicode_chr_10 ) );
                        frame_guard.setLineNumber( 49 );
                        _python_context->python_var_pos.assign1( BUILTIN_LEN( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_context->python_var_lines.asObject(), _python_int_neg_1, -1 ) ).asObject() ) );
                    }
                    else
                    {
                        frame_guard.setLineNumber( 51 );
                        YIELD_VALUE( generator, INCREASE_REFCOUNT( _python_unicode_space ) );
                        frame_guard.setLineNumber( 52 );
                        if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( BUILTIN_LEN( _python_context->python_var_lines.asObject() ) ).asObject(), _python_int_pos_1 ) )
                        {
                            frame_guard.setLineNumber( 53 );
                            _python_context->python_var_pos.assign1( BUILTIN_LEN( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_context->python_var_lines.asObject(), _python_int_neg_1, -1 ) ).asObject() ) );
                        }
                    }
                    }
                    frame_guard.setLineNumber( 54 );
                    YIELD_VALUE( generator, _python_context->python_var_word.asObject1() );

                   CONSIDER_THREADING();
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

static PyObject *impl_function_1__generator_of_function_2_wrap_of_module_django__utils__text( Nuitka_FunctionObject *self )
{
    // Create context if any
    struct _context_common_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t *_python_common_context = (struct _context_common_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t *)self->m_context;
    struct _context_generator_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t *_python_context = new _context_generator_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t;

    _python_context->common_context = _python_common_context;
    _python_common_context->ref_count += 1;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_1__generator_of_function_2_wrap_of_module_django__utils__text_context,
            _python_str_plain__generator,
            _codeobj_8597682c1db876e661395b838ca89860,
            _python_context,
            _context_generator_function_1__generator_of_function_2_wrap_of_module_django__utils__text_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function _generator" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.


        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}
static PyObject *fparse_function_1__generator_of_function_2_wrap_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "_generator() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "_generator() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "_generator() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_1__generator_of_function_2_wrap_of_module_django__utils__text( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1__generator_of_function_2_wrap_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_1__generator_of_function_2_wrap_of_module_django__utils__text( self );
    }
    else
    {
        PyObject *result = fparse_function_1__generator_of_function_2_wrap_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_Truncator_of_module_django__utils__text(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_add_truncation_text( _python_str_plain_add_truncation_text );
    PyObjectLocalVariable _python_var_chars( _python_str_plain_chars );
    PyObjectLocalVariable _python_var_words( _python_str_plain_words );
    PyObjectLocalVariable _python_var__text_words( _python_str_plain__text_words );
    PyObjectLocalVariable _python_var__html_words( _python_str_plain__html_words );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_text );
    _python_var___doc__.assign0( _python_unicode_digest_2c3dfd2756f79ed3596a4d6ef86475d4 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_Truncator_of_module_django__utils__text(  ) );
    _python_var_add_truncation_text.assign1( MAKE_FUNCTION_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text(  ) );
    _python_var_chars.assign1( MAKE_FUNCTION_function_3_chars_of_class_3_Truncator_of_module_django__utils__text(  ) );
    static PyFrameObject *frame_class_3_Truncator_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_class_3_Truncator_of_module_django__utils__text ) )
    {
        if ( frame_class_3_Truncator_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_3_Truncator_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_class_3_Truncator_of_module_django__utils__text );
        }

        frame_class_3_Truncator_of_module_django__utils__text = MAKE_FRAME( _codeobj_f8cf9d762dc344c83467ef57ed45e89e, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_class_3_Truncator_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_class_3_Truncator_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 119 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_chars.assign1( ( call1.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_chars.asObject() ) ) );
        }
        _python_var_words.assign1( MAKE_FUNCTION_function_4_words_of_class_3_Truncator_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 131 );
        {
            PyObjectTempKeeper0 call3;
            _python_var_words.assign1( ( call3.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_words.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var__html_words.updateLocalsDict( _python_var__text_words.updateLocalsDict( _python_var_words.updateLocalsDict( _python_var_chars.updateLocalsDict( _python_var_add_truncation_text.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_3_Truncator_of_module_django__utils__text )
        {
           Py_DECREF( frame_class_3_Truncator_of_module_django__utils__text );
           frame_class_3_Truncator_of_module_django__utils__text = NULL;
        }

        throw;
    }
    _python_var__text_words.assign1( MAKE_FUNCTION_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text(  ) );
    _python_var__html_words.assign1( MAKE_FUNCTION_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text(  ) );
    return _python_var__html_words.updateLocalsDict( _python_var__text_words.updateLocalsDict( _python_var_words.updateLocalsDict( _python_var_chars.updateLocalsDict( _python_var_add_truncation_text.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_text )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectSharedLocalVariable _python_var_text( _python_str_plain_text, _python_par_text );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_Truncator_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_Truncator_of_module_django__utils__text ) )
    {
        if ( frame_function_1___init___of_class_3_Truncator_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_Truncator_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_Truncator_of_module_django__utils__text );
        }

        frame_function_1___init___of_class_3_Truncator_of_module_django__utils__text = MAKE_FRAME( _codeobj_c668ca9629ac833ec95aee4d3280f6d0, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_Truncator_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_Truncator_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 64 );
        {
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__utils__text_Truncator.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text( _python_var_text ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_text.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_Truncator_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_1___init___of_class_3_Truncator_of_module_django__utils__text );
           frame_function_1___init___of_class_3_Truncator_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_text = NULL;
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
            if ( found == false && _python_str_plain_text == key )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_text, key ) )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

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
         if (unlikely( _python_par_text != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_3_Truncator_of_module_django__utils__text( self, _python_par_self, _python_par_text );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_text );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_3_Truncator_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_Truncator_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self )
{
    // The context of the function.
    struct _context_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text_t *_python_context = (struct _context_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text_t *)self->m_context;

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text ) )
    {
        if ( frame_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text );
        }

        frame_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text = MAKE_FRAME( _codeobj_2812afd16d1c8d2e92ddb19e9bdf23a3, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 64 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_context->python_closure_text.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_context->python_closure_text.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text );
           frame_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "<lambda>() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "<lambda>() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "<lambda>() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text( self );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_text, PyObject *_python_par_truncate )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );
    PyObjectLocalParameterVariableNoDel _python_var_truncate( _python_str_plain_truncate, _python_par_truncate );

    // Actual function code.
    static PyFrameObject *frame_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text ) )
    {
        if ( frame_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text );
        }

        frame_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text = MAKE_FRAME( _codeobj_b7890ec35df6cefce0905dc7b8e869a4, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 67 );
        if ( ( _python_var_truncate.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 68 );
            _python_var_truncate.assign1( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__text_pgettext.asObject0(), _python_unicode_digest_268b199b3b591e24c5dbc938e5763a38, _python_unicode_digest_7747b5dcbaa59ee3eaf16132106daecf ) );
        }
        frame_guard.setLineNumber( 71 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_truncate.assign1( ( call1.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_truncate.asObject() ) ) );
        }
        frame_guard.setLineNumber( 72 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_unicode_digest_dbfd6c000ebbf10cf4e91a7cba0ab8e5, _python_var_truncate.asObject() ) )
        {
            frame_guard.setLineNumber( 73 );
            {
                PyObjectTempKeeper0 op3;
                return ( op3.assign( _python_var_truncate.asObject() ), BINARY_OPERATION_REMAINDER( op3.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_text.asObject(), _python_unicode_plain_truncated_text ) ).asObject() ) );
            }
        }
        frame_guard.setLineNumber( 76 );
        {
            PyObjectTempKeeper1 call5;
            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_text.asObject(), _python_str_plain_endswith ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_truncate.asObject() ) ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 79 );
            return _python_var_text.asObject1();
        }
        }
        frame_guard.setLineNumber( 80 );
        {
            PyObjectTempKeeper0 make_tuple7;
            return BINARY_OPERATION_REMAINDER( _python_unicode_digest_f0275d2ae1aaf69b3b06259723647d35, PyObjectTemporary( ( make_tuple7.assign( _python_var_text.asObject() ), MAKE_TUPLE2( make_tuple7.asObject0(), _python_var_truncate.asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_truncate.updateLocalsDict( _python_var_text.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text );
           frame_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_text = NULL;
    PyObject *_python_par_truncate = NULL;
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
                PyErr_Format( PyExc_TypeError, "add_truncation_text() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "add_truncation_text() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_text == key )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "add_truncation_text() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_truncate == key )
            {
                if (unlikely( _python_par_truncate ))
                {
                    PyErr_Format( PyExc_TypeError, "add_truncation_text() got multiple values for keyword argument 'truncate'" );
                    goto error_exit;
                }

                _python_par_truncate = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "add_truncation_text() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_text, key ) )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "add_truncation_text() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_truncate, key ) )
            {
                if (unlikely( _python_par_truncate ))
                {
                    PyErr_Format( PyExc_TypeError, "add_truncation_text() got multiple values for keyword argument 'truncate'" );
                    goto error_exit;
                }

                _python_par_truncate = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add_truncation_text() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "add_truncation_text() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "add_truncation_text() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "add_truncation_text() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "add_truncation_text() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "add_truncation_text() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add_truncation_text() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "add_truncation_text() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add_truncation_text() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "add_truncation_text() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "add_truncation_text() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "add_truncation_text() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "add_truncation_text() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "add_truncation_text() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_text != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add_truncation_text() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_truncate != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add_truncation_text() got multiple values for keyword argument 'truncate'" );
             goto error_exit;
         }

        _python_par_truncate = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_truncate == NULL )
    {
        _python_par_truncate = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_truncate );
    }


    return impl_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text( self, _python_par_self, _python_par_text, _python_par_truncate );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_text );
    Py_XDECREF( _python_par_truncate );

    return NULL;
}

static PyObject *dparse_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_chars_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_num, PyObject *_python_par_truncate )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_num( _python_str_plain_num, _python_par_num );
    PyObjectLocalParameterVariableNoDel _python_var_truncate( _python_str_plain_truncate, _python_par_truncate );
    PyObjectLocalVariable _python_var_length( _python_str_plain_length );
    PyObjectLocalVariable _python_var_text( _python_str_plain_text );
    PyObjectLocalVariable _python_var_truncate_len( _python_str_plain_truncate_len );
    PyObjectLocalVariable _python_var_char( _python_str_plain_char );
    PyObjectLocalVariable _python_var_s_len( _python_str_plain_s_len );
    PyObjectLocalVariable _python_var_end_index( _python_str_plain_end_index );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );

    // Actual function code.
    static PyFrameObject *frame_function_3_chars_of_class_3_Truncator_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_3_chars_of_class_3_Truncator_of_module_django__utils__text ) )
    {
        if ( frame_function_3_chars_of_class_3_Truncator_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_chars_of_class_3_Truncator_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_3_chars_of_class_3_Truncator_of_module_django__utils__text );
        }

        frame_function_3_chars_of_class_3_Truncator_of_module_django__utils__text = MAKE_FRAME( _codeobj_e6a9c834759ccb3d446b7fac6404277a, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_3_chars_of_class_3_Truncator_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_3_chars_of_class_3_Truncator_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 91 );
        _python_var_length.assign1( TO_INT( _python_var_num.asObject() ) );
        frame_guard.setLineNumber( 92 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_text.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_unicodedata.asObject0(), _python_str_plain_normalize ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_unicode_plain_NFC, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__wrapped ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 95 );
        _python_var_truncate_len.assign0( _python_var_length.asObject() );
        {
            frame_guard.setLineNumber( 96 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper1 call4;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_add_truncation_text ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_unicode_empty, _python_var_truncate.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
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
                    _python_var_char.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 97 );
                {
                    PyObjectTempKeeper1 call7;
                    if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_unicodedata.asObject0(), _python_str_plain_combining ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_char.asObject() ) ) ).asObject() ) )) )
                {
                    {
                        frame_guard.setLineNumber( 98 );
                        PyObject *_python_tmp_inplace_start = _python_var_truncate_len.asObject();
                        PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceSubtract, _python_tmp_inplace_start, _python_int_pos_1 ) );
                        if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                        {
                            _python_var_truncate_len.assign0( _python_tmp_inplace_end.asObject() );
                        }
                    }
                    frame_guard.setLineNumber( 99 );
                    if ( RICH_COMPARE_BOOL_EQ( _python_var_truncate_len.asObject(), _python_int_0 ) )
                    {
                        frame_guard.setLineNumber( 100 );
                        break;
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        _python_var_s_len.assign0( _python_int_0 );
        _python_var_end_index.assign0( Py_None );
        {
            frame_guard.setLineNumber( 104 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), _python_var_text.asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 104 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    {
                        frame_guard.setLineNumber( 104 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_i.assign0( _python_tmp_element_1.asObject() );
                        _python_var_char.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 105 );
                {
                    PyObjectTempKeeper1 call9;
                    if ( CHECK_IF_TRUE( PyObjectTemporary( ( call9.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_unicodedata.asObject0(), _python_str_plain_combining ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_char.asObject() ) ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 108 );
                    CONSIDER_THREADING(); continue;
                }
                }
                {
                    frame_guard.setLineNumber( 109 );
                    PyObject *_python_tmp_inplace_start = _python_var_s_len.asObject();
                    PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_int_pos_1 ) );
                    if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                    {
                        _python_var_s_len.assign0( _python_tmp_inplace_end.asObject() );
                    }
                }
                frame_guard.setLineNumber( 110 );
                {
                    PyObjectTempKeeper0 cmp11;
                    if ( ( ( _python_var_end_index.asObject() == Py_None ) && ( cmp11.assign( _python_var_s_len.asObject() ), RICH_COMPARE_BOOL_GT( cmp11.asObject0(), _python_var_truncate_len.asObject() ) ) ) )
                {
                    frame_guard.setLineNumber( 111 );
                    _python_var_end_index.assign0( _python_var_i.asObject() );
                }
                }
                frame_guard.setLineNumber( 112 );
                {
                    PyObjectTempKeeper0 cmp19;
                    if ( ( cmp19.assign( _python_var_s_len.asObject() ), RICH_COMPARE_BOOL_GT( cmp19.asObject0(), _python_var_length.asObject() ) ) )
                {
                    frame_guard.setLineNumber( 114 );
                    {
                        PyObjectTempKeeper1 call16;
                        PyObjectTempKeeper1 call17;
                        PyObjectTempKeeper0 keeper_1;
                        PyObjectTempKeeper0 slice13;
                        return ( call16.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_add_truncation_text ) ), call17.assign( ( slice13.assign( _python_var_text.asObject() ), LOOKUP_SLICE( slice13.asObject0(), Py_None, ( CHECK_IF_TRUE( keeper_1.assign( _python_var_end_index.asObject() ) ) ? keeper_1.asObject0() : _python_int_0 ) ) ) ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), call17.asObject0(), _python_var_truncate.asObject() ) );
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 118 );
        return _python_var_text.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_truncate.updateLocalsDict( _python_var_num.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_end_index.updateLocalsDict( _python_var_s_len.updateLocalsDict( _python_var_char.updateLocalsDict( _python_var_truncate_len.updateLocalsDict( _python_var_text.updateLocalsDict( _python_var_length.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_chars_of_class_3_Truncator_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_3_chars_of_class_3_Truncator_of_module_django__utils__text );
           frame_function_3_chars_of_class_3_Truncator_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_chars_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_num = NULL;
    PyObject *_python_par_truncate = NULL;
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
                PyErr_Format( PyExc_TypeError, "chars() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "chars() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_num == key )
            {
                if (unlikely( _python_par_num ))
                {
                    PyErr_Format( PyExc_TypeError, "chars() got multiple values for keyword argument 'num'" );
                    goto error_exit;
                }

                _python_par_num = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_truncate == key )
            {
                if (unlikely( _python_par_truncate ))
                {
                    PyErr_Format( PyExc_TypeError, "chars() got multiple values for keyword argument 'truncate'" );
                    goto error_exit;
                }

                _python_par_truncate = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "chars() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_num, key ) )
            {
                if (unlikely( _python_par_num ))
                {
                    PyErr_Format( PyExc_TypeError, "chars() got multiple values for keyword argument 'num'" );
                    goto error_exit;
                }

                _python_par_num = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_truncate, key ) )
            {
                if (unlikely( _python_par_truncate ))
                {
                    PyErr_Format( PyExc_TypeError, "chars() got multiple values for keyword argument 'truncate'" );
                    goto error_exit;
                }

                _python_par_truncate = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "chars() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "chars() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "chars() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "chars() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "chars() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "chars() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "chars() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "chars() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "chars() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "chars() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "chars() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "chars() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "chars() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "chars() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_num != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "chars() got multiple values for keyword argument 'num'" );
             goto error_exit;
         }

        _python_par_num = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_truncate != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "chars() got multiple values for keyword argument 'truncate'" );
             goto error_exit;
         }

        _python_par_truncate = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_truncate == NULL )
    {
        _python_par_truncate = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_truncate );
    }


    return impl_function_3_chars_of_class_3_Truncator_of_module_django__utils__text( self, _python_par_self, _python_par_num, _python_par_truncate );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_num );
    Py_XDECREF( _python_par_truncate );

    return NULL;
}

static PyObject *dparse_function_3_chars_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_chars_of_class_3_Truncator_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_chars_of_class_3_Truncator_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_words_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_num, PyObject *_python_par_truncate, PyObject *_python_par_html )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_num( _python_str_plain_num, _python_par_num );
    PyObjectLocalParameterVariableNoDel _python_var_truncate( _python_str_plain_truncate, _python_par_truncate );
    PyObjectLocalParameterVariableNoDel _python_var_html( _python_str_plain_html, _python_par_html );
    PyObjectLocalVariable _python_var_length( _python_str_plain_length );

    // Actual function code.
    static PyFrameObject *frame_function_4_words_of_class_3_Truncator_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_4_words_of_class_3_Truncator_of_module_django__utils__text ) )
    {
        if ( frame_function_4_words_of_class_3_Truncator_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_words_of_class_3_Truncator_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_4_words_of_class_3_Truncator_of_module_django__utils__text );
        }

        frame_function_4_words_of_class_3_Truncator_of_module_django__utils__text = MAKE_FRAME( _codeobj_0c21781147343cbe4ce01402828df162, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_4_words_of_class_3_Truncator_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_4_words_of_class_3_Truncator_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 127 );
        _python_var_length.assign1( TO_INT( _python_var_num.asObject() ) );
        frame_guard.setLineNumber( 128 );
        if ( CHECK_IF_TRUE( _python_var_html.asObject() ) )
        {
            frame_guard.setLineNumber( 129 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call2;
                return ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__html_words ) ), call2.assign( _python_var_length.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_truncate.asObject() ) );
            }
        }
        frame_guard.setLineNumber( 130 );
        {
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper0 call5;
            return ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__text_words ) ), call5.assign( _python_var_length.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), _python_var_truncate.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_html.updateLocalsDict( _python_var_truncate.updateLocalsDict( _python_var_num.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_length.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_words_of_class_3_Truncator_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_4_words_of_class_3_Truncator_of_module_django__utils__text );
           frame_function_4_words_of_class_3_Truncator_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_words_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_num = NULL;
    PyObject *_python_par_truncate = NULL;
    PyObject *_python_par_html = NULL;
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
                PyErr_Format( PyExc_TypeError, "words() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "words() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_num == key )
            {
                if (unlikely( _python_par_num ))
                {
                    PyErr_Format( PyExc_TypeError, "words() got multiple values for keyword argument 'num'" );
                    goto error_exit;
                }

                _python_par_num = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_truncate == key )
            {
                if (unlikely( _python_par_truncate ))
                {
                    PyErr_Format( PyExc_TypeError, "words() got multiple values for keyword argument 'truncate'" );
                    goto error_exit;
                }

                _python_par_truncate = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_html == key )
            {
                if (unlikely( _python_par_html ))
                {
                    PyErr_Format( PyExc_TypeError, "words() got multiple values for keyword argument 'html'" );
                    goto error_exit;
                }

                _python_par_html = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "words() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_num, key ) )
            {
                if (unlikely( _python_par_num ))
                {
                    PyErr_Format( PyExc_TypeError, "words() got multiple values for keyword argument 'num'" );
                    goto error_exit;
                }

                _python_par_num = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_truncate, key ) )
            {
                if (unlikely( _python_par_truncate ))
                {
                    PyErr_Format( PyExc_TypeError, "words() got multiple values for keyword argument 'truncate'" );
                    goto error_exit;
                }

                _python_par_truncate = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_html, key ) )
            {
                if (unlikely( _python_par_html ))
                {
                    PyErr_Format( PyExc_TypeError, "words() got multiple values for keyword argument 'html'" );
                    goto error_exit;
                }

                _python_par_html = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "words() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "words() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "words() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "words() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "words() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "words() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "words() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "words() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "words() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "words() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "words() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "words() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "words() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "words() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_num != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "words() got multiple values for keyword argument 'num'" );
             goto error_exit;
         }

        _python_par_num = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_truncate != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "words() got multiple values for keyword argument 'truncate'" );
             goto error_exit;
         }

        _python_par_truncate = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_html != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "words() got multiple values for keyword argument 'html'" );
             goto error_exit;
         }

        _python_par_html = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_truncate == NULL )
    {
        _python_par_truncate = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_truncate );
    }
    if ( _python_par_html == NULL )
    {
        _python_par_html = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_html );
    }


    return impl_function_4_words_of_class_3_Truncator_of_module_django__utils__text( self, _python_par_self, _python_par_num, _python_par_truncate, _python_par_html );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_num );
    Py_XDECREF( _python_par_truncate );
    Py_XDECREF( _python_par_html );

    return NULL;
}

static PyObject *dparse_function_4_words_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_4_words_of_class_3_Truncator_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_words_of_class_3_Truncator_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_length, PyObject *_python_par_truncate )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_length( _python_str_plain_length, _python_par_length );
    PyObjectLocalParameterVariableNoDel _python_var_truncate( _python_str_plain_truncate, _python_par_truncate );
    PyObjectLocalVariable _python_var_words( _python_str_plain_words );

    // Actual function code.
    static PyFrameObject *frame_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text ) )
    {
        if ( frame_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5__text_words_of_class_3_Truncator_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text );
        }

        frame_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text = MAKE_FRAME( _codeobj_fc3a5d5a32121c19da8c12c0cab40d99, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 139 );
        _python_var_words.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__wrapped ) ).asObject(), _python_str_plain_split ) ).asObject() ) );
        frame_guard.setLineNumber( 140 );
        {
            PyObjectTempKeeper1 cmp9;
            if ( ( cmp9.assign( BUILTIN_LEN( _python_var_words.asObject() ) ), RICH_COMPARE_BOOL_GT( cmp9.asObject0(), _python_var_length.asObject() ) ) )
        {
            frame_guard.setLineNumber( 141 );
            {
                PyObjectTempKeeper0 slice1;
                _python_var_words.assign1( ( slice1.assign( _python_var_words.asObject() ), LOOKUP_SLICE( slice1.asObject0(), Py_None, _python_var_length.asObject() ) ) );
            }
            frame_guard.setLineNumber( 142 );
            {
                PyObjectTempKeeper1 call4;
                PyObjectTempKeeper1 call6;
                PyObjectTempKeeper1 call7;
                return ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_add_truncation_text ) ), call7.assign( ( call4.assign( LOOKUP_ATTRIBUTE( _python_unicode_space, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_words.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), _python_var_truncate.asObject() ) );
            }
        }
        }
        frame_guard.setLineNumber( 143 );
        {
            PyObjectTempKeeper1 call11;
            return ( call11.assign( LOOKUP_ATTRIBUTE( _python_unicode_space, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_words.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_truncate.updateLocalsDict( _python_var_length.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_words.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text );
           frame_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_length = NULL;
    PyObject *_python_par_truncate = NULL;
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
                PyErr_Format( PyExc_TypeError, "_text_words() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_text_words() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_length == key )
            {
                if (unlikely( _python_par_length ))
                {
                    PyErr_Format( PyExc_TypeError, "_text_words() got multiple values for keyword argument 'length'" );
                    goto error_exit;
                }

                _python_par_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_truncate == key )
            {
                if (unlikely( _python_par_truncate ))
                {
                    PyErr_Format( PyExc_TypeError, "_text_words() got multiple values for keyword argument 'truncate'" );
                    goto error_exit;
                }

                _python_par_truncate = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_text_words() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_length, key ) )
            {
                if (unlikely( _python_par_length ))
                {
                    PyErr_Format( PyExc_TypeError, "_text_words() got multiple values for keyword argument 'length'" );
                    goto error_exit;
                }

                _python_par_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_truncate, key ) )
            {
                if (unlikely( _python_par_truncate ))
                {
                    PyErr_Format( PyExc_TypeError, "_text_words() got multiple values for keyword argument 'truncate'" );
                    goto error_exit;
                }

                _python_par_truncate = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_text_words() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_text_words() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_text_words() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_text_words() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_text_words() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_text_words() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_text_words() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_text_words() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_text_words() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_text_words() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_text_words() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "_text_words() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_text_words() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_text_words() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_length != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_text_words() got multiple values for keyword argument 'length'" );
             goto error_exit;
         }

        _python_par_length = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_truncate != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_text_words() got multiple values for keyword argument 'truncate'" );
             goto error_exit;
         }

        _python_par_truncate = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text( self, _python_par_self, _python_par_length, _python_par_truncate );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_length );
    Py_XDECREF( _python_par_truncate );

    return NULL;
}

static PyObject *dparse_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_length, PyObject *_python_par_truncate )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_length( _python_str_plain_length, _python_par_length );
    PyObjectLocalParameterVariableNoDel _python_var_truncate( _python_str_plain_truncate, _python_par_truncate );
    PyObjectLocalVariable _python_var_html4_singlets( _python_str_plain_html4_singlets );
    PyObjectLocalVariable _python_var_pos( _python_str_plain_pos );
    PyObjectLocalVariable _python_var_end_text_pos( _python_str_plain_end_text_pos );
    PyObjectLocalVariable _python_var_words( _python_str_plain_words );
    PyObjectLocalVariable _python_var_open_tags( _python_str_plain_open_tags );
    PyObjectLocalVariable _python_var_m( _python_str_plain_m );
    PyObjectLocalVariable _python_var_tag( _python_str_plain_tag );
    PyObjectLocalVariable _python_var_closing_tag( _python_str_plain_closing_tag );
    PyObjectLocalVariable _python_var_tagname( _python_str_plain_tagname );
    PyObjectLocalVariable _python_var_self_closing( _python_str_plain_self_closing );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_out( _python_str_plain_out );
    PyObjectLocalVariable _python_var_truncate_text( _python_str_plain_truncate_text );

    // Actual function code.
    static PyFrameObject *frame_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text ) )
    {
        if ( frame_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6__html_words_of_class_3_Truncator_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text );
        }

        frame_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text = MAKE_FRAME( _codeobj_d546d8dbed8d09b29797ea643704053d, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 153 );
        if ( RICH_COMPARE_BOOL_LE( _python_var_length.asObject(), _python_int_0 ) )
        {
            return INCREASE_REFCOUNT( _python_unicode_empty );
        }
        _python_var_html4_singlets.assign0( _python_tuple_479e0bc617a98abbe4250cf63aa1a7f0_tuple );
        _python_var_pos.assign0( _python_int_0 );
        _python_var_end_text_pos.assign0( _python_int_0 );
        _python_var_words.assign0( _python_int_0 );
        _python_var_open_tags.assign1( PyList_New( 0 ) );
        frame_guard.setLineNumber( 164 );
        while( true )
        {
            frame_guard.setLineNumber( 164 );
            {
                PyObjectTempKeeper0 cmp1;
                if ( (!( ( cmp1.assign( _python_var_words.asObject() ), RICH_COMPARE_BOOL_LE( cmp1.asObject0(), _python_var_length.asObject() ) ) )) )
            {
                frame_guard.setLineNumber( 164 );
                break;
            }
            }
            frame_guard.setLineNumber( 165 );
            {
                PyObjectTempKeeper1 call3;
                PyObjectTempKeeper1 call4;
                _python_var_m.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re_words.asObject0(), _python_str_plain_search ) ), call4.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__wrapped ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_pos.asObject() ) ) );
            }
            frame_guard.setLineNumber( 166 );
            if ( (!( CHECK_IF_TRUE( _python_var_m.asObject() ) )) )
            {
                frame_guard.setLineNumber( 168 );
                break;
            }
            frame_guard.setLineNumber( 169 );
            _python_var_pos.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_m.asObject(), _python_str_plain_end ) ).asObject(), _python_int_0 ) );
            frame_guard.setLineNumber( 170 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_m.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) ).asObject() ) )
            {
                {
                    frame_guard.setLineNumber( 172 );
                    PyObject *_python_tmp_inplace_start = _python_var_words.asObject();
                    PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_int_pos_1 ) );
                    if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                    {
                        _python_var_words.assign0( _python_tmp_inplace_end.asObject() );
                    }
                }
                frame_guard.setLineNumber( 173 );
                {
                    PyObjectTempKeeper0 cmp6;
                    if ( ( cmp6.assign( _python_var_words.asObject() ), RICH_COMPARE_BOOL_EQ( cmp6.asObject0(), _python_var_length.asObject() ) ) )
                {
                    frame_guard.setLineNumber( 174 );
                    _python_var_end_text_pos.assign0( _python_var_pos.asObject() );
                }
                }
                frame_guard.setLineNumber( 175 );
                CONSIDER_THREADING(); continue;
            }
            frame_guard.setLineNumber( 177 );
            {
                PyObjectTempKeeper1 call8;
                _python_var_tag.assign1( ( call8.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re_tag.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_m.asObject(), _python_str_plain_group ) ).asObject(), _python_int_0 ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 178 );
            if ( ( (!( CHECK_IF_TRUE( _python_var_tag.asObject() ) )) || CHECK_IF_TRUE( _python_var_end_text_pos.asObject() ) ) )
            {
                frame_guard.setLineNumber( 180 );
                CONSIDER_THREADING(); continue;
            }
            {
                frame_guard.setLineNumber( 181 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tag.asObject(), _python_str_plain_groups ) ).asObject() ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                _python_var_closing_tag.assign0( _python_tmp_element_1.asObject() );
                _python_var_tagname.assign0( _python_tmp_element_2.asObject() );
                _python_var_self_closing.assign0( _python_tmp_element_3.asObject() );
            }
            frame_guard.setLineNumber( 183 );
            _python_var_tagname.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tagname.asObject(), _python_str_plain_lower ) ).asObject() ) );
            frame_guard.setLineNumber( 184 );
            {
                PyObjectTempKeeper0 cmp18;
                if ( (!( ( CHECK_IF_TRUE( _python_var_self_closing.asObject() ) || ( cmp18.assign( _python_var_tagname.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp18.asObject0(), _python_var_html4_singlets.asObject() ) ) ) )) )
            {
                frame_guard.setLineNumber( 186 );
                if ( CHECK_IF_TRUE( _python_var_closing_tag.asObject() ) )
                {
                    {
                        PyObject *_python_tmp_unhandled_indicator = Py_True;
                        frame_guard.setLineNumber( 188 );
                        try
                        {
                            frame_guard.setLineNumber( 189 );
                            {
                                PyObjectTempKeeper1 call10;
                                _python_var_i.assign1( ( call10.assign( LOOKUP_ATTRIBUTE( _python_var_open_tags.asObject(), _python_str_plain_index ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_tagname.asObject() ) ) );
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
                                _python_tmp_unhandled_indicator = Py_False;
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
                            frame_guard.setLineNumber( 195 );
                            {
                                PyObjectTempKeeper0 slice12;
                                _python_var_open_tags.assign1( ( slice12.assign( _python_var_open_tags.asObject() ), LOOKUP_SLICE( slice12.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_i.asObject(), _python_int_pos_1 ) ).asObject(), Py_None ) ) );
                            }
                        }
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 198 );
                    {
                        PyObjectTempKeeper1 call15;
                        DECREASE_REFCOUNT( ( call15.assign( LOOKUP_ATTRIBUTE( _python_var_open_tags.asObject(), _python_str_plain_insert ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_int_0, _python_var_tagname.asObject() ) ) );
                    }
                }
            }
            }

           CONSIDER_THREADING();
        }
        frame_guard.setLineNumber( 199 );
        {
            PyObjectTempKeeper0 cmp20;
            if ( ( cmp20.assign( _python_var_words.asObject() ), RICH_COMPARE_BOOL_LE( cmp20.asObject0(), _python_var_length.asObject() ) ) )
        {
            frame_guard.setLineNumber( 201 );
            return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__wrapped );
        }
        }
        frame_guard.setLineNumber( 202 );
        {
            PyObjectTempKeeper1 slice22;
            _python_var_out.assign1( ( slice22.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__wrapped ) ), LOOKUP_SLICE( slice22.asObject0(), Py_None, _python_var_end_text_pos.asObject() ) ) );
        }
        frame_guard.setLineNumber( 203 );
        {
            PyObjectTempKeeper1 call25;
            _python_var_truncate_text.assign1( ( call25.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_add_truncation_text ) ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), _python_unicode_empty, _python_var_truncate.asObject() ) ) );
        }
        frame_guard.setLineNumber( 204 );
        if ( CHECK_IF_TRUE( _python_var_truncate_text.asObject() ) )
        {
            {
                frame_guard.setLineNumber( 205 );
                PyObject *_python_tmp_inplace_start = _python_var_out.asObject();
                PyObject *_tmp_python_tmp_inplace_end;
                {
                    PyObjectTempKeeper0 op28;
                    _tmp_python_tmp_inplace_end = ( op28.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op28.asObject0(), _python_var_truncate_text.asObject() ) );
                }
                PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                {
                    _python_var_out.assign0( _python_tmp_inplace_end.asObject() );
                }
            }
        }
        {
            frame_guard.setLineNumber( 207 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_open_tags.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 207 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_tag.assign0( _python_tmp_iter_value.asObject() );
                }
                {
                    frame_guard.setLineNumber( 208 );
                    PyObject *_python_tmp_inplace_start = _python_var_out.asObject();
                    PyObject *_tmp_python_tmp_inplace_end;
                    {
                        PyObjectTempKeeper0 op30;
                        _tmp_python_tmp_inplace_end = ( op30.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op30.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_38101f147fd8d0d608ecb4be0167996e, _python_var_tag.asObject() ) ).asObject() ) );
                    }
                    PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                    if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                    {
                        _python_var_out.assign0( _python_tmp_inplace_end.asObject() );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 210 );
        return _python_var_out.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_truncate.updateLocalsDict( _python_var_length.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_truncate_text.updateLocalsDict( _python_var_out.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_self_closing.updateLocalsDict( _python_var_tagname.updateLocalsDict( _python_var_closing_tag.updateLocalsDict( _python_var_tag.updateLocalsDict( _python_var_m.updateLocalsDict( _python_var_open_tags.updateLocalsDict( _python_var_words.updateLocalsDict( _python_var_end_text_pos.updateLocalsDict( _python_var_pos.updateLocalsDict( _python_var_html4_singlets.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text );
           frame_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_length = NULL;
    PyObject *_python_par_truncate = NULL;
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
                PyErr_Format( PyExc_TypeError, "_html_words() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_html_words() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_length == key )
            {
                if (unlikely( _python_par_length ))
                {
                    PyErr_Format( PyExc_TypeError, "_html_words() got multiple values for keyword argument 'length'" );
                    goto error_exit;
                }

                _python_par_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_truncate == key )
            {
                if (unlikely( _python_par_truncate ))
                {
                    PyErr_Format( PyExc_TypeError, "_html_words() got multiple values for keyword argument 'truncate'" );
                    goto error_exit;
                }

                _python_par_truncate = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_html_words() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_length, key ) )
            {
                if (unlikely( _python_par_length ))
                {
                    PyErr_Format( PyExc_TypeError, "_html_words() got multiple values for keyword argument 'length'" );
                    goto error_exit;
                }

                _python_par_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_truncate, key ) )
            {
                if (unlikely( _python_par_truncate ))
                {
                    PyErr_Format( PyExc_TypeError, "_html_words() got multiple values for keyword argument 'truncate'" );
                    goto error_exit;
                }

                _python_par_truncate = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_html_words() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_html_words() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_html_words() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_html_words() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_html_words() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_html_words() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_html_words() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_html_words() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_html_words() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_html_words() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_html_words() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "_html_words() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_html_words() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_html_words() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_length != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_html_words() got multiple values for keyword argument 'length'" );
             goto error_exit;
         }

        _python_par_length = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_truncate != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_html_words() got multiple values for keyword argument 'truncate'" );
             goto error_exit;
         }

        _python_par_truncate = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text( self, _python_par_self, _python_par_length, _python_par_truncate );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_length );
    Py_XDECREF( _python_par_truncate );

    return NULL;
}

static PyObject *dparse_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_get_valid_filename_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );

    // Actual function code.
    static PyFrameObject *frame_function_4_get_valid_filename_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_4_get_valid_filename_of_module_django__utils__text ) )
    {
        if ( frame_function_4_get_valid_filename_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_get_valid_filename_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_4_get_valid_filename_of_module_django__utils__text );
        }

        frame_function_4_get_valid_filename_of_module_django__utils__text = MAKE_FRAME( _codeobj_2a392f38fa020d83a6dc15a4eb5dbf38, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_4_get_valid_filename_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_4_get_valid_filename_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 221 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_s.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_s.asObject() ) ) ).asObject(), _python_str_plain_strip ) ).asObject() ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_space, _python_unicode_plain__ ) );
        }
        frame_guard.setLineNumber( 222 );
        {
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_unicode_digest_aa47fc96d6dc8ffa947b10aeee2aa825, _python_unicode_empty, _python_var_s.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_s.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_4_get_valid_filename_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_4_get_valid_filename_of_module_django__utils__text );
           frame_function_4_get_valid_filename_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_get_valid_filename_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_s = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_valid_filename() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_s == key )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "get_valid_filename() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_s, key ) )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "get_valid_filename() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_valid_filename() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_valid_filename() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_valid_filename() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_valid_filename() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_valid_filename() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_valid_filename() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_valid_filename() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_valid_filename() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_valid_filename() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_valid_filename() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_valid_filename() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_valid_filename() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_valid_filename() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_valid_filename() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_get_valid_filename_of_module_django__utils__text( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_4_get_valid_filename_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_get_valid_filename_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_get_valid_filename_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_get_text_list_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_list_, PyObject *_python_par_last_word )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_list_( _python_str_plain_list_, _python_par_list_ );
    PyObjectLocalParameterVariableNoDel _python_var_last_word( _python_str_plain_last_word, _python_par_last_word );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );

    // Actual function code.
    static PyFrameObject *frame_function_5_get_text_list_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_5_get_text_list_of_module_django__utils__text ) )
    {
        if ( frame_function_5_get_text_list_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_get_text_list_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_5_get_text_list_of_module_django__utils__text );
        }

        frame_function_5_get_text_list_of_module_django__utils__text = MAKE_FRAME( _codeobj_a662b55cf889e893c1f8b1cdd3166fce, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_5_get_text_list_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_5_get_text_list_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 238 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( _python_var_list_.asObject() ) ).asObject(), _python_int_0 ) )
        {
            return INCREASE_REFCOUNT( _python_unicode_empty );
        }
        frame_guard.setLineNumber( 239 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( _python_var_list_.asObject() ) ).asObject(), _python_int_pos_1 ) )
        {
            frame_guard.setLineNumber( 239 );
            {
                PyObjectTempKeeper0 call1;
                return ( call1.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_list_.asObject(), _python_int_0, 0 ) ).asObject() ) );
            }
        }
        frame_guard.setLineNumber( 240 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper1 make_tuple10;
            PyObjectTempKeeper1 make_tuple9;
            return BINARY_OPERATION_REMAINDER( _python_unicode_digest_3b2331c9bb0e209669885040c873c011, PyObjectTemporary( ( make_tuple9.assign( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__text__.asObject0(), _python_unicode_digest_fc763cb31e9938f37737394681228f83 ) ).asObject(), _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( PyObjectTemporary( impl_listcontr_1_of_function_5_get_text_list_of_module_django__utils__text( MAKE_ITERATOR( _python_var_list_.asObject() ), _python_var_i ) ).asObject(), 0, -1 ) ).asObject() ) ) ), make_tuple10.assign( ( call5.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_last_word.asObject() ) ) ), MAKE_TUPLE3( make_tuple9.asObject0(), make_tuple10.asObject0(), PyObjectTemporary( ( call7.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_list_.asObject(), _python_int_neg_1, -1 ) ).asObject() ) ) ).asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_last_word.updateLocalsDict( _python_var_list_.updateLocalsDict( _python_var_i.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_get_text_list_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_5_get_text_list_of_module_django__utils__text );
           frame_function_5_get_text_list_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_get_text_list_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_list_ = NULL;
    PyObject *_python_par_last_word = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_text_list() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_list_ == key )
            {
                if (unlikely( _python_par_list_ ))
                {
                    PyErr_Format( PyExc_TypeError, "get_text_list() got multiple values for keyword argument 'list_'" );
                    goto error_exit;
                }

                _python_par_list_ = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_last_word == key )
            {
                if (unlikely( _python_par_last_word ))
                {
                    PyErr_Format( PyExc_TypeError, "get_text_list() got multiple values for keyword argument 'last_word'" );
                    goto error_exit;
                }

                _python_par_last_word = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_list_, key ) )
            {
                if (unlikely( _python_par_list_ ))
                {
                    PyErr_Format( PyExc_TypeError, "get_text_list() got multiple values for keyword argument 'list_'" );
                    goto error_exit;
                }

                _python_par_list_ = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_last_word, key ) )
            {
                if (unlikely( _python_par_last_word ))
                {
                    PyErr_Format( PyExc_TypeError, "get_text_list() got multiple values for keyword argument 'last_word'" );
                    goto error_exit;
                }

                _python_par_last_word = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_text_list() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_text_list() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_text_list() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_text_list() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_text_list() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_text_list() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_text_list() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_text_list() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_text_list() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_text_list() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_text_list() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_text_list() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_text_list() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_list_ != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_text_list() got multiple values for keyword argument 'list_'" );
             goto error_exit;
         }

        _python_par_list_ = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_last_word != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_text_list() got multiple values for keyword argument 'last_word'" );
             goto error_exit;
         }

        _python_par_last_word = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_last_word == NULL )
    {
        _python_par_last_word = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_last_word );
    }


    return impl_function_5_get_text_list_of_module_django__utils__text( self, _python_par_list_, _python_par_last_word );

error_exit:;

    Py_XDECREF( _python_par_list_ );
    Py_XDECREF( _python_par_last_word );

    return NULL;
}

static PyObject *dparse_function_5_get_text_list_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_get_text_list_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_get_text_list_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_5_get_text_list_of_module_django__utils__text( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_i )
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
                python_closure_i.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_i.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_6_normalize_newlines_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_text )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );

    // Actual function code.
    static PyFrameObject *frame_function_6_normalize_newlines_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_6_normalize_newlines_of_module_django__utils__text ) )
    {
        if ( frame_function_6_normalize_newlines_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_normalize_newlines_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_6_normalize_newlines_of_module_django__utils__text );
        }

        frame_function_6_normalize_newlines_of_module_django__utils__text = MAKE_FRAME( _codeobj_2a31129ef2acfc3dd83e50f85170377c, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_6_normalize_newlines_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_6_normalize_newlines_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 247 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call5;
            return ( call5.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_unicode_digest_2bb0af8c0126f7b680d28a8b0da3c7ee, _python_unicode_chr_10, _python_var_text.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_text.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_6_normalize_newlines_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_6_normalize_newlines_of_module_django__utils__text );
           frame_function_6_normalize_newlines_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_normalize_newlines_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_text = NULL;
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
                PyErr_Format( PyExc_TypeError, "normalize_newlines() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_text == key )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "normalize_newlines() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_text, key ) )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "normalize_newlines() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "normalize_newlines() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "normalize_newlines() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "normalize_newlines() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "normalize_newlines() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "normalize_newlines() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "normalize_newlines() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "normalize_newlines() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "normalize_newlines() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "normalize_newlines() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "normalize_newlines() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "normalize_newlines() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "normalize_newlines() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "normalize_newlines() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_text != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "normalize_newlines() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_normalize_newlines_of_module_django__utils__text( self, _python_par_text );

error_exit:;

    Py_XDECREF( _python_par_text );

    return NULL;
}

static PyObject *dparse_function_6_normalize_newlines_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_normalize_newlines_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_normalize_newlines_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_recapitalize_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_text )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );
    PyObjectLocalVariable _python_var_capsRE( _python_str_plain_capsRE );

    // Actual function code.
    static PyFrameObject *frame_function_7_recapitalize_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_7_recapitalize_of_module_django__utils__text ) )
    {
        if ( frame_function_7_recapitalize_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_recapitalize_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_7_recapitalize_of_module_django__utils__text );
        }

        frame_function_7_recapitalize_of_module_django__utils__text = MAKE_FRAME( _codeobj_ff5a360b8867c7d525b820691111bcd3, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_7_recapitalize_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_7_recapitalize_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 252 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_text.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_text.asObject() ) ) ).asObject(), _python_str_plain_lower ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 253 );
        _python_var_capsRE.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_697de0f3632948208cd51d76eb189cb6 ) );
        frame_guard.setLineNumber( 254 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_text.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_capsRE.asObject(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( MAKE_FUNCTION_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text(  ) ).asObject(), _python_var_text.asObject() ) ) );
        }
        frame_guard.setLineNumber( 255 );
        return _python_var_text.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_text.updateLocalsDict( _python_var_capsRE.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_7_recapitalize_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_7_recapitalize_of_module_django__utils__text );
           frame_function_7_recapitalize_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_recapitalize_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_text = NULL;
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
                PyErr_Format( PyExc_TypeError, "recapitalize() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_text == key )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "recapitalize() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_text, key ) )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "recapitalize() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "recapitalize() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "recapitalize() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "recapitalize() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "recapitalize() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "recapitalize() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "recapitalize() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "recapitalize() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "recapitalize() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "recapitalize() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "recapitalize() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "recapitalize() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "recapitalize() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "recapitalize() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_text != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "recapitalize() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7_recapitalize_of_module_django__utils__text( self, _python_par_text );

error_exit:;

    Py_XDECREF( _python_par_text );

    return NULL;
}

static PyObject *dparse_function_7_recapitalize_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7_recapitalize_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_recapitalize_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text ) )
    {
        if ( frame_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text );
        }

        frame_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text = MAKE_FRAME( _codeobj_ea112e0300aa5d110f01b59029e7b269, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 254 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_x.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) ).asObject(), _python_str_plain_upper ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text );
           frame_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_phone2numeric_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_phone )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_phone( _python_str_plain_phone, _python_par_phone );
    PyObjectSharedLocalVariable _python_var_char2number( _python_str_plain_char2number );

    // Actual function code.
    _python_var_char2number.assign1( PyDict_Copy( _python_dict_c991b50779d25e08d9eeb995192d1d08 ) );
    static PyFrameObject *frame_function_8_phone2numeric_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_8_phone2numeric_of_module_django__utils__text ) )
    {
        if ( frame_function_8_phone2numeric_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_phone2numeric_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_8_phone2numeric_of_module_django__utils__text );
        }

        frame_function_8_phone2numeric_of_module_django__utils__text = MAKE_FRAME( _codeobj_16ec9ab8767100b021655d09995c48a6, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_8_phone2numeric_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_8_phone2numeric_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 265 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( impl_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_phone.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ), _python_var_char2number ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_phone.updateLocalsDict( _python_var_char2number.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_8_phone2numeric_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_8_phone2numeric_of_module_django__utils__text );
           frame_function_8_phone2numeric_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_8_phone2numeric_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_phone = NULL;
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
                PyErr_Format( PyExc_TypeError, "phone2numeric() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_phone == key )
            {
                if (unlikely( _python_par_phone ))
                {
                    PyErr_Format( PyExc_TypeError, "phone2numeric() got multiple values for keyword argument 'phone'" );
                    goto error_exit;
                }

                _python_par_phone = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_phone, key ) )
            {
                if (unlikely( _python_par_phone ))
                {
                    PyErr_Format( PyExc_TypeError, "phone2numeric() got multiple values for keyword argument 'phone'" );
                    goto error_exit;
                }

                _python_par_phone = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "phone2numeric() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "phone2numeric() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "phone2numeric() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "phone2numeric() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "phone2numeric() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "phone2numeric() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "phone2numeric() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "phone2numeric() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "phone2numeric() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "phone2numeric() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "phone2numeric() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "phone2numeric() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "phone2numeric() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_phone != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "phone2numeric() got multiple values for keyword argument 'phone'" );
             goto error_exit;
         }

        _python_par_phone = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_8_phone2numeric_of_module_django__utils__text( self, _python_par_phone );

error_exit:;

    Py_XDECREF( _python_par_phone );

    return NULL;
}

static PyObject *dparse_function_8_phone2numeric_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_phone2numeric_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_phone2numeric_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectClosureVariable python_closure_char2number;
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_c;
};

static void _context_generator_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text_t *_python_context = (struct _context_generator_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text_t *_python_context = (_context_generator_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_c.setVariableName( _python_str_plain_c );

        // Actual function code.
        static PyFrameObject *frame_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text ) )
        {
            if ( frame_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text" );
#endif
                Py_DECREF( frame_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text );
            }

            frame_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text = MAKE_FRAME( _codeobj_8499f4522e794f26e4e2757ff67e0a1c, _module_django__utils__text );
        }

        Py_INCREF( frame_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text );
        generator->m_frame = frame_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text;

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
                    frame_guard.setLineNumber( 265 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 265 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_c.assign0( _python_tmp_iter_value.asObject() );
                        {
                            PyObjectTempKeeper1 call1;
                            PyObjectTempKeeper0 call2;
                            YIELD_VALUE( generator, ( call1.assign( LOOKUP_ATTRIBUTE( _python_context->python_closure_char2number.asObject(), _python_str_plain_get ) ), call2.assign( _python_context->python_var_c.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_context->python_var_c.asObject() ) ) );
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

static PyObject *impl_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text( PyObject *_python_par___iterator, PyObjectSharedLocalVariable &python_closure_char2number )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text_t *_python_context = new _context_generator_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text_t;
    _python_context->python_closure_char2number.shareWith( python_closure_char2number );

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text_context,
            _python_str_angle_genexpr,
            _codeobj_d97a29086141ee245f061145942dd499,
            _python_context,
            _context_generator_genexpr_1_of_function_8_phone2numeric_of_module_django__utils__text_destructor
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


static PyObject *impl_function_9_compress_string_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );
    PyObjectLocalVariable _python_var_zbuf( _python_str_plain_zbuf );
    PyObjectLocalVariable _python_var_zfile( _python_str_plain_zfile );

    // Actual function code.
    static PyFrameObject *frame_function_9_compress_string_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_9_compress_string_of_module_django__utils__text ) )
    {
        if ( frame_function_9_compress_string_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_compress_string_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_9_compress_string_of_module_django__utils__text );
        }

        frame_function_9_compress_string_of_module_django__utils__text = MAKE_FRAME( _codeobj_707ceed255e9a909925b05d66c76314c, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_9_compress_string_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_9_compress_string_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 271 );
        _python_var_zbuf.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__text_BytesIO.asObject0() ) );
        frame_guard.setLineNumber( 272 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_zfile.assign1( ( call1.assign( _mvar_django__utils__text_GzipFile.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT3( _python_unicode_plain_wb, _python_str_plain_mode, _python_int_pos_6, _python_str_plain_compresslevel, _python_var_zbuf.asObject(), _python_str_plain_fileobj ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 273 );
        {
            PyObjectTempKeeper1 call4;
            DECREASE_REFCOUNT( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_zfile.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_s.asObject() ) ) );
        }
        frame_guard.setLineNumber( 274 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_zfile.asObject(), _python_str_plain_close ) ).asObject() ) );
        frame_guard.setLineNumber( 275 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_zbuf.asObject(), _python_str_plain_getvalue ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_s.updateLocalsDict( _python_var_zfile.updateLocalsDict( _python_var_zbuf.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_compress_string_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_9_compress_string_of_module_django__utils__text );
           frame_function_9_compress_string_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_compress_string_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_s = NULL;
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
                PyErr_Format( PyExc_TypeError, "compress_string() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_s == key )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "compress_string() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_s, key ) )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "compress_string() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "compress_string() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "compress_string() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "compress_string() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "compress_string() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "compress_string() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "compress_string() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "compress_string() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "compress_string() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "compress_string() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "compress_string() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "compress_string() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "compress_string() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "compress_string() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "compress_string() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9_compress_string_of_module_django__utils__text( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_9_compress_string_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9_compress_string_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_compress_string_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_10_StreamingBuffer_of_module_django__utils__text(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_write( _python_str_plain_write );
    PyObjectLocalVariable _python_var_read( _python_str_plain_read );
    PyObjectLocalVariable _python_var_flush( _python_str_plain_flush );
    PyObjectLocalVariable _python_var_close( _python_str_plain_close );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_text );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text(  ) );
    _python_var_write.assign1( MAKE_FUNCTION_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text(  ) );
    _python_var_read.assign1( MAKE_FUNCTION_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text(  ) );
    _python_var_flush.assign1( MAKE_FUNCTION_function_4_flush_of_class_10_StreamingBuffer_of_module_django__utils__text(  ) );
    _python_var_close.assign1( MAKE_FUNCTION_function_5_close_of_class_10_StreamingBuffer_of_module_django__utils__text(  ) );
    return _python_var_close.updateLocalsDict( _python_var_flush.updateLocalsDict( _python_var_read.updateLocalsDict( _python_var_write.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text ) )
    {
        if ( frame_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text );
        }

        frame_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text = MAKE_FRAME( _codeobj_5be4c41e781a8b9607fab6c7b5920ef6, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 279 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain_vals );
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

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text );
           frame_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_val )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_val( _python_str_plain_val, _python_par_val );

    // Actual function code.
    static PyFrameObject *frame_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text ) )
    {
        if ( frame_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text );
        }

        frame_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text = MAKE_FRAME( _codeobj_0299f873cf4bc7f1e98a9a8f4c27f5cd, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 282 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_vals ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_val.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_val.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text );
           frame_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_val = NULL;
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
            if ( found == false && _python_str_plain_val == key )
            {
                if (unlikely( _python_par_val ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'val'" );
                    goto error_exit;
                }

                _python_par_val = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_val, key ) )
            {
                if (unlikely( _python_par_val ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'val'" );
                    goto error_exit;
                }

                _python_par_val = value;

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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "write() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "write() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "write() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "write() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "write() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "write() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "write() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
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
    args_usable_count = args_given < 2 ? args_given : 2;

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
         if (unlikely( _python_par_val != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'val'" );
             goto error_exit;
         }

        _python_par_val = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text( self, _python_par_self, _python_par_val );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_val );

    return NULL;
}

static PyObject *dparse_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_ret( _python_str_plain_ret );

    // Actual function code.
    static PyFrameObject *frame_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text ) )
    {
        if ( frame_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text );
        }

        frame_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text = MAKE_FRAME( _codeobj_396b157b44a83cc8d635dc995ab12c32, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 285 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_ret.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_str_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_vals ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 286 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain_vals );
        frame_guard.setLineNumber( 287 );
        return _python_var_ret.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_ret.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text );
           frame_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "read() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "read() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "read() got multiple values for keyword argument 'self'" );
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
                   "read() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "read() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "read() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "read() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "read() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "read() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "read() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "read() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "read() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "read() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "read() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "read() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "read() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "read() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_flush_of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_4_flush_of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "flush() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "flush() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "flush() got multiple values for keyword argument 'self'" );
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
                   "flush() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "flush() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "flush() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "flush() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "flush() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "flush() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "flush() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "flush() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "flush() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "flush() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "flush() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "flush() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "flush() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "flush() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_flush_of_class_10_StreamingBuffer_of_module_django__utils__text( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_flush_of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_flush_of_class_10_StreamingBuffer_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_flush_of_class_10_StreamingBuffer_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_close_of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5_close_of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_5_close_of_class_10_StreamingBuffer_of_module_django__utils__text( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_close_of_class_10_StreamingBuffer_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_close_of_class_10_StreamingBuffer_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_close_of_class_10_StreamingBuffer_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_11_compress_sequence_of_module_django__utils__text_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var_sequence;
    PyObjectLocalVariable python_var_buf;
    PyObjectLocalVariable python_var_zfile;
    PyObjectLocalVariable python_var_item;
};

static void _context_generator_function_11_compress_sequence_of_module_django__utils__text_destructor( void *context_voidptr )
{
    _context_generator_function_11_compress_sequence_of_module_django__utils__text_t *_python_context = (struct _context_generator_function_11_compress_sequence_of_module_django__utils__text_t *)context_voidptr;

    delete _python_context;
}

static void function_11_compress_sequence_of_module_django__utils__text_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_11_compress_sequence_of_module_django__utils__text_t *_python_context = (_context_generator_function_11_compress_sequence_of_module_django__utils__text_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_buf.setVariableName( _python_str_plain_buf );
        _python_context->python_var_zfile.setVariableName( _python_str_plain_zfile );
        _python_context->python_var_item.setVariableName( _python_str_plain_item );

        // Actual function code.
        static PyFrameObject *frame_function_11_compress_sequence_of_module_django__utils__text = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_11_compress_sequence_of_module_django__utils__text ) )
        {
            if ( frame_function_11_compress_sequence_of_module_django__utils__text )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_11_compress_sequence_of_module_django__utils__text" );
#endif
                Py_DECREF( frame_function_11_compress_sequence_of_module_django__utils__text );
            }

            frame_function_11_compress_sequence_of_module_django__utils__text = MAKE_FRAME( _codeobj_24e91ff0172bbe6636da1ec58090be1e, _module_django__utils__text );
        }

        Py_INCREF( frame_function_11_compress_sequence_of_module_django__utils__text );
        generator->m_frame = frame_function_11_compress_sequence_of_module_django__utils__text;

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

            frame_guard.setLineNumber( 297 );
            _python_context->python_var_buf.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__text_StreamingBuffer.asObject0() ) );
            frame_guard.setLineNumber( 298 );
            {
                PyObjectTempKeeper0 call1;
                _python_context->python_var_zfile.assign1( ( call1.assign( _mvar_django__utils__text_GzipFile.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT3( _python_unicode_plain_wb, _python_str_plain_mode, _python_int_pos_6, _python_str_plain_compresslevel, _python_context->python_var_buf.asObject(), _python_str_plain_fileobj ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 300 );
            YIELD_VALUE( generator, CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_buf.asObject(), _python_str_plain_read ) ).asObject() ) );
            {
                frame_guard.setLineNumber( 301 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_context->python_var_sequence.asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 301 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_item.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 302 );
                    {
                        PyObjectTempKeeper1 call4;
                        DECREASE_REFCOUNT( ( call4.assign( LOOKUP_ATTRIBUTE( _python_context->python_var_zfile.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_context->python_var_item.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 303 );
                    DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_zfile.asObject(), _python_str_plain_flush ) ).asObject() ) );
                    frame_guard.setLineNumber( 304 );
                    YIELD_VALUE( generator, CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_buf.asObject(), _python_str_plain_read ) ).asObject() ) );

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 305 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_zfile.asObject(), _python_str_plain_close ) ).asObject() ) );
            frame_guard.setLineNumber( 306 );
            YIELD_VALUE( generator, CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_buf.asObject(), _python_str_plain_read ) ).asObject() ) );

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

static PyObject *impl_function_11_compress_sequence_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_sequence )
{
    // Create context if any
    struct _context_generator_function_11_compress_sequence_of_module_django__utils__text_t *_python_context = new _context_generator_function_11_compress_sequence_of_module_django__utils__text_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_11_compress_sequence_of_module_django__utils__text_context,
            _python_str_plain_compress_sequence,
            _codeobj_24e91ff0172bbe6636da1ec58090be1e,
            _python_context,
            _context_generator_function_11_compress_sequence_of_module_django__utils__text_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function compress_sequence" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.
        _python_context->python_var_sequence.setVariableNameAndValue( _python_str_plain_sequence, _python_par_sequence );

        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}
static PyObject *fparse_function_11_compress_sequence_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_sequence = NULL;
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
                PyErr_Format( PyExc_TypeError, "compress_sequence() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_sequence == key )
            {
                if (unlikely( _python_par_sequence ))
                {
                    PyErr_Format( PyExc_TypeError, "compress_sequence() got multiple values for keyword argument 'sequence'" );
                    goto error_exit;
                }

                _python_par_sequence = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sequence, key ) )
            {
                if (unlikely( _python_par_sequence ))
                {
                    PyErr_Format( PyExc_TypeError, "compress_sequence() got multiple values for keyword argument 'sequence'" );
                    goto error_exit;
                }

                _python_par_sequence = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "compress_sequence() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "compress_sequence() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "compress_sequence() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "compress_sequence() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "compress_sequence() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "compress_sequence() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "compress_sequence() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "compress_sequence() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "compress_sequence() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "compress_sequence() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "compress_sequence() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "compress_sequence() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "compress_sequence() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_sequence != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "compress_sequence() got multiple values for keyword argument 'sequence'" );
             goto error_exit;
         }

        _python_par_sequence = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_11_compress_sequence_of_module_django__utils__text( self, _python_par_sequence );

error_exit:;

    Py_XDECREF( _python_par_sequence );

    return NULL;
}

static PyObject *dparse_function_11_compress_sequence_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_11_compress_sequence_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_compress_sequence_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_javascript_quote_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_s, PyObject *_python_par_quote_double_quotes )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );
    PyObjectLocalParameterVariableNoDel _python_var_quote_double_quotes( _python_str_plain_quote_double_quotes, _python_par_quote_double_quotes );
    PyObjectLocalVariable _python_var_fix( _python_str_plain_fix );

    // Actual function code.
    _python_var_fix.assign1( MAKE_FUNCTION_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text(  ) );
    static PyFrameObject *frame_function_12_javascript_quote_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_12_javascript_quote_of_module_django__utils__text ) )
    {
        if ( frame_function_12_javascript_quote_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_javascript_quote_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_12_javascript_quote_of_module_django__utils__text );
        }

        frame_function_12_javascript_quote_of_module_django__utils__text = MAKE_FRAME( _codeobj_36cf3b2da0c1c8891a885bdf386b09e4, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_12_javascript_quote_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_12_javascript_quote_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 315 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_TYPE1( _python_var_s.asObject() ) ).asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) )
        {
            frame_guard.setLineNumber( 316 );
            _python_var_s.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_decode ) ).asObject(), _python_unicode_digest_e9e2aa8136260a22b0b09fdee43ccb8a ) );
        }
        else
        {
            frame_guard.setLineNumber( 317 );
            {
                PyObjectTempKeeper1 cmp1;
                if ( ( cmp1.assign( BUILTIN_TYPE1( _python_var_s.asObject() ) ), RICH_COMPARE_BOOL_NE( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 318 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( _python_var_s.asObject() ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            }
        }
        frame_guard.setLineNumber( 319 );
        _python_var_s.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_92, _python_unicode_digest_7f8137798425a7fed2b8c5703b70d078 ) );
        frame_guard.setLineNumber( 320 );
        _python_var_s.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_13, _python_unicode_digest_8ce55a318e070899562e8613f93a3e49 ) );
        frame_guard.setLineNumber( 321 );
        _python_var_s.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_10, _python_unicode_digest_1d78758685e5e2f4efeeb490f8521abd ) );
        frame_guard.setLineNumber( 322 );
        _python_var_s.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_9, _python_unicode_digest_d8957008c0f71eaaea6d8b1dde49fd74 ) );
        frame_guard.setLineNumber( 323 );
        _python_var_s.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_39, _python_unicode_digest_024c94d6e03b6f67a86b952b914816c7 ) );
        frame_guard.setLineNumber( 324 );
        if ( CHECK_IF_TRUE( _python_var_quote_double_quotes.asObject() ) )
        {
            frame_guard.setLineNumber( 325 );
            _python_var_s.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_34, _python_unicode_digest_eb6439de53405a48b124e7cf89ba71d3 ) );
        }
        frame_guard.setLineNumber( 326 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call4;
            return TO_STR( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_ustring_re.asObject0(), _python_str_plain_sub ) ), call4.assign( _python_var_fix.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_s.asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_quote_double_quotes.updateLocalsDict( _python_var_s.updateLocalsDict( _python_var_fix.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_12_javascript_quote_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_12_javascript_quote_of_module_django__utils__text );
           frame_function_12_javascript_quote_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_12_javascript_quote_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_s = NULL;
    PyObject *_python_par_quote_double_quotes = NULL;
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
                PyErr_Format( PyExc_TypeError, "javascript_quote() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_s == key )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "javascript_quote() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_quote_double_quotes == key )
            {
                if (unlikely( _python_par_quote_double_quotes ))
                {
                    PyErr_Format( PyExc_TypeError, "javascript_quote() got multiple values for keyword argument 'quote_double_quotes'" );
                    goto error_exit;
                }

                _python_par_quote_double_quotes = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_s, key ) )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "javascript_quote() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_quote_double_quotes, key ) )
            {
                if (unlikely( _python_par_quote_double_quotes ))
                {
                    PyErr_Format( PyExc_TypeError, "javascript_quote() got multiple values for keyword argument 'quote_double_quotes'" );
                    goto error_exit;
                }

                _python_par_quote_double_quotes = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "javascript_quote() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "javascript_quote() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "javascript_quote() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "javascript_quote() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "javascript_quote() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "javascript_quote() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "javascript_quote() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "javascript_quote() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "javascript_quote() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "javascript_quote() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "javascript_quote() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "javascript_quote() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "javascript_quote() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "javascript_quote() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_quote_double_quotes != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "javascript_quote() got multiple values for keyword argument 'quote_double_quotes'" );
             goto error_exit;
         }

        _python_par_quote_double_quotes = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_quote_double_quotes == NULL )
    {
        _python_par_quote_double_quotes = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_quote_double_quotes );
    }


    return impl_function_12_javascript_quote_of_module_django__utils__text( self, _python_par_s, _python_par_quote_double_quotes );

error_exit:;

    Py_XDECREF( _python_par_s );
    Py_XDECREF( _python_par_quote_double_quotes );

    return NULL;
}

static PyObject *dparse_function_12_javascript_quote_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_12_javascript_quote_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_javascript_quote_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_match )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_match( _python_str_plain_match, _python_par_match );

    // Actual function code.
    static PyFrameObject *frame_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text ) )
    {
        if ( frame_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text );
        }

        frame_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text = MAKE_FRAME( _codeobj_4938c8b8b389b66a0f5e44e9f287a3cc, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 313 );
        return BINARY_OPERATION_REMAINDER( _python_unicode_digest_1869245cb7105d35c7924203ece80164, PyObjectTemporary( BUILTIN_ORD( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) ).asObject() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_match.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text );
           frame_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_match = NULL;
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
                PyErr_Format( PyExc_TypeError, "fix() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_match == key )
            {
                if (unlikely( _python_par_match ))
                {
                    PyErr_Format( PyExc_TypeError, "fix() got multiple values for keyword argument 'match'" );
                    goto error_exit;
                }

                _python_par_match = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_match, key ) )
            {
                if (unlikely( _python_par_match ))
                {
                    PyErr_Format( PyExc_TypeError, "fix() got multiple values for keyword argument 'match'" );
                    goto error_exit;
                }

                _python_par_match = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "fix() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "fix() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "fix() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "fix() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "fix() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "fix() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fix() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "fix() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fix() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "fix() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "fix() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "fix() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "fix() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_match != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "fix() got multiple values for keyword argument 'match'" );
             goto error_exit;
         }

        _python_par_match = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text( self, _python_par_match );

error_exit:;

    Py_XDECREF( _python_par_match );

    return NULL;
}

static PyObject *dparse_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_13_smart_split_of_module_django__utils__text_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var_text;
    PyObjectLocalVariable python_var_bit;
};

static void _context_generator_function_13_smart_split_of_module_django__utils__text_destructor( void *context_voidptr )
{
    _context_generator_function_13_smart_split_of_module_django__utils__text_t *_python_context = (struct _context_generator_function_13_smart_split_of_module_django__utils__text_t *)context_voidptr;

    delete _python_context;
}

static void function_13_smart_split_of_module_django__utils__text_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_13_smart_split_of_module_django__utils__text_t *_python_context = (_context_generator_function_13_smart_split_of_module_django__utils__text_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_bit.setVariableName( _python_str_plain_bit );

        // Actual function code.
        static PyFrameObject *frame_function_13_smart_split_of_module_django__utils__text = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_13_smart_split_of_module_django__utils__text ) )
        {
            if ( frame_function_13_smart_split_of_module_django__utils__text )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_13_smart_split_of_module_django__utils__text" );
#endif
                Py_DECREF( frame_function_13_smart_split_of_module_django__utils__text );
            }

            frame_function_13_smart_split_of_module_django__utils__text = MAKE_FRAME( _codeobj_20bd428261e5b3913cd71999724f1647, _module_django__utils__text );
        }

        Py_INCREF( frame_function_13_smart_split_of_module_django__utils__text );
        generator->m_frame = frame_function_13_smart_split_of_module_django__utils__text;

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

            frame_guard.setLineNumber( 356 );
            {
                PyObjectTempKeeper0 call1;
                _python_context->python_var_text.assign1( ( call1.assign( _mvar_django__utils__text_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_context->python_var_text.asObject() ) ) );
            }
            {
                frame_guard.setLineNumber( 357 );
                PyObject *_tmp_python_tmp_for_iterator;
                {
                    PyObjectTempKeeper1 call3;
                    _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_smart_split_re.asObject0(), _python_str_plain_finditer ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_context->python_var_text.asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 357 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_bit.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 358 );
                    YIELD_VALUE( generator, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_bit.asObject(), _python_str_plain_group ) ).asObject(), _python_int_0 ) );

                   CONSIDER_THREADING();
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

static PyObject *impl_function_13_smart_split_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_text )
{
    // Create context if any
    struct _context_generator_function_13_smart_split_of_module_django__utils__text_t *_python_context = new _context_generator_function_13_smart_split_of_module_django__utils__text_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_13_smart_split_of_module_django__utils__text_context,
            _python_str_plain_smart_split,
            _codeobj_20bd428261e5b3913cd71999724f1647,
            _python_context,
            _context_generator_function_13_smart_split_of_module_django__utils__text_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function smart_split" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.
        _python_context->python_var_text.setVariableNameAndValue( _python_str_plain_text, _python_par_text );

        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}
static PyObject *fparse_function_13_smart_split_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_text = NULL;
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
                PyErr_Format( PyExc_TypeError, "smart_split() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_text == key )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "smart_split() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_text, key ) )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "smart_split() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "smart_split() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "smart_split() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "smart_split() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "smart_split() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "smart_split() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "smart_split() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "smart_split() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "smart_split() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "smart_split() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "smart_split() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "smart_split() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "smart_split() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "smart_split() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_text != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "smart_split() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_13_smart_split_of_module_django__utils__text( self, _python_par_text );

error_exit:;

    Py_XDECREF( _python_par_text );

    return NULL;
}

static PyObject *dparse_function_13_smart_split_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_13_smart_split_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_smart_split_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14__replace_entity_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_match )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_match( _python_str_plain_match, _python_par_match );
    PyObjectLocalVariable _python_var_text( _python_str_plain_text );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );

    // Actual function code.
    static PyFrameObject *frame_function_14__replace_entity_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_14__replace_entity_of_module_django__utils__text ) )
    {
        if ( frame_function_14__replace_entity_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14__replace_entity_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_14__replace_entity_of_module_django__utils__text );
        }

        frame_function_14__replace_entity_of_module_django__utils__text = MAKE_FRAME( _codeobj_1744da6b5c62b1f3842b7257372b339f, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_14__replace_entity_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_14__replace_entity_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 361 );
        _python_var_text.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) );
        frame_guard.setLineNumber( 362 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_text.asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_chr_35 ) )
        {
            frame_guard.setLineNumber( 363 );
            _python_var_text.assign1( LOOKUP_INDEX_SLICE( _python_var_text.asObject(), 1, PY_SSIZE_T_MAX ) );
            frame_guard.setLineNumber( 364 );
            try
            {
                frame_guard.setLineNumber( 365 );
                if ( SEQUENCE_CONTAINS_BOOL( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_text.asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_plain_xX ) )
                {
                    frame_guard.setLineNumber( 366 );
                    _python_var_c.assign1( TO_INT2( PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_text.asObject(), 1, PY_SSIZE_T_MAX ) ).asObject(), _python_int_pos_16 ) );
                }
                else
                {
                    frame_guard.setLineNumber( 368 );
                    _python_var_c.assign1( TO_INT( _python_var_text.asObject() ) );
                }
                frame_guard.setLineNumber( 369 );
                return CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_unichr ), _python_var_c.asObject() );
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
                    frame_guard.setLineNumber( 371 );
                    return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_group ) ).asObject(), _python_int_0 );
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
        else
        {
            frame_guard.setLineNumber( 373 );
            try
            {
                frame_guard.setLineNumber( 374 );
                {
                    PyObjectTempKeeper1 subscr1;
                    return CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_unichr ), PyObjectTemporary( ( subscr1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_html_entities.asObject0(), _python_str_plain_name2codepoint ) ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), _python_var_text.asObject() ) ) ).asObject() );
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

                if ( _exception.matches( PyExc_ValueError ) || _exception.matches( PyExc_KeyError ) )
                {
                    frame_guard.detachFrame();
                    frame_guard.setLineNumber( 376 );
                    return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_group ) ).asObject(), _python_int_0 );
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
        frame_guard.getFrame0()->f_locals = _python_var_match.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_text.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_14__replace_entity_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_14__replace_entity_of_module_django__utils__text );
           frame_function_14__replace_entity_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_14__replace_entity_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_match = NULL;
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
                PyErr_Format( PyExc_TypeError, "_replace_entity() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_match == key )
            {
                if (unlikely( _python_par_match ))
                {
                    PyErr_Format( PyExc_TypeError, "_replace_entity() got multiple values for keyword argument 'match'" );
                    goto error_exit;
                }

                _python_par_match = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_match, key ) )
            {
                if (unlikely( _python_par_match ))
                {
                    PyErr_Format( PyExc_TypeError, "_replace_entity() got multiple values for keyword argument 'match'" );
                    goto error_exit;
                }

                _python_par_match = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_replace_entity() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_replace_entity() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_replace_entity() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_replace_entity() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_replace_entity() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_replace_entity() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_replace_entity() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_replace_entity() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_replace_entity() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_replace_entity() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_replace_entity() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_replace_entity() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_replace_entity() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_match != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_replace_entity() got multiple values for keyword argument 'match'" );
             goto error_exit;
         }

        _python_par_match = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_14__replace_entity_of_module_django__utils__text( self, _python_par_match );

error_exit:;

    Py_XDECREF( _python_par_match );

    return NULL;
}

static PyObject *dparse_function_14__replace_entity_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_14__replace_entity_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14__replace_entity_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_unescape_entities_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_text )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );

    // Actual function code.
    static PyFrameObject *frame_function_15_unescape_entities_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_15_unescape_entities_of_module_django__utils__text ) )
    {
        if ( frame_function_15_unescape_entities_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_unescape_entities_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_15_unescape_entities_of_module_django__utils__text );
        }

        frame_function_15_unescape_entities_of_module_django__utils__text = MAKE_FRAME( _codeobj_1a5690a33da95cfab8fc1981f26582f6, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_15_unescape_entities_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_15_unescape_entities_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 381 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text__entity_re.asObject0(), _python_str_plain_sub ) ), call2.assign( _mvar_django__utils__text__replace_entity.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_text.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_text.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_15_unescape_entities_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_15_unescape_entities_of_module_django__utils__text );
           frame_function_15_unescape_entities_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_15_unescape_entities_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_text = NULL;
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
                PyErr_Format( PyExc_TypeError, "unescape_entities() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_text == key )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "unescape_entities() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_text, key ) )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "unescape_entities() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "unescape_entities() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "unescape_entities() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "unescape_entities() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "unescape_entities() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "unescape_entities() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unescape_entities() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unescape_entities() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unescape_entities() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unescape_entities() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "unescape_entities() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "unescape_entities() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "unescape_entities() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "unescape_entities() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_text != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unescape_entities() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_15_unescape_entities_of_module_django__utils__text( self, _python_par_text );

error_exit:;

    Py_XDECREF( _python_par_text );

    return NULL;
}

static PyObject *dparse_function_15_unescape_entities_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_15_unescape_entities_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_unescape_entities_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_unescape_string_literal_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );
    PyObjectLocalVariable _python_var_quote( _python_str_plain_quote );

    // Actual function code.
    static PyFrameObject *frame_function_16_unescape_string_literal_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_16_unescape_string_literal_of_module_django__utils__text ) )
    {
        if ( frame_function_16_unescape_string_literal_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16_unescape_string_literal_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_16_unescape_string_literal_of_module_django__utils__text );
        }

        frame_function_16_unescape_string_literal_of_module_django__utils__text = MAKE_FRAME( _codeobj_8c5730d05800d366ea88fdb851aebd67, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_16_unescape_string_literal_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_16_unescape_string_literal_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 398 );
        {
            PyObjectTempKeeper1 cmp1;
            if ( ( SEQUENCE_CONTAINS_NOT_BOOL( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_s.asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_digest_c61c1aca91758d029b272e56d6c3bb98 ) || ( cmp1.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_s.asObject(), _python_int_neg_1, -1 ) ), RICH_COMPARE_BOOL_NE( cmp1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_s.asObject(), _python_int_0, 0 ) ).asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 399 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_f403dcf3aaffd332502a17235f5fe016, _python_var_s.asObject() ) ).asObject() ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        }
        frame_guard.setLineNumber( 400 );
        _python_var_quote.assign1( LOOKUP_SUBSCRIPT_CONST( _python_var_s.asObject(), _python_int_0, 0 ) );
        frame_guard.setLineNumber( 401 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 call4;
            return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_s.asObject(), 1, -1 ) ).asObject(), _python_str_plain_replace ) ), call4.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_20d409527de5a6febc718d073caf2f56, _python_var_quote.asObject() ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_quote.asObject() ) ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_digest_7f8137798425a7fed2b8c5703b70d078, _python_unicode_chr_92 );
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
        frame_guard.getFrame0()->f_locals = _python_var_s.updateLocalsDict( _python_var_quote.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_16_unescape_string_literal_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_16_unescape_string_literal_of_module_django__utils__text );
           frame_function_16_unescape_string_literal_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_16_unescape_string_literal_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_s = NULL;
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
                PyErr_Format( PyExc_TypeError, "unescape_string_literal() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_s == key )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "unescape_string_literal() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_s, key ) )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "unescape_string_literal() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "unescape_string_literal() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "unescape_string_literal() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "unescape_string_literal() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "unescape_string_literal() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "unescape_string_literal() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unescape_string_literal() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unescape_string_literal() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unescape_string_literal() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unescape_string_literal() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "unescape_string_literal() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "unescape_string_literal() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "unescape_string_literal() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "unescape_string_literal() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unescape_string_literal() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_16_unescape_string_literal_of_module_django__utils__text( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_16_unescape_string_literal_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_16_unescape_string_literal_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_unescape_string_literal_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_slugify_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_17_slugify_of_module_django__utils__text = NULL;

    if ( isFrameUnusable( frame_function_17_slugify_of_module_django__utils__text ) )
    {
        if ( frame_function_17_slugify_of_module_django__utils__text )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_17_slugify_of_module_django__utils__text" );
#endif
            Py_DECREF( frame_function_17_slugify_of_module_django__utils__text );
        }

        frame_function_17_slugify_of_module_django__utils__text = MAKE_FRAME( _codeobj_95f2d81f799b56504a508c9f2069dc7b, _module_django__utils__text );
    }

    FrameGuard frame_guard( frame_function_17_slugify_of_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_function_17_slugify_of_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 410 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_value.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_unicodedata.asObject0(), _python_str_plain_normalize ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_unicode_plain_NFKD, _python_var_value.asObject() ) ) ).asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_plain_ascii, _python_unicode_plain_ignore ) ).asObject(), _python_str_plain_decode ) ).asObject(), _python_unicode_plain_ascii ) );
        }
        frame_guard.setLineNumber( 411 );
        {
            PyObjectTempKeeper1 call4;
            _python_var_value.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_unicode_digest_9d7ea381d887b663a5213757f0d3764c, _python_unicode_empty, _python_var_value.asObject() ) ) ).asObject(), _python_str_plain_strip ) ).asObject() ) ).asObject(), _python_str_plain_lower ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 412 );
        {
            PyObjectTempKeeper0 call12;
            PyObjectTempKeeper1 call8;
            return ( call12.assign( _mvar_django__utils__text_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), PyObjectTemporary( ( call8.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_unicode_digest_aa5ee36f2bfb68f131f5a4b8ea4e7424, _python_unicode_chr_45, _python_var_value.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_17_slugify_of_module_django__utils__text )
        {
           Py_DECREF( frame_function_17_slugify_of_module_django__utils__text );
           frame_function_17_slugify_of_module_django__utils__text = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_17_slugify_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "slugify() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "slugify() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "slugify() got multiple values for keyword argument 'value'" );
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
                   "slugify() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "slugify() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "slugify() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "slugify() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "slugify() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "slugify() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "slugify() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "slugify() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "slugify() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "slugify() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "slugify() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "slugify() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "slugify() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "slugify() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_17_slugify_of_module_django__utils__text( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_17_slugify_of_module_django__utils__text( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_17_slugify_of_module_django__utils__text( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_slugify_of_module_django__utils__text( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_11_compress_sequence_of_module_django__utils__text(  )
{
    return Nuitka_Function_New(
        fparse_function_11_compress_sequence_of_module_django__utils__text,
        dparse_function_11_compress_sequence_of_module_django__utils__text,
        _python_str_plain_compress_sequence,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_24e91ff0172bbe6636da1ec58090be1e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );
}



static PyObject *MAKE_FUNCTION_function_12_javascript_quote_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_javascript_quote_of_module_django__utils__text,
        dparse_function_12_javascript_quote_of_module_django__utils__text,
        _python_str_plain_javascript_quote,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_36cf3b2da0c1c8891a885bdf386b09e4,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_smart_split_of_module_django__utils__text(  )
{
    return Nuitka_Function_New(
        fparse_function_13_smart_split_of_module_django__utils__text,
        dparse_function_13_smart_split_of_module_django__utils__text,
        _python_str_plain_smart_split,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_20bd428261e5b3913cd71999724f1647,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        _python_unicode_digest_193373c98c8161b2470cbfdf7bebb9ec
    );
}



static PyObject *MAKE_FUNCTION_function_14__replace_entity_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14__replace_entity_of_module_django__utils__text,
        dparse_function_14__replace_entity_of_module_django__utils__text,
        _python_str_plain__replace_entity,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1744da6b5c62b1f3842b7257372b339f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_unescape_entities_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_unescape_entities_of_module_django__utils__text,
        dparse_function_15_unescape_entities_of_module_django__utils__text,
        _python_str_plain_unescape_entities,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1a5690a33da95cfab8fc1981f26582f6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_unescape_string_literal_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_unescape_string_literal_of_module_django__utils__text,
        dparse_function_16_unescape_string_literal_of_module_django__utils__text,
        _python_str_plain_unescape_string_literal,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8c5730d05800d366ea88fdb851aebd67,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        _python_unicode_digest_26875d070d3aa29852a3e8994aee3f22
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_slugify_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_slugify_of_module_django__utils__text,
        dparse_function_17_slugify_of_module_django__utils__text,
        _python_str_plain_slugify,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_95f2d81f799b56504a508c9f2069dc7b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        _python_unicode_digest_92a16779cc130d4a2d385e0d1a3b1274
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text,
        dparse_function_1___init___of_class_10_StreamingBuffer_of_module_django__utils__text,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5be4c41e781a8b9607fab6c7b5920ef6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_Truncator_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_Truncator_of_module_django__utils__text,
        dparse_function_1___init___of_class_3_Truncator_of_module_django__utils__text,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c668ca9629ac833ec95aee4d3280f6d0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__generator_of_function_2_wrap_of_module_django__utils__text( PyObjectSharedLocalVariable &python_closure_text, PyObjectSharedLocalVariable &python_closure_width )
{
    struct _context_common_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t *_python_context = new _context_common_function_1__generator_of_function_2_wrap_of_module_django__utils__text_t;
    _python_context->ref_count = 1;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_text.shareWith( python_closure_text );
    _python_context->python_closure_width.shareWith( python_closure_width );

    return Nuitka_Function_New(
        fparse_function_1__generator_of_function_2_wrap_of_module_django__utils__text,
        dparse_function_1__generator_of_function_2_wrap_of_module_django__utils__text,
        _python_str_plain__generator,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8597682c1db876e661395b838ca89860,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None,
        _python_context,
        _context_common_function_1__generator_of_function_2_wrap_of_module_django__utils__text_destructor
    );
}



static PyObject *MAKE_FUNCTION_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text,
        dparse_function_1_fix_of_function_12_javascript_quote_of_module_django__utils__text,
        _python_str_plain_fix,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4938c8b8b389b66a0f5e44e9f287a3cc,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text,
        dparse_function_2_add_truncation_text_of_class_3_Truncator_of_module_django__utils__text,
        _python_str_plain_add_truncation_text,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b7890ec35df6cefce0905dc7b8e869a4,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_wrap_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_wrap_of_module_django__utils__text,
        dparse_function_2_wrap_of_module_django__utils__text,
        _python_str_plain_wrap,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_68b4b2efcb3a413b5fdd98d82080b4e8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        _python_unicode_digest_7e96d6422f0a184820168356b413594f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text,
        dparse_function_2_write_of_class_10_StreamingBuffer_of_module_django__utils__text,
        _python_str_plain_write,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0299f873cf4bc7f1e98a9a8f4c27f5cd,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_chars_of_class_3_Truncator_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_chars_of_class_3_Truncator_of_module_django__utils__text,
        dparse_function_3_chars_of_class_3_Truncator_of_module_django__utils__text,
        _python_str_plain_chars,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e6a9c834759ccb3d446b7fac6404277a,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        _python_unicode_digest_22f8e198c0fd5c3cdd52642ef03ac516
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text,
        dparse_function_3_read_of_class_10_StreamingBuffer_of_module_django__utils__text,
        _python_str_plain_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_396b157b44a83cc8d635dc995ab12c32,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_flush_of_class_10_StreamingBuffer_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_flush_of_class_10_StreamingBuffer_of_module_django__utils__text,
        dparse_function_4_flush_of_class_10_StreamingBuffer_of_module_django__utils__text,
        _python_str_plain_flush,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_dc2471d929a70375d14ed2917b86ccc4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_get_valid_filename_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_get_valid_filename_of_module_django__utils__text,
        dparse_function_4_get_valid_filename_of_module_django__utils__text,
        _python_str_plain_get_valid_filename,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2a392f38fa020d83a6dc15a4eb5dbf38,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        _python_unicode_digest_253f5273f8df02d6a18d0de86a2f1c3f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_words_of_class_3_Truncator_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_words_of_class_3_Truncator_of_module_django__utils__text,
        dparse_function_4_words_of_class_3_Truncator_of_module_django__utils__text,
        _python_str_plain_words,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0c21781147343cbe4ce01402828df162,
        INCREASE_REFCOUNT( _python_tuple_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        _python_unicode_digest_c6eeb52e4d3081aa432cca952b427f4d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text,
        dparse_function_5__text_words_of_class_3_Truncator_of_module_django__utils__text,
        _python_str_plain__text_words,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fc3a5d5a32121c19da8c12c0cab40d99,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        _python_unicode_digest_2d673fca3bbe3fbfaf11a5af9ba92d1d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_close_of_class_10_StreamingBuffer_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_close_of_class_10_StreamingBuffer_of_module_django__utils__text,
        dparse_function_5_close_of_class_10_StreamingBuffer_of_module_django__utils__text,
        _python_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_dc3b87711f93af68054fca5c140450a8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_get_text_list_of_module_django__utils__text( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_get_text_list_of_module_django__utils__text,
        dparse_function_5_get_text_list_of_module_django__utils__text,
        _python_str_plain_get_text_list,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a662b55cf889e893c1f8b1cdd3166fce,
        defaults,
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        _python_unicode_digest_1768b1495308e69ac4c85a1d20ae4d8f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text,
        dparse_function_6__html_words_of_class_3_Truncator_of_module_django__utils__text,
        _python_str_plain__html_words,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d546d8dbed8d09b29797ea643704053d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        _python_unicode_digest_9712afb0ef2184d4e0ff1122fe2f3ab5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_normalize_newlines_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_normalize_newlines_of_module_django__utils__text,
        dparse_function_6_normalize_newlines_of_module_django__utils__text,
        _python_str_plain_normalize_newlines,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2a31129ef2acfc3dd83e50f85170377c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_recapitalize_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_recapitalize_of_module_django__utils__text,
        dparse_function_7_recapitalize_of_module_django__utils__text,
        _python_str_plain_recapitalize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ff5a360b8867c7d525b820691111bcd3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        _python_unicode_digest_c33ac4a6005c43ba361506cc20a20561
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_phone2numeric_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_phone2numeric_of_module_django__utils__text,
        dparse_function_8_phone2numeric_of_module_django__utils__text,
        _python_str_plain_phone2numeric,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_16ec9ab8767100b021655d09995c48a6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        _python_unicode_digest_3aa3a494f3bc21f8ee698ed3e586e3f4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_compress_string_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_compress_string_of_module_django__utils__text,
        dparse_function_9_compress_string_of_module_django__utils__text,
        _python_str_plain_compress_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_707ceed255e9a909925b05d66c76314c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text( PyObjectSharedLocalVariable &python_closure_text )
{
    struct _context_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text_t *_python_context = new _context_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_text.shareWith( python_closure_text );

    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text,
        dparse_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2812afd16d1c8d2e92ddb19e9bdf23a3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None,
        _python_context,
        _context_lambda_1_lambda_of_function_1___init___of_class_3_Truncator_of_module_django__utils__text_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text,
        dparse_lambda_1_lambda_of_function_7_recapitalize_of_module_django__utils__text,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ea112e0300aa5d110f01b59029e7b269,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_module_django__utils__text(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_module_django__utils__text,
        dparse_lambda_1_lambda_of_module_django__utils__text,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ac10f3a7105ff7f349fb5ba7ace73327,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__text,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.text",   /* m_name */
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

MOD_INIT_DECL( django__utils__text )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__text );
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

    // puts( "in initdjango__utils__text" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__text = Py_InitModule4(
        "django.utils.text",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__text = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__text = (PyDictObject *)((PyModuleObject *)_module_django__utils__text)->md_dict;

    assertObject( _module_django__utils__text );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_1863593e728059f3c0ba0d01334514dd, _module_django__utils__text );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__text );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__text != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_c5c1f108f97f62277b514de8046c75b3 );
    PyFrameObject *frame_module_django__utils__text = MAKE_FRAME( _codeobj_957286d8266679634fa6db4724511c3c, _module_django__utils__text );

    FrameGuard frame_guard( frame_module_django__utils__text );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__text ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_re, IMPORT_MODULE( _python_str_plain_re, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_unicodedata, IMPORT_MODULE( _python_str_plain_unicodedata, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_warnings, IMPORT_MODULE( _python_str_plain_warnings, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_GzipFile, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_gzip, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_str_plain_GzipFile_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_GzipFile ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_BytesIO, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_io, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_str_plain_BytesIO_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_BytesIO ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_allow_lazy, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_str_plain_allow_lazy_str_plain_SimpleLazyObject_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_allow_lazy ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_SimpleLazyObject, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_str_plain_allow_lazy_str_plain_SimpleLazyObject_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SimpleLazyObject ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_html_entities, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_91ddc8f1df73e2bf4268fd2741c1c593, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_str_plain_html_entities_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_html_entities ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_ugettext_lazy, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_301d09e699378072add34b0a68be3575_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ugettext_lazy ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain__, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_301d09e699378072add34b0a68be3575_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ugettext ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_pgettext, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_301d09e699378072add34b0a68be3575_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_pgettext ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_mark_safe, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_33422e2c698707541621bf8ab31ea849, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_str_plain_mark_safe_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_mark_safe ) );
        frame_guard.setLineNumber( 16 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 19 );
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_force_unicode, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__text)->md_dict, ((PyModuleObject *)_module_django__utils__text)->md_dict, _python_list_str_plain_force_unicode_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_unicode ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_capfirst, MAKE_FUNCTION_lambda_1_lambda_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 23 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_capfirst, ( call1.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), call2.assign( _mvar_django__utils__text_capfirst.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 26 );
        {
            PyObjectTempKeeper1 call6;
            PyObjectTempKeeper1 op4;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_re_words, ( call6.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_compile ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_unicode_digest_a87c04cff91a714cb7324e15752dcdd3, PyObjectTemporary( ( op4.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_U ) ), BINARY_OPERATION( PyNumber_Or, op4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_S ) ).asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 27 );
        {
            PyObjectTempKeeper1 call9;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_re_tag, ( call9.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_compile ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_unicode_digest_dfcb384a3c888da930872b3bfa62e38b, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_S ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_wrap, MAKE_FUNCTION_function_2_wrap_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 56 );
        {
            PyObjectTempKeeper0 call12;
            PyObjectTempKeeper0 call13;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_wrap, ( call12.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), call13.assign( _mvar_django__utils__text_wrap.asObject0() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), call13.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 59 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__utils__text_SimpleLazyObject.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_Truncator_of_module_django__utils__text(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__text___metaclass__.isInitialized( false ) ? _mvar_django__utils__text___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call15;
                PyObjectTempKeeper0 call17;
                _tmp_python_tmp_class = ( call15.assign( _python_tmp_metaclass.asObject() ), call17.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_str_plain_Truncator, call17.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_Truncator, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_get_valid_filename, MAKE_FUNCTION_function_4_get_valid_filename_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 223 );
        {
            PyObjectTempKeeper0 call19;
            PyObjectTempKeeper0 call20;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_get_valid_filename, ( call19.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), call20.assign( _mvar_django__utils__text_get_valid_filename.asObject0() ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), call20.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 225 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_get_text_list, MAKE_FUNCTION_function_5_get_text_list_of_module_django__utils__text( MAKE_TUPLE1( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__text_ugettext_lazy.asObject0(), _python_unicode_plain_or ) ).asObject() ) ) );
        frame_guard.setLineNumber( 244 );
        {
            PyObjectTempKeeper0 call22;
            PyObjectTempKeeper0 call23;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_get_text_list, ( call22.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), call23.assign( _mvar_django__utils__text_get_text_list.asObject0() ), CALL_FUNCTION_WITH_ARGS( call22.asObject0(), call23.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_normalize_newlines, MAKE_FUNCTION_function_6_normalize_newlines_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 248 );
        {
            PyObjectTempKeeper0 call25;
            PyObjectTempKeeper0 call26;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_normalize_newlines, ( call25.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), call26.assign( _mvar_django__utils__text_normalize_newlines.asObject0() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), call26.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_recapitalize, MAKE_FUNCTION_function_7_recapitalize_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 256 );
        {
            PyObjectTempKeeper0 call28;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_recapitalize, ( call28.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), CALL_FUNCTION_WITH_ARGS( call28.asObject0(), _mvar_django__utils__text_recapitalize.asObject0() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_phone2numeric, MAKE_FUNCTION_function_8_phone2numeric_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 266 );
        {
            PyObjectTempKeeper0 call30;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_phone2numeric, ( call30.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), CALL_FUNCTION_WITH_ARGS( call30.asObject0(), _mvar_django__utils__text_phone2numeric.asObject0() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_compress_string, MAKE_FUNCTION_function_9_compress_string_of_module_django__utils__text(  ) );
        {
            frame_guard.setLineNumber( 277 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_10_StreamingBuffer_of_module_django__utils__text(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__text___metaclass__.isInitialized( false ) ? _mvar_django__utils__text___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call32;
                PyObjectTempKeeper0 call34;
                _tmp_python_tmp_class = ( call32.assign( _python_tmp_metaclass.asObject() ), call34.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), _python_str_plain_StreamingBuffer, call34.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_StreamingBuffer, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_compress_sequence, MAKE_FUNCTION_function_11_compress_sequence_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 308 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_ustring_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_fe3baea7f1a781b3eb19705945149527 ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_javascript_quote, MAKE_FUNCTION_function_12_javascript_quote_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 327 );
        {
            PyObjectTempKeeper0 call36;
            PyObjectTempKeeper0 call37;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_javascript_quote, ( call36.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), call37.assign( _mvar_django__utils__text_javascript_quote.asObject0() ), CALL_FUNCTION_WITH_ARGS( call36.asObject0(), call37.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 331 );
        {
            PyObjectTempKeeper1 call39;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_smart_split_re, ( call39.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_compile ) ), CALL_FUNCTION_WITH_ARGS( call39.asObject0(), _python_unicode_digest_5d0cfe979c62f6eb514bcce59a560af7, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_VERBOSE ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_smart_split, MAKE_FUNCTION_function_13_smart_split_of_module_django__utils__text(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain__replace_entity, MAKE_FUNCTION_function_14__replace_entity_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 378 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain__entity_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_97005b9455d4ee0c339326b5c24cb6c1 ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_unescape_entities, MAKE_FUNCTION_function_15_unescape_entities_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 382 );
        {
            PyObjectTempKeeper0 call42;
            PyObjectTempKeeper0 call43;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_unescape_entities, ( call42.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), call43.assign( _mvar_django__utils__text_unescape_entities.asObject0() ), CALL_FUNCTION_WITH_ARGS( call42.asObject0(), call43.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_unescape_string_literal, MAKE_FUNCTION_function_16_unescape_string_literal_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 402 );
        {
            PyObjectTempKeeper0 call45;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_unescape_string_literal, ( call45.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), CALL_FUNCTION_WITH_ARGS( call45.asObject0(), _mvar_django__utils__text_unescape_string_literal.asObject0() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_slugify, MAKE_FUNCTION_function_17_slugify_of_module_django__utils__text(  ) );
        frame_guard.setLineNumber( 413 );
        {
            PyObjectTempKeeper0 call47;
            PyObjectTempKeeper0 call48;
            UPDATE_STRING_DICT1( _moduledict_django__utils__text, (Nuitka_StringObject *)_python_str_plain_slugify, ( call47.assign( _mvar_django__utils__text_allow_lazy.asObject0() ), call48.assign( _mvar_django__utils__text_slugify.asObject0() ), CALL_FUNCTION_WITH_ARGS( call47.asObject0(), call48.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__text_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__text)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__utils__text );
}
