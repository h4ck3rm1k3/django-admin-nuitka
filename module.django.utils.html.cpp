// Generated code for Python source for module 'django.utils.html'
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

// The _module_django__utils__html is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__html;
PyDictObject *_moduledict_django__utils__html;

// The module level variables.
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_DOTS( &_module_django__utils__html, &_python_str_plain_DOTS );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_HTMLParseError( &_module_django__utils__html, &_python_str_plain_HTMLParseError );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_HTMLParser( &_module_django__utils__html, &_python_str_plain_HTMLParser );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_MLStripper( &_module_django__utils__html, &_python_str_plain_MLStripper );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_SafeData( &_module_django__utils__html, &_python_str_plain_SafeData );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_TRAILING_PUNCTUATION( &_module_django__utils__html, &_python_str_plain_TRAILING_PUNCTUATION );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_WRAPPING_PUNCTUATION( &_module_django__utils__html, &_python_str_plain_WRAPPING_PUNCTUATION );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html___metaclass__( &_module_django__utils__html, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html__js_escapes( &_module_django__utils__html, &_python_str_plain__js_escapes );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_allow_lazy( &_module_django__utils__html, &_python_str_plain_allow_lazy );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_clean_html( &_module_django__utils__html, &_python_str_plain_clean_html );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_conditional_escape( &_module_django__utils__html, &_python_str_plain_conditional_escape );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_escape( &_module_django__utils__html, &_python_str_plain_escape );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_escapejs( &_module_django__utils__html, &_python_str_plain_escapejs );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_fix_ampersands( &_module_django__utils__html, &_python_str_plain_fix_ampersands );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_force_bytes( &_module_django__utils__html, &_python_str_plain_force_bytes );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_force_text( &_module_django__utils__html, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_format_html( &_module_django__utils__html, &_python_str_plain_format_html );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_hard_coded_bullets_re( &_module_django__utils__html, &_python_str_plain_hard_coded_bullets_re );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_html_gunk_re( &_module_django__utils__html, &_python_str_plain_html_gunk_re );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_linebreaks( &_module_django__utils__html, &_python_str_plain_linebreaks );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_link_target_attribute_re( &_module_django__utils__html, &_python_str_plain_link_target_attribute_re );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_mark_safe( &_module_django__utils__html, &_python_str_plain_mark_safe );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_normalize_newlines( &_module_django__utils__html, &_python_str_plain_normalize_newlines );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_quote( &_module_django__utils__html, &_python_str_plain_quote );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_re( &_module_django__utils__html, &_python_str_plain_re );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_remove_tags( &_module_django__utils__html, &_python_str_plain_remove_tags );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_simple_email_re( &_module_django__utils__html, &_python_str_plain_simple_email_re );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_simple_url_2_re( &_module_django__utils__html, &_python_str_plain_simple_url_2_re );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_simple_url_re( &_module_django__utils__html, &_python_str_plain_simple_url_re );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_six( &_module_django__utils__html, &_python_str_plain_six );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_smart_urlquote( &_module_django__utils__html, &_python_str_plain_smart_urlquote );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_strip_entities( &_module_django__utils__html, &_python_str_plain_strip_entities );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_strip_spaces_between_tags( &_module_django__utils__html, &_python_str_plain_strip_spaces_between_tags );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_strip_tags( &_module_django__utils__html, &_python_str_plain_strip_tags );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_trailing_empty_content_re( &_module_django__utils__html, &_python_str_plain_trailing_empty_content_re );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_unencoded_ampersands_re( &_module_django__utils__html, &_python_str_plain_unencoded_ampersands_re );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_unquoted_percents_re( &_module_django__utils__html, &_python_str_plain_unquoted_percents_re );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_urlize( &_module_django__utils__html, &_python_str_plain_urlize );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_urlsplit( &_module_django__utils__html, &_python_str_plain_urlsplit );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_urlunsplit( &_module_django__utils__html, &_python_str_plain_urlunsplit );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_word_split_re( &_module_django__utils__html, &_python_str_plain_word_split_re );
static PyObjectGlobalVariable_django__utils__html _mvar_django__utils__html_x( &_module_django__utils__html, &_python_str_plain_x );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_module_django__utils__html( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_3_of_module_django__utils__html( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_6_format_html_of_module_django__utils__html( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_k, PyObjectLocalVariable &python_closure_v );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html( PyObject *_python_par___iterator, PyObjectSharedLocalVariable &python_closure_format_string );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_8_linebreaks_of_module_django__utils__html( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_p );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_8_linebreaks_of_module_django__utils__html( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_p );


NUITKA_LOCAL_MODULE PyObject *impl_class_9_MLStripper_of_module_django__utils__html(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_11_remove_tags_of_module_django__utils__html( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_tag );


static PyObject *MAKE_FUNCTION_function_10_strip_tags_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_11_remove_tags_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_12_strip_spaces_between_tags_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_13_strip_entities_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_14_fix_ampersands_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_15_smart_urlquote_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_16_urlize_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_17_clean_html_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_18_avoid_wrapping_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_9_MLStripper_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_escape_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_4_escapejs_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_5_conditional_escape_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_6_format_html_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_7_format_html_join_of_module_django__utils__html(  );


static PyObject *MAKE_FUNCTION_function_8_linebreaks_of_module_django__utils__html(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_module_django__utils__html( PyObject *_python_par___iterator )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 37 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 37 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                UPDATE_STRING_DICT0( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_x, _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_escape ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _mvar_django__utils__html_x.asObject0() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_2_escape_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_text )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );

    // Actual function code.
    static PyFrameObject *frame_function_2_escape_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_2_escape_of_module_django__utils__html ) )
    {
        if ( frame_function_2_escape_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_escape_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_2_escape_of_module_django__utils__html );
        }

        frame_function_2_escape_of_module_django__utils__html = MAKE_FRAME( _codeobj_5083b7fef69459c1391cd726bed2bca6, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_2_escape_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_2_escape_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 45 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call3;
            return ( call3.assign( _mvar_django__utils__html_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__utils__html_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_text.asObject() ) ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_38, _python_unicode_digest_c2249209343ab488c055da76368f04a0 ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_60, _python_unicode_digest_87acb03b9542ddbc824f5bbd080a5cd4 ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_62, _python_unicode_digest_58ba3bb1a1772a74392e5e86bd2be4b7 ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_34, _python_unicode_digest_eb6439de53405a48b124e7cf89ba71d3 ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_39, _python_unicode_digest_a34f59274d50f313ec06e96e2620e117 ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_2_escape_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_2_escape_of_module_django__utils__html );
           frame_function_2_escape_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_escape_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "escape() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "escape() got multiple values for keyword argument 'text'" );
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
                    PyErr_Format( PyExc_TypeError, "escape() got multiple values for keyword argument 'text'" );
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
                   "escape() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "escape() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "escape() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "escape() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "escape() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "escape() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "escape() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "escape() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "escape() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "escape() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "escape() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "escape() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "escape() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "escape() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_escape_of_module_django__utils__html( self, _python_par_text );

error_exit:;

    Py_XDECREF( _python_par_text );

    return NULL;
}

static PyObject *dparse_function_2_escape_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_escape_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_escape_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_3_of_module_django__utils__html_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_z;
};

static void _context_generator_genexpr_3_of_module_django__utils__html_destructor( void *context_voidptr )
{
    _context_generator_genexpr_3_of_module_django__utils__html_t *_python_context = (struct _context_generator_genexpr_3_of_module_django__utils__html_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_3_of_module_django__utils__html_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_3_of_module_django__utils__html_t *_python_context = (_context_generator_genexpr_3_of_module_django__utils__html_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_z.setVariableName( _python_str_plain_z );

        // Actual function code.
        static PyFrameObject *frame_genexpr_3_of_module_django__utils__html = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_3_of_module_django__utils__html ) )
        {
            if ( frame_genexpr_3_of_module_django__utils__html )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_3_of_module_django__utils__html" );
#endif
                Py_DECREF( frame_genexpr_3_of_module_django__utils__html );
            }

            frame_genexpr_3_of_module_django__utils__html = MAKE_FRAME( _codeobj_2deefcd618c3e863687aa786ab8bb0ba, _module_django__utils__html );
        }

        Py_INCREF( frame_genexpr_3_of_module_django__utils__html );
        generator->m_frame = frame_genexpr_3_of_module_django__utils__html;

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
                    frame_guard.setLineNumber( 63 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 63 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_z.assign0( _python_tmp_iter_value.asObject() );
                        {
                            PyObjectTempKeeper1 make_tuple1;
                            YIELD_VALUE( generator, ( make_tuple1.assign( BUILTIN_ORD( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_e6a8083322e8b8b0533b0512aa5e12d4, _python_context->python_var_z.asObject() ) ).asObject() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_55bc9e468039b2bac7a663c92eac0b44, _python_context->python_var_z.asObject() ) ).asObject() ) ) );
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

static PyObject *impl_genexpr_3_of_module_django__utils__html( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_3_of_module_django__utils__html_t *_python_context = new _context_generator_genexpr_3_of_module_django__utils__html_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_3_of_module_django__utils__html_context,
            _python_str_angle_genexpr,
            _codeobj_fcca8804a4b0df41bf0b5250d96372fa,
            _python_context,
            _context_generator_genexpr_3_of_module_django__utils__html_destructor
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


static PyObject *impl_function_4_escapejs_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_4_escapejs_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_4_escapejs_of_module_django__utils__html ) )
    {
        if ( frame_function_4_escapejs_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_escapejs_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_4_escapejs_of_module_django__utils__html );
        }

        frame_function_4_escapejs_of_module_django__utils__html = MAKE_FRAME( _codeobj_bc2367a0129dfd87bdf8e14c348876c3, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_4_escapejs_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_4_escapejs_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 67 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call5;
            return ( call5.assign( _mvar_django__utils__html_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__utils__html_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) ).asObject(), _python_str_plain_translate ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _mvar_django__utils__html__js_escapes.asObject0() ) ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_4_escapejs_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_4_escapejs_of_module_django__utils__html );
           frame_function_4_escapejs_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_escapejs_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "escapejs() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "escapejs() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "escapejs() got multiple values for keyword argument 'value'" );
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
                   "escapejs() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "escapejs() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "escapejs() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "escapejs() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "escapejs() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "escapejs() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "escapejs() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "escapejs() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "escapejs() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "escapejs() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "escapejs() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "escapejs() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "escapejs() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "escapejs() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_escapejs_of_module_django__utils__html( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_4_escapejs_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_escapejs_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_escapejs_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_conditional_escape_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_text )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );

    // Actual function code.
    static PyFrameObject *frame_function_5_conditional_escape_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_5_conditional_escape_of_module_django__utils__html ) )
    {
        if ( frame_function_5_conditional_escape_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_conditional_escape_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_5_conditional_escape_of_module_django__utils__html );
        }

        frame_function_5_conditional_escape_of_module_django__utils__html = MAKE_FRAME( _codeobj_cf829115b9b05dcd7972b644e11fa781, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_5_conditional_escape_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_5_conditional_escape_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 74 );
        {
            PyObjectTempKeeper0 isinstance3;
            if ( ( isinstance3.assign( _python_var_text.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), _mvar_django__utils__html_SafeData.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 75 );
            return _python_var_text.asObject1();
        }
        else
        {
            frame_guard.setLineNumber( 77 );
            {
                PyObjectTempKeeper0 call1;
                return ( call1.assign( _mvar_django__utils__html_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_text.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_text.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_5_conditional_escape_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_5_conditional_escape_of_module_django__utils__html );
           frame_function_5_conditional_escape_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_conditional_escape_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "conditional_escape() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "conditional_escape() got multiple values for keyword argument 'text'" );
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
                    PyErr_Format( PyExc_TypeError, "conditional_escape() got multiple values for keyword argument 'text'" );
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
                   "conditional_escape() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "conditional_escape() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "conditional_escape() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "conditional_escape() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "conditional_escape() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "conditional_escape() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "conditional_escape() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "conditional_escape() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "conditional_escape() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "conditional_escape() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "conditional_escape() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "conditional_escape() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "conditional_escape() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "conditional_escape() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_conditional_escape_of_module_django__utils__html( self, _python_par_text );

error_exit:;

    Py_XDECREF( _python_par_text );

    return NULL;
}

static PyObject *dparse_function_5_conditional_escape_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_conditional_escape_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_conditional_escape_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_format_html_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_format_string, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_format_string( _python_str_plain_format_string, _python_par_format_string );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_args_safe( _python_str_plain_args_safe );
    PyObjectLocalVariable _python_var_kwargs_safe( _python_str_plain_kwargs_safe );
    PyObjectLocalVariable _python_var_k( _python_str_plain_k );
    PyObjectLocalVariable _python_var_v( _python_str_plain_v );

    // Actual function code.
    static PyFrameObject *frame_function_6_format_html_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_6_format_html_of_module_django__utils__html ) )
    {
        if ( frame_function_6_format_html_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_format_html_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_6_format_html_of_module_django__utils__html );
        }

        frame_function_6_format_html_of_module_django__utils__html = MAKE_FRAME( _codeobj_193f819c1a5bea018ad842e964a3e6ed, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_6_format_html_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_6_format_html_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 85 );
        {
            PyObjectTempKeeper0 call2;
            _python_var_args_safe.assign1( ( call2.assign( _mvar_django__utils__html_conditional_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_map ), call2.asObject0(), _python_var_args.asObject() ) ) );
        }
        frame_guard.setLineNumber( 86 );
        {
            PyObjectTempKeeper1 call4;
            _python_var_kwargs_safe.assign1( TO_DICT( PyObjectTemporary( impl_listcontr_1_of_function_6_format_html_of_module_django__utils__html( MAKE_ITERATOR( PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_six.asObject0(), _python_str_plain_iteritems ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_kwargs.asObject() ) ) ).asObject() ), _python_var_k, _python_var_v ) ).asObject(), NULL ) );
        }
        frame_guard.setLineNumber( 88 );
        {
            PyObjectTempKeeper0 call9;
            PyObjectTempKeeper1 call_tmp6;
            PyObjectTempKeeper0 call_tmp7;
            return ( call9.assign( _mvar_django__utils__html_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( ( call_tmp6.assign( LOOKUP_ATTRIBUTE( _python_var_format_string.asObject(), _python_str_plain_format ) ), call_tmp7.assign( _python_var_args_safe.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp6.asObject(), call_tmp7.asObject(), _python_var_kwargs_safe.asObject1() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_format_string.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_kwargs_safe.updateLocalsDict( _python_var_args_safe.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_format_html_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_6_format_html_of_module_django__utils__html );
           frame_function_6_format_html_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_format_html_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_format_string = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kwargs = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_kwargs = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kwargs = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "format_html() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwargs, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "format_html() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_kwargs = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kwargs = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "format_html() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwargs, entry->me_key, value );

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
            _python_par_kwargs = PyDict_New();
        }
    }

    // Check if argument format_string was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_format_string );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_format_string == NULL );

            _python_par_format_string = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_format_string );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "format_html() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "format_html() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "format_html() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_format_string != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format_html() got multiple values for keyword argument 'format_string'" );
             goto error_exit;
         }

        _python_par_format_string = INCREASE_REFCOUNT( args[ 0 ] );
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


    return impl_function_6_format_html_of_module_django__utils__html( self, _python_par_format_string, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_format_string );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_6_format_html_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_6_format_html_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_6_format_html_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_6_format_html_of_module_django__utils__html( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_k,PyObjectLocalVariable &python_closure_v )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 86 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 86 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                {
                    frame_guard.setLineNumber( 86 );
                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    python_closure_k.assign0( _python_tmp_element_1.asObject() );
                    python_closure_v.assign0( _python_tmp_element_2.asObject() );
                }
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper0 make_tuple3;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( make_tuple3.assign( python_closure_k.asObject() ), MAKE_TUPLE2( make_tuple3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__utils__html_conditional_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_v.asObject() ) ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_7_format_html_join_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_sep, PyObject *_python_par_format_string, PyObject *_python_par_args_generator )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_sep( _python_str_plain_sep, _python_par_sep );
    PyObjectSharedLocalVariable _python_var_format_string( _python_str_plain_format_string, _python_par_format_string );
    PyObjectLocalParameterVariableNoDel _python_var_args_generator( _python_str_plain_args_generator, _python_par_args_generator );

    // Actual function code.
    static PyFrameObject *frame_function_7_format_html_join_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_7_format_html_join_of_module_django__utils__html ) )
    {
        if ( frame_function_7_format_html_join_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_format_html_join_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_7_format_html_join_of_module_django__utils__html );
        }

        frame_function_7_format_html_join_of_module_django__utils__html = MAKE_FRAME( _codeobj_8bc83381837e2c77c44f772156c07928, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_7_format_html_join_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_7_format_html_join_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 105 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call5;
            return ( call5.assign( _mvar_django__utils__html_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__utils__html_conditional_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_sep.asObject() ) ) ).asObject(), _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( impl_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html( MAKE_ITERATOR( _python_var_args_generator.asObject() ), _python_var_format_string ) ).asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_args_generator.updateLocalsDict( _python_var_format_string.updateLocalsDict( _python_var_sep.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_format_html_join_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_7_format_html_join_of_module_django__utils__html );
           frame_function_7_format_html_join_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_format_html_join_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_sep = NULL;
    PyObject *_python_par_format_string = NULL;
    PyObject *_python_par_args_generator = NULL;
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
                PyErr_Format( PyExc_TypeError, "format_html_join() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_sep == key )
            {
                if (unlikely( _python_par_sep ))
                {
                    PyErr_Format( PyExc_TypeError, "format_html_join() got multiple values for keyword argument 'sep'" );
                    goto error_exit;
                }

                _python_par_sep = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_format_string == key )
            {
                if (unlikely( _python_par_format_string ))
                {
                    PyErr_Format( PyExc_TypeError, "format_html_join() got multiple values for keyword argument 'format_string'" );
                    goto error_exit;
                }

                _python_par_format_string = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_args_generator == key )
            {
                if (unlikely( _python_par_args_generator ))
                {
                    PyErr_Format( PyExc_TypeError, "format_html_join() got multiple values for keyword argument 'args_generator'" );
                    goto error_exit;
                }

                _python_par_args_generator = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sep, key ) )
            {
                if (unlikely( _python_par_sep ))
                {
                    PyErr_Format( PyExc_TypeError, "format_html_join() got multiple values for keyword argument 'sep'" );
                    goto error_exit;
                }

                _python_par_sep = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_format_string, key ) )
            {
                if (unlikely( _python_par_format_string ))
                {
                    PyErr_Format( PyExc_TypeError, "format_html_join() got multiple values for keyword argument 'format_string'" );
                    goto error_exit;
                }

                _python_par_format_string = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_args_generator, key ) )
            {
                if (unlikely( _python_par_args_generator ))
                {
                    PyErr_Format( PyExc_TypeError, "format_html_join() got multiple values for keyword argument 'args_generator'" );
                    goto error_exit;
                }

                _python_par_args_generator = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "format_html_join() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "format_html_join() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "format_html_join() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "format_html_join() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "format_html_join() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "format_html_join() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format_html_join() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "format_html_join() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format_html_join() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "format_html_join() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "format_html_join() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "format_html_join() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "format_html_join() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_sep != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format_html_join() got multiple values for keyword argument 'sep'" );
             goto error_exit;
         }

        _python_par_sep = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_format_string != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format_html_join() got multiple values for keyword argument 'format_string'" );
             goto error_exit;
         }

        _python_par_format_string = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_args_generator != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format_html_join() got multiple values for keyword argument 'args_generator'" );
             goto error_exit;
         }

        _python_par_args_generator = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_7_format_html_join_of_module_django__utils__html( self, _python_par_sep, _python_par_format_string, _python_par_args_generator );

