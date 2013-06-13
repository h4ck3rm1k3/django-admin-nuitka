// Generated code for Python source for module 'django.template.defaultfilters'
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

// The _module_django__template__defaultfilters is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__template__defaultfilters;
PyDictObject *_moduledict_django__template__defaultfilters;

// The module level variables.
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_Context( &_module_django__template__defaultfilters, &_python_str_plain_Context );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_Decimal( &_module_django__template__defaultfilters, &_python_str_plain_Decimal );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_InvalidOperation( &_module_django__template__defaultfilters, &_python_str_plain_InvalidOperation );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_Library( &_module_django__template__defaultfilters, &_python_str_plain_Library );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_ROUND_HALF_UP( &_module_django__template__defaultfilters, &_python_str_plain_ROUND_HALF_UP );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_SafeData( &_module_django__template__defaultfilters, &_python_str_plain_SafeData );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_Truncator( &_module_django__template__defaultfilters, &_python_str_plain_Truncator );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_Variable( &_module_django__template__defaultfilters, &_python_str_plain_Variable );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_VariableDoesNotExist( &_module_django__template__defaultfilters, &_python_str_plain_VariableDoesNotExist );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_avoid_wrapping( &_module_django__template__defaultfilters, &_python_str_plain_avoid_wrapping );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_conditional_escape( &_module_django__template__defaultfilters, &_python_str_plain_conditional_escape );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_escape( &_module_django__template__defaultfilters, &_python_str_plain_escape );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_escapejs( &_module_django__template__defaultfilters, &_python_str_plain_escapejs );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_fix_ampersands( &_module_django__template__defaultfilters, &_python_str_plain_fix_ampersands );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_force_text( &_module_django__template__defaultfilters, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_format( &_module_django__template__defaultfilters, &_python_str_plain_format );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_formats( &_module_django__template__defaultfilters, &_python_str_plain_formats );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_iri_to_uri( &_module_django__template__defaultfilters, &_python_str_plain_iri_to_uri );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_linebreaks( &_module_django__template__defaultfilters, &_python_str_plain_linebreaks );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_mark_for_escaping( &_module_django__template__defaultfilters, &_python_str_plain_mark_for_escaping );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_mark_safe( &_module_django__template__defaultfilters, &_python_str_plain_mark_safe );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_nan( &_module_django__template__defaultfilters, &_python_str_plain_nan );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_neg_inf( &_module_django__template__defaultfilters, &_python_str_plain_neg_inf );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_normalize_newlines( &_module_django__template__defaultfilters, &_python_str_plain_normalize_newlines );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_pformat( &_module_django__template__defaultfilters, &_python_str_plain_pformat );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_phone2numeric( &_module_django__template__defaultfilters, &_python_str_plain_phone2numeric );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_pos_inf( &_module_django__template__defaultfilters, &_python_str_plain_pos_inf );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_random_module( &_module_django__template__defaultfilters, &_python_str_plain_random_module );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_re( &_module_django__template__defaultfilters, &_python_str_plain_re );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_register( &_module_django__template__defaultfilters, &_python_str_plain_register );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_settings( &_module_django__template__defaultfilters, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_six( &_module_django__template__defaultfilters, &_python_str_plain_six );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_special_floats( &_module_django__template__defaultfilters, &_python_str_plain_special_floats );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_stringfilter( &_module_django__template__defaultfilters, &_python_str_plain_stringfilter );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_strip_tags( &_module_django__template__defaultfilters, &_python_str_plain_strip_tags );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_time_format( &_module_django__template__defaultfilters, &_python_str_plain_time_format );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_timesince( &_module_django__template__defaultfilters, &_python_str_plain_timesince );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_timeuntil( &_module_django__template__defaultfilters, &_python_str_plain_timeuntil );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_ugettext( &_module_django__template__defaultfilters, &_python_str_plain_ugettext );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_ungettext( &_module_django__template__defaultfilters, &_python_str_plain_ungettext );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_urlize_impl( &_module_django__template__defaultfilters, &_python_str_plain_urlize_impl );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_urlquote( &_module_django__template__defaultfilters, &_python_str_plain_urlquote );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_wrap( &_module_django__template__defaultfilters, &_python_str_plain_wrap );
static PyObjectGlobalVariable_django__template__defaultfilters _mvar_django__template__defaultfilters_wraps( &_module_django__template__defaultfilters, &_python_str_plain_wraps );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_6_floatformat_of_module_django__template__defaultfilters( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_digit );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_32_safeseq_of_module_django__template__defaultfilters( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_obj );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_38_join_of_module_django__template__defaultfilters( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_v );


static PyObject *MAKE_FUNCTION_function_10_make_list_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_11_slugify_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_12_stringformat_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_13_title_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_14_truncatechars_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_15_truncatewords_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_16_truncatewords_html_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_17_upper_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_18_urlencode_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_19_urlize_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters( PyObjectSharedLocalVariable &python_closure__dec, PyObjectSharedLocalVariable &python_closure_func );


// This structure is for attachment as self of function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters.
// It is allocated at the time the function object is created.
struct _context_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure__dec;
    PyObjectClosureVariable python_closure_func;
};

static void _context_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters_destructor( void *context_voidptr )
{
    _context_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters_t *_python_context = (_context_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1_stringfilter_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_20_urlizetrunc_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_21_wordcount_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_22_wordwrap_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_23_ljust_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_24_rjust_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_25_center_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_26_cut_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_27_escape_filter_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_28_force_escape_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_29_linebreaks_filter_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_2_addslashes_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters( PyObjectSharedLocalVariable &python_closure_convert_old_style_list );


// This structure is for attachment as self of function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters.
// It is allocated at the time the function object is created.
struct _context_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_convert_old_style_list;
};

static void _context_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters_destructor( void *context_voidptr )
{
    _context_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters_t *_python_context = (_context_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_30_linebreaksbr_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_31_safe_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_32_safeseq_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_33_removetags_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_34_striptags_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_35_dictsort_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_36_dictsortreversed_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_37_first_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_38_join_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_39_last_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters( PyObjectSharedLocalVariable &python_closure__helper, PyObjectSharedLocalVariable &python_closure_escaper );


// This structure is for attachment as self of function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters.
// It is allocated at the time the function object is created.
struct _context_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure__helper;
    PyObjectClosureVariable python_closure_escaper;
};

static void _context_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters_destructor( void *context_voidptr )
{
    _context_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters_t *_python_context = (_context_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_3_capfirst_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_40_length_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_41_length_is_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_42_random_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_43_slice_filter_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_44_unordered_list_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_45_add_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_46_get_digit_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_47_date_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_48_time_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_49_timesince_filter_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_4_escapejs_filter_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_50_timeuntil_filter_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_51_default_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_52_default_if_none_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_53_divisibleby_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_54_yesno_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_55_filesizeformat_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_56_pluralize_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_57_phone2numeric_filter_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_58_pprint_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_6_floatformat_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_7_iriencode_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_8_linenumbers_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_function_9_lower_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters(  );


static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters(  );


// The module function definitions.
static PyObject *impl_function_1_stringfilter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_func )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_func( _python_str_plain_func, _python_par_func );
    PyObjectSharedLocalVariable _python_var__dec( _python_str_plain__dec );

    // Actual function code.
    _python_var__dec.assign1( MAKE_FUNCTION_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters( _python_var__dec, _python_var_func ) );
    static PyFrameObject *frame_function_1_stringfilter_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_1_stringfilter_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_1_stringfilter_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_stringfilter_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_1_stringfilter_of_module_django__template__defaultfilters );
        }

        frame_function_1_stringfilter_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_7fcf33546a2d3697b0aaaaf967de3ea1, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_1_stringfilter_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_1_stringfilter_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 50 );
        {
            PyObjectTempKeeper0 getattr1;
            {
                PyObjectTemporary tmp_identifier( ( getattr1.assign( _python_var_func.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_unicode_plain__decorated_function, _python_var_func.asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var__dec.asObject(), _python_str_plain__decorated_function );
        }
        }
        frame_guard.setLineNumber( 52 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper1 call6;
            return ( call6.assign( ( call4.assign( _mvar_django__template__defaultfilters_wraps.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_func.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var__dec.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_func.updateLocalsDict( _python_var__dec.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1_stringfilter_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_1_stringfilter_of_module_django__template__defaultfilters );
           frame_function_1_stringfilter_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_1_stringfilter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_func = NULL;
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
                PyErr_Format( PyExc_TypeError, "stringfilter() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_func == key )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "stringfilter() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_func, key ) )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "stringfilter() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "stringfilter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "stringfilter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "stringfilter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "stringfilter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "stringfilter() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "stringfilter() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "stringfilter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "stringfilter() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "stringfilter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "stringfilter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "stringfilter() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "stringfilter() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "stringfilter() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_func != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "stringfilter() got multiple values for keyword argument 'func'" );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_stringfilter_of_module_django__template__defaultfilters( self, _python_par_func );

error_exit:;

    Py_XDECREF( _python_par_func );

    return NULL;
}

static PyObject *dparse_function_1_stringfilter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_stringfilter_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_stringfilter_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // The context of the function.
    struct _context_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters_t *_python_context = (struct _context_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters );
        }

        frame_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_54e6d4c5f19b8452fa3f0234cc1cf021, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 39 );
        if ( CHECK_IF_TRUE( _python_var_args.asObject() ) )
        {
            frame_guard.setLineNumber( 40 );
            _python_var_args.assign1( TO_LIST( _python_var_args.asObject() ) );
            frame_guard.setLineNumber( 41 );
            {
                PyObjectTempKeeper0 call1;
                {
                    PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__template__defaultfilters_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_args.asObject(), _python_int_0, 0 ) ).asObject() ) ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_args.asObject(), _python_int_0 );
            }
            }
            frame_guard.setLineNumber( 42 );
            {
                PyObjectTempKeeper1 isinstance8;
                if ( ( ( isinstance8.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_args.asObject(), _python_int_0, 0 ) ), BUILTIN_ISINSTANCE_BOOL( isinstance8.asObject0(), _mvar_django__template__defaultfilters_SafeData.asObject0() ) ) && CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_closure__dec.asObject(), _python_str_plain__decorated_function ) ).asObject(), _python_unicode_plain_is_safe, Py_False ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 44 );
                {
                    PyObjectTempKeeper0 call6;
                    PyObjectTempKeeper0 call_tmp3;
                    PyObjectTempKeeper0 call_tmp4;
                    return ( call6.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( ( call_tmp3.assign( _python_context->python_closure_func.asObject() ), call_tmp4.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_kwargs.asObject1() ) ) ).asObject() ) );
                }
            }
            }
        }
        frame_guard.setLineNumber( 45 );
        {
            PyObjectTempKeeper0 call_tmp10;
            PyObjectTempKeeper0 call_tmp11;
            return ( call_tmp10.assign( _python_context->python_closure_func.asObject() ), call_tmp11.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp10.asObject(), call_tmp11.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_context->python_closure_func.updateLocalsDict( _python_context->python_closure__dec.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters );
           frame_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kwargs = NULL;

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
                        PyErr_Format( PyExc_TypeError, "_dec() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_dec() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "_dec() keywords must be strings" );
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

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 0 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "_dec() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_dec() takes at least %d non-keyword arguments (%zd given)", 0, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "_dec() takes at least %d arguments (%zd given)", 0, args_given + kw_found );
            }
        }

        goto error_exit;
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 0 )
    {
        _python_par_args = PyTuple_New( args_size - 0 );

        for( Py_ssize_t i = 0; i < args_size - 0; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[0+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters( self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters( self, MAKE_TUPLE( &args[ 0 ], size > 0 ? size-0 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_addslashes_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_2_addslashes_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_2_addslashes_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_2_addslashes_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_addslashes_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_2_addslashes_of_module_django__template__defaultfilters );
        }

        frame_function_2_addslashes_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_507ea15bcb744f694ba004cc7f33b6c2, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_2_addslashes_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_2_addslashes_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 67 );
        return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_92, _python_unicode_digest_7f8137798425a7fed2b8c5703b70d078 ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_34, _python_unicode_digest_3bd864034f446da13581129bb17f9191 ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_39, _python_unicode_digest_024c94d6e03b6f67a86b952b914816c7 );
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

        if ( frame_guard.getFrame0() == frame_function_2_addslashes_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_2_addslashes_of_module_django__template__defaultfilters );
           frame_function_2_addslashes_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_addslashes_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "addslashes() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "addslashes() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "addslashes() got multiple values for keyword argument 'value'" );
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
                   "addslashes() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "addslashes() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "addslashes() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "addslashes() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "addslashes() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "addslashes() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "addslashes() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "addslashes() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "addslashes() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "addslashes() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "addslashes() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "addslashes() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "addslashes() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "addslashes() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_addslashes_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_2_addslashes_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_addslashes_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_addslashes_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_capfirst_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_3_capfirst_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_3_capfirst_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_3_capfirst_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_capfirst_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_3_capfirst_of_module_django__template__defaultfilters );
        }

        frame_function_3_capfirst_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_b6c3ed9d38d0846d42e4c3a1dd257e77, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_3_capfirst_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_3_capfirst_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 73 );
        {
            PyObjectTempKeeper0 keeper_0;
            PyObjectTempKeeper1 op1;
            return ( CHECK_IF_TRUE( keeper_0.assign( _python_var_value.asObject() ) ) ? ( op1.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_value.asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_upper ) ).asObject() ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_value.asObject(), 1, PY_SSIZE_T_MAX ) ).asObject() ) ) : INCREASE_REFCOUNT( keeper_0.asObject0() ) );
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

        if ( frame_guard.getFrame0() == frame_function_3_capfirst_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_3_capfirst_of_module_django__template__defaultfilters );
           frame_function_3_capfirst_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_capfirst_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "capfirst() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "capfirst() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "capfirst() got multiple values for keyword argument 'value'" );
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
                   "capfirst() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "capfirst() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "capfirst() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "capfirst() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "capfirst() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "capfirst() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "capfirst() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "capfirst() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "capfirst() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "capfirst() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "capfirst() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "capfirst() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "capfirst() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "capfirst() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_capfirst_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_3_capfirst_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_capfirst_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_capfirst_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_escapejs_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_4_escapejs_filter_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_4_escapejs_filter_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_4_escapejs_filter_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_escapejs_filter_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_4_escapejs_filter_of_module_django__template__defaultfilters );
        }

        frame_function_4_escapejs_filter_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_8e8f47be10b12d9210d75b25ab409965, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_4_escapejs_filter_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_4_escapejs_filter_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 79 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__template__defaultfilters_escapejs.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_4_escapejs_filter_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_4_escapejs_filter_of_module_django__template__defaultfilters );
           frame_function_4_escapejs_filter_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_escapejs_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "escapejs_filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "escapejs_filter() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "escapejs_filter() got multiple values for keyword argument 'value'" );
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
                   "escapejs_filter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "escapejs_filter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "escapejs_filter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "escapejs_filter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "escapejs_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "escapejs_filter() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "escapejs_filter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "escapejs_filter() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "escapejs_filter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "escapejs_filter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "escapejs_filter() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "escapejs_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "escapejs_filter() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "escapejs_filter() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_escapejs_filter_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_4_escapejs_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_escapejs_filter_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_escapejs_filter_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_fix_ampersands_filter_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters );
        }

        frame_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_96a10232e84fa7c49ce9faa6363c3705, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 85 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__template__defaultfilters_fix_ampersands.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters );
           frame_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() got multiple values for keyword argument 'value'" );
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
                   "fix_ampersands_filter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "fix_ampersands_filter() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_floatformat_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_text, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );
    PyObjectLocalVariable _python_var_input_val( _python_str_plain_input_val );
    PyObjectLocalVariable _python_var_d( _python_str_plain_d );
    PyObjectLocalVariable _python_var_p( _python_str_plain_p );
    PyObjectLocalVariable _python_var_m( _python_str_plain_m );
    PyObjectLocalVariable _python_var_exp( _python_str_plain_exp );
    PyObjectLocalVariable _python_var_tupl( _python_str_plain_tupl );
    PyObjectLocalVariable _python_var_units( _python_str_plain_units );
    PyObjectLocalVariable _python_var_prec( _python_str_plain_prec );
    PyObjectLocalVariable _python_var_sign( _python_str_plain_sign );
    PyObjectLocalVariable _python_var_digits( _python_str_plain_digits );
    PyObjectLocalVariable _python_var_exponent( _python_str_plain_exponent );
    PyObjectLocalVariable _python_var_number( _python_str_plain_number );
    PyObjectLocalVariable _python_var_digit( _python_str_plain_digit );

    // Actual function code.
    static PyFrameObject *frame_function_6_floatformat_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_6_floatformat_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_6_floatformat_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_floatformat_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_6_floatformat_of_module_django__template__defaultfilters );
        }

        frame_function_6_floatformat_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_576b4f428906ea1dcb3b15072286c232, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_6_floatformat_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_6_floatformat_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 132 );
        try
        {
            frame_guard.setLineNumber( 133 );
            {
                PyObjectTempKeeper0 call7;
                _python_var_input_val.assign1( ( call7.assign( _mvar_django__template__defaultfilters_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_text.asObject() ) ) );
            }
            frame_guard.setLineNumber( 134 );
            {
                PyObjectTempKeeper0 call9;
                _python_var_d.assign1( ( call9.assign( _mvar_django__template__defaultfilters_Decimal.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_input_val.asObject() ) ) );
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

            if ( _exception.matches( PyExc_UnicodeEncodeError ) )
            {
                frame_guard.detachFrame();
                return INCREASE_REFCOUNT( _python_unicode_empty );
            }
            else if ( _exception.matches( _mvar_django__template__defaultfilters_InvalidOperation.asObject0() ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 138 );
                {
                    PyObjectTempKeeper0 cmp1;
                    if ( ( cmp1.assign( _python_var_input_val.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), _mvar_django__template__defaultfilters_special_floats.asObject0() ) ) )
                {
                    frame_guard.setLineNumber( 139 );
                    return _python_var_input_val.asObject1();
                }
                }
                frame_guard.setLineNumber( 140 );
                try
                {
                    frame_guard.setLineNumber( 141 );
                    {
                        PyObjectTempKeeper0 call3;
                        PyObjectTempKeeper0 call5;
                        _python_var_d.assign1( ( call5.assign( _mvar_django__template__defaultfilters_Decimal.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( _mvar_django__template__defaultfilters_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( TO_FLOAT( _python_var_text.asObject() ) ).asObject() ) ) ).asObject() ) ) );
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

                    if ( _exception.matches( PyExc_ValueError ) || _exception.matches( _mvar_django__template__defaultfilters_InvalidOperation.asObject0() ) || _exception.matches( PyExc_TypeError ) || _exception.matches( PyExc_UnicodeEncodeError ) )
                    {
                        frame_guard.detachFrame();
                        return INCREASE_REFCOUNT( _python_unicode_empty );
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
                PyTracebackObject *tb = _exception.getTraceback();
                frame_guard.setLineNumber( tb->tb_lineno );
                _exception.setTraceback( tb->tb_next );
                tb->tb_next = NULL;

                throw;
            }
        }
        frame_guard.setLineNumber( 144 );
        try
        {
            frame_guard.setLineNumber( 145 );
            _python_var_p.assign1( TO_INT( _python_var_arg.asObject() ) );
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
                frame_guard.setLineNumber( 147 );
                return _python_var_input_val.asObject1();
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
        frame_guard.setLineNumber( 149 );
        try
        {
            frame_guard.setLineNumber( 150 );
            {
                PyObjectTempKeeper1 op11;
                _python_var_m.assign1( ( op11.assign( TO_INT( _python_var_d.asObject() ) ), BINARY_OPERATION_SUB( op11.asObject0(), _python_var_d.asObject() ) ) );
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

            if ( _exception.matches( PyExc_ValueError ) || _exception.matches( PyExc_OverflowError ) || _exception.matches( _mvar_django__template__defaultfilters_InvalidOperation.asObject0() ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 152 );
                return _python_var_input_val.asObject1();
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
        frame_guard.setLineNumber( 154 );
        if ( ( (!( CHECK_IF_TRUE( _python_var_m.asObject() ) )) && RICH_COMPARE_BOOL_LT( _python_var_p.asObject(), _python_int_0 ) ) )
        {
            frame_guard.setLineNumber( 155 );
            {
                PyObjectTempKeeper1 call13;
                PyObjectTempKeeper0 call16;
                return ( call16.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), PyObjectTemporary( ( call13.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_formats.asObject0(), _python_str_plain_number_format ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_a7bd935a88c629dc11c52e0c16c2a8a0, PyObjectTemporary( TO_INT( _python_var_d.asObject() ) ).asObject() ) ).asObject(), _python_int_0 ) ) ).asObject() ) );
            }
        }
        frame_guard.setLineNumber( 157 );
        if ( RICH_COMPARE_BOOL_EQ( _python_var_p.asObject(), _python_int_0 ) )
        {
            frame_guard.setLineNumber( 158 );
            _python_var_exp.assign1( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_Decimal.asObject0(), _python_int_pos_1 ) );
        }
        else
        {
            frame_guard.setLineNumber( 160 );
            {
                PyObjectTempKeeper1 op18;
                PyObjectTempKeeper1 op20;
                _python_var_exp.assign1( ( op20.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_Decimal.asObject0(), _python_unicode_digest_e4c2e8edac362acab7123654b9e73432 ) ), BINARY_OPERATION_DIV( op20.asObject0(), PyObjectTemporary( ( op18.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_Decimal.asObject0(), _python_int_pos_10 ) ), POWER_OPERATION( op18.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_abs ), _python_var_p.asObject() ) ).asObject() ) ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 161 );
        try
        {
            frame_guard.setLineNumber( 163 );
            _python_var_tupl.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_as_tuple ) ).asObject() ) );
            frame_guard.setLineNumber( 164 );
            {
                PyObjectTempKeeper1 op22;
                _python_var_units.assign1( ( op22.assign( BUILTIN_LEN( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_tupl.asObject(), _python_int_pos_1, 1 ) ).asObject() ) ), BINARY_OPERATION_SUB( op22.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_tupl.asObject(), _python_int_pos_2, 2 ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 165 );
            {
                PyObjectTempKeeper1 op24;
                _python_var_prec.assign1( BINARY_OPERATION_ADD( PyObjectTemporary( ( op24.assign( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_abs ), _python_var_p.asObject() ) ), BINARY_OPERATION_ADD( op24.asObject0(), _python_var_units.asObject() ) ) ).asObject(), _python_int_pos_1 ) );
            }
            {
                frame_guard.setLineNumber( 169 );
                PyObject *_tmp_python_tmp_source_iter;
                {
                    PyObjectTempKeeper0 call26;
                    PyObjectTempKeeper1 call29;
                    PyObjectTempKeeper0 call30;
                    PyObjectTempKeeper0 call31;
                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call29.assign( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_quantize ) ), call30.assign( _python_var_exp.asObject() ), call31.assign( _mvar_django__template__defaultfilters_ROUND_HALF_UP.asObject0() ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), call30.asObject0(), call31.asObject0(), PyObjectTemporary( ( call26.assign( _mvar_django__template__defaultfilters_Context.asObject0() ), CALL_FUNCTION( call26.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_prec.asObject(), _python_str_plain_prec ) ).asObject() ) ) ).asObject() ) ) ).asObject(), _python_str_plain_as_tuple ) ).asObject() ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                _python_var_sign.assign0( _python_tmp_element_1.asObject() );
                _python_var_digits.assign0( _python_tmp_element_2.asObject() );
                _python_var_exponent.assign0( _python_tmp_element_3.asObject() );
            }
            frame_guard.setLineNumber( 171 );
            _python_var_digits.assign1( impl_listcontr_1_of_function_6_floatformat_of_module_django__template__defaultfilters( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_reversed ), _python_var_digits.asObject() ) ).asObject() ), _python_var_digit ) );
            frame_guard.setLineNumber( 172 );
            while( true )
            {
                frame_guard.setLineNumber( 172 );
                {
                    PyObjectTempKeeper1 cmp33;
                    if ( (!( ( cmp33.assign( BUILTIN_LEN( _python_var_digits.asObject() ) ), RICH_COMPARE_BOOL_LE( cmp33.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_abs ), _python_var_exponent.asObject() ) ).asObject() ) ) )) )
                {
                    frame_guard.setLineNumber( 172 );
                    break;
                }
                }
                frame_guard.setLineNumber( 173 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_digits.asObject(), _python_str_plain_append ) ).asObject(), _python_unicode_plain_0 ) );

               CONSIDER_THREADING();
            }
            frame_guard.setLineNumber( 174 );
            {
                PyObjectTempKeeper1 call35;
                DECREASE_REFCOUNT( ( call35.assign( LOOKUP_ATTRIBUTE( _python_var_digits.asObject(), _python_str_plain_insert ) ), CALL_FUNCTION_WITH_ARGS( call35.asObject0(), PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, _python_var_exponent.asObject() ) ).asObject(), _python_unicode_dot ) ) );
            }
            frame_guard.setLineNumber( 175 );
            if ( CHECK_IF_TRUE( _python_var_sign.asObject() ) )
            {
                frame_guard.setLineNumber( 176 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_digits.asObject(), _python_str_plain_append ) ).asObject(), _python_unicode_chr_45 ) );
            }
            frame_guard.setLineNumber( 177 );
            {
                PyObjectTempKeeper1 call38;
                _python_var_number.assign1( ( call38.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call38.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_reversed ), _python_var_digits.asObject() ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 178 );
            {
                PyObjectTempKeeper1 call40;
                PyObjectTempKeeper0 call41;
                PyObjectTempKeeper0 call43;
                return ( call43.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call43.asObject0(), PyObjectTemporary( ( call40.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_formats.asObject0(), _python_str_plain_number_format ) ), call41.assign( _python_var_number.asObject() ), CALL_FUNCTION_WITH_ARGS( call40.asObject0(), call41.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_abs ), _python_var_p.asObject() ) ).asObject() ) ) ).asObject() ) );
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

            if ( _exception.matches( _mvar_django__template__defaultfilters_InvalidOperation.asObject0() ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 180 );
                return _python_var_input_val.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_text.updateLocalsDict( _python_var_digit.updateLocalsDict( _python_var_number.updateLocalsDict( _python_var_exponent.updateLocalsDict( _python_var_digits.updateLocalsDict( _python_var_sign.updateLocalsDict( _python_var_prec.updateLocalsDict( _python_var_units.updateLocalsDict( _python_var_tupl.updateLocalsDict( _python_var_exp.updateLocalsDict( _python_var_m.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_d.updateLocalsDict( _python_var_input_val.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_floatformat_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_6_floatformat_of_module_django__template__defaultfilters );
           frame_function_6_floatformat_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_floatformat_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_text = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "floatformat() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "floatformat() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "floatformat() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_text, key ) )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "floatformat() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "floatformat() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "floatformat() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "floatformat() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "floatformat() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "floatformat() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "floatformat() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "floatformat() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "floatformat() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "floatformat() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "floatformat() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "floatformat() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "floatformat() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "floatformat() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "floatformat() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "floatformat() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "floatformat() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_arg == NULL )
    {
        _python_par_arg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_arg );
    }


    return impl_function_6_floatformat_of_module_django__template__defaultfilters( self, _python_par_text, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_text );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_6_floatformat_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6_floatformat_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_floatformat_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_6_floatformat_of_module_django__template__defaultfilters( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_digit )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 171 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 171 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_digit.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_digit.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_7_iriencode_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_7_iriencode_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_7_iriencode_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_7_iriencode_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_iriencode_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_7_iriencode_of_module_django__template__defaultfilters );
        }

        frame_function_7_iriencode_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_3a8cbbf606140c65cc390d51a6b02537, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_7_iriencode_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_7_iriencode_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 186 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call3;
            return ( call3.assign( _mvar_django__template__defaultfilters_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__template__defaultfilters_iri_to_uri.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_7_iriencode_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_7_iriencode_of_module_django__template__defaultfilters );
           frame_function_7_iriencode_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_iriencode_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "iriencode() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "iriencode() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "iriencode() got multiple values for keyword argument 'value'" );
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
                   "iriencode() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "iriencode() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "iriencode() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "iriencode() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "iriencode() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "iriencode() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "iriencode() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "iriencode() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "iriencode() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "iriencode() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "iriencode() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "iriencode() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "iriencode() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "iriencode() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7_iriencode_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_7_iriencode_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7_iriencode_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_iriencode_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_linenumbers_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_autoescape )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_autoescape( _python_str_plain_autoescape, _python_par_autoescape );
    PyObjectLocalVariable _python_var_lines( _python_str_plain_lines );
    PyObjectLocalVariable _python_var_width( _python_str_plain_width );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_line( _python_str_plain_line );

    // Actual function code.
    static PyFrameObject *frame_function_8_linenumbers_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_8_linenumbers_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_8_linenumbers_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_linenumbers_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_8_linenumbers_of_module_django__template__defaultfilters );
        }

        frame_function_8_linenumbers_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_e70faf1640178bcc110e9f8240277711, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_8_linenumbers_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_8_linenumbers_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 192 );
        _python_var_lines.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_10 ) );
        frame_guard.setLineNumber( 195 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call3;
            _python_var_width.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_lines.asObject() ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 196 );
        {
            PyObjectTempKeeper0 isinstance15;
            if ( ( (!( CHECK_IF_TRUE( _python_var_autoescape.asObject() ) )) || ( isinstance15.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance15.asObject0(), _mvar_django__template__defaultfilters_SafeData.asObject0() ) ) ) )
        {
            {
                frame_guard.setLineNumber( 197 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), _python_var_lines.asObject() ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 197 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        {
                            frame_guard.setLineNumber( 197 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_i.assign0( _python_tmp_element_1.asObject() );
                            _python_var_line.assign0( _python_tmp_element_2.asObject() );
                        }
                    }
                    frame_guard.setLineNumber( 198 );
                    {
                        PyObjectTempKeeper1 make_tuple5;
                        PyObjectTempKeeper1 op7;
                        {
                            PyObjectTemporary tmp_identifier( ( op7.assign( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( _python_unicode_digest_35a48c80628dab5b22b6defa6cbd6771, _python_var_width.asObject() ) ).asObject(), _python_unicode_digest_494d564cb03cbf6c0159847553d0b689 ) ), BINARY_OPERATION_REMAINDER( op7.asObject0(), PyObjectTemporary( ( make_tuple5.assign( BINARY_OPERATION_ADD( _python_var_i.asObject(), _python_int_pos_1 ) ), MAKE_TUPLE2( make_tuple5.asObject0(), _python_var_line.asObject() ) ) ).asObject() ) ) );
                            PyObject *tmp_subscribed = _python_var_lines.asObject();
                            SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_i.asObject() );
                    }
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        else
        {
            {
                frame_guard.setLineNumber( 200 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), _python_var_lines.asObject() ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 200 );
                        PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_2 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                        {
                            frame_guard.setLineNumber( 200 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_i.assign0( _python_tmp_element_1.asObject() );
                            _python_var_line.assign0( _python_tmp_element_2.asObject() );
                        }
                    }
                    frame_guard.setLineNumber( 201 );
                    {
                        PyObjectTempKeeper0 call9;
                        PyObjectTempKeeper1 make_tuple11;
                        PyObjectTempKeeper1 op13;
                        {
                            PyObjectTemporary tmp_identifier( ( op13.assign( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( _python_unicode_digest_35a48c80628dab5b22b6defa6cbd6771, _python_var_width.asObject() ) ).asObject(), _python_unicode_digest_494d564cb03cbf6c0159847553d0b689 ) ), BINARY_OPERATION_REMAINDER( op13.asObject0(), PyObjectTemporary( ( make_tuple11.assign( BINARY_OPERATION_ADD( _python_var_i.asObject(), _python_int_pos_1 ) ), MAKE_TUPLE2( make_tuple11.asObject0(), PyObjectTemporary( ( call9.assign( _mvar_django__template__defaultfilters_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_line.asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
                            PyObject *tmp_subscribed = _python_var_lines.asObject();
                            SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_i.asObject() );
                    }
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        }
        frame_guard.setLineNumber( 202 );
        {
            PyObjectTempKeeper1 call17;
            PyObjectTempKeeper0 call19;
            return ( call19.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), PyObjectTemporary( ( call17.assign( LOOKUP_ATTRIBUTE( _python_unicode_chr_10, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_var_lines.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_autoescape.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_line.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_width.updateLocalsDict( _python_var_lines.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_linenumbers_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_8_linenumbers_of_module_django__template__defaultfilters );
           frame_function_8_linenumbers_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_linenumbers_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "linenumbers() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "linenumbers() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "linenumbers() got multiple values for keyword argument 'autoescape'" );
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
                    PyErr_Format( PyExc_TypeError, "linenumbers() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "linenumbers() got multiple values for keyword argument 'autoescape'" );
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
                   "linenumbers() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "linenumbers() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "linenumbers() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "linenumbers() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "linenumbers() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "linenumbers() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "linenumbers() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "linenumbers() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "linenumbers() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "linenumbers() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "linenumbers() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "linenumbers() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "linenumbers() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "linenumbers() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_autoescape != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "linenumbers() got multiple values for keyword argument 'autoescape'" );
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


    return impl_function_8_linenumbers_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_autoescape );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_autoescape );

    return NULL;
}

static PyObject *dparse_function_8_linenumbers_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8_linenumbers_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_linenumbers_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_lower_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_9_lower_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_9_lower_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_9_lower_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_lower_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_9_lower_of_module_django__template__defaultfilters );
        }

        frame_function_9_lower_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_db0e2fb026529b0277b3a8797b9ef753, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_9_lower_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_9_lower_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 208 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_lower ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_9_lower_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_9_lower_of_module_django__template__defaultfilters );
           frame_function_9_lower_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_lower_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "lower() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "lower() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "lower() got multiple values for keyword argument 'value'" );
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
                   "lower() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "lower() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "lower() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "lower() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "lower() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "lower() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "lower() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "lower() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "lower() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "lower() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "lower() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "lower() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "lower() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "lower() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9_lower_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_9_lower_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9_lower_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_lower_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_make_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_10_make_list_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_10_make_list_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_10_make_list_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_make_list_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_10_make_list_of_module_django__template__defaultfilters );
        }

        frame_function_10_make_list_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_48244750f1e776f14fb5cdc34d08a6c6, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_10_make_list_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_10_make_list_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 219 );
        return TO_LIST( _python_var_value.asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_10_make_list_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_10_make_list_of_module_django__template__defaultfilters );
           frame_function_10_make_list_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_make_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "make_list() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "make_list() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "make_list() got multiple values for keyword argument 'value'" );
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
                   "make_list() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "make_list() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "make_list() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "make_list() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "make_list() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "make_list() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_list() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "make_list() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_list() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "make_list() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_list() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "make_list() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "make_list() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "make_list() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_10_make_list_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_10_make_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_10_make_list_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_make_list_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_slugify_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalVariable _python_var_slugify( _python_str_plain_slugify );

    // Actual function code.
    static PyFrameObject *frame_function_11_slugify_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_11_slugify_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_11_slugify_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_slugify_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_11_slugify_of_module_django__template__defaultfilters );
        }

        frame_function_11_slugify_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_fc5712c9e8efde750604ba4481fb769f, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_11_slugify_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_11_slugify_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 229 );
        _python_var_slugify.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1863593e728059f3c0ba0d01334514dd, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, PyObjectTemporary( _python_var_value.updateLocalsDict( _python_var_slugify.updateLocalsDict( PyDict_New() ) ) ).asObject(), _python_list_str_plain_slugify_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_slugify ) );
        frame_guard.setLineNumber( 230 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _python_var_slugify.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_slugify.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_11_slugify_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_11_slugify_of_module_django__template__defaultfilters );
           frame_function_11_slugify_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_slugify_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_11_slugify_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_11_slugify_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_11_slugify_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_slugify_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_stringformat_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_12_stringformat_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_12_stringformat_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_12_stringformat_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_stringformat_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_12_stringformat_of_module_django__template__defaultfilters );
        }

        frame_function_12_stringformat_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_4f468739d180c3f3af613033973843d9, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_12_stringformat_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_12_stringformat_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 243 );
        try
        {
            frame_guard.setLineNumber( 244 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper1 op3;
                return ( op3.assign( BINARY_OPERATION_ADD( _python_unicode_chr_37, PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_arg.asObject() ) ) ).asObject() ) ), BINARY_OPERATION_REMAINDER( op3.asObject0(), _python_var_value.asObject() ) );
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
                return INCREASE_REFCOUNT( _python_unicode_empty );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_12_stringformat_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_12_stringformat_of_module_django__template__defaultfilters );
           frame_function_12_stringformat_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_12_stringformat_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "stringformat() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "stringformat() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "stringformat() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "stringformat() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "stringformat() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "stringformat() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "stringformat() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "stringformat() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "stringformat() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "stringformat() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "stringformat() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "stringformat() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "stringformat() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "stringformat() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "stringformat() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "stringformat() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "stringformat() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "stringformat() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "stringformat() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "stringformat() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_12_stringformat_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_12_stringformat_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_12_stringformat_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_stringformat_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_title_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );

    // Actual function code.
    static PyFrameObject *frame_function_13_title_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_13_title_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_13_title_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_title_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_13_title_of_module_django__template__defaultfilters );
        }

        frame_function_13_title_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_a385cf7710efb9ba14e6819d970961f9, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_13_title_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_13_title_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 252 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_t.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_unicode_digest_1d6349a7559569a80752bbbd2c7c61d4, PyObjectTemporary( MAKE_FUNCTION_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters(  ) ).asObject(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_title ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 253 );
        {
            PyObjectTempKeeper1 call5;
            return ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_unicode_digest_bc1b8afa5a74f0882f8fa2948a7d997c, PyObjectTemporary( MAKE_FUNCTION_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters(  ) ).asObject(), _python_var_t.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_13_title_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_13_title_of_module_django__template__defaultfilters );
           frame_function_13_title_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_title_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "title() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "title() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "title() got multiple values for keyword argument 'value'" );
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
                   "title() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "title() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "title() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "title() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "title() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "title() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "title() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "title() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "title() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "title() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "title() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "title() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "title() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "title() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_13_title_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_13_title_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_13_title_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_title_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_m )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_m( _python_str_plain_m, _python_par_m );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters ) )
    {
        if ( frame_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters );
        }

        frame_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_27313a8d03270e8e845dbd05c6335b9c, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 252 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_m.asObject(), _python_str_plain_group ) ).asObject(), _python_int_0 ) ).asObject(), _python_str_plain_lower ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_m.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters );
           frame_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_m = NULL;
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
            if ( found == false && _python_str_plain_m == key )
            {
                if (unlikely( _python_par_m ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'm'" );
                    goto error_exit;
                }

                _python_par_m = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_m, key ) )
            {
                if (unlikely( _python_par_m ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'm'" );
                    goto error_exit;
                }

                _python_par_m = value;

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
         if (unlikely( _python_par_m != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'm'" );
             goto error_exit;
         }

        _python_par_m = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters( self, _python_par_m );

error_exit:;

    Py_XDECREF( _python_par_m );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_m )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_m( _python_str_plain_m, _python_par_m );

    // Actual function code.
    static PyFrameObject *frame_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters ) )
    {
        if ( frame_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters );
        }

        frame_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_e4932d7a63903d0fb13726e512c081a2, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 253 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_m.asObject(), _python_str_plain_group ) ).asObject(), _python_int_0 ) ).asObject(), _python_str_plain_lower ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_m.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters );
           frame_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_m = NULL;
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
            if ( found == false && _python_str_plain_m == key )
            {
                if (unlikely( _python_par_m ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'm'" );
                    goto error_exit;
                }

                _python_par_m = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_m, key ) )
            {
                if (unlikely( _python_par_m ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'm'" );
                    goto error_exit;
                }

                _python_par_m = value;

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
         if (unlikely( _python_par_m != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'm'" );
             goto error_exit;
         }

        _python_par_m = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters( self, _python_par_m );

error_exit:;

    Py_XDECREF( _python_par_m );

    return NULL;
}

static PyObject *dparse_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_truncatechars_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );
    PyObjectLocalVariable _python_var_length( _python_str_plain_length );

    // Actual function code.
    static PyFrameObject *frame_function_14_truncatechars_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_14_truncatechars_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_14_truncatechars_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14_truncatechars_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_14_truncatechars_of_module_django__template__defaultfilters );
        }

        frame_function_14_truncatechars_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_7fb5ac45d3a1ff09f9d44e2a2edbb5f1, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_14_truncatechars_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_14_truncatechars_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 263 );
        try
        {
            frame_guard.setLineNumber( 264 );
            _python_var_length.assign1( TO_INT( _python_var_arg.asObject() ) );
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
                frame_guard.setLineNumber( 266 );
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
        frame_guard.setLineNumber( 267 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__template__defaultfilters_Truncator.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) ).asObject(), _python_str_plain_chars ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_length.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_length.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_14_truncatechars_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_14_truncatechars_of_module_django__template__defaultfilters );
           frame_function_14_truncatechars_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_14_truncatechars_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "truncatechars() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "truncatechars() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "truncatechars() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "truncatechars() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "truncatechars() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "truncatechars() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "truncatechars() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "truncatechars() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "truncatechars() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "truncatechars() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "truncatechars() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "truncatechars() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "truncatechars() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "truncatechars() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "truncatechars() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "truncatechars() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "truncatechars() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "truncatechars() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "truncatechars() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "truncatechars() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_14_truncatechars_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_14_truncatechars_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_14_truncatechars_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_truncatechars_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_truncatewords_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );
    PyObjectLocalVariable _python_var_length( _python_str_plain_length );

    // Actual function code.
    static PyFrameObject *frame_function_15_truncatewords_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_15_truncatewords_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_15_truncatewords_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_truncatewords_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_15_truncatewords_of_module_django__template__defaultfilters );
        }

        frame_function_15_truncatewords_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_68f6556ad3cb3ef248aec39b39c24114, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_15_truncatewords_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_15_truncatewords_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 279 );
        try
        {
            frame_guard.setLineNumber( 280 );
            _python_var_length.assign1( TO_INT( _python_var_arg.asObject() ) );
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
                frame_guard.setLineNumber( 282 );
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
        frame_guard.setLineNumber( 283 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__template__defaultfilters_Truncator.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) ).asObject(), _python_str_plain_words ) ), CALL_FUNCTION( call3.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_length.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_70ca81ba9b4ab8ee298098e9e14ff8ef ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_length.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_15_truncatewords_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_15_truncatewords_of_module_django__template__defaultfilters );
           frame_function_15_truncatewords_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_15_truncatewords_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "truncatewords() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "truncatewords() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "truncatewords() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "truncatewords() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "truncatewords() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "truncatewords() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "truncatewords() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "truncatewords() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "truncatewords() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "truncatewords() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "truncatewords() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "truncatewords() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "truncatewords() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "truncatewords() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "truncatewords() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "truncatewords() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "truncatewords() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "truncatewords() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "truncatewords() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "truncatewords() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_15_truncatewords_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_15_truncatewords_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_15_truncatewords_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_truncatewords_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_truncatewords_html_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );
    PyObjectLocalVariable _python_var_length( _python_str_plain_length );

    // Actual function code.
    static PyFrameObject *frame_function_16_truncatewords_html_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_16_truncatewords_html_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_16_truncatewords_html_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16_truncatewords_html_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_16_truncatewords_html_of_module_django__template__defaultfilters );
        }

        frame_function_16_truncatewords_html_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_2205031946651b81c21aade3e2b0eb0a, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_16_truncatewords_html_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_16_truncatewords_html_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 295 );
        try
        {
            frame_guard.setLineNumber( 296 );
            _python_var_length.assign1( TO_INT( _python_var_arg.asObject() ) );
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
                frame_guard.setLineNumber( 298 );
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
        frame_guard.setLineNumber( 299 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__template__defaultfilters_Truncator.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) ).asObject(), _python_str_plain_words ) ), CALL_FUNCTION( call3.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_length.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_b63f3909c63e170514812718b3f765e3 ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_length.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_16_truncatewords_html_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_16_truncatewords_html_of_module_django__template__defaultfilters );
           frame_function_16_truncatewords_html_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_16_truncatewords_html_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "truncatewords_html() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "truncatewords_html() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "truncatewords_html() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "truncatewords_html() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "truncatewords_html() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "truncatewords_html() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "truncatewords_html() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "truncatewords_html() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "truncatewords_html() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "truncatewords_html() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "truncatewords_html() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "truncatewords_html() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "truncatewords_html() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "truncatewords_html() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "truncatewords_html() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "truncatewords_html() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "truncatewords_html() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "truncatewords_html() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "truncatewords_html() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "truncatewords_html() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_16_truncatewords_html_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_16_truncatewords_html_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_16_truncatewords_html_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_truncatewords_html_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_upper_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_17_upper_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_17_upper_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_17_upper_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_17_upper_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_17_upper_of_module_django__template__defaultfilters );
        }

        frame_function_17_upper_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_320bd44b42a99ce25bd19999712e28df, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_17_upper_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_17_upper_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 305 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_upper ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_17_upper_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_17_upper_of_module_django__template__defaultfilters );
           frame_function_17_upper_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_17_upper_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "upper() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "upper() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "upper() got multiple values for keyword argument 'value'" );
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
                   "upper() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "upper() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "upper() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "upper() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "upper() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "upper() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "upper() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "upper() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "upper() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "upper() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "upper() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "upper() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "upper() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "upper() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_17_upper_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_17_upper_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_17_upper_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_upper_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18_urlencode_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_safe )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_safe( _python_str_plain_safe, _python_par_safe );
    PyObjectLocalVariable _python_var_kwargs( _python_str_plain_kwargs );

    // Actual function code.
    _python_var_kwargs.assign1( PyDict_New() );
    static PyFrameObject *frame_function_18_urlencode_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_18_urlencode_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_18_urlencode_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_18_urlencode_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_18_urlencode_of_module_django__template__defaultfilters );
        }

        frame_function_18_urlencode_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_83a70df6acc7244739f99dfbd75ce56d, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_18_urlencode_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_18_urlencode_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 319 );
        if ( ( _python_var_safe.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 320 );
            {
                    PyObject *tmp_identifier = _python_var_safe.asObject();
                    SET_SUBSCRIPT( tmp_identifier, _python_var_kwargs.asObject(), _python_unicode_plain_safe );
            }
        }
        frame_guard.setLineNumber( 321 );
        {
            PyObjectTempKeeper0 call_tmp1;
            PyObjectTempKeeper1 call_tmp2;
            return ( call_tmp1.assign( _mvar_django__template__defaultfilters_urlquote.asObject0() ), call_tmp2.assign( MAKE_TUPLE1( _python_var_value.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_safe.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_kwargs.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_18_urlencode_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_18_urlencode_of_module_django__template__defaultfilters );
           frame_function_18_urlencode_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_18_urlencode_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_safe = NULL;
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
                PyErr_Format( PyExc_TypeError, "urlencode() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "urlencode() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_safe == key )
            {
                if (unlikely( _python_par_safe ))
                {
                    PyErr_Format( PyExc_TypeError, "urlencode() got multiple values for keyword argument 'safe'" );
                    goto error_exit;
                }

                _python_par_safe = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "urlencode() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_safe, key ) )
            {
                if (unlikely( _python_par_safe ))
                {
                    PyErr_Format( PyExc_TypeError, "urlencode() got multiple values for keyword argument 'safe'" );
                    goto error_exit;
                }

                _python_par_safe = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "urlencode() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "urlencode() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "urlencode() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "urlencode() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "urlencode() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "urlencode() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "urlencode() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "urlencode() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "urlencode() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "urlencode() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "urlencode() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "urlencode() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "urlencode() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "urlencode() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_safe != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "urlencode() got multiple values for keyword argument 'safe'" );
             goto error_exit;
         }

        _python_par_safe = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_safe == NULL )
    {
        _python_par_safe = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_safe );
    }


    return impl_function_18_urlencode_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_safe );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_safe );

    return NULL;
}