error_exit:;

    Py_XDECREF( _python_par_sep );
    Py_XDECREF( _python_par_format_string );
    Py_XDECREF( _python_par_args_generator );

    return NULL;
}

static PyObject *dparse_function_7_format_html_join_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_7_format_html_join_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_format_html_join_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectClosureVariable python_closure_format_string;
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_args;
};

static void _context_generator_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html_t *_python_context = (struct _context_generator_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_1_of_function_7_format_html_join_of_module_django__utils__html_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html_t *_python_context = (_context_generator_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_args.setVariableName( _python_str_plain_args );

        // Actual function code.
        static PyFrameObject *frame_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html ) )
        {
            if ( frame_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_1_of_function_7_format_html_join_of_module_django__utils__html" );
#endif
                Py_DECREF( frame_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html );
            }

            frame_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html = MAKE_FRAME( _codeobj_30def23eee6ffd87dd116b605105b680, _module_django__utils__html );
        }

        Py_INCREF( frame_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html );
        generator->m_frame = frame_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html;

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
                    frame_guard.setLineNumber( 106 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 106 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_args.assign0( _python_tmp_iter_value.asObject() );
                        {
                            PyObjectTempKeeper0 call_tmp1;
                            PyObjectTempKeeper1 call_tmp2;
                            YIELD_VALUE( generator, ( call_tmp1.assign( _mvar_django__utils__html_format_html.asObject0() ), call_tmp2.assign( MAKE_TUPLE1( _python_context->python_closure_format_string.asObject() ) ), impl_function_5_complex_call_helper_pos_star_list_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), TO_TUPLE( _python_context->python_var_args.asObject() ) ) ) );
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

static PyObject *impl_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html( PyObject *_python_par___iterator, PyObjectSharedLocalVariable &python_closure_format_string )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html_t *_python_context = new _context_generator_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html_t;
    _python_context->python_closure_format_string.shareWith( python_closure_format_string );

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_7_format_html_join_of_module_django__utils__html_context,
            _python_str_angle_genexpr,
            _codeobj_a434032a0df0a48990993cf156da6313,
            _python_context,
            _context_generator_genexpr_1_of_function_7_format_html_join_of_module_django__utils__html_destructor
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


static PyObject *impl_function_8_linebreaks_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_autoescape )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_autoescape( _python_str_plain_autoescape, _python_par_autoescape );
    PyObjectLocalVariable _python_var_paras( _python_str_plain_paras );
    PyObjectLocalVariable _python_var_p( _python_str_plain_p );

    // Actual function code.
    static PyFrameObject *frame_function_8_linebreaks_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_8_linebreaks_of_module_django__utils__html ) )
    {
        if ( frame_function_8_linebreaks_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_linebreaks_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_8_linebreaks_of_module_django__utils__html );
        }

        frame_function_8_linebreaks_of_module_django__utils__html = MAKE_FRAME( _codeobj_079203d55df1e36a10be669a1041993b, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_8_linebreaks_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_8_linebreaks_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 112 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_value.assign1( ( call1.assign( _mvar_django__utils__html_normalize_newlines.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) );
        }
        frame_guard.setLineNumber( 113 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_paras.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_split ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_unicode_digest_ce12478053468584f41f184d93d39335, _python_var_value.asObject() ) ) );
        }
        frame_guard.setLineNumber( 114 );
        if ( CHECK_IF_TRUE( _python_var_autoescape.asObject() ) )
        {
            frame_guard.setLineNumber( 115 );
            _python_var_paras.assign1( impl_listcontr_1_of_function_8_linebreaks_of_module_django__utils__html( MAKE_ITERATOR( _python_var_paras.asObject() ), _python_var_p ) );
        }
        else
        {
            frame_guard.setLineNumber( 117 );
            _python_var_paras.assign1( impl_listcontr_2_of_function_8_linebreaks_of_module_django__utils__html( MAKE_ITERATOR( _python_var_paras.asObject() ), _python_var_p ) );
        }
        frame_guard.setLineNumber( 118 );
        {
            PyObjectTempKeeper1 call6;
            return ( call6.assign( LOOKUP_ATTRIBUTE( _python_unicode_digest_e1c06d85ae7b8b032bef47e42e4c08f9, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_paras.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_autoescape.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_paras.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_linebreaks_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_8_linebreaks_of_module_django__utils__html );
           frame_function_8_linebreaks_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_linebreaks_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_autoescape = NULL;
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
                PyErr_Format( PyExc_TypeError, "linebreaks() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "linebreaks() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_autoescape == key )
            {
                if (unlikely( _python_par_autoescape ))
                {
                    PyErr_Format( PyExc_TypeError, "linebreaks() got multiple values for keyword argument 'autoescape'" );
                    goto error_exit;
                }

                _python_par_autoescape = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "linebreaks() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_autoescape, key ) )
            {
                if (unlikely( _python_par_autoescape ))
                {
                    PyErr_Format( PyExc_TypeError, "linebreaks() got multiple values for keyword argument 'autoescape'" );
                    goto error_exit;
                }

                _python_par_autoescape = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "linebreaks() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "linebreaks() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "linebreaks() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "linebreaks() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "linebreaks() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "linebreaks() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "linebreaks() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "linebreaks() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "linebreaks() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "linebreaks() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "linebreaks() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "linebreaks() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "linebreaks() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "linebreaks() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_autoescape != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "linebreaks() got multiple values for keyword argument 'autoescape'" );
             goto error_exit;
         }

        _python_par_autoescape = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_autoescape == NULL )
    {
        _python_par_autoescape = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_autoescape );
    }


    return impl_function_8_linebreaks_of_module_django__utils__html( self, _python_par_value, _python_par_autoescape );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_autoescape );

    return NULL;
}

static PyObject *dparse_function_8_linebreaks_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8_linebreaks_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_linebreaks_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_8_linebreaks_of_module_django__utils__html( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_p )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 115 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 115 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_p.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_4857fe53b12b49f9aa97a18f750cf5f6, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__utils__html_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_p.asObject() ) ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_10, _python_unicode_digest_9039450fb67fb8056e940a1e173fdf51 ) ).asObject() ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_8_linebreaks_of_module_django__utils__html( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_p )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 117 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 117 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_p.assign0( _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_4857fe53b12b49f9aa97a18f750cf5f6, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_p.asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_10, _python_unicode_digest_9039450fb67fb8056e940a1e173fdf51 ) ).asObject() ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_class_9_MLStripper_of_module_django__utils__html(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_handle_data( _python_str_plain_handle_data );
    PyObjectLocalVariable _python_var_handle_entityref( _python_str_plain_handle_entityref );
    PyObjectLocalVariable _python_var_handle_charref( _python_str_plain_handle_charref );
    PyObjectLocalVariable _python_var_get_data( _python_str_plain_get_data );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_html );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_9_MLStripper_of_module_django__utils__html(  ) );
    _python_var_handle_data.assign1( MAKE_FUNCTION_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html(  ) );
    _python_var_handle_entityref.assign1( MAKE_FUNCTION_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html(  ) );
    _python_var_handle_charref.assign1( MAKE_FUNCTION_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html(  ) );
    _python_var_get_data.assign1( MAKE_FUNCTION_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html(  ) );
    return _python_var_get_data.updateLocalsDict( _python_var_handle_charref.updateLocalsDict( _python_var_handle_entityref.updateLocalsDict( _python_var_handle_data.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_9_MLStripper_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_9_MLStripper_of_module_django__utils__html ) )
    {
        if ( frame_function_1___init___of_class_9_MLStripper_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_9_MLStripper_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_1___init___of_class_9_MLStripper_of_module_django__utils__html );
        }

        frame_function_1___init___of_class_9_MLStripper_of_module_django__utils__html = MAKE_FRAME( _codeobj_683c46e3082fb1e5ee9f4ae9805e976c, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_9_MLStripper_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_9_MLStripper_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 124 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_HTMLParser.asObject0(), _python_str_plain___init__ ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_self.asObject() ) ) );
        }
        frame_guard.setLineNumber( 125 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_reset ) ).asObject() ) );
        frame_guard.setLineNumber( 126 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain_fed );
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

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_9_MLStripper_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_1___init___of_class_9_MLStripper_of_module_django__utils__html );
           frame_function_1___init___of_class_9_MLStripper_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___init___of_class_9_MLStripper_of_module_django__utils__html( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___init___of_class_9_MLStripper_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_9_MLStripper_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_d )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_d( _python_str_plain_d, _python_par_d );

    // Actual function code.
    static PyFrameObject *frame_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html ) )
    {
        if ( frame_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html );
        }

        frame_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html = MAKE_FRAME( _codeobj_b8c6f4c0a5385f107fa26631ef8f1593, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 128 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_fed ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_d.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_d.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html );
           frame_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_d = NULL;
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
                PyErr_Format( PyExc_TypeError, "handle_data() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "handle_data() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_d == key )
            {
                if (unlikely( _python_par_d ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_data() got multiple values for keyword argument 'd'" );
                    goto error_exit;
                }

                _python_par_d = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_data() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_d, key ) )
            {
                if (unlikely( _python_par_d ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_data() got multiple values for keyword argument 'd'" );
                    goto error_exit;
                }

                _python_par_d = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "handle_data() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "handle_data() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "handle_data() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "handle_data() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_data() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "handle_data() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_data() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "handle_data() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_data() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "handle_data() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle_data() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "handle_data() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "handle_data() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "handle_data() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_d != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_data() got multiple values for keyword argument 'd'" );
             goto error_exit;
         }

        _python_par_d = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html( self, _python_par_self, _python_par_d );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_d );

    return NULL;
}