static PyObject *dparse_function_18_urlencode_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_18_urlencode_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_18_urlencode_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_19_urlize_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_autoescape )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_autoescape( _python_str_plain_autoescape, _python_par_autoescape );

    // Actual function code.
    static PyFrameObject *frame_function_19_urlize_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_19_urlize_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_19_urlize_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_19_urlize_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_19_urlize_of_module_django__template__defaultfilters );
        }

        frame_function_19_urlize_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_3171175ec6789ccd2b30a3b6d45a6d3c, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_19_urlize_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_19_urlize_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 327 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper0 call4;
            return ( call4.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__template__defaultfilters_urlize_impl.asObject0() ), call2.assign( MAKE_TUPLE1( _python_var_value.asObject() ) ), CALL_FUNCTION( call1.asObject0(), call2.asObject0(), PyObjectTemporary( MAKE_DICT2( Py_True, _python_str_plain_nofollow, _python_var_autoescape.asObject(), _python_str_plain_autoescape ) ).asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_autoescape.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_19_urlize_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_19_urlize_of_module_django__template__defaultfilters );
           frame_function_19_urlize_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_19_urlize_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "urlize() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'autoescape'" );
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
                    PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'value'" );
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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "urlize() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "urlize() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "urlize() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "urlize() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "urlize() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "urlize() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "urlize() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
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
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_autoescape != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "urlize() got multiple values for keyword argument 'autoescape'" );
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


    return impl_function_19_urlize_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_autoescape );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_autoescape );

    return NULL;
}