static PyObject *dparse_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html ) )
    {
        if ( frame_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html );
        }

        frame_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html = MAKE_FRAME( _codeobj_f845c748fac80f58ecf180f5a8a66a2f, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 130 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_fed ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_9da595b5afbde7bb094dcc844e446e1a, _python_var_name.asObject() ) ).asObject() ) ) );
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

        if ( frame_guard.getFrame0() == frame_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html );
           frame_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "handle_entityref() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "handle_entityref() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "handle_entityref() got multiple values for keyword argument 'name'" );
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
                    PyErr_Format( PyExc_TypeError, "handle_entityref() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "handle_entityref() got multiple values for keyword argument 'name'" );
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
                   "handle_entityref() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "handle_entityref() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "handle_entityref() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "handle_entityref() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_entityref() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "handle_entityref() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_entityref() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "handle_entityref() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_entityref() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "handle_entityref() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle_entityref() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "handle_entityref() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "handle_entityref() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "handle_entityref() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_entityref() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html ) )
    {
        if ( frame_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html );
        }

        frame_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html = MAKE_FRAME( _codeobj_05f72c91842a7a289527668da62d0da2, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 132 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_fed ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_678b8346e6e286abdf3da0425265f8aa, _python_var_name.asObject() ) ).asObject() ) ) );
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

        if ( frame_guard.getFrame0() == frame_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html );
           frame_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "handle_charref() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "handle_charref() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "handle_charref() got multiple values for keyword argument 'name'" );
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
                    PyErr_Format( PyExc_TypeError, "handle_charref() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "handle_charref() got multiple values for keyword argument 'name'" );
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
                   "handle_charref() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "handle_charref() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "handle_charref() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "handle_charref() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_charref() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "handle_charref() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_charref() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "handle_charref() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_charref() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "handle_charref() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle_charref() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "handle_charref() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "handle_charref() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "handle_charref() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_charref() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html ) )
    {
        if ( frame_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html );
        }

        frame_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html = MAKE_FRAME( _codeobj_7426e5f6f15957fece4b50d8fe7d40e2, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 134 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_fed ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html );
           frame_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_data() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_data() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_data() got multiple values for keyword argument 'self'" );
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
                   "get_data() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_data() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_data() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_data() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_data() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_data() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_data() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_data() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_data() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_data() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_data() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_data() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_data() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_data() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_strip_tags_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalVariable _python_var_s( _python_str_plain_s );

    // Actual function code.
    static PyFrameObject *frame_function_10_strip_tags_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_10_strip_tags_of_module_django__utils__html ) )
    {
        if ( frame_function_10_strip_tags_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_strip_tags_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_10_strip_tags_of_module_django__utils__html );
        }

        frame_function_10_strip_tags_of_module_django__utils__html = MAKE_FRAME( _codeobj_06172cc0ea28d768e847510769c9c5b9, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_10_strip_tags_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_10_strip_tags_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 138 );
        _python_var_s.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__html_MLStripper.asObject0() ) );
        {
            PyObject *_python_tmp_unhandled_indicator = Py_True;
            frame_guard.setLineNumber( 139 );
            try
            {
                frame_guard.setLineNumber( 140 );
                {
                    PyObjectTempKeeper1 call1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_feed ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) );
                }
                frame_guard.setLineNumber( 141 );
                DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_close ) ).asObject() ) );
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

                if ( _exception.matches( _mvar_django__utils__html_HTMLParseError.asObject0() ) )
                {
                    frame_guard.detachFrame();
                    _python_tmp_unhandled_indicator = Py_False;
                    frame_guard.setLineNumber( 143 );
                    return _python_var_value.asObject1();
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
                frame_guard.setLineNumber( 145 );
                return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_get_data ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_s.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_10_strip_tags_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_10_strip_tags_of_module_django__utils__html );
           frame_function_10_strip_tags_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_10_strip_tags_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "strip_tags() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "strip_tags() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "strip_tags() got multiple values for keyword argument 'value'" );
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
                   "strip_tags() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "strip_tags() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "strip_tags() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "strip_tags() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "strip_tags() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "strip_tags() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "strip_tags() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "strip_tags() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "strip_tags() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "strip_tags() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "strip_tags() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "strip_tags() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "strip_tags() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "strip_tags() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_10_strip_tags_of_module_django__utils__html( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_10_strip_tags_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_10_strip_tags_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_strip_tags_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_remove_tags_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_html, PyObject *_python_par_tags )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_html( _python_str_plain_html, _python_par_html );
    PyObjectLocalParameterVariableNoDel _python_var_tags( _python_str_plain_tags, _python_par_tags );
    PyObjectLocalVariable _python_var_tags_re( _python_str_plain_tags_re );
    PyObjectLocalVariable _python_var_starttag_re( _python_str_plain_starttag_re );
    PyObjectLocalVariable _python_var_endtag_re( _python_str_plain_endtag_re );
    PyObjectLocalVariable _python_var_tag( _python_str_plain_tag );

    // Actual function code.
    static PyFrameObject *frame_function_11_remove_tags_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_11_remove_tags_of_module_django__utils__html ) )
    {
        if ( frame_function_11_remove_tags_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_remove_tags_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_11_remove_tags_of_module_django__utils__html );
        }

        frame_function_11_remove_tags_of_module_django__utils__html = MAKE_FRAME( _codeobj_6855cddd3862d4802a8afb75b1a765d1, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_11_remove_tags_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_11_remove_tags_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 150 );
        _python_var_tags.assign1( impl_listcontr_1_of_function_11_remove_tags_of_module_django__utils__html( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tags.asObject(), _python_str_plain_split ) ).asObject() ) ).asObject() ), _python_var_tag ) );
        frame_guard.setLineNumber( 151 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_tags_re.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_614103b76fd0d9de068d69034fb6f987, PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_unicode_chr_124, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_tags.asObject() ) ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 152 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 call4;
            _python_var_starttag_re.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_compile ) ), call4.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_ffdd8ebd38c6b4b3b5a13ceef689ac76, _python_var_tags_re.asObject() ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_U ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 153 );
        {
            PyObjectTempKeeper1 call6;
            _python_var_endtag_re.assign1( ( call6.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_compile ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_38101f147fd8d0d608ecb4be0167996e, _python_var_tags_re.asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 154 );
        {
            PyObjectTempKeeper1 call8;
            _python_var_html.assign1( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_starttag_re.asObject(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_unicode_empty, _python_var_html.asObject() ) ) );
        }
        frame_guard.setLineNumber( 155 );
        {
            PyObjectTempKeeper1 call11;
            _python_var_html.assign1( ( call11.assign( LOOKUP_ATTRIBUTE( _python_var_endtag_re.asObject(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_unicode_empty, _python_var_html.asObject() ) ) );
        }
        frame_guard.setLineNumber( 156 );
        return _python_var_html.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_tags.updateLocalsDict( _python_var_html.updateLocalsDict( _python_var_tag.updateLocalsDict( _python_var_endtag_re.updateLocalsDict( _python_var_starttag_re.updateLocalsDict( _python_var_tags_re.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_11_remove_tags_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_11_remove_tags_of_module_django__utils__html );
           frame_function_11_remove_tags_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_remove_tags_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_html = NULL;
    PyObject *_python_par_tags = NULL;
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
                PyErr_Format( PyExc_TypeError, "remove_tags() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_html == key )
            {
                if (unlikely( _python_par_html ))
                {
                    PyErr_Format( PyExc_TypeError, "remove_tags() got multiple values for keyword argument 'html'" );
                    goto error_exit;
                }

                _python_par_html = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_tags == key )
            {
                if (unlikely( _python_par_tags ))
                {
                    PyErr_Format( PyExc_TypeError, "remove_tags() got multiple values for keyword argument 'tags'" );
                    goto error_exit;
                }

                _python_par_tags = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_html, key ) )
            {
                if (unlikely( _python_par_html ))
                {
                    PyErr_Format( PyExc_TypeError, "remove_tags() got multiple values for keyword argument 'html'" );
                    goto error_exit;
                }

                _python_par_html = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_tags, key ) )
            {
                if (unlikely( _python_par_tags ))
                {
                    PyErr_Format( PyExc_TypeError, "remove_tags() got multiple values for keyword argument 'tags'" );
                    goto error_exit;
                }

                _python_par_tags = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "remove_tags() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "remove_tags() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "remove_tags() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "remove_tags() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "remove_tags() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "remove_tags() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "remove_tags() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "remove_tags() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "remove_tags() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "remove_tags() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "remove_tags() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "remove_tags() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "remove_tags() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_html != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "remove_tags() got multiple values for keyword argument 'html'" );
             goto error_exit;
         }

        _python_par_html = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_tags != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "remove_tags() got multiple values for keyword argument 'tags'" );
             goto error_exit;
         }

        _python_par_tags = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_11_remove_tags_of_module_django__utils__html( self, _python_par_html, _python_par_tags );

error_exit:;

    Py_XDECREF( _python_par_html );
    Py_XDECREF( _python_par_tags );

    return NULL;
}

static PyObject *dparse_function_11_remove_tags_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_11_remove_tags_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_remove_tags_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_11_remove_tags_of_module_django__utils__html( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_tag )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 150 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 150 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_tag.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_escape ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_tag.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_12_strip_spaces_between_tags_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_12_strip_spaces_between_tags_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_12_strip_spaces_between_tags_of_module_django__utils__html ) )
    {
        if ( frame_function_12_strip_spaces_between_tags_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_strip_spaces_between_tags_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_12_strip_spaces_between_tags_of_module_django__utils__html );
        }

        frame_function_12_strip_spaces_between_tags_of_module_django__utils__html = MAKE_FRAME( _codeobj_d7eccf5d0bac29d3c416eeb82f13c9be, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_12_strip_spaces_between_tags_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_12_strip_spaces_between_tags_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 161 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_unicode_digest_eaa5d0ef9ee95e98ec53dfa602e43103, _python_unicode_digest_cda787d1c365702b3fe67533cbfaa7fd, PyObjectTemporary( ( call1.assign( _mvar_django__utils__html_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_12_strip_spaces_between_tags_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_12_strip_spaces_between_tags_of_module_django__utils__html );
           frame_function_12_strip_spaces_between_tags_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_12_strip_spaces_between_tags_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() got multiple values for keyword argument 'value'" );
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
                   "strip_spaces_between_tags() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "strip_spaces_between_tags() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_12_strip_spaces_between_tags_of_module_django__utils__html( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_12_strip_spaces_between_tags_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_12_strip_spaces_between_tags_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_strip_spaces_between_tags_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_strip_entities_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_13_strip_entities_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_13_strip_entities_of_module_django__utils__html ) )
    {
        if ( frame_function_13_strip_entities_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_strip_entities_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_13_strip_entities_of_module_django__utils__html );
        }

        frame_function_13_strip_entities_of_module_django__utils__html = MAKE_FRAME( _codeobj_f0fc2df6ebab355632e40307c2fda024, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_13_strip_entities_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_13_strip_entities_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 166 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_unicode_digest_7d0e177c2b4c52697bbbb890cde1caa0, _python_unicode_empty, PyObjectTemporary( ( call1.assign( _mvar_django__utils__html_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_13_strip_entities_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_13_strip_entities_of_module_django__utils__html );
           frame_function_13_strip_entities_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_strip_entities_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "strip_entities() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "strip_entities() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "strip_entities() got multiple values for keyword argument 'value'" );
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
                   "strip_entities() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "strip_entities() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "strip_entities() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "strip_entities() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "strip_entities() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "strip_entities() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "strip_entities() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "strip_entities() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "strip_entities() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "strip_entities() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "strip_entities() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "strip_entities() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "strip_entities() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "strip_entities() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_13_strip_entities_of_module_django__utils__html( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_13_strip_entities_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_13_strip_entities_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_strip_entities_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_fix_ampersands_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_14_fix_ampersands_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_14_fix_ampersands_of_module_django__utils__html ) )
    {
        if ( frame_function_14_fix_ampersands_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14_fix_ampersands_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_14_fix_ampersands_of_module_django__utils__html );
        }

        frame_function_14_fix_ampersands_of_module_django__utils__html = MAKE_FRAME( _codeobj_37b438acda986fdefcf65fb001eb21c0, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_14_fix_ampersands_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_14_fix_ampersands_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 171 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_unencoded_ampersands_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_unicode_digest_c2249209343ab488c055da76368f04a0, PyObjectTemporary( ( call1.assign( _mvar_django__utils__html_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_14_fix_ampersands_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_14_fix_ampersands_of_module_django__utils__html );
           frame_function_14_fix_ampersands_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_14_fix_ampersands_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "fix_ampersands() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "fix_ampersands() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "fix_ampersands() got multiple values for keyword argument 'value'" );
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
                   "fix_ampersands() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "fix_ampersands() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "fix_ampersands() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "fix_ampersands() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "fix_ampersands() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "fix_ampersands() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fix_ampersands() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "fix_ampersands() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fix_ampersands() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "fix_ampersands() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "fix_ampersands() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "fix_ampersands() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "fix_ampersands() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "fix_ampersands() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_14_fix_ampersands_of_module_django__utils__html( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_14_fix_ampersands_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_14_fix_ampersands_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_fix_ampersands_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_smart_urlquote_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_url )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_url( _python_str_plain_url, _python_par_url );
    PyObjectLocalVariable _python_var_scheme( _python_str_plain_scheme );
    PyObjectLocalVariable _python_var_netloc( _python_str_plain_netloc );
    PyObjectLocalVariable _python_var_path( _python_str_plain_path );
    PyObjectLocalVariable _python_var_query( _python_str_plain_query );
    PyObjectLocalVariable _python_var_fragment( _python_str_plain_fragment );

    // Actual function code.
    static PyFrameObject *frame_function_15_smart_urlquote_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_15_smart_urlquote_of_module_django__utils__html ) )
    {
        if ( frame_function_15_smart_urlquote_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_smart_urlquote_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_15_smart_urlquote_of_module_django__utils__html );
        }

        frame_function_15_smart_urlquote_of_module_django__utils__html = MAKE_FRAME( _codeobj_d01a1beba46820846e2390d8740f1505, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_15_smart_urlquote_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_15_smart_urlquote_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 177 );
        try
        {
            {
                frame_guard.setLineNumber( 178 );
                PyObject *_tmp_python_tmp_source_iter;
                {
                    PyObjectTempKeeper0 call1;
                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( _mvar_django__utils__html_urlsplit.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_url.asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                PyObjectTemporary _python_tmp_element_4( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 3 ) );
                PyObjectTemporary _python_tmp_element_5( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 4 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 5 );
                _python_var_scheme.assign0( _python_tmp_element_1.asObject() );
                _python_var_netloc.assign0( _python_tmp_element_2.asObject() );
                _python_var_path.assign0( _python_tmp_element_3.asObject() );
                _python_var_query.assign0( _python_tmp_element_4.asObject() );
                _python_var_fragment.assign0( _python_tmp_element_5.asObject() );
            }
            {
                PyObject *_python_tmp_unhandled_indicator = Py_True;
                frame_guard.setLineNumber( 179 );
                try
                {
                    frame_guard.setLineNumber( 180 );
                    _python_var_netloc.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_netloc.asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_plain_idna ) ).asObject(), _python_str_plain_decode ) ).asObject(), _python_unicode_plain_ascii ) );
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

                    if ( _exception.matches( PyExc_UnicodeError ) )
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
                    frame_guard.setLineNumber( 184 );
                    {
                        PyObjectTempKeeper0 call8;
                        PyObjectTempKeeper0 make_tuple3;
                        PyObjectTempKeeper0 make_tuple4;
                        PyObjectTempKeeper0 make_tuple5;
                        PyObjectTempKeeper0 make_tuple6;
                        _python_var_url.assign1( ( call8.assign( _mvar_django__utils__html_urlunsplit.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( ( make_tuple3.assign( _python_var_scheme.asObject() ), make_tuple4.assign( _python_var_netloc.asObject() ), make_tuple5.assign( _python_var_path.asObject() ), make_tuple6.assign( _python_var_query.asObject() ), MAKE_TUPLE5( make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), make_tuple6.asObject0(), _python_var_fragment.asObject() ) ) ).asObject() ) ) );
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

            if ( _exception.matches( PyExc_ValueError ) )
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
        frame_guard.setLineNumber( 191 );
        {
            PyObjectTempKeeper1 call15;
            if ( ( SEQUENCE_CONTAINS_NOT_BOOL( _python_unicode_chr_37, _python_var_url.asObject() ) || CHECK_IF_TRUE( PyObjectTemporary( ( call15.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_unquoted_percents_re.asObject0(), _python_str_plain_search ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_var_url.asObject() ) ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 193 );
            {
                PyObjectTempKeeper0 call10;
                PyObjectTempKeeper0 call12;
                _python_var_url.assign1( ( call12.assign( _mvar_django__utils__html_quote.asObject0() ), CALL_FUNCTION( call12.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( ( call10.assign( _mvar_django__utils__html_force_bytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_url.asObject() ) ) ).asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_894dafb8405c0627951ced0b55cb4bfb ) ).asObject() ) ) );
            }
        }
        }
        frame_guard.setLineNumber( 195 );
        {
            PyObjectTempKeeper0 call17;
            return ( call17.assign( _mvar_django__utils__html_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_var_url.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_url.updateLocalsDict( _python_var_fragment.updateLocalsDict( _python_var_query.updateLocalsDict( _python_var_path.updateLocalsDict( _python_var_netloc.updateLocalsDict( _python_var_scheme.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_15_smart_urlquote_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_15_smart_urlquote_of_module_django__utils__html );
           frame_function_15_smart_urlquote_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_15_smart_urlquote_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_url = NULL;
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
                PyErr_Format( PyExc_TypeError, "smart_urlquote() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_url == key )
            {
                if (unlikely( _python_par_url ))
                {
                    PyErr_Format( PyExc_TypeError, "smart_urlquote() got multiple values for keyword argument 'url'" );
                    goto error_exit;
                }

                _python_par_url = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_url, key ) )
            {
                if (unlikely( _python_par_url ))
                {
                    PyErr_Format( PyExc_TypeError, "smart_urlquote() got multiple values for keyword argument 'url'" );
                    goto error_exit;
                }

                _python_par_url = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "smart_urlquote() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "smart_urlquote() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "smart_urlquote() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "smart_urlquote() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "smart_urlquote() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "smart_urlquote() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "smart_urlquote() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "smart_urlquote() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "smart_urlquote() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "smart_urlquote() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "smart_urlquote() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "smart_urlquote() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "smart_urlquote() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_url != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "smart_urlquote() got multiple values for keyword argument 'url'" );
             goto error_exit;
         }

        _python_par_url = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_15_smart_urlquote_of_module_django__utils__html( self, _python_par_url );

error_exit:;

    Py_XDECREF( _python_par_url );

    return NULL;
}

static PyObject *dparse_function_15_smart_urlquote_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_15_smart_urlquote_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_smart_urlquote_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_urlize_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_text, PyObject *_python_par_trim_url_limit, PyObject *_python_par_nofollow, PyObject *_python_par_autoescape )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );
    PyObjectLocalParameterVariableNoDel _python_var_trim_url_limit( _python_str_plain_trim_url_limit, _python_par_trim_url_limit );
    PyObjectLocalParameterVariableNoDel _python_var_nofollow( _python_str_plain_nofollow, _python_par_nofollow );
    PyObjectLocalParameterVariableNoDel _python_var_autoescape( _python_str_plain_autoescape, _python_par_autoescape );
    PyObjectLocalVariable _python_var_trim_url( _python_str_plain_trim_url );
    PyObjectLocalVariable _python_var_safe_input( _python_str_plain_safe_input );
    PyObjectLocalVariable _python_var_words( _python_str_plain_words );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_word( _python_str_plain_word );
    PyObjectLocalVariable _python_var_match( _python_str_plain_match );
    PyObjectLocalVariable _python_var_lead( _python_str_plain_lead );
    PyObjectLocalVariable _python_var_middle( _python_str_plain_middle );
    PyObjectLocalVariable _python_var_trail( _python_str_plain_trail );
    PyObjectLocalVariable _python_var_punctuation( _python_str_plain_punctuation );
    PyObjectLocalVariable _python_var_opening( _python_str_plain_opening );
    PyObjectLocalVariable _python_var_closing( _python_str_plain_closing );
    PyObjectLocalVariable _python_var_url( _python_str_plain_url );
    PyObjectLocalVariable _python_var_nofollow_attr( _python_str_plain_nofollow_attr );
    PyObjectLocalVariable _python_var_local( _python_str_plain_local );
    PyObjectLocalVariable _python_var_domain( _python_str_plain_domain );
    PyObjectLocalVariable _python_var_trimmed( _python_str_plain_trimmed );

    // Actual function code.
    static PyFrameObject *frame_function_16_urlize_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_16_urlize_of_module_django__utils__html ) )
    {
        if ( frame_function_16_urlize_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16_urlize_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_16_urlize_of_module_django__utils__html );
        }

        frame_function_16_urlize_of_module_django__utils__html = MAKE_FRAME( _codeobj_90e1611e5bbd58351eafdbcce4441a60, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_16_urlize_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_16_urlize_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 214 );
        _python_var_trim_url.assign1( MAKE_FUNCTION_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html( MAKE_TUPLE1( _python_var_trim_url_limit.asObject() ) ) );
        frame_guard.setLineNumber( 218 );
        {
            PyObjectTempKeeper0 isinstance1;
            _python_var_safe_input.assign0( BOOL_FROM( ( isinstance1.assign( _python_var_text.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), _mvar_django__utils__html_SafeData.asObject0() ) ) ) );
        }
        frame_guard.setLineNumber( 219 );
        {
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper1 call5;
            _python_var_words.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_word_split_re.asObject0(), _python_str_plain_split ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( _mvar_django__utils__html_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_text.asObject() ) ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 220 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), _python_var_words.asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 220 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 220 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_i.assign0( _python_tmp_element_1.asObject() );
                        _python_var_word.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                _python_var_match.assign0( Py_None );
                frame_guard.setLineNumber( 222 );
                if ( ( SEQUENCE_CONTAINS_BOOL( _python_unicode_dot, _python_var_word.asObject() ) || ( SEQUENCE_CONTAINS_BOOL( _python_unicode_chr_64, _python_var_word.asObject() ) || SEQUENCE_CONTAINS_BOOL( _python_unicode_chr_58, _python_var_word.asObject() ) ) ) )
                {
                    {
                        frame_guard.setLineNumber( 224 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( MAKE_TUPLE3( _python_unicode_empty, _python_var_word.asObject(), _python_unicode_empty ) ).asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                        _python_var_lead.assign0( _python_tmp_element_1.asObject() );
                        _python_var_middle.assign0( _python_tmp_element_2.asObject() );
                        _python_var_trail.assign0( _python_tmp_element_3.asObject() );
                    }
                    {
                        frame_guard.setLineNumber( 225 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _mvar_django__utils__html_TRAILING_PUNCTUATION.asObject0() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 225 );
                                PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_2 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                _python_var_punctuation.assign0( _python_tmp_iter_value.asObject() );
                            }
                            frame_guard.setLineNumber( 226 );
                            {
                                PyObjectTempKeeper1 call12;
                                if ( CHECK_IF_TRUE( PyObjectTemporary( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_middle.asObject(), _python_str_plain_endswith ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_var_punctuation.asObject() ) ) ).asObject() ) )
                            {
                                frame_guard.setLineNumber( 227 );
                                {
                                    PyObjectTempKeeper0 slice7;
                                    _python_var_middle.assign1( ( slice7.assign( _python_var_middle.asObject() ), LOOKUP_SLICE( slice7.asObject0(), Py_None, PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, PyObjectTemporary( BUILTIN_LEN( _python_var_punctuation.asObject() ) ).asObject() ) ).asObject() ) ) );
                                }
                                frame_guard.setLineNumber( 228 );
                                {
                                    PyObjectTempKeeper0 op10;
                                    _python_var_trail.assign1( ( op10.assign( _python_var_punctuation.asObject() ), BINARY_OPERATION_ADD( op10.asObject0(), _python_var_trail.asObject() ) ) );
                                }
                            }
                            }

                           CONSIDER_THREADING();
                        }
                    }
                    {
                        frame_guard.setLineNumber( 229 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _mvar_django__utils__html_WRAPPING_PUNCTUATION.asObject0() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 229 );
                                PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_3 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                                {
                                    frame_guard.setLineNumber( 229 );
                                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                    _python_var_opening.assign0( _python_tmp_element_1.asObject() );
                                    _python_var_closing.assign0( _python_tmp_element_2.asObject() );
                                }
                            }
                            frame_guard.setLineNumber( 230 );
                            {
                                PyObjectTempKeeper1 call19;
                                if ( CHECK_IF_TRUE( PyObjectTemporary( ( call19.assign( LOOKUP_ATTRIBUTE( _python_var_middle.asObject(), _python_str_plain_startswith ) ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), _python_var_opening.asObject() ) ) ).asObject() ) )
                            {
                                frame_guard.setLineNumber( 231 );
                                {
                                    PyObjectTempKeeper0 slice14;
                                    _python_var_middle.assign1( ( slice14.assign( _python_var_middle.asObject() ), LOOKUP_SLICE( slice14.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_opening.asObject() ) ).asObject(), Py_None ) ) );
                                }
                                frame_guard.setLineNumber( 232 );
                                {
                                    PyObjectTempKeeper0 op17;
                                    _python_var_lead.assign1( ( op17.assign( _python_var_lead.asObject() ), BINARY_OPERATION_ADD( op17.asObject0(), _python_var_opening.asObject() ) ) );
                                }
                            }
                            }
                            frame_guard.setLineNumber( 234 );
                            {
                                PyObjectTempKeeper1 call26;
                                PyObjectTempKeeper1 call28;
                                PyObjectTempKeeper1 call30;
                                PyObjectTempKeeper1 cmp32;
                                if ( ( CHECK_IF_TRUE( PyObjectTemporary( ( call26.assign( LOOKUP_ATTRIBUTE( _python_var_middle.asObject(), _python_str_plain_endswith ) ), CALL_FUNCTION_WITH_ARGS( call26.asObject0(), _python_var_closing.asObject() ) ) ).asObject() ) && ( cmp32.assign( ( call28.assign( LOOKUP_ATTRIBUTE( _python_var_middle.asObject(), _python_str_plain_count ) ), CALL_FUNCTION_WITH_ARGS( call28.asObject0(), _python_var_closing.asObject() ) ) ), RICH_COMPARE_BOOL_EQ( cmp32.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( call30.assign( LOOKUP_ATTRIBUTE( _python_var_middle.asObject(), _python_str_plain_count ) ), CALL_FUNCTION_WITH_ARGS( call30.asObject0(), _python_var_opening.asObject() ) ) ).asObject(), _python_int_pos_1 ) ).asObject() ) ) ) )
                            {
                                frame_guard.setLineNumber( 236 );
                                {
                                    PyObjectTempKeeper0 slice21;
                                    _python_var_middle.assign1( ( slice21.assign( _python_var_middle.asObject() ), LOOKUP_SLICE( slice21.asObject0(), Py_None, PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, PyObjectTemporary( BUILTIN_LEN( _python_var_closing.asObject() ) ).asObject() ) ).asObject() ) ) );
                                }
                                frame_guard.setLineNumber( 237 );
                                {
                                    PyObjectTempKeeper0 op24;
                                    _python_var_trail.assign1( ( op24.assign( _python_var_closing.asObject() ), BINARY_OPERATION_ADD( op24.asObject0(), _python_var_trail.asObject() ) ) );
                                }
                            }
                            }

                           CONSIDER_THREADING();
                        }
                    }
                    _python_var_url.assign0( Py_None );
                    frame_guard.setLineNumber( 241 );
                    _python_var_nofollow_attr.assign0( ( CHECK_IF_TRUE( _python_var_nofollow.asObject() ) ? _python_unicode_digest_2fe812d264b7b8e5286a4a78696f82f5 : _python_unicode_empty ) );
                    frame_guard.setLineNumber( 242 );
                    {
                        PyObjectTempKeeper1 call44;
                        if ( CHECK_IF_TRUE( PyObjectTemporary( ( call44.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_simple_url_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call44.asObject0(), _python_var_middle.asObject() ) ) ).asObject() ) )
                    {
                        frame_guard.setLineNumber( 243 );
                        {
                            PyObjectTempKeeper0 call34;
                            _python_var_url.assign1( ( call34.assign( _mvar_django__utils__html_smart_urlquote.asObject0() ), CALL_FUNCTION_WITH_ARGS( call34.asObject0(), _python_var_middle.asObject() ) ) );
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 244 );
                        {
                            PyObjectTempKeeper1 call42;
                            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call42.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_simple_url_2_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call42.asObject0(), _python_var_middle.asObject() ) ) ).asObject() ) )
                        {
                            frame_guard.setLineNumber( 245 );
                            {
                                PyObjectTempKeeper0 call36;
                                _python_var_url.assign1( ( call36.assign( _mvar_django__utils__html_smart_urlquote.asObject0() ), CALL_FUNCTION_WITH_ARGS( call36.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_695188326b6b924bb791ddf6bac71ba0, _python_var_middle.asObject() ) ).asObject() ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 246 );
                            {
                                PyObjectTempKeeper1 call40;
                                if ( ( SEQUENCE_CONTAINS_NOT_BOOL( _python_unicode_chr_58, _python_var_middle.asObject() ) && CHECK_IF_TRUE( PyObjectTemporary( ( call40.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_simple_email_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call40.asObject0(), _python_var_middle.asObject() ) ) ).asObject() ) ) )
                            {
                                {
                                    frame_guard.setLineNumber( 247 );
                                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_middle.asObject(), _python_str_plain_rsplit ) ).asObject(), _python_unicode_chr_64, _python_int_pos_1 ) ).asObject() ) );
                                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                    _python_var_local.assign0( _python_tmp_element_1.asObject() );
                                    _python_var_domain.assign0( _python_tmp_element_2.asObject() );
                                }
                                frame_guard.setLineNumber( 248 );
                                try
                                {
                                    frame_guard.setLineNumber( 249 );
                                    _python_var_domain.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_domain.asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_plain_idna ) ).asObject(), _python_str_plain_decode ) ).asObject(), _python_unicode_plain_ascii ) );
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

                                    if ( _exception.matches( PyExc_UnicodeError ) )
                                    {
                                        frame_guard.detachFrame();
                                        frame_guard.setLineNumber( 251 );
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
                                frame_guard.setLineNumber( 252 );
                                {
                                    PyObjectTempKeeper0 make_tuple38;
                                    _python_var_url.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_8c104a3457b518217a2513e9ae21c9d4, PyObjectTemporary( ( make_tuple38.assign( _python_var_local.asObject() ), MAKE_TUPLE2( make_tuple38.asObject0(), _python_var_domain.asObject() ) ) ).asObject() ) );
                                }
                                _python_var_nofollow_attr.assign0( _python_unicode_empty );
                            }
                            }
                        }
                        }
                    }
                    }
                    frame_guard.setLineNumber( 256 );
                    if ( CHECK_IF_TRUE( _python_var_url.asObject() ) )
                    {
                        frame_guard.setLineNumber( 257 );
                        {
                            PyObjectTempKeeper0 call46;
                            _python_var_trimmed.assign1( ( call46.assign( _python_var_trim_url.asObject() ), CALL_FUNCTION_WITH_ARGS( call46.asObject0(), _python_var_middle.asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 258 );
                        if ( ( CHECK_IF_TRUE( _python_var_autoescape.asObject() ) && (!( CHECK_IF_TRUE( _python_var_safe_input.asObject() ) )) ) )
                        {
                            {
                                frame_guard.setLineNumber( 259 );
                                PyObject *_tmp_python_tmp_source_iter;
                                {
                                    PyObjectTempKeeper0 call48;
                                    PyObjectTempKeeper0 call50;
                                    PyObjectTempKeeper1 make_tuple52;
                                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple52.assign( ( call48.assign( _mvar_django__utils__html_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call48.asObject0(), _python_var_lead.asObject() ) ) ), MAKE_TUPLE2( make_tuple52.asObject0(), PyObjectTemporary( ( call50.assign( _mvar_django__utils__html_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call50.asObject0(), _python_var_trail.asObject() ) ) ).asObject() ) ) ).asObject() );
                                }
                                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                _python_var_lead.assign0( _python_tmp_element_1.asObject() );
                                _python_var_trail.assign0( _python_tmp_element_2.asObject() );
                            }
                            {
                                frame_guard.setLineNumber( 260 );
                                PyObject *_tmp_python_tmp_source_iter;
                                {
                                    PyObjectTempKeeper0 call54;
                                    PyObjectTempKeeper0 call56;
                                    PyObjectTempKeeper1 make_tuple58;
                                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple58.assign( ( call54.assign( _mvar_django__utils__html_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call54.asObject0(), _python_var_url.asObject() ) ) ), MAKE_TUPLE2( make_tuple58.asObject0(), PyObjectTemporary( ( call56.assign( _mvar_django__utils__html_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call56.asObject0(), _python_var_trimmed.asObject() ) ) ).asObject() ) ) ).asObject() );
                                }
                                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                _python_var_url.assign0( _python_tmp_element_1.asObject() );
                                _python_var_trimmed.assign0( _python_tmp_element_2.asObject() );
                            }
                        }
                        frame_guard.setLineNumber( 261 );
                        {
                            PyObjectTempKeeper0 make_tuple60;
                            PyObjectTempKeeper0 make_tuple61;
                            _python_var_middle.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_32a802bc5fc7b7f12191b1b0b34f13ed, PyObjectTemporary( ( make_tuple60.assign( _python_var_url.asObject() ), make_tuple61.assign( _python_var_nofollow_attr.asObject() ), MAKE_TUPLE3( make_tuple60.asObject0(), make_tuple61.asObject0(), _python_var_trimmed.asObject() ) ) ).asObject() ) );
                        }
                        frame_guard.setLineNumber( 262 );
                        {
                            PyObjectTempKeeper0 call66;
                            PyObjectTempKeeper0 make_tuple63;
                            PyObjectTempKeeper0 make_tuple64;
                            {
                                PyObjectTemporary tmp_identifier( ( call66.assign( _mvar_django__utils__html_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call66.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_01f53e42b0247f24e3030ed68606e4cf, PyObjectTemporary( ( make_tuple63.assign( _python_var_lead.asObject() ), make_tuple64.assign( _python_var_middle.asObject() ), MAKE_TUPLE3( make_tuple63.asObject0(), make_tuple64.asObject0(), _python_var_trail.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                PyObject *tmp_subscribed = _python_var_words.asObject();
                                SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_i.asObject() );
                        }
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 264 );
                        if ( CHECK_IF_TRUE( _python_var_safe_input.asObject() ) )
                        {
                            frame_guard.setLineNumber( 265 );
                            {
                                PyObjectTempKeeper0 call68;
                                {
                                    PyObjectTemporary tmp_identifier( ( call68.assign( _mvar_django__utils__html_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call68.asObject0(), _python_var_word.asObject() ) ) );
                                    PyObject *tmp_subscribed = _python_var_words.asObject();
                                    SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_i.asObject() );
                            }
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 266 );
                            if ( CHECK_IF_TRUE( _python_var_autoescape.asObject() ) )
                            {
                                frame_guard.setLineNumber( 267 );
                                {
                                    PyObjectTempKeeper0 call70;
                                    {
                                        PyObjectTemporary tmp_identifier( ( call70.assign( _mvar_django__utils__html_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call70.asObject0(), _python_var_word.asObject() ) ) );
                                        PyObject *tmp_subscribed = _python_var_words.asObject();
                                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_i.asObject() );
                                }
                                }
                            }
                        }
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 268 );
                    if ( CHECK_IF_TRUE( _python_var_safe_input.asObject() ) )
                    {
                        frame_guard.setLineNumber( 269 );
                        {
                            PyObjectTempKeeper0 call72;
                            {
                                PyObjectTemporary tmp_identifier( ( call72.assign( _mvar_django__utils__html_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call72.asObject0(), _python_var_word.asObject() ) ) );
                                PyObject *tmp_subscribed = _python_var_words.asObject();
                                SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_i.asObject() );
                        }
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 270 );
                        if ( CHECK_IF_TRUE( _python_var_autoescape.asObject() ) )
                        {
                            frame_guard.setLineNumber( 271 );
                            {
                                PyObjectTempKeeper0 call74;
                                {
                                    PyObjectTemporary tmp_identifier( ( call74.assign( _mvar_django__utils__html_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call74.asObject0(), _python_var_word.asObject() ) ) );
                                    PyObject *tmp_subscribed = _python_var_words.asObject();
                                    SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_i.asObject() );
                            }
                            }
                        }
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 272 );
        {
            PyObjectTempKeeper1 call76;
            return ( call76.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call76.asObject0(), _python_var_words.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_autoescape.updateLocalsDict( _python_var_nofollow.updateLocalsDict( _python_var_trim_url_limit.updateLocalsDict( _python_var_text.updateLocalsDict( _python_var_trimmed.updateLocalsDict( _python_var_domain.updateLocalsDict( _python_var_local.updateLocalsDict( _python_var_nofollow_attr.updateLocalsDict( _python_var_url.updateLocalsDict( _python_var_closing.updateLocalsDict( _python_var_opening.updateLocalsDict( _python_var_punctuation.updateLocalsDict( _python_var_trail.updateLocalsDict( _python_var_middle.updateLocalsDict( _python_var_lead.updateLocalsDict( _python_var_match.updateLocalsDict( _python_var_word.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_words.updateLocalsDict( _python_var_safe_input.updateLocalsDict( _python_var_trim_url.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_16_urlize_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_16_urlize_of_module_django__utils__html );
           frame_function_16_urlize_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_16_urlize_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_text = NULL;
    PyObject *_python_par_trim_url_limit = NULL;
    PyObject *_python_par_nofollow = NULL;
    PyObject *_python_par_autoescape = NULL;
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
                PyErr_Format( PyExc_TypeError, "urlize() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_trim_url_limit == key )
            {
                if (unlikely( _python_par_trim_url_limit ))
                {
                    PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'trim_url_limit'" );
                    goto error_exit;
                }

                _python_par_trim_url_limit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_nofollow == key )
            {
                if (unlikely( _python_par_nofollow ))
                {
                    PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'nofollow'" );
                    goto error_exit;
                }

                _python_par_nofollow = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_autoescape == key )
            {
                if (unlikely( _python_par_autoescape ))
                {
                    PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'autoescape'" );
                    goto error_exit;
                }

                _python_par_autoescape = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_text, key ) )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_trim_url_limit, key ) )
            {
                if (unlikely( _python_par_trim_url_limit ))
                {
                    PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'trim_url_limit'" );
                    goto error_exit;
                }

                _python_par_trim_url_limit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_nofollow, key ) )
            {
                if (unlikely( _python_par_nofollow ))
                {
                    PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'nofollow'" );
                    goto error_exit;
                }

                _python_par_nofollow = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_autoescape, key ) )
            {
                if (unlikely( _python_par_autoescape ))
                {
                    PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'autoescape'" );
                    goto error_exit;
                }

                _python_par_autoescape = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "urlize() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "urlize() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "urlize() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "urlize() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "urlize() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "urlize() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "urlize() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "urlize() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "urlize() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "urlize() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "urlize() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "urlize() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "urlize() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_text != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_trim_url_limit != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'trim_url_limit'" );
             goto error_exit;
         }

        _python_par_trim_url_limit = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_nofollow != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'nofollow'" );
             goto error_exit;
         }

        _python_par_nofollow = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_autoescape != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'autoescape'" );
             goto error_exit;
         }

        _python_par_autoescape = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_trim_url_limit == NULL )
    {
        _python_par_trim_url_limit = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_trim_url_limit );
    }
    if ( _python_par_nofollow == NULL )
    {
        _python_par_nofollow = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_nofollow );
    }
    if ( _python_par_autoescape == NULL )
    {
        _python_par_autoescape = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_autoescape );
    }


    return impl_function_16_urlize_of_module_django__utils__html( self, _python_par_text, _python_par_trim_url_limit, _python_par_nofollow, _python_par_autoescape );

error_exit:;

    Py_XDECREF( _python_par_text );
    Py_XDECREF( _python_par_trim_url_limit );
    Py_XDECREF( _python_par_nofollow );
    Py_XDECREF( _python_par_autoescape );

    return NULL;
}

static PyObject *dparse_function_16_urlize_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_16_urlize_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_urlize_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_x, PyObject *_python_par_limit )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );
    PyObjectLocalParameterVariableNoDel _python_var_limit( _python_str_plain_limit, _python_par_limit );

    // Actual function code.
    static PyFrameObject *frame_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html ) )
    {
        if ( frame_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_trim_url_of_function_16_urlize_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html );
        }

        frame_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html = MAKE_FRAME( _codeobj_742c3a99cf4afe27d843251d58779c7a, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 215 );
        {
            PyObjectTempKeeper1 cmp1;
            if ( ( ( _python_var_limit.asObject() == Py_None ) || ( cmp1.assign( BUILTIN_LEN( _python_var_x.asObject() ) ), RICH_COMPARE_BOOL_LE( cmp1.asObject0(), _python_var_limit.asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 216 );
            return _python_var_x.asObject1();
        }
        }
        frame_guard.setLineNumber( 217 );
        {
            PyObjectTempKeeper0 slice3;
            return BINARY_OPERATION_REMAINDER( _python_unicode_digest_83c468c6a1d7a6ffb67f28dcda535676, PyObjectTemporary( ( slice3.assign( _python_var_x.asObject() ), LOOKUP_SLICE( slice3.asObject0(), Py_None, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_max ), _python_int_0, PyObjectTemporary( BINARY_OPERATION_SUB( _python_var_limit.asObject(), _python_int_pos_3 ) ).asObject() ) ).asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_limit.updateLocalsDict( _python_var_x.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html );
           frame_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_limit = NULL;
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
                PyErr_Format( PyExc_TypeError, "trim_url() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "trim_url() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_limit == key )
            {
                if (unlikely( _python_par_limit ))
                {
                    PyErr_Format( PyExc_TypeError, "trim_url() got multiple values for keyword argument 'limit'" );
                    goto error_exit;
                }

                _python_par_limit = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_x, key ) )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "trim_url() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_limit, key ) )
            {
                if (unlikely( _python_par_limit ))
                {
                    PyErr_Format( PyExc_TypeError, "trim_url() got multiple values for keyword argument 'limit'" );
                    goto error_exit;
                }

                _python_par_limit = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "trim_url() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "trim_url() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "trim_url() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "trim_url() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "trim_url() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "trim_url() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "trim_url() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "trim_url() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "trim_url() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "trim_url() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "trim_url() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "trim_url() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "trim_url() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "trim_url() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_limit != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "trim_url() got multiple values for keyword argument 'limit'" );
             goto error_exit;
         }

        _python_par_limit = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_limit == NULL )
    {
        _python_par_limit = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_limit );
    }


    return impl_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html( self, _python_par_x, _python_par_limit );

error_exit:;

    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_limit );

    return NULL;
}

static PyObject *dparse_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_clean_html_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_text )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );
    PyObjectLocalVariable _python_var_normalize_newlines( _python_str_plain_normalize_newlines );
    PyObjectLocalVariable _python_var_replace_p_tags( _python_str_plain_replace_p_tags );

    // Actual function code.
    static PyFrameObject *frame_function_17_clean_html_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_17_clean_html_of_module_django__utils__html ) )
    {
        if ( frame_function_17_clean_html_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_17_clean_html_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_17_clean_html_of_module_django__utils__html );
        }

        frame_function_17_clean_html_of_module_django__utils__html = MAKE_FRAME( _codeobj_9c860c56ac63afbd307a98408d48e97f, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_17_clean_html_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_17_clean_html_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 287 );
        _python_var_normalize_newlines.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1863593e728059f3c0ba0d01334514dd, ((PyModuleObject *)_module_django__utils__html)->md_dict, PyObjectTemporary( _python_var_text.updateLocalsDict( _python_var_replace_p_tags.updateLocalsDict( _python_var_normalize_newlines.updateLocalsDict( PyDict_New() ) ) ) ).asObject(), _python_list_str_plain_normalize_newlines_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_normalize_newlines ) );
        frame_guard.setLineNumber( 288 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call3;
            _python_var_text.assign1( ( call3.assign( _python_var_normalize_newlines.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__utils__html_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_text.asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 289 );
        {
            PyObjectTempKeeper1 call5;
            _python_var_text.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_unicode_digest_ad4af64cc952776db9d3a9384708aec6, _python_unicode_digest_4fd0252014f1004e1945774eaa8eb4b4, _python_var_text.asObject() ) ) );
        }
        frame_guard.setLineNumber( 290 );
        {
            PyObjectTempKeeper1 call9;
            _python_var_text.assign1( ( call9.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_unicode_digest_cd59eef7c8ff7a14d213564c3799f91c, _python_unicode_digest_196faeadfb1ae4b7c2a0178a7b201908, _python_var_text.asObject() ) ) );
        }
        frame_guard.setLineNumber( 291 );
        {
            PyObjectTempKeeper0 call13;
            _python_var_text.assign1( ( call13.assign( _mvar_django__utils__html_fix_ampersands.asObject0() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_var_text.asObject() ) ) );
        }
        frame_guard.setLineNumber( 293 );
        {
            PyObjectTempKeeper1 call15;
            _python_var_text.assign1( ( call15.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_link_target_attribute_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_unicode_digest_b5101eb6e685091719013d1a75756a53, _python_var_text.asObject() ) ) );
        }
        frame_guard.setLineNumber( 295 );
        {
            PyObjectTempKeeper1 call18;
            _python_var_text.assign1( ( call18.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_html_gunk_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), _python_unicode_empty, _python_var_text.asObject() ) ) );
        }
        _python_var_replace_p_tags.assign1( MAKE_FUNCTION_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html(  ) );
        frame_guard.setLineNumber( 302 );
        {
            PyObjectTempKeeper1 call21;
            PyObjectTempKeeper0 call22;
            _python_var_text.assign1( ( call21.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_hard_coded_bullets_re.asObject0(), _python_str_plain_sub ) ), call22.assign( _python_var_replace_p_tags.asObject() ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), call22.asObject0(), _python_var_text.asObject() ) ) );
        }
        frame_guard.setLineNumber( 305 );
        {
            PyObjectTempKeeper1 call24;
            _python_var_text.assign1( ( call24.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_trailing_empty_content_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call24.asObject0(), _python_unicode_empty, _python_var_text.asObject() ) ) );
        }
        frame_guard.setLineNumber( 306 );
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
        frame_guard.getFrame0()->f_locals = _python_var_text.updateLocalsDict( _python_var_replace_p_tags.updateLocalsDict( _python_var_normalize_newlines.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_17_clean_html_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_17_clean_html_of_module_django__utils__html );
           frame_function_17_clean_html_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_17_clean_html_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "clean_html() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "clean_html() got multiple values for keyword argument 'text'" );
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
                    PyErr_Format( PyExc_TypeError, "clean_html() got multiple values for keyword argument 'text'" );
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
                   "clean_html() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "clean_html() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "clean_html() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "clean_html() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "clean_html() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "clean_html() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clean_html() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "clean_html() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clean_html() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "clean_html() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "clean_html() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "clean_html() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "clean_html() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "clean_html() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_17_clean_html_of_module_django__utils__html( self, _python_par_text );

error_exit:;

    Py_XDECREF( _python_par_text );

    return NULL;
}

static PyObject *dparse_function_17_clean_html_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_17_clean_html_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_clean_html_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_match )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_match( _python_str_plain_match, _python_par_match );
    PyObjectLocalVariable _python_var_s( _python_str_plain_s );
    PyObjectLocalVariable _python_var_d( _python_str_plain_d );

    // Actual function code.
    static PyFrameObject *frame_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html ) )
    {
        if ( frame_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html );
        }

        frame_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html = MAKE_FRAME( _codeobj_7915f4ee4a2bc979da15ef31ef35e93e, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 298 );
        _python_var_s.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_group ) ).asObject() ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_digest_04a7d3d609129a9296bf7ac0608c2097, _python_unicode_digest_fc4d7a09cf76db3f093ffbf97788fed5 ) );
        {
            frame_guard.setLineNumber( 299 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _mvar_django__utils__html_DOTS.asObject0() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 299 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_d.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 300 );
                {
                    PyObjectTempKeeper1 call1;
                    _python_var_s.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_replace ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_496b8629ac0f3636fef77e4ef2a58af0, _python_var_d.asObject() ) ).asObject(), _python_unicode_angle_li ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 301 );
        return BINARY_OPERATION_REMAINDER( _python_unicode_digest_18287fc4917c5e2c41403a975780af06, _python_var_s.asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_match.updateLocalsDict( _python_var_d.updateLocalsDict( _python_var_s.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html );
           frame_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "replace_p_tags() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "replace_p_tags() got multiple values for keyword argument 'match'" );
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
                    PyErr_Format( PyExc_TypeError, "replace_p_tags() got multiple values for keyword argument 'match'" );
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
                   "replace_p_tags() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "replace_p_tags() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "replace_p_tags() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "replace_p_tags() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "replace_p_tags() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "replace_p_tags() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "replace_p_tags() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "replace_p_tags() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "replace_p_tags() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "replace_p_tags() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "replace_p_tags() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "replace_p_tags() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "replace_p_tags() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "replace_p_tags() got multiple values for keyword argument 'match'" );
             goto error_exit;
         }

        _python_par_match = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html( self, _python_par_match );

error_exit:;

    Py_XDECREF( _python_par_match );

    return NULL;
}