static PyObject *dparse_function_19_urlize_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_19_urlize_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_19_urlize_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_20_urlizetrunc_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_limit, PyObject *_python_par_autoescape )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_limit( _python_str_plain_limit, _python_par_limit );
    PyObjectLocalParameterVariableNoDel _python_var_autoescape( _python_str_plain_autoescape, _python_par_autoescape );

    // Actual function code.
    static PyFrameObject *frame_function_20_urlizetrunc_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_20_urlizetrunc_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_20_urlizetrunc_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_20_urlizetrunc_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_20_urlizetrunc_of_module_django__template__defaultfilters );
        }

        frame_function_20_urlizetrunc_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_0ae2969f3f77bed2623e697ed1f98d86, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_20_urlizetrunc_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_20_urlizetrunc_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 338 );
        {
            PyObjectTempKeeper0 call10;
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper1 make_dict1;
            return ( call10.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( ( call7.assign( _mvar_django__template__defaultfilters_urlize_impl.asObject0() ), call8.assign( MAKE_TUPLE1( _python_var_value.asObject() ) ), CALL_FUNCTION( call7.asObject0(), call8.asObject0(), PyObjectTemporary( ( make_dict1.assign( TO_INT( _python_var_limit.asObject() ) ), MAKE_DICT3( make_dict1.asObject0(), _python_str_plain_trim_url_limit, Py_True, _python_str_plain_nofollow, _python_var_autoescape.asObject(), _python_str_plain_autoescape ) ) ).asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_autoescape.updateLocalsDict( _python_var_limit.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_20_urlizetrunc_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_20_urlizetrunc_of_module_django__template__defaultfilters );
           frame_function_20_urlizetrunc_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_20_urlizetrunc_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_limit = NULL;
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
                PyErr_Format( PyExc_TypeError, "urlizetrunc() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "urlizetrunc() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_limit == key )
            {
                if (unlikely( _python_par_limit ))
                {
                    PyErr_Format( PyExc_TypeError, "urlizetrunc() got multiple values for keyword argument 'limit'" );
                    goto error_exit;
                }

                _python_par_limit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_autoescape == key )
            {
                if (unlikely( _python_par_autoescape ))
                {
                    PyErr_Format( PyExc_TypeError, "urlizetrunc() got multiple values for keyword argument 'autoescape'" );
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
                    PyErr_Format( PyExc_TypeError, "urlizetrunc() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_limit, key ) )
            {
                if (unlikely( _python_par_limit ))
                {
                    PyErr_Format( PyExc_TypeError, "urlizetrunc() got multiple values for keyword argument 'limit'" );
                    goto error_exit;
                }

                _python_par_limit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_autoescape, key ) )
            {
                if (unlikely( _python_par_autoescape ))
                {
                    PyErr_Format( PyExc_TypeError, "urlizetrunc() got multiple values for keyword argument 'autoescape'" );
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
                   "urlizetrunc() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "urlizetrunc() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "urlizetrunc() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "urlizetrunc() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "urlizetrunc() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "urlizetrunc() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "urlizetrunc() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "urlizetrunc() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "urlizetrunc() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "urlizetrunc() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "urlizetrunc() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "urlizetrunc() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "urlizetrunc() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "urlizetrunc() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_limit != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "urlizetrunc() got multiple values for keyword argument 'limit'" );
             goto error_exit;
         }

        _python_par_limit = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_autoescape != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "urlizetrunc() got multiple values for keyword argument 'autoescape'" );
             goto error_exit;
         }

        _python_par_autoescape = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_autoescape == NULL )
    {
        _python_par_autoescape = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_autoescape );
    }


    return impl_function_20_urlizetrunc_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_limit, _python_par_autoescape );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_limit );
    Py_XDECREF( _python_par_autoescape );

    return NULL;
}

static PyObject *dparse_function_20_urlizetrunc_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_20_urlizetrunc_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_20_urlizetrunc_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_21_wordcount_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_21_wordcount_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_21_wordcount_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_21_wordcount_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_21_wordcount_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_21_wordcount_of_module_django__template__defaultfilters );
        }

        frame_function_21_wordcount_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_4769a6a534e8380c8fffd7a59ef6dd79, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_21_wordcount_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_21_wordcount_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 345 );
        return BUILTIN_LEN( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_split ) ).asObject() ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_21_wordcount_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_21_wordcount_of_module_django__template__defaultfilters );
           frame_function_21_wordcount_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_21_wordcount_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "wordcount() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "wordcount() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "wordcount() got multiple values for keyword argument 'value'" );
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
                   "wordcount() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "wordcount() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "wordcount() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "wordcount() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "wordcount() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "wordcount() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "wordcount() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "wordcount() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "wordcount() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "wordcount() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "wordcount() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "wordcount() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "wordcount() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "wordcount() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_21_wordcount_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_21_wordcount_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_21_wordcount_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_21_wordcount_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_22_wordwrap_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_22_wordwrap_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_22_wordwrap_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_22_wordwrap_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_22_wordwrap_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_22_wordwrap_of_module_django__template__defaultfilters );
        }

        frame_function_22_wordwrap_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_7c349fe4d71fd5d8ec350a01847d7a81, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_22_wordwrap_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_22_wordwrap_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 355 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            return ( call1.assign( _mvar_django__template__defaultfilters_wrap.asObject0() ), call2.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( TO_INT( _python_var_arg.asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_22_wordwrap_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_22_wordwrap_of_module_django__template__defaultfilters );
           frame_function_22_wordwrap_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_22_wordwrap_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "wordwrap() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "wordwrap() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "wordwrap() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "wordwrap() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "wordwrap() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "wordwrap() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "wordwrap() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "wordwrap() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "wordwrap() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "wordwrap() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "wordwrap() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "wordwrap() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "wordwrap() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "wordwrap() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "wordwrap() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "wordwrap() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "wordwrap() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "wordwrap() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "wordwrap() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "wordwrap() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_22_wordwrap_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_22_wordwrap_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_22_wordwrap_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_22_wordwrap_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_23_ljust_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_23_ljust_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_23_ljust_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_23_ljust_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_23_ljust_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_23_ljust_of_module_django__template__defaultfilters );
        }

        frame_function_23_ljust_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_24471275aac122bc775f9f2bd38ac9c1, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_23_ljust_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_23_ljust_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 365 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_ljust ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( TO_INT( _python_var_arg.asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_23_ljust_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_23_ljust_of_module_django__template__defaultfilters );
           frame_function_23_ljust_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_23_ljust_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "ljust() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "ljust() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "ljust() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "ljust() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "ljust() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "ljust() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "ljust() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "ljust() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "ljust() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "ljust() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "ljust() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ljust() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "ljust() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ljust() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "ljust() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "ljust() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "ljust() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "ljust() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "ljust() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ljust() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_23_ljust_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_23_ljust_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_23_ljust_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_23_ljust_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_24_rjust_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_24_rjust_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_24_rjust_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_24_rjust_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_24_rjust_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_24_rjust_of_module_django__template__defaultfilters );
        }

        frame_function_24_rjust_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_e249d7e7d7c648b6a138871235b9c46a, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_24_rjust_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_24_rjust_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 375 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_rjust ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( TO_INT( _python_var_arg.asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_24_rjust_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_24_rjust_of_module_django__template__defaultfilters );
           frame_function_24_rjust_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_24_rjust_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "rjust() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "rjust() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "rjust() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "rjust() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "rjust() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "rjust() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "rjust() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "rjust() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "rjust() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "rjust() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "rjust() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "rjust() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "rjust() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "rjust() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "rjust() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "rjust() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "rjust() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "rjust() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "rjust() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "rjust() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_24_rjust_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_24_rjust_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_24_rjust_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_24_rjust_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_25_center_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_25_center_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_25_center_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_25_center_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_25_center_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_25_center_of_module_django__template__defaultfilters );
        }

        frame_function_25_center_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_ccbd576d1aca8306545e064134f95e6d, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_25_center_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_25_center_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 381 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_center ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( TO_INT( _python_var_arg.asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_25_center_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_25_center_of_module_django__template__defaultfilters );
           frame_function_25_center_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_25_center_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "center() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "center() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "center() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "center() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "center() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "center() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "center() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "center() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "center() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "center() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "center() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "center() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "center() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "center() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "center() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "center() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "center() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "center() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "center() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "center() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_25_center_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_25_center_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_25_center_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_25_center_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_26_cut_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );
    PyObjectLocalVariable _python_var_safe( _python_str_plain_safe );

    // Actual function code.
    static PyFrameObject *frame_function_26_cut_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_26_cut_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_26_cut_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_26_cut_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_26_cut_of_module_django__template__defaultfilters );
        }

        frame_function_26_cut_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_da71d5aa22bb4150aae5671f97f9ef54, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_26_cut_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_26_cut_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 389 );
        {
            PyObjectTempKeeper0 isinstance1;
            _python_var_safe.assign0( BOOL_FROM( ( isinstance1.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), _mvar_django__template__defaultfilters_SafeData.asObject0() ) ) ) );
        }
        frame_guard.setLineNumber( 390 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_value.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_replace ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_arg.asObject(), _python_unicode_empty ) ) );
        }
        frame_guard.setLineNumber( 391 );
        if ( ( CHECK_IF_TRUE( _python_var_safe.asObject() ) && RICH_COMPARE_BOOL_NE( _python_var_arg.asObject(), _python_unicode_chr_59 ) ) )
        {
            frame_guard.setLineNumber( 392 );
            {
                PyObjectTempKeeper0 call6;
                return ( call6.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_value.asObject() ) );
            }
        }
        frame_guard.setLineNumber( 393 );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_safe.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_26_cut_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_26_cut_of_module_django__template__defaultfilters );
           frame_function_26_cut_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_26_cut_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "cut() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "cut() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "cut() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "cut() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "cut() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "cut() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "cut() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "cut() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "cut() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "cut() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "cut() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "cut() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "cut() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "cut() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "cut() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "cut() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "cut() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "cut() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "cut() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "cut() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_26_cut_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_26_cut_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_26_cut_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_26_cut_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_27_escape_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_27_escape_filter_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_27_escape_filter_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_27_escape_filter_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_27_escape_filter_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_27_escape_filter_of_module_django__template__defaultfilters );
        }

        frame_function_27_escape_filter_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_1990a4728aac0d70576fabc3f52c45f9, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_27_escape_filter_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_27_escape_filter_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 405 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__template__defaultfilters_mark_for_escaping.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_27_escape_filter_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_27_escape_filter_of_module_django__template__defaultfilters );
           frame_function_27_escape_filter_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_27_escape_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "escape_filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "escape_filter() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "escape_filter() got multiple values for keyword argument 'value'" );
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
                   "escape_filter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "escape_filter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "escape_filter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "escape_filter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "escape_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "escape_filter() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "escape_filter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "escape_filter() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "escape_filter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "escape_filter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "escape_filter() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "escape_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "escape_filter() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "escape_filter() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_27_escape_filter_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_27_escape_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_27_escape_filter_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_27_escape_filter_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_28_force_escape_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_28_force_escape_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_28_force_escape_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_28_force_escape_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_28_force_escape_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_28_force_escape_of_module_django__template__defaultfilters );
        }

        frame_function_28_force_escape_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_e58af20ad7c5fb8ed4a7af1bd344d0b8, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_28_force_escape_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_28_force_escape_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 415 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__template__defaultfilters_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_28_force_escape_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_28_force_escape_of_module_django__template__defaultfilters );
           frame_function_28_force_escape_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_28_force_escape_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "force_escape() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "force_escape() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "force_escape() got multiple values for keyword argument 'value'" );
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
                   "force_escape() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "force_escape() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "force_escape() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "force_escape() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "force_escape() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "force_escape() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "force_escape() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "force_escape() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "force_escape() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "force_escape() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "force_escape() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "force_escape() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "force_escape() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "force_escape() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_28_force_escape_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_28_force_escape_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_28_force_escape_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_28_force_escape_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_29_linebreaks_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_autoescape )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_autoescape( _python_str_plain_autoescape, _python_par_autoescape );

    // Actual function code.
    static PyFrameObject *frame_function_29_linebreaks_filter_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_29_linebreaks_filter_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_29_linebreaks_filter_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_29_linebreaks_filter_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_29_linebreaks_filter_of_module_django__template__defaultfilters );
        }

        frame_function_29_linebreaks_filter_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_b7a198c8dc68859f33717ee2ab6f5253, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_29_linebreaks_filter_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_29_linebreaks_filter_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 425 );
        {
            PyObjectTempKeeper0 isinstance1;
            PyObjectTempKeeper0 keeper_0;
            _python_var_autoescape.assign0( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_autoescape.asObject() ) ) ? UNARY_OPERATION( UNARY_NOT, BOOL_FROM( ( isinstance1.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), _mvar_django__template__defaultfilters_SafeData.asObject0() ) ) ) ) : keeper_0.asObject0() ) );
        }
        frame_guard.setLineNumber( 426 );
        {
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call6;
            return ( call6.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( ( call3.assign( _mvar_django__template__defaultfilters_linebreaks.asObject0() ), call4.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_autoescape.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_autoescape.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_29_linebreaks_filter_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_29_linebreaks_filter_of_module_django__template__defaultfilters );
           frame_function_29_linebreaks_filter_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_29_linebreaks_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "linebreaks_filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "linebreaks_filter() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "linebreaks_filter() got multiple values for keyword argument 'autoescape'" );
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
                    PyErr_Format( PyExc_TypeError, "linebreaks_filter() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "linebreaks_filter() got multiple values for keyword argument 'autoescape'" );
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
                   "linebreaks_filter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "linebreaks_filter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "linebreaks_filter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "linebreaks_filter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "linebreaks_filter() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "linebreaks_filter() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "linebreaks_filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "linebreaks_filter() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "linebreaks_filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "linebreaks_filter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "linebreaks_filter() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "linebreaks_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "linebreaks_filter() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "linebreaks_filter() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_autoescape != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "linebreaks_filter() got multiple values for keyword argument 'autoescape'" );
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


    return impl_function_29_linebreaks_filter_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_autoescape );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_autoescape );

    return NULL;
}

static PyObject *dparse_function_29_linebreaks_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_29_linebreaks_filter_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_29_linebreaks_filter_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_30_linebreaksbr_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_autoescape )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_autoescape( _python_str_plain_autoescape, _python_par_autoescape );

    // Actual function code.
    static PyFrameObject *frame_function_30_linebreaksbr_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_30_linebreaksbr_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_30_linebreaksbr_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_30_linebreaksbr_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_30_linebreaksbr_of_module_django__template__defaultfilters );
        }

        frame_function_30_linebreaksbr_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_5673c05a99f09449e7bbb99463702f43, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_30_linebreaksbr_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_30_linebreaksbr_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 435 );
        {
            PyObjectTempKeeper0 isinstance1;
            PyObjectTempKeeper0 keeper_0;
            _python_var_autoescape.assign0( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_autoescape.asObject() ) ) ? UNARY_OPERATION( UNARY_NOT, BOOL_FROM( ( isinstance1.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), _mvar_django__template__defaultfilters_SafeData.asObject0() ) ) ) ) : keeper_0.asObject0() ) );
        }
        frame_guard.setLineNumber( 436 );
        {
            PyObjectTempKeeper0 call3;
            _python_var_value.assign1( ( call3.assign( _mvar_django__template__defaultfilters_normalize_newlines.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_value.asObject() ) ) );
        }
        frame_guard.setLineNumber( 437 );
        if ( CHECK_IF_TRUE( _python_var_autoescape.asObject() ) )
        {
            frame_guard.setLineNumber( 438 );
            {
                PyObjectTempKeeper0 call5;
                _python_var_value.assign1( ( call5.assign( _mvar_django__template__defaultfilters_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_value.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 439 );
        {
            PyObjectTempKeeper0 call7;
            return ( call7.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_10, _python_unicode_digest_9039450fb67fb8056e940a1e173fdf51 ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_autoescape.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_30_linebreaksbr_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_30_linebreaksbr_of_module_django__template__defaultfilters );
           frame_function_30_linebreaksbr_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_30_linebreaksbr_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "linebreaksbr() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "linebreaksbr() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "linebreaksbr() got multiple values for keyword argument 'autoescape'" );
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
                    PyErr_Format( PyExc_TypeError, "linebreaksbr() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "linebreaksbr() got multiple values for keyword argument 'autoescape'" );
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
                   "linebreaksbr() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "linebreaksbr() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "linebreaksbr() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "linebreaksbr() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "linebreaksbr() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "linebreaksbr() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "linebreaksbr() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "linebreaksbr() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "linebreaksbr() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "linebreaksbr() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "linebreaksbr() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "linebreaksbr() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "linebreaksbr() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "linebreaksbr() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_autoescape != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "linebreaksbr() got multiple values for keyword argument 'autoescape'" );
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


    return impl_function_30_linebreaksbr_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_autoescape );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_autoescape );

    return NULL;
}

static PyObject *dparse_function_30_linebreaksbr_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_30_linebreaksbr_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_30_linebreaksbr_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_31_safe_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_31_safe_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_31_safe_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_31_safe_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_31_safe_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_31_safe_of_module_django__template__defaultfilters );
        }

        frame_function_31_safe_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_98cad76b845f533cdb9d37c33ee4351d, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_31_safe_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_31_safe_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 447 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_31_safe_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_31_safe_of_module_django__template__defaultfilters );
           frame_function_31_safe_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_31_safe_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "safe() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "safe() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "safe() got multiple values for keyword argument 'value'" );
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
                   "safe() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "safe() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "safe() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "safe() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "safe() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "safe() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "safe() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "safe() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "safe() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "safe() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "safe() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "safe() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "safe() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "safe() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_31_safe_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_31_safe_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_31_safe_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_31_safe_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_32_safeseq_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalVariable _python_var_obj( _python_str_plain_obj );

    // Actual function code.
    static PyFrameObject *frame_function_32_safeseq_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_32_safeseq_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_32_safeseq_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_32_safeseq_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_32_safeseq_of_module_django__template__defaultfilters );
        }

        frame_function_32_safeseq_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_0c46bace58546702ad6465bafe504177, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_32_safeseq_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_32_safeseq_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 456 );
        return impl_listcontr_1_of_function_32_safeseq_of_module_django__template__defaultfilters( MAKE_ITERATOR( _python_var_value.asObject() ), _python_var_obj );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_obj.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_32_safeseq_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_32_safeseq_of_module_django__template__defaultfilters );
           frame_function_32_safeseq_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_32_safeseq_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "safeseq() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "safeseq() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "safeseq() got multiple values for keyword argument 'value'" );
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
                   "safeseq() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "safeseq() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "safeseq() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "safeseq() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "safeseq() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "safeseq() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "safeseq() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "safeseq() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "safeseq() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "safeseq() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "safeseq() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "safeseq() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "safeseq() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "safeseq() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_32_safeseq_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_32_safeseq_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_32_safeseq_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_32_safeseq_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_32_safeseq_of_module_django__template__defaultfilters( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_obj )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 456 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 456 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_obj.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper0 call3;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call3.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__template__defaultfilters_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_obj.asObject() ) ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_33_removetags_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_tags )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_tags( _python_str_plain_tags, _python_par_tags );
    PyObjectLocalVariable _python_var_remove_tags( _python_str_plain_remove_tags );

    // Actual function code.
    static PyFrameObject *frame_function_33_removetags_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_33_removetags_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_33_removetags_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_33_removetags_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_33_removetags_of_module_django__template__defaultfilters );
        }

        frame_function_33_removetags_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_971163d798ced47fbb5f755151c4901c, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_33_removetags_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_33_removetags_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 462 );
        _python_var_remove_tags.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3a0db97fb5d78c487963bfc1490797d, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, PyObjectTemporary( _python_var_tags.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_remove_tags.updateLocalsDict( PyDict_New() ) ) ) ).asObject(), _python_list_str_plain_remove_tags_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_remove_tags ) );
        frame_guard.setLineNumber( 463 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            return ( call1.assign( _python_var_remove_tags.asObject() ), call2.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_tags.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_tags.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_remove_tags.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_33_removetags_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_33_removetags_of_module_django__template__defaultfilters );
           frame_function_33_removetags_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_33_removetags_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
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
                PyErr_Format( PyExc_TypeError, "removetags() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "removetags() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_tags == key )
            {
                if (unlikely( _python_par_tags ))
                {
                    PyErr_Format( PyExc_TypeError, "removetags() got multiple values for keyword argument 'tags'" );
                    goto error_exit;
                }

                _python_par_tags = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "removetags() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_tags, key ) )
            {
                if (unlikely( _python_par_tags ))
                {
                    PyErr_Format( PyExc_TypeError, "removetags() got multiple values for keyword argument 'tags'" );
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
                   "removetags() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "removetags() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "removetags() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "removetags() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "removetags() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "removetags() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "removetags() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "removetags() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "removetags() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "removetags() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "removetags() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "removetags() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "removetags() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "removetags() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_tags != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "removetags() got multiple values for keyword argument 'tags'" );
             goto error_exit;
         }

        _python_par_tags = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_33_removetags_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_tags );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_tags );

    return NULL;
}

static PyObject *dparse_function_33_removetags_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_33_removetags_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_33_removetags_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_34_striptags_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_34_striptags_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_34_striptags_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_34_striptags_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_34_striptags_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_34_striptags_of_module_django__template__defaultfilters );
        }

        frame_function_34_striptags_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_9821160ac218be7c336396796951a53a, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_34_striptags_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_34_striptags_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 469 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__template__defaultfilters_strip_tags.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_34_striptags_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_34_striptags_of_module_django__template__defaultfilters );
           frame_function_34_striptags_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_34_striptags_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "striptags() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "striptags() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "striptags() got multiple values for keyword argument 'value'" );
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
                   "striptags() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "striptags() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "striptags() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "striptags() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "striptags() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "striptags() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "striptags() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "striptags() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "striptags() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "striptags() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "striptags() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "striptags() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "striptags() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "striptags() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_34_striptags_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_34_striptags_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_34_striptags_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_34_striptags_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_35_dictsort_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_35_dictsort_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_35_dictsort_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_35_dictsort_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_35_dictsort_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_35_dictsort_of_module_django__template__defaultfilters );
        }

        frame_function_35_dictsort_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_07908d68bcf303fc16a44a9b17155644, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_35_dictsort_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_35_dictsort_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 481 );
        try
        {
            frame_guard.setLineNumber( 482 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper1 call4;
                return ( call4.assign( MAKE_TUPLE1( _python_var_value.asObject() ) ), CALL_FUNCTION( LOOKUP_BUILTIN( _python_str_plain_sorted ), call4.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__template__defaultfilters_Variable.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_arg.asObject() ) ) ).asObject(), _python_str_plain_resolve ) ).asObject(), _python_str_plain_key ) ).asObject() ) );
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

            if ( _exception.matches( PyExc_TypeError ) || _exception.matches( _mvar_django__template__defaultfilters_VariableDoesNotExist.asObject0() ) )
            {
                frame_guard.detachFrame();
                return INCREASE_REFCOUNT( _python_unicode_empty );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_35_dictsort_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_35_dictsort_of_module_django__template__defaultfilters );
           frame_function_35_dictsort_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_35_dictsort_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "dictsort() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "dictsort() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "dictsort() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "dictsort() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "dictsort() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "dictsort() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "dictsort() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "dictsort() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "dictsort() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "dictsort() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "dictsort() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "dictsort() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "dictsort() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "dictsort() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "dictsort() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "dictsort() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "dictsort() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "dictsort() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "dictsort() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "dictsort() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_35_dictsort_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_35_dictsort_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_35_dictsort_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_35_dictsort_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_36_dictsortreversed_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_36_dictsortreversed_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_36_dictsortreversed_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_36_dictsortreversed_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_36_dictsortreversed_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_36_dictsortreversed_of_module_django__template__defaultfilters );
        }

        frame_function_36_dictsortreversed_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_99754b5a18d9716407e74afa710299cc, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_36_dictsortreversed_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_36_dictsortreversed_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 492 );
        try
        {
            frame_guard.setLineNumber( 493 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper1 call4;
                return ( call4.assign( MAKE_TUPLE1( _python_var_value.asObject() ) ), CALL_FUNCTION( LOOKUP_BUILTIN( _python_str_plain_sorted ), call4.asObject0(), PyObjectTemporary( MAKE_DICT2( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__template__defaultfilters_Variable.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_arg.asObject() ) ) ).asObject(), _python_str_plain_resolve ) ).asObject(), _python_str_plain_key, Py_True, _python_str_plain_reverse ) ).asObject() ) );
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

            if ( _exception.matches( PyExc_TypeError ) || _exception.matches( _mvar_django__template__defaultfilters_VariableDoesNotExist.asObject0() ) )
            {
                frame_guard.detachFrame();
                return INCREASE_REFCOUNT( _python_unicode_empty );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_36_dictsortreversed_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_36_dictsortreversed_of_module_django__template__defaultfilters );
           frame_function_36_dictsortreversed_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_36_dictsortreversed_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "dictsortreversed() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "dictsortreversed() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "dictsortreversed() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "dictsortreversed() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "dictsortreversed() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "dictsortreversed() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "dictsortreversed() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "dictsortreversed() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "dictsortreversed() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "dictsortreversed() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "dictsortreversed() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "dictsortreversed() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "dictsortreversed() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "dictsortreversed() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "dictsortreversed() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "dictsortreversed() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "dictsortreversed() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "dictsortreversed() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "dictsortreversed() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "dictsortreversed() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_36_dictsortreversed_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_36_dictsortreversed_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_36_dictsortreversed_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_36_dictsortreversed_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_37_first_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_37_first_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_37_first_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_37_first_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_37_first_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_37_first_of_module_django__template__defaultfilters );
        }

        frame_function_37_first_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_97f1712749313706313f89075f1bd260, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_37_first_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_37_first_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 500 );
        try
        {
            frame_guard.setLineNumber( 501 );
            return LOOKUP_SUBSCRIPT_CONST( _python_var_value.asObject(), _python_int_0, 0 );
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
                return INCREASE_REFCOUNT( _python_unicode_empty );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_37_first_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_37_first_of_module_django__template__defaultfilters );
           frame_function_37_first_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_37_first_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "first() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "first() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "first() got multiple values for keyword argument 'value'" );
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
                   "first() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "first() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "first() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "first() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "first() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "first() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "first() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "first() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "first() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "first() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "first() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "first() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "first() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "first() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_37_first_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_37_first_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_37_first_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_37_first_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_38_join_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg, PyObject *_python_par_autoescape )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );
    PyObjectLocalParameterVariableNoDel _python_var_autoescape( _python_str_plain_autoescape, _python_par_autoescape );
    PyObjectLocalVariable _python_var_data( _python_str_plain_data );
    PyObjectLocalVariable _python_var_v( _python_str_plain_v );

    // Actual function code.
    static PyFrameObject *frame_function_38_join_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_38_join_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_38_join_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_38_join_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_38_join_of_module_django__template__defaultfilters );
        }

        frame_function_38_join_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_e9165058ebaa36c51932447302c7bc66, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_38_join_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_38_join_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 510 );
        {
            PyObjectTempKeeper0 call2;
            _python_var_value.assign1( ( call2.assign( _mvar_django__template__defaultfilters_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_map ), call2.asObject0(), _python_var_value.asObject() ) ) );
        }
        frame_guard.setLineNumber( 511 );
        if ( CHECK_IF_TRUE( _python_var_autoescape.asObject() ) )
        {
            frame_guard.setLineNumber( 512 );
            _python_var_value.assign1( impl_listcontr_1_of_function_38_join_of_module_django__template__defaultfilters( MAKE_ITERATOR( _python_var_value.asObject() ), _python_var_v ) );
        }
        frame_guard.setLineNumber( 513 );
        try
        {
            frame_guard.setLineNumber( 514 );
            {
                PyObjectTempKeeper0 call4;
                PyObjectTempKeeper1 call6;
                _python_var_data.assign1( ( call6.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call4.assign( _mvar_django__template__defaultfilters_conditional_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_arg.asObject() ) ) ).asObject(), _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_value.asObject() ) ) );
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
                frame_guard.setLineNumber( 516 );
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
        frame_guard.setLineNumber( 517 );
        {
            PyObjectTempKeeper0 call8;
            return ( call8.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_data.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_autoescape.updateLocalsDict( _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_data.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_38_join_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_38_join_of_module_django__template__defaultfilters );
           frame_function_38_join_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_38_join_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "join() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "join() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "join() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_autoescape == key )
            {
                if (unlikely( _python_par_autoescape ))
                {
                    PyErr_Format( PyExc_TypeError, "join() got multiple values for keyword argument 'autoescape'" );
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
                    PyErr_Format( PyExc_TypeError, "join() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "join() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_autoescape, key ) )
            {
                if (unlikely( _python_par_autoescape ))
                {
                    PyErr_Format( PyExc_TypeError, "join() got multiple values for keyword argument 'autoescape'" );
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
                   "join() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "join() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "join() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "join() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "join() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "join() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "join() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "join() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "join() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "join() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "join() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "join() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "join() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "join() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "join() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_autoescape != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "join() got multiple values for keyword argument 'autoescape'" );
             goto error_exit;
         }

        _python_par_autoescape = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_autoescape == NULL )
    {
        _python_par_autoescape = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_autoescape );
    }


    return impl_function_38_join_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg, _python_par_autoescape );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );
    Py_XDECREF( _python_par_autoescape );

    return NULL;
}