static PyObject *dparse_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18_avoid_wrapping_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_18_avoid_wrapping_of_module_django__utils__html = NULL;

    if ( isFrameUnusable( frame_function_18_avoid_wrapping_of_module_django__utils__html ) )
    {
        if ( frame_function_18_avoid_wrapping_of_module_django__utils__html )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_18_avoid_wrapping_of_module_django__utils__html" );
#endif
            Py_DECREF( frame_function_18_avoid_wrapping_of_module_django__utils__html );
        }

        frame_function_18_avoid_wrapping_of_module_django__utils__html = MAKE_FRAME( _codeobj_39449f5311acc66e937d3dc5bbc718d9, _module_django__utils__html );
    }

    FrameGuard frame_guard( frame_function_18_avoid_wrapping_of_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_function_18_avoid_wrapping_of_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 314 );
        return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_space, _python_unicode_digest_79717f24e0c5040f1bc91666af6fd097 );
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

        if ( frame_guard.getFrame0() == frame_function_18_avoid_wrapping_of_module_django__utils__html )
        {
           Py_DECREF( frame_function_18_avoid_wrapping_of_module_django__utils__html );
           frame_function_18_avoid_wrapping_of_module_django__utils__html = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_18_avoid_wrapping_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "avoid_wrapping() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "avoid_wrapping() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "avoid_wrapping() got multiple values for keyword argument 'value'" );
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
                   "avoid_wrapping() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "avoid_wrapping() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "avoid_wrapping() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "avoid_wrapping() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "avoid_wrapping() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "avoid_wrapping() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "avoid_wrapping() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "avoid_wrapping() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "avoid_wrapping() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "avoid_wrapping() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "avoid_wrapping() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "avoid_wrapping() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "avoid_wrapping() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "avoid_wrapping() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_18_avoid_wrapping_of_module_django__utils__html( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_18_avoid_wrapping_of_module_django__utils__html( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_18_avoid_wrapping_of_module_django__utils__html( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_18_avoid_wrapping_of_module_django__utils__html( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_strip_tags_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_strip_tags_of_module_django__utils__html,
        dparse_function_10_strip_tags_of_module_django__utils__html,
        _python_str_plain_strip_tags,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_06172cc0ea28d768e847510769c9c5b9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_c507c204d7b37058dcd57d85157d7ef0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_remove_tags_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_remove_tags_of_module_django__utils__html,
        dparse_function_11_remove_tags_of_module_django__utils__html,
        _python_str_plain_remove_tags,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6855cddd3862d4802a8afb75b1a765d1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_96b98e577a23b36ab86244f5be74ae0b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_strip_spaces_between_tags_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_strip_spaces_between_tags_of_module_django__utils__html,
        dparse_function_12_strip_spaces_between_tags_of_module_django__utils__html,
        _python_str_plain_strip_spaces_between_tags,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d7eccf5d0bac29d3c416eeb82f13c9be,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_15c5f4de8be28c785b93939ad699b512
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_strip_entities_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_strip_entities_of_module_django__utils__html,
        dparse_function_13_strip_entities_of_module_django__utils__html,
        _python_str_plain_strip_entities,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f0fc2df6ebab355632e40307c2fda024,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_4143b83f15811af4b8a28d34f8fd7b0d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_fix_ampersands_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_fix_ampersands_of_module_django__utils__html,
        dparse_function_14_fix_ampersands_of_module_django__utils__html,
        _python_str_plain_fix_ampersands,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_37b438acda986fdefcf65fb001eb21c0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_d1afa2dec52a1c6039464e8da9578111
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_smart_urlquote_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_smart_urlquote_of_module_django__utils__html,
        dparse_function_15_smart_urlquote_of_module_django__utils__html,
        _python_str_plain_smart_urlquote,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d01a1beba46820846e2390d8740f1505,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_386bb7cf4dc1e6f94c3c9ddccda8466e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_urlize_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_urlize_of_module_django__utils__html,
        dparse_function_16_urlize_of_module_django__utils__html,
        _python_str_plain_urlize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_90e1611e5bbd58351eafdbcce4441a60,
        INCREASE_REFCOUNT( _python_tuple_none_false_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_c3051712e4ae8db521c766910469d655
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_clean_html_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_clean_html_of_module_django__utils__html,
        dparse_function_17_clean_html_of_module_django__utils__html,
        _python_str_plain_clean_html,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9c860c56ac63afbd307a98408d48e97f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_02c880124e626da9aca7e856cae70995
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18_avoid_wrapping_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18_avoid_wrapping_of_module_django__utils__html,
        dparse_function_18_avoid_wrapping_of_module_django__utils__html,
        _python_str_plain_avoid_wrapping,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_39449f5311acc66e937d3dc5bbc718d9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_05bc21ab82aed5ee7f17f090e4f1a22d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_9_MLStripper_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_9_MLStripper_of_module_django__utils__html,
        dparse_function_1___init___of_class_9_MLStripper_of_module_django__utils__html,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_683c46e3082fb1e5ee9f4ae9805e976c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html,
        dparse_function_1_replace_p_tags_of_function_17_clean_html_of_module_django__utils__html,
        _python_str_plain_replace_p_tags,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7915f4ee4a2bc979da15ef31ef35e93e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html,
        dparse_function_1_trim_url_of_function_16_urlize_of_module_django__utils__html,
        _python_str_plain_trim_url,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_742c3a99cf4afe27d843251d58779c7a,
        defaults,
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_escape_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_escape_of_module_django__utils__html,
        dparse_function_2_escape_of_module_django__utils__html,
        _python_str_plain_escape,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5083b7fef69459c1391cd726bed2bca6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_f924a7868d844bb7b3331b37e1fda83f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html,
        dparse_function_2_handle_data_of_class_9_MLStripper_of_module_django__utils__html,
        _python_str_plain_handle_data,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b8c6f4c0a5385f107fa26631ef8f1593,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html,
        dparse_function_3_handle_entityref_of_class_9_MLStripper_of_module_django__utils__html,
        _python_str_plain_handle_entityref,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f845c748fac80f58ecf180f5a8a66a2f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_escapejs_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_escapejs_of_module_django__utils__html,
        dparse_function_4_escapejs_of_module_django__utils__html,
        _python_str_plain_escapejs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bc2367a0129dfd87bdf8e14c348876c3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_466b94adb5006a4d756d93fd4a1c06d7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html,
        dparse_function_4_handle_charref_of_class_9_MLStripper_of_module_django__utils__html,
        _python_str_plain_handle_charref,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_05f72c91842a7a289527668da62d0da2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_conditional_escape_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_conditional_escape_of_module_django__utils__html,
        dparse_function_5_conditional_escape_of_module_django__utils__html,
        _python_str_plain_conditional_escape,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cf829115b9b05dcd7972b644e11fa781,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_00a7354e311491fa394e781198aa4e95
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html,
        dparse_function_5_get_data_of_class_9_MLStripper_of_module_django__utils__html,
        _python_str_plain_get_data,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7426e5f6f15957fece4b50d8fe7d40e2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_format_html_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_format_html_of_module_django__utils__html,
        dparse_function_6_format_html_of_module_django__utils__html,
        _python_str_plain_format_html,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_193f819c1a5bea018ad842e964a3e6ed,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_2e042e00c083d2f10bc6e2335ab4bdd9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_format_html_join_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_format_html_join_of_module_django__utils__html,
        dparse_function_7_format_html_join_of_module_django__utils__html,
        _python_str_plain_format_html_join,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8bc83381837e2c77c44f772156c07928,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_bc099b6525309b04191b0bdf93073f28
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_linebreaks_of_module_django__utils__html(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_linebreaks_of_module_django__utils__html,
        dparse_function_8_linebreaks_of_module_django__utils__html,
        _python_str_plain_linebreaks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_079203d55df1e36a10be669a1041993b,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html,
        _python_unicode_digest_9f392c26a0a379061847a9cef30a78e9
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.html",   /* m_name */
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

MOD_INIT_DECL( django__utils__html )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__html );
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

    // puts( "in initdjango__utils__html" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__html = Py_InitModule4(
        "django.utils.html",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__html = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__html = (PyDictObject *)((PyModuleObject *)_module_django__utils__html)->md_dict;

    assertObject( _module_django__utils__html );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_d3a0db97fb5d78c487963bfc1490797d, _module_django__utils__html );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__html );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__html != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_5ea1ce6f911dd93ae66dbec6a2dac9a8 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_53523ab1bc9b312bcfcd15f95de28dab );
    PyFrameObject *frame_module_django__utils__html = MAKE_FRAME( _codeobj_df1123cbd9431a38d22a7b99d8b98a79, _module_django__utils__html );

    FrameGuard frame_guard( frame_module_django__utils__html );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__html ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_re, IMPORT_MODULE( _python_str_plain_re, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_string, IMPORT_MODULE( _python_str_plain_string, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 7 );
        try
        {
            frame_guard.setLineNumber( 8 );
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_quote, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_16d628fa9b79bd53ede39389589a2bbf, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_quote_str_plain_urlsplit_str_plain_urlunsplit_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_quote ) );
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_urlsplit, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_16d628fa9b79bd53ede39389589a2bbf, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_quote_str_plain_urlsplit_str_plain_urlunsplit_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urlsplit ) );
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_urlunsplit, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_16d628fa9b79bd53ede39389589a2bbf, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_quote_str_plain_urlsplit_str_plain_urlunsplit_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urlunsplit ) );
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
                frame_guard.setLineNumber( 10 );
                UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_quote, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_urllib, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_quote_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_quote ) );
                frame_guard.setLineNumber( 11 );
                UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_urlsplit, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_urlparse, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_urlsplit_str_plain_urlunsplit_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urlsplit ) );
                UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_urlunsplit, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_urlparse, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_urlsplit_str_plain_urlunsplit_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urlunsplit ) );
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
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_SafeData, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_33422e2c698707541621bf8ab31ea849, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_SafeData_str_plain_mark_safe_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SafeData ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_mark_safe, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_33422e2c698707541621bf8ab31ea849, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_SafeData_str_plain_mark_safe_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_mark_safe ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_force_bytes, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_force_bytes_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_bytes ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_force_bytes_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_allow_lazy, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_allow_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_allow_lazy ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_normalize_newlines, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1863593e728059f3c0ba0d01334514dd, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_normalize_newlines_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_normalize_newlines ) );
        frame_guard.setLineNumber( 19 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_HTMLParser, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_html_parser, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_HTMLParser_str_plain_HTMLParseError_list, _python_int_pos_1 ) ).asObject(), _python_str_plain_HTMLParser ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_HTMLParseError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_html_parser, ((PyModuleObject *)_module_django__utils__html)->md_dict, ((PyModuleObject *)_module_django__utils__html)->md_dict, _python_list_str_plain_HTMLParser_str_plain_HTMLParseError_list, _python_int_pos_1 ) ).asObject(), _python_str_plain_HTMLParseError ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_TRAILING_PUNCTUATION, LIST_COPY( _python_list_83888f482a15fd1a438449e243271eb8_list ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_WRAPPING_PUNCTUATION, LIST_COPY( _python_list_745755315c8ca5ef265ffd634eee92f7_list ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_DOTS, LIST_COPY( _python_list_b69f079eaac12178b48379a7aa7f7dae_list ) );
        frame_guard.setLineNumber( 29 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_unencoded_ampersands_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_ddda92b39c34c791f84be1875c5d4c66 ) );
        frame_guard.setLineNumber( 30 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_unquoted_percents_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_160be23bb85ef4fcaf01ac4ba2419d9d ) );
        frame_guard.setLineNumber( 31 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_word_split_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_86d86692b26e282e511396d6f53777e1 ) );
        frame_guard.setLineNumber( 32 );
        {
            PyObjectTempKeeper1 call1;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_simple_url_re, ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_compile ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_unicode_digest_0962f5109dfe3de9e66d5d43f845bffc, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_IGNORECASE ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 33 );
        {
            PyObjectTempKeeper1 call4;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_simple_url_2_re, ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_compile ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_unicode_digest_8835a257a8958a4fe531bc8bfea79eab, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_IGNORECASE ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 34 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_simple_email_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_10d62bf6532ae839b7343971ba2f4e9b ) );
        frame_guard.setLineNumber( 35 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_link_target_attribute_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_8b5c01b3885d21dd5d94e273463c2309 ) );
        frame_guard.setLineNumber( 36 );
        {
            PyObjectTempKeeper1 call7;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_html_gunk_re, ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_compile ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_unicode_digest_fa4edf6014a1f57b3ec2d5e860e6d564, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_IGNORECASE ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 37 );
        {
            PyObjectTempKeeper1 call10;
            PyObjectTempKeeper1 call12;
            PyObjectTempKeeper1 call13;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_hard_coded_bullets_re, ( call12.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_compile ) ), call13.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_893c7caed884b31c6939a58323901925, PyObjectTemporary( ( call10.assign( LOOKUP_ATTRIBUTE( _python_unicode_chr_124, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( impl_listcontr_1_of_module_django__utils__html( MAKE_ITERATOR( _mvar_django__utils__html_DOTS.asObject0() ) ) ).asObject() ) ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), call13.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_DOTALL ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 38 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_trailing_empty_content_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_fdfc57e70d5799d18ded43f7a79ea2a2 ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_escape, MAKE_FUNCTION_function_2_escape_of_module_django__utils__html(  ) );
        frame_guard.setLineNumber( 46 );
        {
            PyObjectTempKeeper0 call15;
            PyObjectTempKeeper0 call16;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_escape, ( call15.assign( _mvar_django__utils__html_allow_lazy.asObject0() ), call16.assign( _mvar_django__utils__html_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), call16.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain__js_escapes, PyDict_Copy( _python_dict_32ce4f084ad8d632b687a73e4c117bda ) );
        frame_guard.setLineNumber( 63 );
        {
            PyObjectTempKeeper1 call18;
            DECREASE_REFCOUNT( ( call18.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html__js_escapes.asObject0(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), PyObjectTemporary( impl_genexpr_3_of_module_django__utils__html( MAKE_ITERATOR( PyObjectTemporary( LIST_COPY( _python_list_688fecf691d24657ddd6549932cd7f3f_list ) ).asObject() ) ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_escapejs, MAKE_FUNCTION_function_4_escapejs_of_module_django__utils__html(  ) );
        frame_guard.setLineNumber( 68 );
        {
            PyObjectTempKeeper0 call20;
            PyObjectTempKeeper0 call21;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_escapejs, ( call20.assign( _mvar_django__utils__html_allow_lazy.asObject0() ), call21.assign( _mvar_django__utils__html_escapejs.asObject0() ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), call21.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_conditional_escape, MAKE_FUNCTION_function_5_conditional_escape_of_module_django__utils__html(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_format_html, MAKE_FUNCTION_function_6_format_html_of_module_django__utils__html(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_format_html_join, MAKE_FUNCTION_function_7_format_html_join_of_module_django__utils__html(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_linebreaks, MAKE_FUNCTION_function_8_linebreaks_of_module_django__utils__html(  ) );
        frame_guard.setLineNumber( 119 );
        {
            PyObjectTempKeeper0 call23;
            PyObjectTempKeeper0 call24;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_linebreaks, ( call23.assign( _mvar_django__utils__html_allow_lazy.asObject0() ), call24.assign( _mvar_django__utils__html_linebreaks.asObject0() ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), call24.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 122 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__utils__html_HTMLParser.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_9_MLStripper_of_module_django__utils__html(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__html___metaclass__.isInitialized( false ) ? _mvar_django__utils__html___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call26;
                PyObjectTempKeeper0 call28;
                _tmp_python_tmp_class = ( call26.assign( _python_tmp_metaclass.asObject() ), call28.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call26.asObject0(), _python_str_plain_MLStripper, call28.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_MLStripper, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_strip_tags, MAKE_FUNCTION_function_10_strip_tags_of_module_django__utils__html(  ) );
        frame_guard.setLineNumber( 146 );
        {
            PyObjectTempKeeper0 call30;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_strip_tags, ( call30.assign( _mvar_django__utils__html_allow_lazy.asObject0() ), CALL_FUNCTION_WITH_ARGS( call30.asObject0(), _mvar_django__utils__html_strip_tags.asObject0() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_remove_tags, MAKE_FUNCTION_function_11_remove_tags_of_module_django__utils__html(  ) );
        frame_guard.setLineNumber( 157 );
        {
            PyObjectTempKeeper0 call32;
            PyObjectTempKeeper0 call33;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_remove_tags, ( call32.assign( _mvar_django__utils__html_allow_lazy.asObject0() ), call33.assign( _mvar_django__utils__html_remove_tags.asObject0() ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), call33.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_strip_spaces_between_tags, MAKE_FUNCTION_function_12_strip_spaces_between_tags_of_module_django__utils__html(  ) );
        frame_guard.setLineNumber( 162 );
        {
            PyObjectTempKeeper0 call35;
            PyObjectTempKeeper0 call36;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_strip_spaces_between_tags, ( call35.assign( _mvar_django__utils__html_allow_lazy.asObject0() ), call36.assign( _mvar_django__utils__html_strip_spaces_between_tags.asObject0() ), CALL_FUNCTION_WITH_ARGS( call35.asObject0(), call36.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_strip_entities, MAKE_FUNCTION_function_13_strip_entities_of_module_django__utils__html(  ) );
        frame_guard.setLineNumber( 167 );
        {
            PyObjectTempKeeper0 call38;
            PyObjectTempKeeper0 call39;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_strip_entities, ( call38.assign( _mvar_django__utils__html_allow_lazy.asObject0() ), call39.assign( _mvar_django__utils__html_strip_entities.asObject0() ), CALL_FUNCTION_WITH_ARGS( call38.asObject0(), call39.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_fix_ampersands, MAKE_FUNCTION_function_14_fix_ampersands_of_module_django__utils__html(  ) );
        frame_guard.setLineNumber( 172 );
        {
            PyObjectTempKeeper0 call41;
            PyObjectTempKeeper0 call42;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_fix_ampersands, ( call41.assign( _mvar_django__utils__html_allow_lazy.asObject0() ), call42.assign( _mvar_django__utils__html_fix_ampersands.asObject0() ), CALL_FUNCTION_WITH_ARGS( call41.asObject0(), call42.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_smart_urlquote, MAKE_FUNCTION_function_15_smart_urlquote_of_module_django__utils__html(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_urlize, MAKE_FUNCTION_function_16_urlize_of_module_django__utils__html(  ) );
        frame_guard.setLineNumber( 273 );
        {
            PyObjectTempKeeper0 call44;
            PyObjectTempKeeper0 call45;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_urlize, ( call44.assign( _mvar_django__utils__html_allow_lazy.asObject0() ), call45.assign( _mvar_django__utils__html_urlize.asObject0() ), CALL_FUNCTION_WITH_ARGS( call44.asObject0(), call45.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_clean_html, MAKE_FUNCTION_function_17_clean_html_of_module_django__utils__html(  ) );
        frame_guard.setLineNumber( 307 );
        {
            PyObjectTempKeeper0 call47;
            PyObjectTempKeeper0 call48;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_clean_html, ( call47.assign( _mvar_django__utils__html_allow_lazy.asObject0() ), call48.assign( _mvar_django__utils__html_clean_html.asObject0() ), CALL_FUNCTION_WITH_ARGS( call47.asObject0(), call48.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__html)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__html, (Nuitka_StringObject *)_python_str_plain_avoid_wrapping, MAKE_FUNCTION_function_18_avoid_wrapping_of_module_django__utils__html(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__html );
}