static PyObject *dparse_function_38_join_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_38_join_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_38_join_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_38_join_of_module_django__template__defaultfilters( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_v )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 512 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 512 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_v.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( _mvar_django__template__defaultfilters_conditional_escape.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_v.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_39_last_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_39_last_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_39_last_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_39_last_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_39_last_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_39_last_of_module_django__template__defaultfilters );
        }

        frame_function_39_last_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_f099a0b593b9ccbc6c985c1d103b9579, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_39_last_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_39_last_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 522 );
        try
        {
            frame_guard.setLineNumber( 523 );
            return LOOKUP_SUBSCRIPT_CONST( _python_var_value.asObject(), _python_int_neg_1, -1 );
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
                return INCREASE_REFCOUNT( _python_unicode_empty );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_39_last_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_39_last_of_module_django__template__defaultfilters );
           frame_function_39_last_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_39_last_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "last() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "last() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "last() got multiple values for keyword argument 'value'" );
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
                   "last() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "last() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "last() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "last() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "last() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "last() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "last() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "last() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "last() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "last() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "last() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "last() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "last() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "last() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_39_last_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_39_last_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_39_last_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_39_last_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_40_length_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_40_length_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_40_length_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_40_length_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_40_length_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_40_length_of_module_django__template__defaultfilters );
        }

        frame_function_40_length_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_8e685ab8b0444af903bb1ea4b9305567, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_40_length_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_40_length_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 530 );
        try
        {
            frame_guard.setLineNumber( 531 );
            return BUILTIN_LEN( _python_var_value.asObject() );
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
                return INCREASE_REFCOUNT( _python_unicode_empty );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_40_length_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_40_length_of_module_django__template__defaultfilters );
           frame_function_40_length_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_40_length_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "length() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "length() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "length() got multiple values for keyword argument 'value'" );
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
                   "length() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "length() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "length() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "length() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "length() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "length() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "length() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "length() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "length() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "length() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "length() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "length() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "length() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "length() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_40_length_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_40_length_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_40_length_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_40_length_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_41_length_is_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_41_length_is_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_41_length_is_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_41_length_is_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_41_length_is_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_41_length_is_of_module_django__template__defaultfilters );
        }

        frame_function_41_length_is_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_ae4b8b63d21ced16a1998d19443311bb, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_41_length_is_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_41_length_is_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 538 );
        try
        {
            frame_guard.setLineNumber( 539 );
            {
                PyObjectTempKeeper1 cmp1;
                return ( cmp1.assign( BUILTIN_LEN( _python_var_value.asObject() ) ), RICH_COMPARE_EQ( cmp1.asObject0(), PyObjectTemporary( TO_INT( _python_var_arg.asObject() ) ).asObject() ) );
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
                return INCREASE_REFCOUNT( _python_unicode_empty );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_41_length_is_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_41_length_is_of_module_django__template__defaultfilters );
           frame_function_41_length_is_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_41_length_is_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "length_is() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "length_is() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "length_is() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "length_is() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "length_is() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "length_is() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "length_is() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "length_is() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "length_is() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "length_is() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "length_is() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "length_is() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "length_is() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "length_is() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "length_is() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "length_is() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "length_is() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "length_is() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "length_is() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "length_is() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_41_length_is_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_41_length_is_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_41_length_is_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_41_length_is_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_42_random_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_42_random_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_42_random_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_42_random_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_42_random_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_42_random_of_module_django__template__defaultfilters );
        }

        frame_function_42_random_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_12e09ebf0748e52eeaf916469cd71441, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_42_random_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_42_random_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 546 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_random_module.asObject0(), _python_str_plain_choice ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_42_random_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_42_random_of_module_django__template__defaultfilters );
           frame_function_42_random_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_42_random_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "random() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "random() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "random() got multiple values for keyword argument 'value'" );
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
                   "random() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "random() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "random() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "random() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "random() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "random() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "random() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "random() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "random() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "random() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "random() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "random() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "random() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "random() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_42_random_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_42_random_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_42_random_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_42_random_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_43_slice_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );
    PyObjectLocalVariable _python_var_bits( _python_str_plain_bits );
    PyObjectLocalVariable _python_var_x( _python_str_plain_x );

    // Actual function code.
    static PyFrameObject *frame_function_43_slice_filter_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_43_slice_filter_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_43_slice_filter_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_43_slice_filter_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_43_slice_filter_of_module_django__template__defaultfilters );
        }

        frame_function_43_slice_filter_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_429c0794d778c3614f223b52c4fdf0fa, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_43_slice_filter_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_43_slice_filter_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 557 );
        try
        {
            _python_var_bits.assign1( PyList_New( 0 ) );
            {
                frame_guard.setLineNumber( 559 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_arg.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_58 ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 559 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_x.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 560 );
                    if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( _python_var_x.asObject() ) ).asObject(), _python_int_0 ) )
                    {
                        frame_guard.setLineNumber( 561 );
                        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_bits.asObject(), _python_str_plain_append ) ).asObject(), Py_None ) );
                    }
                    else
                    {
                        frame_guard.setLineNumber( 563 );
                        {
                            PyObjectTempKeeper1 call1;
                            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_bits.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( TO_INT( _python_var_x.asObject() ) ).asObject() ) ) );
                        }
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 564 );
            {
                PyObjectTempKeeper0 subscr3;
                return ( subscr3.assign( _python_var_value.asObject() ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), PyObjectTemporary( impl_function_7_complex_call_helper_star_list_of_module___internal__( INCREASE_REFCOUNT( LOOKUP_BUILTIN( _python_str_plain_slice ) ), _python_var_bits.asObject1() ) ).asObject() ) );
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
                frame_guard.setLineNumber( 567 );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_x.updateLocalsDict( _python_var_bits.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_43_slice_filter_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_43_slice_filter_of_module_django__template__defaultfilters );
           frame_function_43_slice_filter_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_43_slice_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "slice_filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "slice_filter() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "slice_filter() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "slice_filter() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "slice_filter() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "slice_filter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "slice_filter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "slice_filter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "slice_filter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "slice_filter() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "slice_filter() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "slice_filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "slice_filter() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "slice_filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "slice_filter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "slice_filter() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "slice_filter() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "slice_filter() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "slice_filter() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "slice_filter() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_43_slice_filter_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_43_slice_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_43_slice_filter_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_43_slice_filter_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_44_unordered_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_autoescape )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_autoescape( _python_str_plain_autoescape, _python_par_autoescape );
    PyObjectSharedLocalVariable _python_var_escaper( _python_str_plain_escaper );
    PyObjectSharedLocalVariable _python_var_convert_old_style_list( _python_str_plain_convert_old_style_list );
    PyObjectSharedLocalVariable _python_var__helper( _python_str_plain__helper );
    PyObjectLocalVariable _python_var_converted( _python_str_plain_converted );

    // Actual function code.
    static PyFrameObject *frame_function_44_unordered_list_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_44_unordered_list_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_44_unordered_list_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_44_unordered_list_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_44_unordered_list_of_module_django__template__defaultfilters );
        }

        frame_function_44_unordered_list_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_6675aef2e1a21f882ba59a2d4da87bc1, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_44_unordered_list_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_44_unordered_list_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 591 );
        if ( CHECK_IF_TRUE( _python_var_autoescape.asObject() ) )
        {
            frame_guard.setLineNumber( 592 );
            _python_var_escaper.assign0( _mvar_django__template__defaultfilters_conditional_escape.asObject0() );
        }
        else
        {
            _python_var_escaper.assign1( MAKE_FUNCTION_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters(  ) );
        }
        _python_var_convert_old_style_list.assign1( MAKE_FUNCTION_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters( _python_var_convert_old_style_list ) );
        _python_var__helper.assign1( MAKE_FUNCTION_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters( _python_var__helper, _python_var_escaper ) );
        {
            frame_guard.setLineNumber( 653 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper0 call1;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( _python_var_convert_old_style_list.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_value.assign0( _python_tmp_element_1.asObject() );
            _python_var_converted.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 654 );
        {
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper0 call5;
            return ( call5.assign( _mvar_django__template__defaultfilters_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( _python_var__helper.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_value.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_autoescape.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_converted.updateLocalsDict( _python_var__helper.updateLocalsDict( _python_var_convert_old_style_list.updateLocalsDict( _python_var_escaper.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_44_unordered_list_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_44_unordered_list_of_module_django__template__defaultfilters );
           frame_function_44_unordered_list_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_44_unordered_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "unordered_list() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "unordered_list() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "unordered_list() got multiple values for keyword argument 'autoescape'" );
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
                    PyErr_Format( PyExc_TypeError, "unordered_list() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "unordered_list() got multiple values for keyword argument 'autoescape'" );
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
                   "unordered_list() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "unordered_list() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "unordered_list() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "unordered_list() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "unordered_list() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unordered_list() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unordered_list() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unordered_list() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unordered_list() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "unordered_list() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "unordered_list() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "unordered_list() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "unordered_list() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "unordered_list() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_autoescape != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unordered_list() got multiple values for keyword argument 'autoescape'" );
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


    return impl_function_44_unordered_list_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_autoescape );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_autoescape );

    return NULL;
}

static PyObject *dparse_function_44_unordered_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_44_unordered_list_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_44_unordered_list_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters ) )
    {
        if ( frame_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters );
        }

        frame_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_f1598a9ffc0488e4a348048aec1f92a1, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 594 );
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

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters );
           frame_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_list_ )
{
    // The context of the function.
    struct _context_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters_t *_python_context = (struct _context_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_list_( _python_str_plain_list_, _python_par_list_ );
    PyObjectLocalVariable _python_var_first_item( _python_str_plain_first_item );
    PyObjectLocalVariable _python_var_second_item( _python_str_plain_second_item );
    PyObjectLocalVariable _python_var_old_style_list( _python_str_plain_old_style_list );
    PyObjectLocalVariable _python_var_new_second_item( _python_str_plain_new_second_item );
    PyObjectLocalVariable _python_var_sublist( _python_str_plain_sublist );
    PyObjectLocalVariable _python_var_item( _python_str_plain_item );

    // Actual function code.
    static PyFrameObject *frame_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters );
        }

        frame_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_429564fc222c6f6ac89bae5f382d8885, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 605 );
        if ( ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_list_.asObject(), PyObjectTemporary( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_tuple ), LOOKUP_BUILTIN( _python_str_plain_list ) ) ).asObject() ) )) || RICH_COMPARE_BOOL_NE( PyObjectTemporary( BUILTIN_LEN( _python_var_list_.asObject() ) ).asObject(), _python_int_pos_2 ) ) )
        {
            frame_guard.setLineNumber( 606 );
            return MAKE_TUPLE2( _python_var_list_.asObject(), Py_False );
        }
        {
            frame_guard.setLineNumber( 607 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_var_list_.asObject() ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_first_item.assign0( _python_tmp_element_1.asObject() );
            _python_var_second_item.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 608 );
        if ( RICH_COMPARE_BOOL_EQ( _python_var_second_item.asObject(), PyObjectTemporary( PyList_New( 0 ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 609 );
            return MAKE_TUPLE2( PyObjectTemporary( MAKE_LIST1( _python_var_first_item.asObject1() ) ).asObject(), Py_True );
        }
        frame_guard.setLineNumber( 610 );
        try
        {
            frame_guard.setLineNumber( 612 );
            DECREASE_REFCOUNT( MAKE_ITERATOR( _python_var_second_item.asObject() ) );
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
                frame_guard.setLineNumber( 614 );
                return MAKE_TUPLE2( _python_var_list_.asObject(), Py_False );
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
        _python_var_old_style_list.assign0( Py_True );
        _python_var_new_second_item.assign1( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 617 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_second_item.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 617 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_sublist.assign0( _python_tmp_iter_value.asObject() );
                }
                {
                    frame_guard.setLineNumber( 618 );
                    PyObject *_tmp_python_tmp_source_iter;
                    {
                        PyObjectTempKeeper0 call1;
                        _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( _python_context->python_closure_convert_old_style_list.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_sublist.asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    _python_var_item.assign0( _python_tmp_element_1.asObject() );
                    _python_var_old_style_list.assign0( _python_tmp_element_2.asObject() );
                }
                frame_guard.setLineNumber( 619 );
                if ( (!( CHECK_IF_TRUE( _python_var_old_style_list.asObject() ) )) )
                {
                    frame_guard.setLineNumber( 620 );
                    break;
                }
                frame_guard.setLineNumber( 621 );
                {
                    PyObjectTempKeeper1 call3;
                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_new_second_item.asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_item.asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 622 );
        if ( CHECK_IF_TRUE( _python_var_old_style_list.asObject() ) )
        {
            frame_guard.setLineNumber( 623 );
            _python_var_second_item.assign0( _python_var_new_second_item.asObject() );
        }
        frame_guard.setLineNumber( 624 );
        {
            PyObjectTempKeeper0 make_list5;
            PyObjectTempKeeper1 make_tuple7;
            return ( make_tuple7.assign( ( make_list5.assign( _python_var_first_item.asObject() ), MAKE_LIST2( make_list5.asObject(), _python_var_second_item.asObject1() ) ) ), MAKE_TUPLE2( make_tuple7.asObject0(), _python_var_old_style_list.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_list_.updateLocalsDict( _python_context->python_closure_convert_old_style_list.updateLocalsDict( _python_var_item.updateLocalsDict( _python_var_sublist.updateLocalsDict( _python_var_new_second_item.updateLocalsDict( _python_var_old_style_list.updateLocalsDict( _python_var_second_item.updateLocalsDict( _python_var_first_item.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters );
           frame_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_list_ = NULL;
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
                PyErr_Format( PyExc_TypeError, "convert_old_style_list() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "convert_old_style_list() got multiple values for keyword argument 'list_'" );
                    goto error_exit;
                }

                _python_par_list_ = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_list_, key ) )
            {
                if (unlikely( _python_par_list_ ))
                {
                    PyErr_Format( PyExc_TypeError, "convert_old_style_list() got multiple values for keyword argument 'list_'" );
                    goto error_exit;
                }

                _python_par_list_ = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "convert_old_style_list() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "convert_old_style_list() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "convert_old_style_list() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "convert_old_style_list() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "convert_old_style_list() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "convert_old_style_list() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "convert_old_style_list() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "convert_old_style_list() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "convert_old_style_list() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "convert_old_style_list() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "convert_old_style_list() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "convert_old_style_list() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "convert_old_style_list() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_list_ != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "convert_old_style_list() got multiple values for keyword argument 'list_'" );
             goto error_exit;
         }

        _python_par_list_ = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters( self, _python_par_list_ );

error_exit:;

    Py_XDECREF( _python_par_list_ );

    return NULL;
}

static PyObject *dparse_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_list_, PyObject *_python_par_tabs )
{
    // The context of the function.
    struct _context_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters_t *_python_context = (struct _context_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_list_( _python_str_plain_list_, _python_par_list_ );
    PyObjectLocalParameterVariableNoDel _python_var_tabs( _python_str_plain_tabs, _python_par_tabs );
    PyObjectLocalVariable _python_var_indent( _python_str_plain_indent );
    PyObjectLocalVariable _python_var_output( _python_str_plain_output );
    PyObjectLocalVariable _python_var_list_length( _python_str_plain_list_length );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_title( _python_str_plain_title );
    PyObjectLocalVariable _python_var_sublist( _python_str_plain_sublist );
    PyObjectLocalVariable _python_var_sublist_item( _python_str_plain_sublist_item );
    PyObjectLocalVariable _python_var_next_item( _python_str_plain_next_item );

    // Actual function code.
    static PyFrameObject *frame_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters );
        }

        frame_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_9f1faf894cca58bb2c31f6fad8f18187, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 626 );
        _python_var_indent.assign1( BINARY_OPERATION_MUL( _python_unicode_chr_9, _python_var_tabs.asObject() ) );
        _python_var_output.assign1( PyList_New( 0 ) );
        frame_guard.setLineNumber( 629 );
        _python_var_list_length.assign1( BUILTIN_LEN( _python_var_list_.asObject() ) );
        _python_var_i.assign0( _python_int_0 );
        frame_guard.setLineNumber( 631 );
        while( true )
        {
            frame_guard.setLineNumber( 631 );
            {
                PyObjectTempKeeper0 cmp1;
                if ( (!( ( cmp1.assign( _python_var_i.asObject() ), RICH_COMPARE_BOOL_LT( cmp1.asObject0(), _python_var_list_length.asObject() ) ) )) )
            {
                frame_guard.setLineNumber( 631 );
                break;
            }
            }
            frame_guard.setLineNumber( 632 );
            {
                PyObjectTempKeeper0 subscr3;
                _python_var_title.assign1( ( subscr3.assign( _python_var_list_.asObject() ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_var_i.asObject() ) ) );
            }
            _python_var_sublist.assign0( _python_unicode_empty );
            _python_var_sublist_item.assign0( Py_None );
            frame_guard.setLineNumber( 635 );
            if ( BUILTIN_ISINSTANCE_BOOL( _python_var_title.asObject(), PyObjectTemporary( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_list ), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 636 );
                _python_var_sublist_item.assign0( _python_var_title.asObject() );
                _python_var_title.assign0( _python_unicode_empty );
            }
            else
            {
                frame_guard.setLineNumber( 638 );
                {
                    PyObjectTempKeeper0 cmp7;
                    if ( ( cmp7.assign( _python_var_i.asObject() ), RICH_COMPARE_BOOL_LT( cmp7.asObject0(), PyObjectTemporary( BINARY_OPERATION_SUB( _python_var_list_length.asObject(), _python_int_pos_1 ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 639 );
                    {
                        PyObjectTempKeeper0 subscr5;
                        _python_var_next_item.assign1( ( subscr5.assign( _python_var_list_.asObject() ), LOOKUP_SUBSCRIPT( subscr5.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_i.asObject(), _python_int_pos_1 ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 640 );
                    if ( ( CHECK_IF_TRUE( _python_var_next_item.asObject() ) && BUILTIN_ISINSTANCE_BOOL( _python_var_next_item.asObject(), PyObjectTemporary( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_list ), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) ).asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 642 );
                        _python_var_sublist_item.assign0( _python_var_next_item.asObject() );
                        {
                            frame_guard.setLineNumber( 644 );
                            PyObject *_python_tmp_inplace_start = _python_var_i.asObject();
                            PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_int_pos_1 ) );
                            if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                            {
                                _python_var_i.assign0( _python_tmp_inplace_end.asObject() );
                            }
                        }
                    }
                }
                }
            }
            frame_guard.setLineNumber( 645 );
            if ( CHECK_IF_TRUE( _python_var_sublist_item.asObject() ) )
            {
                frame_guard.setLineNumber( 646 );
                {
                    PyObjectTempKeeper0 call10;
                    PyObjectTempKeeper0 call9;
                    _python_var_sublist.assign1( ( call9.assign( _python_context->python_closure__helper.asObject() ), call10.assign( _python_var_sublist_item.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), call10.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_tabs.asObject(), _python_int_pos_1 ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 647 );
                {
                    PyObjectTempKeeper0 make_tuple12;
                    PyObjectTempKeeper0 make_tuple13;
                    PyObjectTempKeeper0 make_tuple14;
                    _python_var_sublist.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_7b6f26a153d2adf828b4f80b14e357b6, PyObjectTemporary( ( make_tuple12.assign( _python_var_indent.asObject() ), make_tuple13.assign( _python_var_sublist.asObject() ), make_tuple14.assign( _python_var_indent.asObject() ), MAKE_TUPLE4( make_tuple12.asObject0(), make_tuple13.asObject0(), make_tuple14.asObject0(), _python_var_indent.asObject() ) ) ).asObject() ) );
                }
            }
            frame_guard.setLineNumber( 649 );
            {
                PyObjectTempKeeper0 call16;
                PyObjectTempKeeper0 call18;
                PyObjectTempKeeper1 call23;
                PyObjectTempKeeper0 make_tuple20;
                PyObjectTempKeeper1 make_tuple21;
                DECREASE_REFCOUNT( ( call23.assign( LOOKUP_ATTRIBUTE( _python_var_output.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_df862f4bd7644e842fbe8ab4e7dc235f, PyObjectTemporary( ( make_tuple20.assign( _python_var_indent.asObject() ), make_tuple21.assign( ( call18.assign( _python_context->python_closure_escaper.asObject() ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), PyObjectTemporary( ( call16.assign( _mvar_django__template__defaultfilters_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), _python_var_title.asObject() ) ) ).asObject() ) ) ), MAKE_TUPLE3( make_tuple20.asObject0(), make_tuple21.asObject0(), _python_var_sublist.asObject() ) ) ).asObject() ) ).asObject() ) ) );
            }
            {
                frame_guard.setLineNumber( 651 );
                PyObject *_python_tmp_inplace_start = _python_var_i.asObject();
                PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_int_pos_1 ) );
                if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                {
                    _python_var_i.assign0( _python_tmp_inplace_end.asObject() );
                }
            }

           CONSIDER_THREADING();
        }
        frame_guard.setLineNumber( 652 );
        {
            PyObjectTempKeeper1 call25;
            return ( call25.assign( LOOKUP_ATTRIBUTE( _python_unicode_chr_10, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), _python_var_output.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_tabs.updateLocalsDict( _python_var_list_.updateLocalsDict( _python_context->python_closure_escaper.updateLocalsDict( _python_context->python_closure__helper.updateLocalsDict( _python_var_next_item.updateLocalsDict( _python_var_sublist_item.updateLocalsDict( _python_var_sublist.updateLocalsDict( _python_var_title.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_list_length.updateLocalsDict( _python_var_output.updateLocalsDict( _python_var_indent.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters );
           frame_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_list_ = NULL;
    PyObject *_python_par_tabs = NULL;
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
                PyErr_Format( PyExc_TypeError, "_helper() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_helper() got multiple values for keyword argument 'list_'" );
                    goto error_exit;
                }

                _python_par_list_ = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_tabs == key )
            {
                if (unlikely( _python_par_tabs ))
                {
                    PyErr_Format( PyExc_TypeError, "_helper() got multiple values for keyword argument 'tabs'" );
                    goto error_exit;
                }

                _python_par_tabs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_list_, key ) )
            {
                if (unlikely( _python_par_list_ ))
                {
                    PyErr_Format( PyExc_TypeError, "_helper() got multiple values for keyword argument 'list_'" );
                    goto error_exit;
                }

                _python_par_list_ = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_tabs, key ) )
            {
                if (unlikely( _python_par_tabs ))
                {
                    PyErr_Format( PyExc_TypeError, "_helper() got multiple values for keyword argument 'tabs'" );
                    goto error_exit;
                }

                _python_par_tabs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_helper() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_helper() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_helper() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_helper() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_helper() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_helper() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_helper() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_helper() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_helper() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_helper() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_helper() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_helper() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_helper() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_helper() got multiple values for keyword argument 'list_'" );
             goto error_exit;
         }

        _python_par_list_ = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_tabs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_helper() got multiple values for keyword argument 'tabs'" );
             goto error_exit;
         }

        _python_par_tabs = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_tabs == NULL )
    {
        _python_par_tabs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_tabs );
    }


    return impl_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters( self, _python_par_list_, _python_par_tabs );

error_exit:;

    Py_XDECREF( _python_par_list_ );
    Py_XDECREF( _python_par_tabs );

    return NULL;
}

static PyObject *dparse_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_45_add_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_45_add_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_45_add_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_45_add_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_45_add_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_45_add_of_module_django__template__defaultfilters );
        }

        frame_function_45_add_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_997edd5d4f0ba4f93f8de327d032392c, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_45_add_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_45_add_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 663 );
        try
        {
            frame_guard.setLineNumber( 664 );
            {
                PyObjectTempKeeper1 op3;
                return ( op3.assign( TO_INT( _python_var_value.asObject() ) ), BINARY_OPERATION_ADD( op3.asObject0(), PyObjectTemporary( TO_INT( _python_var_arg.asObject() ) ).asObject() ) );
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
                frame_guard.setLineNumber( 666 );
                try
                {
                    frame_guard.setLineNumber( 667 );
                    {
                        PyObjectTempKeeper0 op1;
                        return ( op1.assign( _python_var_value.asObject() ), BINARY_OPERATION_ADD( op1.asObject0(), _python_var_arg.asObject() ) );
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
                        return INCREASE_REFCOUNT( _python_unicode_empty );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_45_add_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_45_add_of_module_django__template__defaultfilters );
           frame_function_45_add_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_45_add_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "add() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "add() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "add() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "add() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "add() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "add() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "add() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_45_add_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_45_add_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_45_add_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_45_add_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_46_get_digit_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_46_get_digit_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_46_get_digit_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_46_get_digit_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_46_get_digit_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_46_get_digit_of_module_django__template__defaultfilters );
        }

        frame_function_46_get_digit_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_35508e73e5df2e6f358a7c99703a3da1, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_46_get_digit_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_46_get_digit_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 679 );
        try
        {
            frame_guard.setLineNumber( 680 );
            _python_var_arg.assign1( TO_INT( _python_var_arg.asObject() ) );
            frame_guard.setLineNumber( 681 );
            _python_var_value.assign1( TO_INT( _python_var_value.asObject() ) );
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
                frame_guard.setLineNumber( 683 );
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
        frame_guard.setLineNumber( 684 );
        if ( RICH_COMPARE_BOOL_LT( _python_var_arg.asObject(), _python_int_pos_1 ) )
        {
            frame_guard.setLineNumber( 685 );
            return _python_var_value.asObject1();
        }
        frame_guard.setLineNumber( 686 );
        try
        {
            frame_guard.setLineNumber( 687 );
            {
                PyObjectTempKeeper1 subscr1;
                return TO_INT( PyObjectTemporary( ( subscr1.assign( TO_STR( _python_var_value.asObject() ) ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, _python_var_arg.asObject() ) ).asObject() ) ) ).asObject() );
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

            if ( _exception.matches( PyExc_IndexError ) )
            {
                frame_guard.detachFrame();
                return INCREASE_REFCOUNT( _python_int_0 );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_46_get_digit_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_46_get_digit_of_module_django__template__defaultfilters );
           frame_function_46_get_digit_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_46_get_digit_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_digit() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_digit() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "get_digit() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "get_digit() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "get_digit() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_digit() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_digit() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_digit() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_digit() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_digit() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_digit() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_digit() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_digit() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_digit() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_digit() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_digit() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "get_digit() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_digit() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_digit() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_digit() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_46_get_digit_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_46_get_digit_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_46_get_digit_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_46_get_digit_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_47_date_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_47_date_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_47_date_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_47_date_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_47_date_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_47_date_of_module_django__template__defaultfilters );
        }

        frame_function_47_date_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_db87df2eb372557c9156d17574f087a0, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_47_date_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_47_date_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 698 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_var_value.asObject(), _python_tuple_none_unicode_empty_tuple ) )
        {
            return INCREASE_REFCOUNT( _python_unicode_empty );
        }
        frame_guard.setLineNumber( 700 );
        if ( ( _python_var_arg.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 701 );
            _python_var_arg.assign1( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_settings.asObject0(), _python_str_plain_DATE_FORMAT ) );
        }
        frame_guard.setLineNumber( 702 );
        try
        {
            frame_guard.setLineNumber( 703 );
            {
                PyObjectTempKeeper1 call4;
                PyObjectTempKeeper0 call5;
                return ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_formats.asObject0(), _python_str_plain_date_format ) ), call5.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), _python_var_arg.asObject() ) );
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
                frame_guard.setLineNumber( 705 );
                try
                {
                    frame_guard.setLineNumber( 706 );
                    {
                        PyObjectTempKeeper0 call1;
                        PyObjectTempKeeper0 call2;
                        return ( call1.assign( _mvar_django__template__defaultfilters_format.asObject0() ), call2.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_arg.asObject() ) );
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
                        return INCREASE_REFCOUNT( _python_unicode_empty );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_47_date_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_47_date_of_module_django__template__defaultfilters );
           frame_function_47_date_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_47_date_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "date() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "date() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "date() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "date() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "date() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "date() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "date() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "date() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "date() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "date() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "date() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "date() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "date() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "date() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "date() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "date() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "date() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "date() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "date() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "date() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_arg == NULL )
    {
        _python_par_arg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_arg );
    }


    return impl_function_47_date_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_47_date_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_47_date_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_47_date_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_48_time_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_48_time_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_48_time_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_48_time_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_48_time_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_48_time_of_module_django__template__defaultfilters );
        }

        frame_function_48_time_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_adf4a46630c7ed2cddaa0d5fb1bb8aeb, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_48_time_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_48_time_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 713 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_var_value.asObject(), _python_tuple_none_unicode_empty_tuple ) )
        {
            return INCREASE_REFCOUNT( _python_unicode_empty );
        }
        frame_guard.setLineNumber( 715 );
        if ( ( _python_var_arg.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 716 );
            _python_var_arg.assign1( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_settings.asObject0(), _python_str_plain_TIME_FORMAT ) );
        }
        frame_guard.setLineNumber( 717 );
        try
        {
            frame_guard.setLineNumber( 718 );
            {
                PyObjectTempKeeper1 call4;
                PyObjectTempKeeper0 call5;
                return ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_formats.asObject0(), _python_str_plain_time_format ) ), call5.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), _python_var_arg.asObject() ) );
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
                frame_guard.setLineNumber( 720 );
                try
                {
                    frame_guard.setLineNumber( 721 );
                    {
                        PyObjectTempKeeper0 call1;
                        PyObjectTempKeeper0 call2;
                        return ( call1.assign( _mvar_django__template__defaultfilters_time_format.asObject0() ), call2.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_arg.asObject() ) );
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
                        return INCREASE_REFCOUNT( _python_unicode_empty );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_48_time_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_48_time_of_module_django__template__defaultfilters );
           frame_function_48_time_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_48_time_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "time() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "time() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "time() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "time() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "time() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "time() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "time() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "time() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "time() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "time() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "time() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "time() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "time() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "time() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "time() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "time() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "time() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "time() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_arg == NULL )
    {
        _python_par_arg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_arg );
    }


    return impl_function_48_time_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_48_time_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_48_time_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_48_time_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_49_timesince_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_49_timesince_filter_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_49_timesince_filter_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_49_timesince_filter_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_49_timesince_filter_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_49_timesince_filter_of_module_django__template__defaultfilters );
        }

        frame_function_49_timesince_filter_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_2b880780408966865504b14334a1e7f6, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_49_timesince_filter_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_49_timesince_filter_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 728 );
        if ( (!( CHECK_IF_TRUE( _python_var_value.asObject() ) )) )
        {
            return INCREASE_REFCOUNT( _python_unicode_empty );
        }
        frame_guard.setLineNumber( 730 );
        try
        {
            frame_guard.setLineNumber( 731 );
            if ( CHECK_IF_TRUE( _python_var_arg.asObject() ) )
            {
                frame_guard.setLineNumber( 732 );
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper0 call2;
                    return ( call1.assign( _mvar_django__template__defaultfilters_timesince.asObject0() ), call2.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_arg.asObject() ) );
                }
            }
            frame_guard.setLineNumber( 733 );
            {
                PyObjectTempKeeper0 call4;
                return ( call4.assign( _mvar_django__template__defaultfilters_timesince.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_value.asObject() ) );
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
                return INCREASE_REFCOUNT( _python_unicode_empty );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_49_timesince_filter_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_49_timesince_filter_of_module_django__template__defaultfilters );
           frame_function_49_timesince_filter_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_49_timesince_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "timesince_filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "timesince_filter() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "timesince_filter() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "timesince_filter() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "timesince_filter() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "timesince_filter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "timesince_filter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "timesince_filter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "timesince_filter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "timesince_filter() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "timesince_filter() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "timesince_filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "timesince_filter() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "timesince_filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "timesince_filter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "timesince_filter() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "timesince_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "timesince_filter() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "timesince_filter() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "timesince_filter() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_arg == NULL )
    {
        _python_par_arg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_arg );
    }


    return impl_function_49_timesince_filter_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_49_timesince_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_49_timesince_filter_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_49_timesince_filter_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_50_timeuntil_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_50_timeuntil_filter_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_50_timeuntil_filter_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_50_timeuntil_filter_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_50_timeuntil_filter_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_50_timeuntil_filter_of_module_django__template__defaultfilters );
        }

        frame_function_50_timeuntil_filter_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_039a29eeb33e551dd82fb656a904b49d, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_50_timeuntil_filter_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_50_timeuntil_filter_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 740 );
        if ( (!( CHECK_IF_TRUE( _python_var_value.asObject() ) )) )
        {
            return INCREASE_REFCOUNT( _python_unicode_empty );
        }
        frame_guard.setLineNumber( 742 );
        try
        {
            frame_guard.setLineNumber( 743 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call2;
                return ( call1.assign( _mvar_django__template__defaultfilters_timeuntil.asObject0() ), call2.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_arg.asObject() ) );
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
                return INCREASE_REFCOUNT( _python_unicode_empty );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_50_timeuntil_filter_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_50_timeuntil_filter_of_module_django__template__defaultfilters );
           frame_function_50_timeuntil_filter_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_50_timeuntil_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "timeuntil_filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "timeuntil_filter() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "timeuntil_filter() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "timeuntil_filter() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "timeuntil_filter() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "timeuntil_filter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "timeuntil_filter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "timeuntil_filter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "timeuntil_filter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "timeuntil_filter() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "timeuntil_filter() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "timeuntil_filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "timeuntil_filter() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "timeuntil_filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "timeuntil_filter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "timeuntil_filter() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "timeuntil_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "timeuntil_filter() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "timeuntil_filter() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "timeuntil_filter() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_arg == NULL )
    {
        _python_par_arg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_arg );
    }


    return impl_function_50_timeuntil_filter_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_50_timeuntil_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_50_timeuntil_filter_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_50_timeuntil_filter_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_51_default_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_51_default_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_51_default_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_51_default_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_51_default_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_51_default_of_module_django__template__defaultfilters );
        }

        frame_function_51_default_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_242974926d40d7ff4dd913739a879650, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_51_default_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_51_default_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 754 );
        {
            PyObjectTempKeeper0 keeper_0;
            return INCREASE_REFCOUNT( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_value.asObject() ) ) ? keeper_0.asObject0() : _python_var_arg.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_51_default_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_51_default_of_module_django__template__defaultfilters );
           frame_function_51_default_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_51_default_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "default() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "default() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "default() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "default() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "default() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "default() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "default() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "default() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "default() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "default() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "default() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "default() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "default() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "default() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "default() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "default() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "default() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "default() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "default() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "default() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_51_default_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_51_default_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_51_default_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_51_default_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_52_default_if_none_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_52_default_if_none_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_52_default_if_none_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_52_default_if_none_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_52_default_if_none_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_52_default_if_none_of_module_django__template__defaultfilters );
        }

        frame_function_52_default_if_none_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_d0c492d91a3ee67dfdc058d673cc5a5c, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_52_default_if_none_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_52_default_if_none_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 759 );
        if ( ( _python_var_value.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 760 );
            return _python_var_arg.asObject1();
        }
        frame_guard.setLineNumber( 761 );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_52_default_if_none_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_52_default_if_none_of_module_django__template__defaultfilters );
           frame_function_52_default_if_none_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_52_default_if_none_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "default_if_none() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "default_if_none() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "default_if_none() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "default_if_none() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "default_if_none() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "default_if_none() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "default_if_none() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "default_if_none() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "default_if_none() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "default_if_none() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "default_if_none() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "default_if_none() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "default_if_none() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "default_if_none() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "default_if_none() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "default_if_none() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "default_if_none() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "default_if_none() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "default_if_none() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "default_if_none() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_52_default_if_none_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_52_default_if_none_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_52_default_if_none_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_52_default_if_none_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_53_divisibleby_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );

    // Actual function code.
    static PyFrameObject *frame_function_53_divisibleby_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_53_divisibleby_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_53_divisibleby_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_53_divisibleby_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_53_divisibleby_of_module_django__template__defaultfilters );
        }

        frame_function_53_divisibleby_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_31830be6443d0cba75b5d617284a39f6, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_53_divisibleby_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_53_divisibleby_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 766 );
        {
            PyObjectTempKeeper1 op1;
            return RICH_COMPARE_EQ( PyObjectTemporary( ( op1.assign( TO_INT( _python_var_value.asObject() ) ), BINARY_OPERATION_REMAINDER( op1.asObject0(), PyObjectTemporary( TO_INT( _python_var_arg.asObject() ) ).asObject() ) ) ).asObject(), _python_int_0 );
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_53_divisibleby_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_53_divisibleby_of_module_django__template__defaultfilters );
           frame_function_53_divisibleby_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_53_divisibleby_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "divisibleby() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "divisibleby() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "divisibleby() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "divisibleby() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "divisibleby() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "divisibleby() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "divisibleby() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "divisibleby() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "divisibleby() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "divisibleby() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "divisibleby() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "divisibleby() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "divisibleby() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "divisibleby() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "divisibleby() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "divisibleby() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "divisibleby() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "divisibleby() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "divisibleby() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "divisibleby() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_53_divisibleby_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_53_divisibleby_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_53_divisibleby_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_53_divisibleby_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_54_yesno_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );
    PyObjectLocalVariable _python_var_bits( _python_str_plain_bits );
    PyObjectLocalVariable _python_var_yes( _python_str_plain_yes );
    PyObjectLocalVariable _python_var_no( _python_str_plain_no );
    PyObjectLocalVariable _python_var_maybe( _python_str_plain_maybe );

    // Actual function code.
    static PyFrameObject *frame_function_54_yesno_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_54_yesno_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_54_yesno_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_54_yesno_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_54_yesno_of_module_django__template__defaultfilters );
        }

        frame_function_54_yesno_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_70bfd97eead737c3fd77e0720248fac1, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_54_yesno_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_54_yesno_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 784 );
        if ( ( _python_var_arg.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 785 );
            _python_var_arg.assign1( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_ugettext.asObject0(), _python_unicode_digest_5badbd1845937c8d3d9a332b3dc443f0 ) );
        }
        frame_guard.setLineNumber( 786 );
        _python_var_bits.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_arg.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_44 ) );
        frame_guard.setLineNumber( 787 );
        if ( RICH_COMPARE_BOOL_LT( PyObjectTemporary( BUILTIN_LEN( _python_var_bits.asObject() ) ).asObject(), _python_int_pos_2 ) )
        {
            frame_guard.setLineNumber( 788 );
            return _python_var_value.asObject1();
        }
        frame_guard.setLineNumber( 789 );
        try
        {
            {
                frame_guard.setLineNumber( 790 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_var_bits.asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                _python_var_yes.assign0( _python_tmp_element_1.asObject() );
                _python_var_no.assign0( _python_tmp_element_2.asObject() );
                _python_var_maybe.assign0( _python_tmp_element_3.asObject() );
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
                {
                    frame_guard.setLineNumber( 793 );
                    PyObject *_tmp_python_tmp_source_iter;
                    {
                        PyObjectTempKeeper1 make_tuple1;
                        PyObjectTempKeeper1 make_tuple2;
                        _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple1.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_bits.asObject(), _python_int_0, 0 ) ), make_tuple2.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_bits.asObject(), _python_int_pos_1, 1 ) ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_bits.asObject(), _python_int_pos_1, 1 ) ).asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                    _python_var_yes.assign0( _python_tmp_element_1.asObject() );
                    _python_var_no.assign0( _python_tmp_element_2.asObject() );
                    _python_var_maybe.assign0( _python_tmp_element_3.asObject() );
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
        frame_guard.setLineNumber( 794 );
        if ( ( _python_var_value.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 795 );
            return _python_var_maybe.asObject1();
        }
        frame_guard.setLineNumber( 796 );
        if ( CHECK_IF_TRUE( _python_var_value.asObject() ) )
        {
            frame_guard.setLineNumber( 797 );
            return _python_var_yes.asObject1();
        }
        frame_guard.setLineNumber( 798 );
        return _python_var_no.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_maybe.updateLocalsDict( _python_var_no.updateLocalsDict( _python_var_yes.updateLocalsDict( _python_var_bits.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_54_yesno_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_54_yesno_of_module_django__template__defaultfilters );
           frame_function_54_yesno_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_54_yesno_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "yesno() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "yesno() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "yesno() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "yesno() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "yesno() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "yesno() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "yesno() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "yesno() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "yesno() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "yesno() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "yesno() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "yesno() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "yesno() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "yesno() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "yesno() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "yesno() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "yesno() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "yesno() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "yesno() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "yesno() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_arg == NULL )
    {
        _python_par_arg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_arg );
    }


    return impl_function_54_yesno_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_54_yesno_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_54_yesno_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_54_yesno_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_55_filesizeformat_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_bytes )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_bytes( _python_str_plain_bytes, _python_par_bytes );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );
    PyObjectLocalVariable _python_var_filesize_number_format( _python_str_plain_filesize_number_format );
    PyObjectLocalVariable _python_var_KB( _python_str_plain_KB );
    PyObjectLocalVariable _python_var_MB( _python_str_plain_MB );
    PyObjectLocalVariable _python_var_GB( _python_str_plain_GB );
    PyObjectLocalVariable _python_var_TB( _python_str_plain_TB );
    PyObjectLocalVariable _python_var_PB( _python_str_plain_PB );

    // Actual function code.
    static PyFrameObject *frame_function_55_filesizeformat_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_55_filesizeformat_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_55_filesizeformat_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_55_filesizeformat_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_55_filesizeformat_of_module_django__template__defaultfilters );
        }

        frame_function_55_filesizeformat_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_e44f611807ed23e9a8357e3c1fafaaa8, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_55_filesizeformat_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_55_filesizeformat_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 810 );
        try
        {
            frame_guard.setLineNumber( 811 );
            _python_var_bytes.assign1( TO_FLOAT( _python_var_bytes.asObject() ) );
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

            if ( _exception.matches( PyExc_TypeError ) || _exception.matches( PyExc_ValueError ) || _exception.matches( PyExc_UnicodeDecodeError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 813 );
                _python_var_value.assign1( BINARY_OPERATION_REMAINDER( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_ungettext.asObject0(), _python_unicode_digest_2a6f4b034d5cf53113d641e201a06344, _python_unicode_digest_4af5749611a293bc96559e1b9689cf82, _python_int_0 ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_df7f32386f7b626ccc259fcd3dc5ad55 ) ).asObject() ) );
                frame_guard.setLineNumber( 814 );
                {
                    PyObjectTempKeeper0 call1;
                    return ( call1.assign( _mvar_django__template__defaultfilters_avoid_wrapping.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) );
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
        _python_var_filesize_number_format.assign1( MAKE_FUNCTION_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters(  ) );
        _python_var_KB.assign0( _python_int_pos_1024 );
        _python_var_MB.assign0( _python_int_pos_1048576 );
        _python_var_GB.assign0( _python_int_pos_1073741824 );
        _python_var_TB.assign0( _python_a3fc4220ec427381efea64f8984f52f1 );
        _python_var_PB.assign0( _python_ba4f4026cb89ce3f872baa8bdd2c7237 );
        frame_guard.setLineNumber( 824 );
        {
            PyObjectTempKeeper0 cmp47;
            if ( ( cmp47.assign( _python_var_bytes.asObject() ), RICH_COMPARE_BOOL_LT( cmp47.asObject0(), _python_var_KB.asObject() ) ) )
        {
            frame_guard.setLineNumber( 825 );
            {
                PyObjectTempKeeper0 call3;
                PyObjectTempKeeper1 op7;
                _python_var_value.assign1( ( op7.assign( ( call3.assign( _mvar_django__template__defaultfilters_ungettext.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_unicode_digest_2a6f4b034d5cf53113d641e201a06344, _python_unicode_digest_4af5749611a293bc96559e1b9689cf82, _python_var_bytes.asObject() ) ) ), BINARY_OPERATION_REMAINDER( op7.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_bytes.asObject(), _python_unicode_plain_size ) ).asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 826 );
            {
                PyObjectTempKeeper0 cmp45;
                if ( ( cmp45.assign( _python_var_bytes.asObject() ), RICH_COMPARE_BOOL_LT( cmp45.asObject0(), _python_var_MB.asObject() ) ) )
            {
                frame_guard.setLineNumber( 827 );
                {
                    PyObjectTempKeeper0 call11;
                    PyObjectTempKeeper1 op13;
                    PyObjectTempKeeper0 op9;
                    _python_var_value.assign1( ( op13.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_ugettext.asObject0(), _python_unicode_digest_0257542bea15eb6baa3fc0364cd3ba24 ) ), BINARY_OPERATION_REMAINDER( op13.asObject0(), PyObjectTemporary( ( call11.assign( _python_var_filesize_number_format.asObject() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( ( op9.assign( _python_var_bytes.asObject() ), BINARY_OPERATION_DIV( op9.asObject0(), _python_var_KB.asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 828 );
                {
                    PyObjectTempKeeper0 cmp43;
                    if ( ( cmp43.assign( _python_var_bytes.asObject() ), RICH_COMPARE_BOOL_LT( cmp43.asObject0(), _python_var_GB.asObject() ) ) )
                {
                    frame_guard.setLineNumber( 829 );
                    {
                        PyObjectTempKeeper0 call17;
                        PyObjectTempKeeper0 op15;
                        PyObjectTempKeeper1 op19;
                        _python_var_value.assign1( ( op19.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_ugettext.asObject0(), _python_unicode_digest_ef0f51603bf90b1ac8f3691833454a00 ) ), BINARY_OPERATION_REMAINDER( op19.asObject0(), PyObjectTemporary( ( call17.assign( _python_var_filesize_number_format.asObject() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), PyObjectTemporary( ( op15.assign( _python_var_bytes.asObject() ), BINARY_OPERATION_DIV( op15.asObject0(), _python_var_MB.asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 830 );
                    {
                        PyObjectTempKeeper0 cmp41;
                        if ( ( cmp41.assign( _python_var_bytes.asObject() ), RICH_COMPARE_BOOL_LT( cmp41.asObject0(), _python_var_TB.asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 831 );
                        {
                            PyObjectTempKeeper0 call23;
                            PyObjectTempKeeper0 op21;
                            PyObjectTempKeeper1 op25;
                            _python_var_value.assign1( ( op25.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_ugettext.asObject0(), _python_unicode_digest_b3be70c808f9071d4178738b269102ce ) ), BINARY_OPERATION_REMAINDER( op25.asObject0(), PyObjectTemporary( ( call23.assign( _python_var_filesize_number_format.asObject() ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), PyObjectTemporary( ( op21.assign( _python_var_bytes.asObject() ), BINARY_OPERATION_DIV( op21.asObject0(), _python_var_GB.asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 832 );
                        {
                            PyObjectTempKeeper0 cmp39;
                            if ( ( cmp39.assign( _python_var_bytes.asObject() ), RICH_COMPARE_BOOL_LT( cmp39.asObject0(), _python_var_PB.asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 833 );
                            {
                                PyObjectTempKeeper0 call29;
                                PyObjectTempKeeper0 op27;
                                PyObjectTempKeeper1 op31;
                                _python_var_value.assign1( ( op31.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_ugettext.asObject0(), _python_unicode_digest_dfce883e2b0961c3fa7d8c0f762d4f1d ) ), BINARY_OPERATION_REMAINDER( op31.asObject0(), PyObjectTemporary( ( call29.assign( _python_var_filesize_number_format.asObject() ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), PyObjectTemporary( ( op27.assign( _python_var_bytes.asObject() ), BINARY_OPERATION_DIV( op27.asObject0(), _python_var_TB.asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 835 );
                            {
                                PyObjectTempKeeper0 call35;
                                PyObjectTempKeeper0 op33;
                                PyObjectTempKeeper1 op37;
                                _python_var_value.assign1( ( op37.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_ugettext.asObject0(), _python_unicode_digest_72a0da559d98e9613e9ecbcfa3177b43 ) ), BINARY_OPERATION_REMAINDER( op37.asObject0(), PyObjectTemporary( ( call35.assign( _python_var_filesize_number_format.asObject() ), CALL_FUNCTION_WITH_ARGS( call35.asObject0(), PyObjectTemporary( ( op33.assign( _python_var_bytes.asObject() ), BINARY_OPERATION_DIV( op33.asObject0(), _python_var_PB.asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
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
        }
        frame_guard.setLineNumber( 837 );
        {
            PyObjectTempKeeper0 call49;
            return ( call49.assign( _mvar_django__template__defaultfilters_avoid_wrapping.asObject0() ), CALL_FUNCTION_WITH_ARGS( call49.asObject0(), _python_var_value.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_bytes.updateLocalsDict( _python_var_PB.updateLocalsDict( _python_var_TB.updateLocalsDict( _python_var_GB.updateLocalsDict( _python_var_MB.updateLocalsDict( _python_var_KB.updateLocalsDict( _python_var_filesize_number_format.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_55_filesizeformat_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_55_filesizeformat_of_module_django__template__defaultfilters );
           frame_function_55_filesizeformat_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_55_filesizeformat_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_bytes = NULL;
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
                PyErr_Format( PyExc_TypeError, "filesizeformat() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_bytes == key )
            {
                if (unlikely( _python_par_bytes ))
                {
                    PyErr_Format( PyExc_TypeError, "filesizeformat() got multiple values for keyword argument 'bytes'" );
                    goto error_exit;
                }

                _python_par_bytes = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_bytes, key ) )
            {
                if (unlikely( _python_par_bytes ))
                {
                    PyErr_Format( PyExc_TypeError, "filesizeformat() got multiple values for keyword argument 'bytes'" );
                    goto error_exit;
                }

                _python_par_bytes = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "filesizeformat() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "filesizeformat() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "filesizeformat() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "filesizeformat() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "filesizeformat() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "filesizeformat() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "filesizeformat() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "filesizeformat() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "filesizeformat() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "filesizeformat() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "filesizeformat() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "filesizeformat() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "filesizeformat() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_bytes != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "filesizeformat() got multiple values for keyword argument 'bytes'" );
             goto error_exit;
         }

        _python_par_bytes = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_55_filesizeformat_of_module_django__template__defaultfilters( self, _python_par_bytes );

error_exit:;

    Py_XDECREF( _python_par_bytes );

    return NULL;
}

static PyObject *dparse_function_55_filesizeformat_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_55_filesizeformat_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_55_filesizeformat_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters ) )
    {
        if ( frame_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters );
        }

        frame_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_928d536851fbb78edcddba32ead7d343, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 816 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_formats.asObject0(), _python_str_plain_number_format ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_round ), _python_var_value.asObject(), _python_int_pos_1 ) ).asObject(), _python_int_pos_1 ) );
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

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters );
           frame_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'value'" );
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
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_56_pluralize_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );
    PyObjectLocalVariable _python_var_bits( _python_str_plain_bits );
    PyObjectLocalVariable _python_var_singular_suffix( _python_str_plain_singular_suffix );
    PyObjectLocalVariable _python_var_plural_suffix( _python_str_plain_plural_suffix );

    // Actual function code.
    static PyFrameObject *frame_function_56_pluralize_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_56_pluralize_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_56_pluralize_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_56_pluralize_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_56_pluralize_of_module_django__template__defaultfilters );
        }

        frame_function_56_pluralize_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_e2fd32f2173adb34a4129c1e36287e2a, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_56_pluralize_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_56_pluralize_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 863 );
        if ( SEQUENCE_CONTAINS_NOT_BOOL( _python_unicode_chr_44, _python_var_arg.asObject() ) )
        {
            frame_guard.setLineNumber( 864 );
            _python_var_arg.assign1( BINARY_OPERATION_ADD( _python_unicode_chr_44, _python_var_arg.asObject() ) );
        }
        frame_guard.setLineNumber( 865 );
        _python_var_bits.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_arg.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_44 ) );
        frame_guard.setLineNumber( 866 );
        if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( BUILTIN_LEN( _python_var_bits.asObject() ) ).asObject(), _python_int_pos_2 ) )
        {
            return INCREASE_REFCOUNT( _python_unicode_empty );
        }
        {
            frame_guard.setLineNumber( 868 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_bits.asObject(), 0, 2 ) ).asObject() ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_singular_suffix.assign0( _python_tmp_element_1.asObject() );
            _python_var_plural_suffix.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 870 );
        try
        {
            frame_guard.setLineNumber( 871 );
            if ( RICH_COMPARE_BOOL_NE( PyObjectTemporary( TO_INT( _python_var_value.asObject() ) ).asObject(), _python_int_pos_1 ) )
            {
                frame_guard.setLineNumber( 872 );
                return _python_var_plural_suffix.asObject1();
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
            else if ( _exception.matches( PyExc_TypeError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 876 );
                try
                {
                    frame_guard.setLineNumber( 877 );
                    if ( RICH_COMPARE_BOOL_NE( PyObjectTemporary( BUILTIN_LEN( _python_var_value.asObject() ) ).asObject(), _python_int_pos_1 ) )
                    {
                        frame_guard.setLineNumber( 878 );
                        return _python_var_plural_suffix.asObject1();
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
                PyTracebackObject *tb = _exception.getTraceback();
                frame_guard.setLineNumber( tb->tb_lineno );
                _exception.setTraceback( tb->tb_next );
                tb->tb_next = NULL;

                throw;
            }
        }
        frame_guard.setLineNumber( 881 );
        return _python_var_singular_suffix.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_arg.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_plural_suffix.updateLocalsDict( _python_var_singular_suffix.updateLocalsDict( _python_var_bits.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_56_pluralize_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_56_pluralize_of_module_django__template__defaultfilters );
           frame_function_56_pluralize_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_56_pluralize_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "pluralize() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "pluralize() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "pluralize() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "pluralize() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "pluralize() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "pluralize() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "pluralize() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "pluralize() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "pluralize() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "pluralize() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "pluralize() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "pluralize() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "pluralize() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "pluralize() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "pluralize() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "pluralize() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "pluralize() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "pluralize() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "pluralize() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "pluralize() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_arg == NULL )
    {
        _python_par_arg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_arg );
    }


    return impl_function_56_pluralize_of_module_django__template__defaultfilters( self, _python_par_value, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_56_pluralize_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_56_pluralize_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_56_pluralize_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_57_phone2numeric_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_57_phone2numeric_filter_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_57_phone2numeric_filter_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_57_phone2numeric_filter_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_57_phone2numeric_filter_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_57_phone2numeric_filter_of_module_django__template__defaultfilters );
        }

        frame_function_57_phone2numeric_filter_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_07199260baf285e0fb90aa097fa19f68, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_57_phone2numeric_filter_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_57_phone2numeric_filter_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 886 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__template__defaultfilters_phone2numeric.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_57_phone2numeric_filter_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_57_phone2numeric_filter_of_module_django__template__defaultfilters );
           frame_function_57_phone2numeric_filter_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_57_phone2numeric_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "phone2numeric_filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "phone2numeric_filter() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "phone2numeric_filter() got multiple values for keyword argument 'value'" );
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
                   "phone2numeric_filter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "phone2numeric_filter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "phone2numeric_filter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "phone2numeric_filter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "phone2numeric_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "phone2numeric_filter() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "phone2numeric_filter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "phone2numeric_filter() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "phone2numeric_filter() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "phone2numeric_filter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "phone2numeric_filter() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "phone2numeric_filter() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "phone2numeric_filter() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "phone2numeric_filter() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_57_phone2numeric_filter_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_57_phone2numeric_filter_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_57_phone2numeric_filter_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_57_phone2numeric_filter_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_58_pprint_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_58_pprint_of_module_django__template__defaultfilters = NULL;

    if ( isFrameUnusable( frame_function_58_pprint_of_module_django__template__defaultfilters ) )
    {
        if ( frame_function_58_pprint_of_module_django__template__defaultfilters )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_58_pprint_of_module_django__template__defaultfilters" );
#endif
            Py_DECREF( frame_function_58_pprint_of_module_django__template__defaultfilters );
        }

        frame_function_58_pprint_of_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_c7405e8d624704353142373950af4984, _module_django__template__defaultfilters );
    }

    FrameGuard frame_guard( frame_function_58_pprint_of_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_function_58_pprint_of_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 891 );
        try
        {
            frame_guard.setLineNumber( 892 );
            {
                PyObjectTempKeeper0 call4;
                return ( call4.assign( _mvar_django__template__defaultfilters_pformat.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_value.asObject() ) );
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
                frame_guard.setLineNumber( 894 );
                {
                    PyObjectTempKeeper0 call1;
                    return BINARY_OPERATION_REMAINDER( _python_unicode_digest_7dda260be97f5b1609121b044aa925df, PyObjectTemporary( ( call1.assign( _mvar_django__template__defaultfilters_force_text.asObject0() ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_e.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_4593080baa302c9b17627b104a2461c2 ) ).asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_e.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_58_pprint_of_module_django__template__defaultfilters )
        {
           Py_DECREF( frame_function_58_pprint_of_module_django__template__defaultfilters );
           frame_function_58_pprint_of_module_django__template__defaultfilters = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_58_pprint_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "pprint() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "pprint() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "pprint() got multiple values for keyword argument 'value'" );
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
                   "pprint() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "pprint() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "pprint() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "pprint() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "pprint() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "pprint() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "pprint() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "pprint() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "pprint() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "pprint() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "pprint() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "pprint() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "pprint() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "pprint() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_58_pprint_of_module_django__template__defaultfilters( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_58_pprint_of_module_django__template__defaultfilters( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_58_pprint_of_module_django__template__defaultfilters( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_58_pprint_of_module_django__template__defaultfilters( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_make_list_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_make_list_of_module_django__template__defaultfilters,
        dparse_function_10_make_list_of_module_django__template__defaultfilters,
        _python_str_plain_make_list,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_48244750f1e776f14fb5cdc34d08a6c6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_c13c9df8593c10b8bb3de3700c37aab4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_slugify_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_slugify_of_module_django__template__defaultfilters,
        dparse_function_11_slugify_of_module_django__template__defaultfilters,
        _python_str_plain_slugify,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fc5712c9e8efde750604ba4481fb769f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_92a16779cc130d4a2d385e0d1a3b1274
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_stringformat_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_stringformat_of_module_django__template__defaultfilters,
        dparse_function_12_stringformat_of_module_django__template__defaultfilters,
        _python_str_plain_stringformat,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4f468739d180c3f3af613033973843d9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_8a52ece23ba2ca0af2e500ff22fb613d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_title_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_title_of_module_django__template__defaultfilters,
        dparse_function_13_title_of_module_django__template__defaultfilters,
        _python_str_plain_title,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a385cf7710efb9ba14e6819d970961f9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_f671fd87c77e568c7f3c852526a2ce88
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_truncatechars_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_truncatechars_of_module_django__template__defaultfilters,
        dparse_function_14_truncatechars_of_module_django__template__defaultfilters,
        _python_str_plain_truncatechars,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7fb5ac45d3a1ff09f9d44e2a2edbb5f1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_abf9f6634638e626ef76e39393c6ab59
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_truncatewords_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_truncatewords_of_module_django__template__defaultfilters,
        dparse_function_15_truncatewords_of_module_django__template__defaultfilters,
        _python_str_plain_truncatewords,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_68f6556ad3cb3ef248aec39b39c24114,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_61a42379992b7375036a0fee695f72c8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_truncatewords_html_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_truncatewords_html_of_module_django__template__defaultfilters,
        dparse_function_16_truncatewords_html_of_module_django__template__defaultfilters,
        _python_str_plain_truncatewords_html,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2205031946651b81c21aade3e2b0eb0a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_52cd492d4724d64ef2a40d5cb7d536d0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_upper_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_upper_of_module_django__template__defaultfilters,
        dparse_function_17_upper_of_module_django__template__defaultfilters,
        _python_str_plain_upper,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_320bd44b42a99ce25bd19999712e28df,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_7e015b868628e34b226aa6b1809fc89f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18_urlencode_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18_urlencode_of_module_django__template__defaultfilters,
        dparse_function_18_urlencode_of_module_django__template__defaultfilters,
        _python_str_plain_urlencode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_83a70df6acc7244739f99dfbd75ce56d,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_e304632ccf0b8ffe09b47ccfab732dfd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_19_urlize_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_19_urlize_of_module_django__template__defaultfilters,
        dparse_function_19_urlize_of_module_django__template__defaultfilters,
        _python_str_plain_urlize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3171175ec6789ccd2b30a3b6d45a6d3c,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_95ea3787f4b8b6d21cb3e992917e68e1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters( PyObjectSharedLocalVariable &python_closure__dec, PyObjectSharedLocalVariable &python_closure_func )
{
    struct _context_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters_t *_python_context = new _context_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure__dec.shareWith( python_closure__dec );
    _python_context->python_closure_func.shareWith( python_closure_func );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters,
        dparse_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters,
        _python_str_plain__dec,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_54e6d4c5f19b8452fa3f0234cc1cf021,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        Py_None,
        _python_context,
        _context_function_1__dec_of_function_1_stringfilter_of_module_django__template__defaultfilters_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_stringfilter_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_stringfilter_of_module_django__template__defaultfilters,
        dparse_function_1_stringfilter_of_module_django__template__defaultfilters,
        _python_str_plain_stringfilter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7fcf33546a2d3697b0aaaaf967de3ea1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_6cc9c60eb57b8dc7fa66c535aba4ee19
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_20_urlizetrunc_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_20_urlizetrunc_of_module_django__template__defaultfilters,
        dparse_function_20_urlizetrunc_of_module_django__template__defaultfilters,
        _python_str_plain_urlizetrunc,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0ae2969f3f77bed2623e697ed1f98d86,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_d63488002469c965189aaeef858a5410
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_21_wordcount_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_21_wordcount_of_module_django__template__defaultfilters,
        dparse_function_21_wordcount_of_module_django__template__defaultfilters,
        _python_str_plain_wordcount,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4769a6a534e8380c8fffd7a59ef6dd79,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_a402a7ce24153e47edcc6338909acb9d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_22_wordwrap_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_22_wordwrap_of_module_django__template__defaultfilters,
        dparse_function_22_wordwrap_of_module_django__template__defaultfilters,
        _python_str_plain_wordwrap,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7c349fe4d71fd5d8ec350a01847d7a81,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_76010a90ea55707378ad2055b38830ba
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_23_ljust_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_23_ljust_of_module_django__template__defaultfilters,
        dparse_function_23_ljust_of_module_django__template__defaultfilters,
        _python_str_plain_ljust,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_24471275aac122bc775f9f2bd38ac9c1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_bcbe8b0950d374b8b31e7be3efb73c30
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_24_rjust_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_24_rjust_of_module_django__template__defaultfilters,
        dparse_function_24_rjust_of_module_django__template__defaultfilters,
        _python_str_plain_rjust,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e249d7e7d7c648b6a138871235b9c46a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_740b1274c2dbb8340502a18687dd1c7c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_25_center_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_25_center_of_module_django__template__defaultfilters,
        dparse_function_25_center_of_module_django__template__defaultfilters,
        _python_str_plain_center,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ccbd576d1aca8306545e064134f95e6d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_9422ddef32e62a5c93767a1b51d6957b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_26_cut_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_26_cut_of_module_django__template__defaultfilters,
        dparse_function_26_cut_of_module_django__template__defaultfilters,
        _python_str_plain_cut,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_da71d5aa22bb4150aae5671f97f9ef54,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_188d9899261e7fc21c3500ef421f22c1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_27_escape_filter_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_27_escape_filter_of_module_django__template__defaultfilters,
        dparse_function_27_escape_filter_of_module_django__template__defaultfilters,
        _python_str_plain_escape_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1990a4728aac0d70576fabc3f52c45f9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_536f7e50d13934aa87653ce5a686a5d0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_28_force_escape_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_28_force_escape_of_module_django__template__defaultfilters,
        dparse_function_28_force_escape_of_module_django__template__defaultfilters,
        _python_str_plain_force_escape,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e58af20ad7c5fb8ed4a7af1bd344d0b8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_97abe18c07162e8a27bf15485b202df4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_29_linebreaks_filter_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_29_linebreaks_filter_of_module_django__template__defaultfilters,
        dparse_function_29_linebreaks_filter_of_module_django__template__defaultfilters,
        _python_str_plain_linebreaks_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b7a198c8dc68859f33717ee2ab6f5253,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_0189679de2e6c3803725a3f6f426949a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_addslashes_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_addslashes_of_module_django__template__defaultfilters,
        dparse_function_2_addslashes_of_module_django__template__defaultfilters,
        _python_str_plain_addslashes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_507ea15bcb744f694ba004cc7f33b6c2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_41cfecb7f824cc29f61c06821a72da4d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters( PyObjectSharedLocalVariable &python_closure_convert_old_style_list )
{
    struct _context_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters_t *_python_context = new _context_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_convert_old_style_list.shareWith( python_closure_convert_old_style_list );

    PyObject *result = Nuitka_Function_New(
        fparse_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters,
        dparse_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters,
        _python_str_plain_convert_old_style_list,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_429564fc222c6f6ac89bae5f382d8885,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_f35b269842c2a32cf04e2153cd511559,
        _python_context,
        _context_function_2_convert_old_style_list_of_function_44_unordered_list_of_module_django__template__defaultfilters_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_30_linebreaksbr_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_30_linebreaksbr_of_module_django__template__defaultfilters,
        dparse_function_30_linebreaksbr_of_module_django__template__defaultfilters,
        _python_str_plain_linebreaksbr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5673c05a99f09449e7bbb99463702f43,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_57cc43ffc1162e25490bc4e56f48a301
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_31_safe_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_31_safe_of_module_django__template__defaultfilters,
        dparse_function_31_safe_of_module_django__template__defaultfilters,
        _python_str_plain_safe,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_98cad76b845f533cdb9d37c33ee4351d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_536f7e50d13934aa87653ce5a686a5d0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_32_safeseq_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_32_safeseq_of_module_django__template__defaultfilters,
        dparse_function_32_safeseq_of_module_django__template__defaultfilters,
        _python_str_plain_safeseq,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0c46bace58546702ad6465bafe504177,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_36613e948af6b0e22656877eb197e08e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_33_removetags_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_33_removetags_of_module_django__template__defaultfilters,
        dparse_function_33_removetags_of_module_django__template__defaultfilters,
        _python_str_plain_removetags,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_971163d798ced47fbb5f755151c4901c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_104a5196a00ef6424cebf5f2189d056a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_34_striptags_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_34_striptags_of_module_django__template__defaultfilters,
        dparse_function_34_striptags_of_module_django__template__defaultfilters,
        _python_str_plain_striptags,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9821160ac218be7c336396796951a53a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_df2439146d7e94828835b018c43cae53
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_35_dictsort_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_35_dictsort_of_module_django__template__defaultfilters,
        dparse_function_35_dictsort_of_module_django__template__defaultfilters,
        _python_str_plain_dictsort,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_07908d68bcf303fc16a44a9b17155644,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_b65220c45082c28db071c5e276524141
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_36_dictsortreversed_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_36_dictsortreversed_of_module_django__template__defaultfilters,
        dparse_function_36_dictsortreversed_of_module_django__template__defaultfilters,
        _python_str_plain_dictsortreversed,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_99754b5a18d9716407e74afa710299cc,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_cb8b12624cb73ed4bbd16a47ddb0c06d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_37_first_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_37_first_of_module_django__template__defaultfilters,
        dparse_function_37_first_of_module_django__template__defaultfilters,
        _python_str_plain_first,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_97f1712749313706313f89075f1bd260,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_e2c812e3469f322fc0cbd9a8a96dddfe
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_38_join_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_38_join_of_module_django__template__defaultfilters,
        dparse_function_38_join_of_module_django__template__defaultfilters,
        _python_str_plain_join,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e9165058ebaa36c51932447302c7bc66,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_2bb0fbfc0ebb38845675e161cb5d6b2d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_39_last_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_39_last_of_module_django__template__defaultfilters,
        dparse_function_39_last_of_module_django__template__defaultfilters,
        _python_str_plain_last,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f099a0b593b9ccbc6c985c1d103b9579,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_2b2af8a623c029d8c7aabb492d8cba4e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters( PyObjectSharedLocalVariable &python_closure__helper, PyObjectSharedLocalVariable &python_closure_escaper )
{
    struct _context_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters_t *_python_context = new _context_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure__helper.shareWith( python_closure__helper );
    _python_context->python_closure_escaper.shareWith( python_closure_escaper );

    PyObject *result = Nuitka_Function_New(
        fparse_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters,
        dparse_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters,
        _python_str_plain__helper,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9f1faf894cca58bb2c31f6fad8f18187,
        INCREASE_REFCOUNT( _python_tuple_int_pos_1_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        Py_None,
        _python_context,
        _context_function_3__helper_of_function_44_unordered_list_of_module_django__template__defaultfilters_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_capfirst_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_capfirst_of_module_django__template__defaultfilters,
        dparse_function_3_capfirst_of_module_django__template__defaultfilters,
        _python_str_plain_capfirst,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b6c3ed9d38d0846d42e4c3a1dd257e77,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_85e073d874d08cce565333b5bcb63a12
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_40_length_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_40_length_of_module_django__template__defaultfilters,
        dparse_function_40_length_of_module_django__template__defaultfilters,
        _python_str_plain_length,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8e685ab8b0444af903bb1ea4b9305567,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_44e8a4a708bd61a056ba284edb338c8c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_41_length_is_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_41_length_is_of_module_django__template__defaultfilters,
        dparse_function_41_length_is_of_module_django__template__defaultfilters,
        _python_str_plain_length_is,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ae4b8b63d21ced16a1998d19443311bb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_b744c5c28c1bec65b2932237df138d16
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_42_random_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_42_random_of_module_django__template__defaultfilters,
        dparse_function_42_random_of_module_django__template__defaultfilters,
        _python_str_plain_random,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_12e09ebf0748e52eeaf916469cd71441,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_dce97276e0d61f0775a174a66cf4b4dd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_43_slice_filter_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_43_slice_filter_of_module_django__template__defaultfilters,
        dparse_function_43_slice_filter_of_module_django__template__defaultfilters,
        _python_str_plain_slice_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_429c0794d778c3614f223b52c4fdf0fa,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_b0e999a8c660c588e37ffd31f66bed63
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_44_unordered_list_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_44_unordered_list_of_module_django__template__defaultfilters,
        dparse_function_44_unordered_list_of_module_django__template__defaultfilters,
        _python_str_plain_unordered_list,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6675aef2e1a21f882ba59a2d4da87bc1,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_fb38dc44a7dae30350999d62153f4686
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_45_add_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_45_add_of_module_django__template__defaultfilters,
        dparse_function_45_add_of_module_django__template__defaultfilters,
        _python_str_plain_add,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_997edd5d4f0ba4f93f8de327d032392c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_69fe19ef904d5f2301bac5245a4981b9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_46_get_digit_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_46_get_digit_of_module_django__template__defaultfilters,
        dparse_function_46_get_digit_of_module_django__template__defaultfilters,
        _python_str_plain_get_digit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_35508e73e5df2e6f358a7c99703a3da1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_7c79eee7595573350c389841034bbe88
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_47_date_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_47_date_of_module_django__template__defaultfilters,
        dparse_function_47_date_of_module_django__template__defaultfilters,
        _python_str_plain_date,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_db87df2eb372557c9156d17574f087a0,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_fde28431d3de37727f048154b3811e81
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_48_time_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_48_time_of_module_django__template__defaultfilters,
        dparse_function_48_time_of_module_django__template__defaultfilters,
        _python_str_plain_time,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_adf4a46630c7ed2cddaa0d5fb1bb8aeb,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_c49bc18a91b6c87fbf5d2ebab5e267e3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_49_timesince_filter_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_49_timesince_filter_of_module_django__template__defaultfilters,
        dparse_function_49_timesince_filter_of_module_django__template__defaultfilters,
        _python_str_plain_timesince_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2b880780408966865504b14334a1e7f6,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_347cdea401e9ba175d180a941987e7a0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_escapejs_filter_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_escapejs_filter_of_module_django__template__defaultfilters,
        dparse_function_4_escapejs_filter_of_module_django__template__defaultfilters,
        _python_str_plain_escapejs_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8e8f47be10b12d9210d75b25ab409965,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_466b94adb5006a4d756d93fd4a1c06d7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_50_timeuntil_filter_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_50_timeuntil_filter_of_module_django__template__defaultfilters,
        dparse_function_50_timeuntil_filter_of_module_django__template__defaultfilters,
        _python_str_plain_timeuntil_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_039a29eeb33e551dd82fb656a904b49d,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_57ffd04042dfad4b009178ddbc0c2062
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_51_default_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_51_default_of_module_django__template__defaultfilters,
        dparse_function_51_default_of_module_django__template__defaultfilters,
        _python_str_plain_default,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_242974926d40d7ff4dd913739a879650,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_a84f6c6ecd8a93aa4cb44fcda2c7b151
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_52_default_if_none_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_52_default_if_none_of_module_django__template__defaultfilters,
        dparse_function_52_default_if_none_of_module_django__template__defaultfilters,
        _python_str_plain_default_if_none,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d0c492d91a3ee67dfdc058d673cc5a5c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_4dde426ac5732563f40e5448e06b3efa
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_53_divisibleby_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_53_divisibleby_of_module_django__template__defaultfilters,
        dparse_function_53_divisibleby_of_module_django__template__defaultfilters,
        _python_str_plain_divisibleby,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_31830be6443d0cba75b5d617284a39f6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_80486430d1063aa0b7f76fb63152011e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_54_yesno_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_54_yesno_of_module_django__template__defaultfilters,
        dparse_function_54_yesno_of_module_django__template__defaultfilters,
        _python_str_plain_yesno,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_70bfd97eead737c3fd77e0720248fac1,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_9dd9974c96a66ae3d7998ec8d5cbf209
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_55_filesizeformat_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_55_filesizeformat_of_module_django__template__defaultfilters,
        dparse_function_55_filesizeformat_of_module_django__template__defaultfilters,
        _python_str_plain_filesizeformat,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e44f611807ed23e9a8357e3c1fafaaa8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_f8956e9dfdd93513185d12a882f2e71d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_56_pluralize_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_56_pluralize_of_module_django__template__defaultfilters,
        dparse_function_56_pluralize_of_module_django__template__defaultfilters,
        _python_str_plain_pluralize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e2fd32f2173adb34a4129c1e36287e2a,
        INCREASE_REFCOUNT( _python_tuple_unicode_plain_s_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_ea96aaa4134faa48b6df6f86e8ec8ccd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_57_phone2numeric_filter_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_57_phone2numeric_filter_of_module_django__template__defaultfilters,
        dparse_function_57_phone2numeric_filter_of_module_django__template__defaultfilters,
        _python_str_plain_phone2numeric_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_07199260baf285e0fb90aa097fa19f68,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_1e76f17262e18b9b32507bfe70356f09
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_58_pprint_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_58_pprint_of_module_django__template__defaultfilters,
        dparse_function_58_pprint_of_module_django__template__defaultfilters,
        _python_str_plain_pprint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c7405e8d624704353142373950af4984,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_6f10aa802b8d5a0340d3ff0c26d4b10c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters,
        dparse_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters,
        _python_str_plain_fix_ampersands_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_96a10232e84fa7c49ce9faa6363c3705,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_09515ecbd6d490aebaf113bd9e2e2b13
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_floatformat_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_floatformat_of_module_django__template__defaultfilters,
        dparse_function_6_floatformat_of_module_django__template__defaultfilters,
        _python_str_plain_floatformat,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_576b4f428906ea1dcb3b15072286c232,
        INCREASE_REFCOUNT( _python_tuple_int_neg_1_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_c32a5a83848c62fac170a9ac6e66ff62
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_iriencode_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_iriencode_of_module_django__template__defaultfilters,
        dparse_function_7_iriencode_of_module_django__template__defaultfilters,
        _python_str_plain_iriencode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3a8cbbf606140c65cc390d51a6b02537,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_2851af9ada546176df1994487f101533
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_linenumbers_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_linenumbers_of_module_django__template__defaultfilters,
        dparse_function_8_linenumbers_of_module_django__template__defaultfilters,
        _python_str_plain_linenumbers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e70faf1640178bcc110e9f8240277711,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_9c25f03b862257b3dd91dd4b760f4d88
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_lower_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_lower_of_module_django__template__defaultfilters,
        dparse_function_9_lower_of_module_django__template__defaultfilters,
        _python_str_plain_lower,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_db0e2fb026529b0277b3a8797b9ef753,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        _python_unicode_digest_f54a6a2e9042ed95a073059424886b7e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters,
        dparse_lambda_1_lambda_of_function_13_title_of_module_django__template__defaultfilters,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_27313a8d03270e8e845dbd05c6335b9c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters,
        dparse_lambda_1_lambda_of_function_44_unordered_list_of_module_django__template__defaultfilters,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f1598a9ffc0488e4a348048aec1f92a1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters,
        dparse_lambda_1_lambda_of_function_55_filesizeformat_of_module_django__template__defaultfilters,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_928d536851fbb78edcddba32ead7d343,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters,
        dparse_lambda_2_lambda_of_function_13_title_of_module_django__template__defaultfilters,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e4932d7a63903d0fb13726e512c081a2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__defaultfilters,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.template.defaultfilters",   /* m_name */
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

MOD_INIT_DECL( django__template__defaultfilters )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__template__defaultfilters );
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

    // puts( "in initdjango__template__defaultfilters" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__template__defaultfilters = Py_InitModule4(
        "django.template.defaultfilters",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__template__defaultfilters = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__template__defaultfilters = (PyDictObject *)((PyModuleObject *)_module_django__template__defaultfilters)->md_dict;

    assertObject( _module_django__template__defaultfilters );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_cbac6a147ba82985d011af4fb566864b, _module_django__template__defaultfilters );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__template__defaultfilters );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__template__defaultfilters != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_ef9a0c028a30216da0764f1333a6bedb );
    UPDATE_STRING_DICT0( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_ed19182df11e884b7158df247bd9e905 );
    PyFrameObject *frame_module_django__template__defaultfilters = MAKE_FRAME( _codeobj_db9de66f6d6adbb8021a4b516ffbeed9, _module_django__template__defaultfilters );

    FrameGuard frame_guard( frame_module_django__template__defaultfilters );
    try
    {
        assert( Py_REFCNT( frame_module_django__template__defaultfilters ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_re, IMPORT_MODULE( _python_str_plain_re, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_random_module, IMPORT_MODULE( _python_str_plain_random, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_unicodedata, IMPORT_MODULE( _python_str_plain_unicodedata, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_Decimal, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_decimal, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_4d748cc67203ffb4d7a9f12b451b7bc9_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Decimal ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_InvalidOperation, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_decimal, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_4d748cc67203ffb4d7a9f12b451b7bc9_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_InvalidOperation ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_Context, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_decimal, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_4d748cc67203ffb4d7a9f12b451b7bc9_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Context ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_ROUND_HALF_UP, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_decimal, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_4d748cc67203ffb4d7a9f12b451b7bc9_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ROUND_HALF_UP ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_wraps, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_functools, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_wraps_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_wraps ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_pformat, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_pprint, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_pformat_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_pformat ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_Variable, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_306ec915cca8f1bcded80710efae8e43_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Variable ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_Library, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_306ec915cca8f1bcded80710efae8e43_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Library ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_VariableDoesNotExist, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_306ec915cca8f1bcded80710efae8e43_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_VariableDoesNotExist ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_formats, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_formats_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_formats ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_format, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_e8984d4841fe1188adf1d3f1f0940da0, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_format_str_plain_time_format_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_format ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_time_format, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_e8984d4841fe1188adf1d3f1f0940da0, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_format_str_plain_time_format_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_time_format ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_force_text_str_plain_iri_to_uri_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_iri_to_uri, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_force_text_str_plain_iri_to_uri_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_iri_to_uri ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_conditional_escape, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3a0db97fb5d78c487963bfc1490797d, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_03e873f0968b0d827eafe7e3e4ae382c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_conditional_escape ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_escapejs, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3a0db97fb5d78c487963bfc1490797d, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_03e873f0968b0d827eafe7e3e4ae382c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_escapejs ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_fix_ampersands, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3a0db97fb5d78c487963bfc1490797d, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_03e873f0968b0d827eafe7e3e4ae382c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_fix_ampersands ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_escape, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3a0db97fb5d78c487963bfc1490797d, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_03e873f0968b0d827eafe7e3e4ae382c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_escape ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_urlize_impl, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3a0db97fb5d78c487963bfc1490797d, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_03e873f0968b0d827eafe7e3e4ae382c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urlize ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_linebreaks, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3a0db97fb5d78c487963bfc1490797d, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_03e873f0968b0d827eafe7e3e4ae382c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_linebreaks ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_strip_tags, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3a0db97fb5d78c487963bfc1490797d, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_03e873f0968b0d827eafe7e3e4ae382c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_strip_tags ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_avoid_wrapping, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3a0db97fb5d78c487963bfc1490797d, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_03e873f0968b0d827eafe7e3e4ae382c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_avoid_wrapping ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_urlquote, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_f4668c827d7041d030daf78b0a7ea554, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_urlquote_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urlquote ) );
        frame_guard.setLineNumber( 19 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_Truncator, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1863593e728059f3c0ba0d01334514dd, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_Truncator_str_plain_wrap_str_plain_phone2numeric_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Truncator ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_wrap, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1863593e728059f3c0ba0d01334514dd, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_Truncator_str_plain_wrap_str_plain_phone2numeric_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_wrap ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_phone2numeric, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1863593e728059f3c0ba0d01334514dd, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_Truncator_str_plain_wrap_str_plain_phone2numeric_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_phone2numeric ) );
        frame_guard.setLineNumber( 20 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_mark_safe, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_33422e2c698707541621bf8ab31ea849, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_83b97e8e7e028d0ed1406da037724e95_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_mark_safe ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_SafeData, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_33422e2c698707541621bf8ab31ea849, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_83b97e8e7e028d0ed1406da037724e95_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SafeData ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_mark_for_escaping, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_33422e2c698707541621bf8ab31ea849, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_83b97e8e7e028d0ed1406da037724e95_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_mark_for_escaping ) );
        frame_guard.setLineNumber( 21 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 22 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_timesince, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_f4a3c090f82e51f7a95131780175d112, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_timesince_str_plain_timeuntil_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_timesince ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_timeuntil, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_f4a3c090f82e51f7a95131780175d112, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_timesince_str_plain_timeuntil_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_timeuntil ) );
        frame_guard.setLineNumber( 23 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_ugettext, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_ugettext_str_plain_ungettext_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ugettext ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_ungettext, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_ugettext_str_plain_ungettext_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ungettext ) );
        frame_guard.setLineNumber( 24 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_normalize_newlines, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1863593e728059f3c0ba0d01334514dd, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict, _python_list_str_plain_normalize_newlines_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_normalize_newlines ) );
        frame_guard.setLineNumber( 26 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_register, CALL_FUNCTION_NO_ARGS( _mvar_django__template__defaultfilters_Library.asObject0() ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_stringfilter, MAKE_FUNCTION_function_1_stringfilter_of_module_django__template__defaultfilters(  ) );
        frame_guard.setLineNumber( 59 );
        {
            PyObjectTempKeeper1 call1;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_addslashes, ( call1.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_2_addslashes_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 69 );
        {
            PyObjectTempKeeper1 call3;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_capfirst, ( call3.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_3_capfirst_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 75 );
        {
            PyObjectTempKeeper1 call5;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_escapejs_filter, ( call5.assign( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_unicode_plain_escapejs ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_4_escapejs_filter_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 81 );
        {
            PyObjectTempKeeper1 call7;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_fix_ampersands_filter, ( call7.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_unicode_plain_fix_ampersands_tuple, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_5_fix_ampersands_filter_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        UPDATE_STRING_DICT0( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_pos_inf, _python_float_inf );
        UPDATE_STRING_DICT0( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_neg_inf, _python_float__minus_inf );
        UPDATE_STRING_DICT0( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_nan, _python_float_minus_nan );
        frame_guard.setLineNumber( 97 );
        {
            PyObjectTempKeeper1 make_list10;
            PyObjectTempKeeper1 make_list9;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_special_floats, ( make_list9.assign( TO_STR( _mvar_django__template__defaultfilters_pos_inf.asObject0() ) ), make_list10.assign( TO_STR( _mvar_django__template__defaultfilters_neg_inf.asObject0() ) ), MAKE_LIST3( make_list9.asObject(), make_list10.asObject(), TO_STR( _mvar_django__template__defaultfilters_nan.asObject0() ) ) ) );
        }
        frame_guard.setLineNumber( 99 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_floatformat, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_6_floatformat_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 182 );
        {
            PyObjectTempKeeper1 call12;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_iriencode, ( call12.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_7_iriencode_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 188 );
        {
            PyObjectTempKeeper1 call14;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_linenumbers, ( call14.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_2d5c1ac2dd713bb1417a7239a48c6db3 ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_8_linenumbers_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 204 );
        {
            PyObjectTempKeeper1 call16;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_lower, ( call16.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_9_lower_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 210 );
        {
            PyObjectTempKeeper1 call18;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_make_list, ( call18.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_10_make_list_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 221 );
        {
            PyObjectTempKeeper1 call20;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_slugify, ( call20.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_11_slugify_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 232 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_stringformat, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_12_stringformat_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 248 );
        {
            PyObjectTempKeeper1 call22;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_title, ( call22.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call22.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_13_title_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 255 );
        {
            PyObjectTempKeeper1 call24;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_truncatechars, ( call24.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call24.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_14_truncatechars_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 269 );
        {
            PyObjectTempKeeper1 call26;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_truncatewords, ( call26.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call26.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_15_truncatewords_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 285 );
        {
            PyObjectTempKeeper1 call28;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_truncatewords_html, ( call28.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call28.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_16_truncatewords_html_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 301 );
        {
            PyObjectTempKeeper1 call30;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_upper, ( call30.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call30.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_17_upper_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 307 );
        {
            PyObjectTempKeeper1 call32;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_urlencode, ( call32.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_18_urlencode_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 323 );
        {
            PyObjectTempKeeper1 call34;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_urlize, ( call34.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_2d5c1ac2dd713bb1417a7239a48c6db3 ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call34.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_19_urlize_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 329 );
        {
            PyObjectTempKeeper1 call36;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_urlizetrunc, ( call36.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_2d5c1ac2dd713bb1417a7239a48c6db3 ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call36.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_20_urlizetrunc_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 341 );
        {
            PyObjectTempKeeper1 call38;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_wordcount, ( call38.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call38.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_21_wordcount_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 347 );
        {
            PyObjectTempKeeper1 call40;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_wordwrap, ( call40.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call40.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_22_wordwrap_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 357 );
        {
            PyObjectTempKeeper1 call42;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_ljust, ( call42.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call42.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_23_ljust_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 367 );
        {
            PyObjectTempKeeper1 call44;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_rjust, ( call44.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call44.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_24_rjust_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 377 );
        {
            PyObjectTempKeeper1 call46;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_center, ( call46.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call46.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_25_center_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 383 );
        {
            PyObjectTempKeeper1 call48;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_cut, ( call48.assign( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ), CALL_FUNCTION_WITH_ARGS( call48.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_26_cut_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 399 );
        {
            PyObjectTempKeeper1 call50;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_escape_filter, ( call50.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_unicode_plain_escape_tuple, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call50.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_27_escape_filter_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 407 );
        {
            PyObjectTempKeeper1 call52;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_force_escape, ( call52.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call52.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_28_force_escape_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 417 );
        {
            PyObjectTempKeeper1 call54;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_linebreaks_filter, ( call54.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_unicode_plain_linebreaks_tuple, PyObjectTemporary( PyDict_Copy( _python_dict_2d5c1ac2dd713bb1417a7239a48c6db3 ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call54.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_29_linebreaks_filter_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 428 );
        {
            PyObjectTempKeeper1 call56;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_linebreaksbr, ( call56.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_2d5c1ac2dd713bb1417a7239a48c6db3 ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call56.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_30_linebreaksbr_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 441 );
        {
            PyObjectTempKeeper1 call58;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_safe, ( call58.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call58.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_31_safe_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 449 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_safeseq, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_32_safeseq_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 458 );
        {
            PyObjectTempKeeper1 call60;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_removetags, ( call60.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call60.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_33_removetags_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 465 );
        {
            PyObjectTempKeeper1 call62;
            UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_striptags, ( call62.assign( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call62.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__defaultfilters_stringfilter.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_34_striptags_of_module_django__template__defaultfilters(  ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 475 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_dictsort, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_35_dictsort_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 486 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_dictsortreversed, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_36_dictsortreversed_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 497 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_first, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_37_first_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 505 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_join, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_2d5c1ac2dd713bb1417a7239a48c6db3 ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_38_join_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 519 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_last, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_39_last_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 527 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_length, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_40_length_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 535 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_length_is, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_41_length_is_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 543 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_random, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_42_random_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 548 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_slice_filter, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_unicode_plain_slice_tuple, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_43_slice_filter_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 569 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_unordered_list, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_2d5c1ac2dd713bb1417a7239a48c6db3 ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_44_unordered_list_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 660 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_add, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_45_add_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 671 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_get_digit, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_46_get_digit_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 695 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_date, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_982edf25d37a8bd69a44f8996540cb7c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_47_date_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 710 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_time, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_982edf25d37a8bd69a44f8996540cb7c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_48_time_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 725 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_timesince_filter, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_unicode_plain_timesince_tuple, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_49_timesince_filter_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 737 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_timeuntil_filter, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_unicode_plain_timeuntil_tuple, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_50_timeuntil_filter_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 751 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_default, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_51_default_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 756 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_default_if_none, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_52_default_if_none_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 763 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_divisibleby, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_53_divisibleby_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 768 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_yesno, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_54_yesno_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 804 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_filesizeformat, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_55_filesizeformat_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 839 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_pluralize, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_09f28b1638d0959cc57df19a2e68474c ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_56_pluralize_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 883 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_phone2numeric_filter, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_unicode_plain_phone2numeric_tuple, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_57_phone2numeric_filter_of_module_django__template__defaultfilters(  ) ).asObject() ) );
        frame_guard.setLineNumber( 888 );
        UPDATE_STRING_DICT1( _moduledict_django__template__defaultfilters, (Nuitka_StringObject *)_python_str_plain_pprint, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__defaultfilters_register.asObject0(), _python_str_plain_filter ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_adf3978d32acb41ae60a7fa8eede511a ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_58_pprint_of_module_django__template__defaultfilters(  ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__template__defaultfilters)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__template__defaultfilters );
}
