// Generated code for Python source for module 'django.utils.translation.trans_real'
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

// The _module_django__utils__translation__trans_real is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__translation__trans_real;
PyDictObject *_moduledict_django__utils__translation__trans_real;

// The module level variables.
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_CONTEXT_SEPARATOR( &_module_django__utils__translation__trans_real, &_python_str_plain_CONTEXT_SEPARATOR );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_DjangoTranslation( &_module_django__utils__translation__trans_real, &_python_str_plain_DjangoTranslation );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_SafeData( &_module_django__utils__translation__trans_real, &_python_str_plain_SafeData );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_SortedDict( &_module_django__utils__translation__trans_real, &_python_str_plain_SortedDict );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_StringIO( &_module_django__utils__translation__trans_real, &_python_str_plain_StringIO );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_TranslatorCommentWarning( &_module_django__utils__translation__trans_real, &_python_str_plain_TranslatorCommentWarning );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real___metaclass__( &_module_django__utils__translation__trans_real, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real__accepted( &_module_django__utils__translation__trans_real, &_python_str_plain__accepted );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real__active( &_module_django__utils__translation__trans_real, &_python_str_plain__active );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real__checked_languages( &_module_django__utils__translation__trans_real, &_python_str_plain__checked_languages );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real__default( &_module_django__utils__translation__trans_real, &_python_str_plain__default );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real__translations( &_module_django__utils__translation__trans_real, &_python_str_plain__translations );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_accept_language_re( &_module_django__utils__translation__trans_real, &_python_str_plain_accept_language_re );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_all_locale_paths( &_module_django__utils__translation__trans_real, &_python_str_plain_all_locale_paths );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_blankout( &_module_django__utils__translation__trans_real, &_python_str_plain_blankout );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_block_re( &_module_django__utils__translation__trans_real, &_python_str_plain_block_re );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_check_for_language( &_module_django__utils__translation__trans_real, &_python_str_plain_check_for_language );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_constant_re( &_module_django__utils__translation__trans_real, &_python_str_plain_constant_re );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_context_re( &_module_django__utils__translation__trans_real, &_python_str_plain_context_re );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_do_ntranslate( &_module_django__utils__translation__trans_real, &_python_str_plain_do_ntranslate );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_do_translate( &_module_django__utils__translation__trans_real, &_python_str_plain_do_translate );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_dot_re( &_module_django__utils__translation__trans_real, &_python_str_plain_dot_re );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_endblock_re( &_module_django__utils__translation__trans_real, &_python_str_plain_endblock_re );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_force_str( &_module_django__utils__translation__trans_real, &_python_str_plain_force_str );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_force_text( &_module_django__utils__translation__trans_real, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_get_language( &_module_django__utils__translation__trans_real, &_python_str_plain_get_language );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_get_language_from_path( &_module_django__utils__translation__trans_real, &_python_str_plain_get_language_from_path );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_get_supported_language_variant( &_module_django__utils__translation__trans_real, &_python_str_plain_get_supported_language_variant );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_gettext( &_module_django__utils__translation__trans_real, &_python_str_plain_gettext );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_gettext_module( &_module_django__utils__translation__trans_real, &_python_str_plain_gettext_module );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_import_module( &_module_django__utils__translation__trans_real, &_python_str_plain_import_module );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_inline_re( &_module_django__utils__translation__trans_real, &_python_str_plain_inline_re );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_language_code_prefix_re( &_module_django__utils__translation__trans_real, &_python_str_plain_language_code_prefix_re );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_local( &_module_django__utils__translation__trans_real, &_python_str_plain_local );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_locale( &_module_django__utils__translation__trans_real, &_python_str_plain_locale );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_mark_safe( &_module_django__utils__translation__trans_real, &_python_str_plain_mark_safe );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_memoize( &_module_django__utils__translation__trans_real, &_python_str_plain_memoize );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_ngettext( &_module_django__utils__translation__trans_real, &_python_str_plain_ngettext );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_one_percent_re( &_module_django__utils__translation__trans_real, &_python_str_plain_one_percent_re );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_os( &_module_django__utils__translation__trans_real, &_python_str_plain_os );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_parse_accept_lang_header( &_module_django__utils__translation__trans_real, &_python_str_plain_parse_accept_lang_header );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_plural_re( &_module_django__utils__translation__trans_real, &_python_str_plain_plural_re );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_re( &_module_django__utils__translation__trans_real, &_python_str_plain_re );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_six( &_module_django__utils__translation__trans_real, &_python_str_plain_six );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_sys( &_module_django__utils__translation__trans_real, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_to_language( &_module_django__utils__translation__trans_real, &_python_str_plain_to_language );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_to_locale( &_module_django__utils__translation__trans_real, &_python_str_plain_to_locale );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_translation( &_module_django__utils__translation__trans_real, &_python_str_plain_translation );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_ugettext( &_module_django__utils__translation__trans_real, &_python_str_plain_ugettext );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_ungettext( &_module_django__utils__translation__trans_real, &_python_str_plain_ungettext );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_upath( &_module_django__utils__translation__trans_real, &_python_str_plain_upath );
static PyObjectGlobalVariable_django__utils__translation__trans_real _mvar_django__utils__translation__trans_real_warnings( &_module_django__utils__translation__trans_real, &_python_str_plain_warnings );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_3_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_base_lang, PyObjectLocalVariable &python_closure_trans );


static PyObject *MAKE_FUNCTION_function_10_catalog_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_11_do_translate_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_12_gettext_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_13_ugettext_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_14_pgettext_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_15_gettext_noop_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_16_do_ntranslate_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_17_ngettext_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_18_ungettext_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_19_npgettext_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( PyObjectSharedLocalVariable &python_closure_globalpath, PyObjectSharedLocalVariable &python_closure_settings );


// This structure is for attachment as self of function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real.
// It is allocated at the time the function object is created.
struct _context_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_globalpath;
    PyObjectClosureVariable python_closure_settings;
};

static void _context_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_destructor( void *context_voidptr )
{
    _context_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *_python_context = (_context_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( PyObjectSharedLocalVariable &python_closure_lang, PyObjectSharedLocalVariable &python_closure_loc );


// This structure is for attachment as self of function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real.
// It is allocated at the time the function object is created.
struct _context_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_lang;
    PyObjectClosureVariable python_closure_loc;
};

static void _context_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_destructor( void *context_voidptr )
{
    _context_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *_python_context = (_context_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1_to_locale_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_20_all_locale_paths_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_21_check_for_language_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_23_get_language_from_path_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_24_get_language_from_request_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_25_blankout_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_26_templatize_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_2_to_language_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( PyObjectSharedLocalVariable &python_closure__translation, PyObjectSharedLocalVariable &python_closure_res );


// This structure is for attachment as self of function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real.
// It is allocated at the time the function object is created.
struct _context_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure__translation;
    PyObjectClosureVariable python_closure_res;
};

static void _context_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_destructor( void *context_voidptr )
{
    _context_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *_python_context = (_context_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_4_translation_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_5_activate_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_6_deactivate_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_7_deactivate_all_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_8_get_language_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_function_9_get_language_bidi_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real(  );


static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real(  );


// The module function definitions.
static PyObject *impl_function_1_to_locale_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_language, PyObject *_python_par_to_lower )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_language( _python_str_plain_language, _python_par_language );
    PyObjectLocalParameterVariableNoDel _python_var_to_lower( _python_str_plain_to_lower, _python_par_to_lower );
    PyObjectLocalVariable _python_var_p( _python_str_plain_p );

    // Actual function code.
    static PyFrameObject *frame_function_1_to_locale_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_1_to_locale_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_1_to_locale_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_to_locale_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_1_to_locale_of_module_django__utils__translation__trans_real );
        }

        frame_function_1_to_locale_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_ce4d8a8b36978aa9fcc55a40f8b4b9ee, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_1_to_locale_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_1_to_locale_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 55 );
        _python_var_p.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_language.asObject(), _python_str_plain_find ) ).asObject(), _python_unicode_chr_45 ) );
        frame_guard.setLineNumber( 56 );
        if ( RICH_COMPARE_BOOL_GE( _python_var_p.asObject(), _python_int_0 ) )
        {
            frame_guard.setLineNumber( 57 );
            if ( CHECK_IF_TRUE( _python_var_to_lower.asObject() ) )
            {
                frame_guard.setLineNumber( 58 );
                {
                    PyObjectTempKeeper1 op7;
                    PyObjectTempKeeper0 slice1;
                    PyObjectTempKeeper0 slice4;
                    return ( op7.assign( BINARY_OPERATION_ADD( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice1.assign( _python_var_language.asObject() ), LOOKUP_SLICE( slice1.asObject0(), Py_None, _python_var_p.asObject() ) ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_unicode_plain__ ) ), BINARY_OPERATION_ADD( op7.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice4.assign( _python_var_language.asObject() ), LOOKUP_SLICE( slice4.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_p.asObject(), _python_int_pos_1 ) ).asObject(), Py_None ) ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 61 );
                {
                    PyObjectTempKeeper0 slice21;
                    if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( ( slice21.assign( _python_var_language.asObject() ), LOOKUP_SLICE( slice21.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_p.asObject(), _python_int_pos_1 ) ).asObject(), Py_None ) ) ).asObject() ) ).asObject(), _python_int_pos_2 ) )
                {
                    frame_guard.setLineNumber( 62 );
                    {
                        PyObjectTempKeeper1 op14;
                        PyObjectTempKeeper1 op19;
                        PyObjectTempKeeper0 slice16;
                        PyObjectTempKeeper0 slice9;
                        PyObjectTempKeeper0 subscr12;
                        return ( op19.assign( ( op14.assign( BINARY_OPERATION_ADD( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice9.assign( _python_var_language.asObject() ), LOOKUP_SLICE( slice9.asObject0(), Py_None, _python_var_p.asObject() ) ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_unicode_plain__ ) ), BINARY_OPERATION_ADD( op14.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( subscr12.assign( _python_var_language.asObject() ), LOOKUP_SUBSCRIPT( subscr12.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_p.asObject(), _python_int_pos_1 ) ).asObject() ) ) ).asObject(), _python_str_plain_upper ) ).asObject() ) ).asObject() ) ) ), BINARY_OPERATION_ADD( op19.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice16.assign( _python_var_language.asObject() ), LOOKUP_SLICE( slice16.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_p.asObject(), _python_int_pos_2 ) ).asObject(), Py_None ) ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ) );
                    }
                }
                }
                frame_guard.setLineNumber( 63 );
                {
                    PyObjectTempKeeper1 op30;
                    PyObjectTempKeeper0 slice24;
                    PyObjectTempKeeper0 slice27;
                    return ( op30.assign( BINARY_OPERATION_ADD( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice24.assign( _python_var_language.asObject() ), LOOKUP_SLICE( slice24.asObject0(), Py_None, _python_var_p.asObject() ) ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_unicode_plain__ ) ), BINARY_OPERATION_ADD( op30.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice27.assign( _python_var_language.asObject() ), LOOKUP_SLICE( slice27.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_p.asObject(), _python_int_pos_1 ) ).asObject(), Py_None ) ) ).asObject(), _python_str_plain_upper ) ).asObject() ) ).asObject() ) );
                }
            }
        }
        else
        {
            frame_guard.setLineNumber( 65 );
            return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_language.asObject(), _python_str_plain_lower ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_to_lower.updateLocalsDict( _python_var_language.updateLocalsDict( _python_var_p.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_to_locale_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_1_to_locale_of_module_django__utils__translation__trans_real );
           frame_function_1_to_locale_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_to_locale_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_language = NULL;
    PyObject *_python_par_to_lower = NULL;
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
                PyErr_Format( PyExc_TypeError, "to_locale() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_language == key )
            {
                if (unlikely( _python_par_language ))
                {
                    PyErr_Format( PyExc_TypeError, "to_locale() got multiple values for keyword argument 'language'" );
                    goto error_exit;
                }

                _python_par_language = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_to_lower == key )
            {
                if (unlikely( _python_par_to_lower ))
                {
                    PyErr_Format( PyExc_TypeError, "to_locale() got multiple values for keyword argument 'to_lower'" );
                    goto error_exit;
                }

                _python_par_to_lower = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_language, key ) )
            {
                if (unlikely( _python_par_language ))
                {
                    PyErr_Format( PyExc_TypeError, "to_locale() got multiple values for keyword argument 'language'" );
                    goto error_exit;
                }

                _python_par_language = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_to_lower, key ) )
            {
                if (unlikely( _python_par_to_lower ))
                {
                    PyErr_Format( PyExc_TypeError, "to_locale() got multiple values for keyword argument 'to_lower'" );
                    goto error_exit;
                }

                _python_par_to_lower = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "to_locale() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "to_locale() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "to_locale() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "to_locale() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "to_locale() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "to_locale() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "to_locale() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "to_locale() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "to_locale() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "to_locale() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "to_locale() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "to_locale() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "to_locale() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_language != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "to_locale() got multiple values for keyword argument 'language'" );
             goto error_exit;
         }

        _python_par_language = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_to_lower != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "to_locale() got multiple values for keyword argument 'to_lower'" );
             goto error_exit;
         }

        _python_par_to_lower = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_to_lower == NULL )
    {
        _python_par_to_lower = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_to_lower );
    }


    return impl_function_1_to_locale_of_module_django__utils__translation__trans_real( self, _python_par_language, _python_par_to_lower );

error_exit:;

    Py_XDECREF( _python_par_language );
    Py_XDECREF( _python_par_to_lower );

    return NULL;
}

static PyObject *dparse_function_1_to_locale_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_to_locale_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_to_locale_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_to_language_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_locale )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_locale( _python_str_plain_locale, _python_par_locale );
    PyObjectLocalVariable _python_var_p( _python_str_plain_p );

    // Actual function code.
    static PyFrameObject *frame_function_2_to_language_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_2_to_language_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_2_to_language_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_to_language_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_2_to_language_of_module_django__utils__translation__trans_real );
        }

        frame_function_2_to_language_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_305ca03a58fdfef3723b3518e74c8cb8, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_2_to_language_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_2_to_language_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 69 );
        _python_var_p.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_locale.asObject(), _python_str_plain_find ) ).asObject(), _python_unicode_plain__ ) );
        frame_guard.setLineNumber( 70 );
        if ( RICH_COMPARE_BOOL_GE( _python_var_p.asObject(), _python_int_0 ) )
        {
            frame_guard.setLineNumber( 71 );
            {
                PyObjectTempKeeper1 op7;
                PyObjectTempKeeper0 slice1;
                PyObjectTempKeeper0 slice4;
                return ( op7.assign( BINARY_OPERATION_ADD( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice1.assign( _python_var_locale.asObject() ), LOOKUP_SLICE( slice1.asObject0(), Py_None, _python_var_p.asObject() ) ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_unicode_chr_45 ) ), BINARY_OPERATION_ADD( op7.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice4.assign( _python_var_locale.asObject() ), LOOKUP_SLICE( slice4.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_p.asObject(), _python_int_pos_1 ) ).asObject(), Py_None ) ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 73 );
            return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_locale.asObject(), _python_str_plain_lower ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_locale.updateLocalsDict( _python_var_p.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_to_language_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_2_to_language_of_module_django__utils__translation__trans_real );
           frame_function_2_to_language_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_to_language_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_locale = NULL;
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
                PyErr_Format( PyExc_TypeError, "to_language() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_locale == key )
            {
                if (unlikely( _python_par_locale ))
                {
                    PyErr_Format( PyExc_TypeError, "to_language() got multiple values for keyword argument 'locale'" );
                    goto error_exit;
                }

                _python_par_locale = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_locale, key ) )
            {
                if (unlikely( _python_par_locale ))
                {
                    PyErr_Format( PyExc_TypeError, "to_language() got multiple values for keyword argument 'locale'" );
                    goto error_exit;
                }

                _python_par_locale = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "to_language() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "to_language() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "to_language() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "to_language() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "to_language() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "to_language() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "to_language() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "to_language() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "to_language() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "to_language() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "to_language() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "to_language() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "to_language() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_locale != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "to_language() got multiple values for keyword argument 'locale'" );
             goto error_exit;
         }

        _python_par_locale = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_to_language_of_module_django__utils__translation__trans_real( self, _python_par_locale );

error_exit:;

    Py_XDECREF( _python_par_locale );

    return NULL;
}

static PyObject *dparse_function_2_to_language_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_to_language_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_to_language_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_merge( _python_str_plain_merge );
    PyObjectLocalVariable _python_var_set_language( _python_str_plain_set_language );
    PyObjectLocalVariable _python_var_language( _python_str_plain_language );
    PyObjectLocalVariable _python_var_to_language( _python_str_plain_to_language );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_trans_real );
    _python_var___doc__.assign0( _python_unicode_digest_cfcf816d77386100277100acdb5119ec );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  ) );
    _python_var_merge.assign1( MAKE_FUNCTION_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  ) );
    _python_var_set_language.assign1( MAKE_FUNCTION_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  ) );
    _python_var_language.assign1( MAKE_FUNCTION_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  ) );
    _python_var_to_language.assign1( MAKE_FUNCTION_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  ) );
    return _python_var___repr__.updateLocalsDict( _python_var_to_language.updateLocalsDict( _python_var_language.updateLocalsDict( _python_var_set_language.updateLocalsDict( _python_var_merge.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kw )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kw( _python_str_plain_kw, _python_par_kw );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
        }

        frame_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_5ad4b276b83dae4f2507f5161a1334f3, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 81 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper1 call_tmp2;
            PyObjectTempKeeper0 call_tmp3;
            DECREASE_REFCOUNT( ( call_tmp1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_gettext_module.asObject0(), _python_str_plain_GNUTranslations ) ).asObject(), _python_str_plain___init__ ) ), call_tmp2.assign( MAKE_TUPLE1( _python_var_self.asObject() ) ), call_tmp3.assign( _python_var_args.asObject() ), impl_function_8_complex_call_helper_pos_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), call_tmp3.asObject(), _python_var_kw.asObject1() ) ) );
        }
        frame_guard.setLineNumber( 82 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_set_output_charset ) ).asObject(), _python_unicode_digest_e9e2aa8136260a22b0b09fdee43ccb8a ) );
        frame_guard.setLineNumber( 83 );
        SET_ATTRIBUTE( _python_unicode_digest_ea03fcb8c47822bce772cf6c07d0ebbb, _python_var_self.asObject(), _python_str_plain__DjangoTranslation__language );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_kw.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
           frame_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kw = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_kw = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kw = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kw, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_kw = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kw = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kw, entry->me_key, value );

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
            _python_par_kw = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kw, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kw, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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


    return impl_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, _python_par_self, _python_par_args, _python_par_kw );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kw );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_other )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_other( _python_str_plain_other, _python_par_other );

    // Actual function code.
    static PyFrameObject *frame_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
        }

        frame_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_b8d893e3114e6b8db4ca2a7494a13afc, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 86 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__catalog ) ).asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_other.asObject(), _python_str_plain__catalog ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_other.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
           frame_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_other = NULL;
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
                PyErr_Format( PyExc_TypeError, "merge() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "merge() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_other == key )
            {
                if (unlikely( _python_par_other ))
                {
                    PyErr_Format( PyExc_TypeError, "merge() got multiple values for keyword argument 'other'" );
                    goto error_exit;
                }

                _python_par_other = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "merge() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_other, key ) )
            {
                if (unlikely( _python_par_other ))
                {
                    PyErr_Format( PyExc_TypeError, "merge() got multiple values for keyword argument 'other'" );
                    goto error_exit;
                }

                _python_par_other = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "merge() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "merge() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "merge() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "merge() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "merge() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "merge() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "merge() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "merge() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "merge() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "merge() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "merge() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "merge() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "merge() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "merge() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_other != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "merge() got multiple values for keyword argument 'other'" );
             goto error_exit;
         }

        _python_par_other = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, _python_par_self, _python_par_other );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_other );

    return NULL;
}

static PyObject *dparse_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_language )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_language( _python_str_plain_language, _python_par_language );

    // Actual function code.
    static PyFrameObject *frame_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
        }

        frame_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_7f21ea965596518cba99e2e9e57f35e9, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 89 );
        {
                PyObject *tmp_identifier = _python_var_language.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__DjangoTranslation__language );
        }
        frame_guard.setLineNumber( 90 );
        {
            PyObjectTempKeeper0 call1;
            {
                PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__utils__translation__trans_real_to_language.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_language.asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__DjangoTranslation__to_language );
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
        frame_guard.getFrame0()->f_locals = _python_var_language.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
           frame_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_language = NULL;
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
                PyErr_Format( PyExc_TypeError, "set_language() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "set_language() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_language == key )
            {
                if (unlikely( _python_par_language ))
                {
                    PyErr_Format( PyExc_TypeError, "set_language() got multiple values for keyword argument 'language'" );
                    goto error_exit;
                }

                _python_par_language = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "set_language() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_language, key ) )
            {
                if (unlikely( _python_par_language ))
                {
                    PyErr_Format( PyExc_TypeError, "set_language() got multiple values for keyword argument 'language'" );
                    goto error_exit;
                }

                _python_par_language = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "set_language() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "set_language() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "set_language() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "set_language() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "set_language() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "set_language() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_language() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "set_language() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_language() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "set_language() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "set_language() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "set_language() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "set_language() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "set_language() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_language != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "set_language() got multiple values for keyword argument 'language'" );
             goto error_exit;
         }

        _python_par_language = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, _python_par_self, _python_par_language );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_language );

    return NULL;
}

static PyObject *dparse_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
        }

        frame_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_2a46aae140f354a27fd274bc497738da, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 93 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__DjangoTranslation__language );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
           frame_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "language() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "language() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "language() got multiple values for keyword argument 'self'" );
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
                   "language() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "language() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "language() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "language() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "language() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "language() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "language() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "language() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "language() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "language() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "language() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "language() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "language() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "language() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
        }

        frame_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_8fd104110f0cdff788521f4753d733e6, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 96 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__DjangoTranslation__to_language );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
           frame_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "to_language() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "to_language() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "to_language() got multiple values for keyword argument 'self'" );
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
                   "to_language() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "to_language() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "to_language() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "to_language() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "to_language() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "to_language() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "to_language() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "to_language() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "to_language() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "to_language() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "to_language() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "to_language() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "to_language() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "to_language() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
        }

        frame_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_fa16c66b6093c1fb4e13d5d73088a794, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 99 );
        return BINARY_OPERATION_REMAINDER( _python_unicode_digest_424dc850e75d6126709e24ca430b301e, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__DjangoTranslation__language ) ).asObject() );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real );
           frame_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_language )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_language( _python_str_plain_language, _python_par_language );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectSharedLocalVariable _python_var_settings( _python_str_plain_settings );
    PyObjectSharedLocalVariable _python_var_globalpath( _python_str_plain_globalpath );
    PyObjectLocalVariable _python_var__fetch( _python_str_plain__fetch );
    PyObjectLocalVariable _python_var_default_translation( _python_str_plain_default_translation );
    PyObjectLocalVariable _python_var_current_translation( _python_str_plain_current_translation );

    // Actual function code.
    static PyFrameObject *frame_function_4_translation_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_4_translation_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_4_translation_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_translation_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_4_translation_of_module_django__utils__translation__trans_real );
        }

        frame_function_4_translation_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_7ae61f9f4d34be8386ff1db70e727986, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_4_translation_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_4_translation_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 112 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_t.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real__translations.asObject0(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_language.asObject(), Py_None ) ) );
        }
        frame_guard.setLineNumber( 113 );
        if ( ( _python_var_t.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 114 );
            return _python_var_t.asObject1();
        }
        frame_guard.setLineNumber( 116 );
        _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_language.updateLocalsDict( _python_var_current_translation.updateLocalsDict( _python_var_default_translation.updateLocalsDict( _python_var__fetch.updateLocalsDict( _python_var_globalpath.updateLocalsDict( _python_var_settings.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 118 );
        {
            PyObjectTempKeeper1 call10;
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper1 subscr4;
            _python_var_globalpath.assign1( ( call10.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( ( call8.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_dirname ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( ( call6.assign( _mvar_django__utils__translation__trans_real_upath.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( subscr4.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_sys.asObject0(), _python_str_plain_modules ) ), LOOKUP_SUBSCRIPT( subscr4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain___module__ ) ).asObject() ) ) ).asObject(), _python_str_plain___file__ ) ).asObject() ) ) ).asObject() ) ) ).asObject(), _python_unicode_plain_locale ) ) );
        }
        _python_var__fetch.assign1( MAKE_FUNCTION_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( _python_var_globalpath, _python_var_settings ) );
        frame_guard.setLineNumber( 177 );
        {
            PyObjectTempKeeper0 call13;
            _python_var_default_translation.assign1( ( call13.assign( _python_var__fetch.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LANGUAGE_CODE ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 178 );
        {
            PyObjectTempKeeper0 call15;
            PyObjectTempKeeper1 call16;
            _python_var_current_translation.assign1( ( call15.assign( _python_var__fetch.asObject() ), call16.assign( MAKE_TUPLE1( _python_var_language.asObject() ) ), CALL_FUNCTION( call15.asObject0(), call16.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_default_translation.asObject(), _python_str_plain_fallback ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 180 );
        return _python_var_current_translation.asObject1();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_language.updateLocalsDict( _python_var_current_translation.updateLocalsDict( _python_var_default_translation.updateLocalsDict( _python_var__fetch.updateLocalsDict( _python_var_globalpath.updateLocalsDict( _python_var_settings.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_translation_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_4_translation_of_module_django__utils__translation__trans_real );
           frame_function_4_translation_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_language = NULL;
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
                PyErr_Format( PyExc_TypeError, "translation() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_language == key )
            {
                if (unlikely( _python_par_language ))
                {
                    PyErr_Format( PyExc_TypeError, "translation() got multiple values for keyword argument 'language'" );
                    goto error_exit;
                }

                _python_par_language = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_language, key ) )
            {
                if (unlikely( _python_par_language ))
                {
                    PyErr_Format( PyExc_TypeError, "translation() got multiple values for keyword argument 'language'" );
                    goto error_exit;
                }

                _python_par_language = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "translation() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "translation() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "translation() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "translation() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "translation() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "translation() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "translation() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "translation() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "translation() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "translation() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "translation() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "translation() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "translation() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_language != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "translation() got multiple values for keyword argument 'language'" );
             goto error_exit;
         }

        _python_par_language = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_translation_of_module_django__utils__translation__trans_real( self, _python_par_language );

error_exit:;

    Py_XDECREF( _python_par_language );

    return NULL;
}

static PyObject *dparse_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_translation_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_translation_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_lang, PyObject *_python_par_fallback )
{
    // The context of the function.
    struct _context_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *_python_context = (struct _context_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *)self->m_context;

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_lang( _python_str_plain_lang, _python_par_lang );
    PyObjectLocalParameterVariableNoDel _python_var_fallback( _python_str_plain_fallback, _python_par_fallback );
    PyObjectSharedLocalVariable _python_var_res( _python_str_plain_res );
    PyObjectSharedLocalVariable _python_var_loc( _python_str_plain_loc );
    PyObjectSharedLocalVariable _python_var__translation( _python_str_plain__translation );
    PyObjectLocalVariable _python_var_base_lang( _python_str_plain_base_lang );
    PyObjectLocalVariable _python_var__merge( _python_str_plain__merge );
    PyObjectLocalVariable _python_var_appname( _python_str_plain_appname );
    PyObjectLocalVariable _python_var_app( _python_str_plain_app );
    PyObjectLocalVariable _python_var_apppath( _python_str_plain_apppath );
    PyObjectLocalVariable _python_var_localepath( _python_str_plain_localepath );
    PyObjectLocalVariable _python_var_trans( _python_str_plain_trans );

    // Actual function code.
    static PyFrameObject *frame_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real );
        }

        frame_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_9e39e47e42c3adaaa90a4580f59b06ee, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 124 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_res.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real__translations.asObject0(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_lang.asObject(), Py_None ) ) );
        }
        frame_guard.setLineNumber( 125 );
        if ( ( _python_var_res.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 126 );
            return _python_var_res.asObject1();
        }
        frame_guard.setLineNumber( 128 );
        {
            PyObjectTempKeeper0 call4;
            _python_var_loc.assign1( ( call4.assign( _mvar_django__utils__translation__trans_real_to_locale.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_lang.asObject() ) ) );
        }
        _python_var__translation.assign1( MAKE_FUNCTION_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( _python_var_lang, _python_var_loc ) );
        frame_guard.setLineNumber( 138 );
        {
            PyObjectTempKeeper0 call6;
            _python_var_res.assign1( ( call6.assign( _python_var__translation.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_context->python_closure_globalpath.asObject() ) ) );
        }
        _python_var_base_lang.assign1( MAKE_FUNCTION_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real(  ) );
        frame_guard.setLineNumber( 145 );
        {
            PyObjectTempKeeper0 call8;
            PyObjectTempKeeper1 cmp10;
            if ( ( cmp10.assign( ( call8.assign( _python_var_base_lang.asObject() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_lang.asObject() ) ) ), SEQUENCE_CONTAINS_BOOL( cmp10.asObject0(), PyObjectTemporary( impl_listcontr_3_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( MAKE_ITERATOR( PyObjectTemporary( TO_LIST( _mvar_django__utils__translation__trans_real__translations.asObject0() ) ).asObject() ), _python_var_base_lang, _python_var_trans ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 146 );
            {
                    PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_res.asObject(), _python_str_plain__info ) ).asObject(), _python_str_plain_copy ) ).asObject() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_res.asObject(), _python_str_plain__info );
            }
            frame_guard.setLineNumber( 147 );
            {
                    PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_res.asObject(), _python_str_plain__catalog ) ).asObject(), _python_str_plain_copy ) ).asObject() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_res.asObject(), _python_str_plain__catalog );
            }
        }
        }
        _python_var__merge.assign1( MAKE_FUNCTION_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( _python_var__translation, _python_var_res ) );
        {
            frame_guard.setLineNumber( 158 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_reversed ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_closure_settings.asObject(), _python_str_plain_INSTALLED_APPS ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 158 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_appname.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 159 );
                {
                    PyObjectTempKeeper0 call12;
                    _python_var_app.assign1( ( call12.assign( _mvar_django__utils__translation__trans_real_import_module.asObject0() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_var_appname.asObject() ) ) );
                }
                frame_guard.setLineNumber( 160 );
                {
                    PyObjectTempKeeper0 call14;
                    PyObjectTempKeeper1 call16;
                    PyObjectTempKeeper1 call18;
                    _python_var_apppath.assign1( ( call18.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), PyObjectTemporary( ( call16.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_dirname ) ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), PyObjectTemporary( ( call14.assign( _mvar_django__utils__translation__trans_real_upath.asObject0() ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_app.asObject(), _python_str_plain___file__ ) ).asObject() ) ) ).asObject() ) ) ).asObject(), _python_unicode_plain_locale ) ) );
                }
                frame_guard.setLineNumber( 162 );
                {
                    PyObjectTempKeeper1 call23;
                    if ( CHECK_IF_TRUE( PyObjectTemporary( ( call23.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_isdir ) ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), _python_var_apppath.asObject() ) ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 163 );
                    {
                        PyObjectTempKeeper0 call21;
                        _python_var_res.assign1( ( call21.assign( _python_var__merge.asObject() ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), _python_var_apppath.asObject() ) ) );
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        {
            frame_guard.setLineNumber( 165 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_reversed ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_closure_settings.asObject(), _python_str_plain_LOCALE_PATHS ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 165 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    _python_var_localepath.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 166 );
                {
                    PyObjectTempKeeper1 call27;
                    if ( CHECK_IF_TRUE( PyObjectTemporary( ( call27.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_isdir ) ), CALL_FUNCTION_WITH_ARGS( call27.asObject0(), _python_var_localepath.asObject() ) ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 167 );
                    {
                        PyObjectTempKeeper0 call25;
                        _python_var_res.assign1( ( call25.assign( _python_var__merge.asObject() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), _python_var_localepath.asObject() ) ) );
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 169 );
        if ( ( _python_var_res.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 170 );
            if ( ( _python_var_fallback.asObject() != Py_None ) )
            {
                frame_guard.setLineNumber( 171 );
                _python_var_res.assign0( _python_var_fallback.asObject() );
            }
            else
            {
                frame_guard.setLineNumber( 173 );
                return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_gettext_module.asObject0(), _python_str_plain_NullTranslations ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 174 );
        {
                PyObject *tmp_identifier = _python_var_res.asObject();
                PyObject *tmp_subscribed = _mvar_django__utils__translation__trans_real__translations.asObject0();
                SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_lang.asObject() );
        }
        frame_guard.setLineNumber( 175 );
        return _python_var_res.asObject1();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_fallback.updateLocalsDict( _python_var_lang.updateLocalsDict( _python_context->python_closure_settings.updateLocalsDict( _python_context->python_closure_globalpath.updateLocalsDict( _python_var_trans.updateLocalsDict( _python_var_localepath.updateLocalsDict( _python_var_apppath.updateLocalsDict( _python_var_app.updateLocalsDict( _python_var_appname.updateLocalsDict( _python_var__merge.updateLocalsDict( _python_var_base_lang.updateLocalsDict( _python_var__translation.updateLocalsDict( _python_var_loc.updateLocalsDict( _python_var_res.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real );
           frame_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_lang = NULL;
    PyObject *_python_par_fallback = NULL;
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
                PyErr_Format( PyExc_TypeError, "_fetch() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_fetch() got multiple values for keyword argument 'lang'" );
                    goto error_exit;
                }

                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_fallback == key )
            {
                if (unlikely( _python_par_fallback ))
                {
                    PyErr_Format( PyExc_TypeError, "_fetch() got multiple values for keyword argument 'fallback'" );
                    goto error_exit;
                }

                _python_par_fallback = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_lang, key ) )
            {
                if (unlikely( _python_par_lang ))
                {
                    PyErr_Format( PyExc_TypeError, "_fetch() got multiple values for keyword argument 'lang'" );
                    goto error_exit;
                }

                _python_par_lang = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_fallback, key ) )
            {
                if (unlikely( _python_par_fallback ))
                {
                    PyErr_Format( PyExc_TypeError, "_fetch() got multiple values for keyword argument 'fallback'" );
                    goto error_exit;
                }

                _python_par_fallback = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_fetch() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_fetch() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_fetch() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_fetch() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_fetch() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_fetch() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_fetch() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_fetch() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_fetch() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_fetch() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_fetch() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_fetch() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_fetch() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_fetch() got multiple values for keyword argument 'lang'" );
             goto error_exit;
         }

        _python_par_lang = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_fallback != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_fetch() got multiple values for keyword argument 'fallback'" );
             goto error_exit;
         }

        _python_par_fallback = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_fallback == NULL )
    {
        _python_par_fallback = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_fallback );
    }


    return impl_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( self, _python_par_lang, _python_par_fallback );

error_exit:;

    Py_XDECREF( _python_par_lang );
    Py_XDECREF( _python_par_fallback );

    return NULL;
}

static PyObject *dparse_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_path )
{
    // The context of the function.
    struct _context_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *_python_context = (struct _context_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );

    // Actual function code.
    static PyFrameObject *frame_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real );
        }

        frame_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_1b5f926ceb12494727f0c11f4627e622, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 131 );
        try
        {
            frame_guard.setLineNumber( 132 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call3;
                PyObjectTempKeeper1 call4;
                _python_var_t.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_gettext_module.asObject0(), _python_str_plain_translation ) ), call3.assign( _python_var_path.asObject() ), call4.assign( MAKE_LIST1( INCREASE_REFCOUNT( _python_context->python_closure_loc.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_unicode_plain_django, call3.asObject0(), call4.asObject0(), _mvar_django__utils__translation__trans_real_DjangoTranslation.asObject0() ) ) );
            }
            frame_guard.setLineNumber( 133 );
            {
                PyObjectTempKeeper1 call6;
                DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_set_language ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_context->python_closure_lang.asObject() ) ) );
            }
            frame_guard.setLineNumber( 134 );
            return _python_var_t.asObject1();
        }
        catch ( PythonException &_exception )
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

            if ( _exception.matches( PyExc_IOError ) )
            {
                frame_guard.detachFrame();
                return INCREASE_REFCOUNT( Py_None );
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
        frame_guard.getFrame0()->f_locals = _python_var_path.updateLocalsDict( _python_context->python_closure_lang.updateLocalsDict( _python_context->python_closure_loc.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real );
           frame_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "_translation() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_path == key )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "_translation() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path, key ) )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "_translation() got multiple values for keyword argument 'path'" );
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
                   "_translation() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_translation() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_translation() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_translation() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_translation() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_translation() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_translation() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_translation() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_translation() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_translation() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_translation() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_translation() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_translation() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_translation() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( self, _python_par_path );

error_exit:;

    Py_XDECREF( _python_par_path );

    return NULL;
}

static PyObject *dparse_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real );
        }

        frame_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_40f4019b195dceca0f3698b28d713c37, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 144 );
        return LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_x.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_45, _python_int_pos_1 ) ).asObject(), _python_int_0, 0 );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real );
           frame_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_3_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_base_lang,PyObjectLocalVariable &python_closure_trans )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 145 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 145 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_trans.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( python_closure_base_lang.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_trans.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_path )
{
    // The context of the function.
    struct _context_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *_python_context = (struct _context_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );

    // Actual function code.
    static PyFrameObject *frame_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real );
        }

        frame_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_194b2b532905f28771be7565399bb952, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 150 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_t.assign1( ( call1.assign( _python_context->python_closure__translation.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_path.asObject() ) ) );
        }
        frame_guard.setLineNumber( 151 );
        if ( ( _python_var_t.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 152 );
            if ( ( _python_context->python_closure_res.asObject() == Py_None ) )
            {
                frame_guard.setLineNumber( 153 );
                return _python_var_t.asObject1();
            }
            else
            {
                frame_guard.setLineNumber( 155 );
                {
                    PyObjectTempKeeper1 call3;
                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_context->python_closure_res.asObject(), _python_str_plain_merge ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_t.asObject() ) ) );
                }
            }
        }
        frame_guard.setLineNumber( 156 );
        return INCREASE_REFCOUNT( _python_context->python_closure_res.asObject() );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_path.updateLocalsDict( _python_context->python_closure_res.updateLocalsDict( _python_context->python_closure__translation.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real );
           frame_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "_merge() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_path == key )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "_merge() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path, key ) )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "_merge() got multiple values for keyword argument 'path'" );
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
                   "_merge() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_merge() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_merge() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_merge() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_merge() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_merge() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_merge() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_merge() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_merge() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_merge() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_merge() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_merge() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_merge() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_merge() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( self, _python_par_path );

error_exit:;

    Py_XDECREF( _python_par_path );

    return NULL;
}

static PyObject *dparse_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_activate_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_language )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_language( _python_str_plain_language, _python_par_language );

    // Actual function code.
    static PyFrameObject *frame_function_5_activate_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_5_activate_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_5_activate_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_activate_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_5_activate_of_module_django__utils__translation__trans_real );
        }

        frame_function_5_activate_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_b24b68bc8cf3d98d69d21875353f060f, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_5_activate_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_5_activate_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 188 );
        {
            PyObjectTempKeeper0 call1;
            {
                PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__utils__translation__trans_real_translation.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_language.asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _mvar_django__utils__translation__trans_real__active.asObject0(), _python_str_plain_value );
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
        frame_guard.getFrame0()->f_locals = _python_var_language.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_5_activate_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_5_activate_of_module_django__utils__translation__trans_real );
           frame_function_5_activate_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5_activate_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_language = NULL;
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
                PyErr_Format( PyExc_TypeError, "activate() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_language == key )
            {
                if (unlikely( _python_par_language ))
                {
                    PyErr_Format( PyExc_TypeError, "activate() got multiple values for keyword argument 'language'" );
                    goto error_exit;
                }

                _python_par_language = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_language, key ) )
            {
                if (unlikely( _python_par_language ))
                {
                    PyErr_Format( PyExc_TypeError, "activate() got multiple values for keyword argument 'language'" );
                    goto error_exit;
                }

                _python_par_language = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "activate() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "activate() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "activate() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "activate() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "activate() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "activate() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "activate() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "activate() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "activate() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "activate() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "activate() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "activate() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "activate() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_language != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "activate() got multiple values for keyword argument 'language'" );
             goto error_exit;
         }

        _python_par_language = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_activate_of_module_django__utils__translation__trans_real( self, _python_par_language );

error_exit:;

    Py_XDECREF( _python_par_language );

    return NULL;
}

static PyObject *dparse_function_5_activate_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_activate_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_activate_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_deactivate_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_function_6_deactivate_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_6_deactivate_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_6_deactivate_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_deactivate_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_6_deactivate_of_module_django__utils__translation__trans_real );
        }

        frame_function_6_deactivate_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_132eb2d9d080acfc9dcdf9659631a3c7, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_6_deactivate_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_6_deactivate_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 195 );
        if ( HAS_ATTRIBUTE( _mvar_django__utils__translation__trans_real__active.asObject0(), _python_unicode_plain_value ) )
        {
            frame_guard.setLineNumber( 196 );
            DEL_ATTRIBUTE( _mvar_django__utils__translation__trans_real__active.asObject0(), _python_str_plain_value );
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

        if ( frame_guard.getFrame0() == frame_function_6_deactivate_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_6_deactivate_of_module_django__utils__translation__trans_real );
           frame_function_6_deactivate_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_deactivate_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "deactivate() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "deactivate() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "deactivate() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_6_deactivate_of_module_django__utils__translation__trans_real( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_6_deactivate_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_6_deactivate_of_module_django__utils__translation__trans_real( self );
    }
    else
    {
        PyObject *result = fparse_function_6_deactivate_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_deactivate_all_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_function_7_deactivate_all_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_7_deactivate_all_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_7_deactivate_all_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_deactivate_all_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_7_deactivate_all_of_module_django__utils__translation__trans_real );
        }

        frame_function_7_deactivate_all_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_5db1dee8aed089c02bd1d6ed3849ae47, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_7_deactivate_all_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_7_deactivate_all_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 204 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_gettext_module.asObject0(), _python_str_plain_NullTranslations ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _mvar_django__utils__translation__trans_real__active.asObject0(), _python_str_plain_value );
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

        if ( frame_guard.getFrame0() == frame_function_7_deactivate_all_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_7_deactivate_all_of_module_django__utils__translation__trans_real );
           frame_function_7_deactivate_all_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_7_deactivate_all_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "deactivate_all() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "deactivate_all() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "deactivate_all() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_7_deactivate_all_of_module_django__utils__translation__trans_real( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_7_deactivate_all_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_7_deactivate_all_of_module_django__utils__translation__trans_real( self );
    }
    else
    {
        PyObject *result = fparse_function_7_deactivate_all_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_get_language_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );

    // Actual function code.
    static PyFrameObject *frame_function_8_get_language_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_8_get_language_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_8_get_language_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_get_language_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_8_get_language_of_module_django__utils__translation__trans_real );
        }

        frame_function_8_get_language_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_85f8813bbde2f6fca6332014a77cd028, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_8_get_language_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_8_get_language_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 208 );
        _python_var_t.assign1( BUILTIN_GETATTR( _mvar_django__utils__translation__trans_real__active.asObject0(), _python_unicode_plain_value, Py_None ) );
        frame_guard.setLineNumber( 209 );
        if ( ( _python_var_t.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 210 );
            try
            {
                frame_guard.setLineNumber( 211 );
                return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_to_language ) ).asObject() );
            }
            catch ( PythonException &_exception )
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
        frame_guard.setLineNumber( 215 );
        _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_settings.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 216 );
        return LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LANGUAGE_CODE );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_settings.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_8_get_language_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_8_get_language_of_module_django__utils__translation__trans_real );
           frame_function_8_get_language_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_get_language_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "get_language() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "get_language() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "get_language() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_8_get_language_of_module_django__utils__translation__trans_real( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_8_get_language_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_8_get_language_of_module_django__utils__translation__trans_real( self );
    }
    else
    {
        PyObject *result = fparse_function_8_get_language_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_get_language_bidi_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );
    PyObjectLocalVariable _python_var_base_lang( _python_str_plain_base_lang );

    // Actual function code.
    static PyFrameObject *frame_function_9_get_language_bidi_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_9_get_language_bidi_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_9_get_language_bidi_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_get_language_bidi_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_9_get_language_bidi_of_module_django__utils__translation__trans_real );
        }

        frame_function_9_get_language_bidi_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_ee34851a01bc85984f4b040630153f1b, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_9_get_language_bidi_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_9_get_language_bidi_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 225 );
        _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_base_lang.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 227 );
        _python_var_base_lang.assign1( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__translation__trans_real_get_language.asObject0() ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_45 ) ).asObject(), _python_int_0, 0 ) );
        frame_guard.setLineNumber( 228 );
        {
            PyObjectTempKeeper0 cmp1;
            return INCREASE_REFCOUNT( ( cmp1.assign( _python_var_base_lang.asObject() ), SEQUENCE_CONTAINS( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LANGUAGES_BIDI ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_base_lang.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_9_get_language_bidi_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_9_get_language_bidi_of_module_django__utils__translation__trans_real );
           frame_function_9_get_language_bidi_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_get_language_bidi_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "get_language_bidi() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "get_language_bidi() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "get_language_bidi() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_9_get_language_bidi_of_module_django__utils__translation__trans_real( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_9_get_language_bidi_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_9_get_language_bidi_of_module_django__utils__translation__trans_real( self );
    }
    else
    {
        PyObject *result = fparse_function_9_get_language_bidi_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_catalog_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );

    // Actual function code.
    static PyFrameObject *frame_function_10_catalog_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_10_catalog_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_10_catalog_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_catalog_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_10_catalog_of_module_django__utils__translation__trans_real );
        }

        frame_function_10_catalog_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_32276c332f9391c77bbe1ceb120ed8e0, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_10_catalog_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_10_catalog_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 238 );
        _python_var_t.assign1( BUILTIN_GETATTR( _mvar_django__utils__translation__trans_real__active.asObject0(), _python_unicode_plain_value, Py_None ) );
        frame_guard.setLineNumber( 239 );
        if ( ( _python_var_t.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 240 );
            return _python_var_t.asObject1();
        }
        frame_guard.setLineNumber( 241 );
        if ( ( _mvar_django__utils__translation__trans_real__default.asObject0() == Py_None ) )
        {
            frame_guard.setLineNumber( 242 );
            _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_settings.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
            frame_guard.setLineNumber( 243 );
            {
                PyObjectTempKeeper0 call1;
                UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain__default, ( call1.assign( _mvar_django__utils__translation__trans_real_translation.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LANGUAGE_CODE ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 244 );
        return _mvar_django__utils__translation__trans_real__default.asObject();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_settings.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_10_catalog_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_10_catalog_of_module_django__utils__translation__trans_real );
           frame_function_10_catalog_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_catalog_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "catalog() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "catalog() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "catalog() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_10_catalog_of_module_django__utils__translation__trans_real( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_10_catalog_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_10_catalog_of_module_django__utils__translation__trans_real( self );
    }
    else
    {
        PyObject *result = fparse_function_10_catalog_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_do_translate_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_message, PyObject *_python_par_translation_function )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_message( _python_str_plain_message, _python_par_message );
    PyObjectLocalParameterVariableNoDel _python_var_translation_function( _python_str_plain_translation_function, _python_par_translation_function );
    PyObjectLocalVariable _python_var_eol_message( _python_str_plain_eol_message );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );

    // Actual function code.
    static PyFrameObject *frame_function_11_do_translate_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_11_do_translate_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_11_do_translate_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_do_translate_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_11_do_translate_of_module_django__utils__translation__trans_real );
        }

        frame_function_11_do_translate_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_8c6c4a99e5887f4c69690ef57d686528, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_11_do_translate_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_11_do_translate_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 256 );
        _python_var_eol_message.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_message.asObject(), _python_str_plain_replace ) ).asObject(), _python_str_digest_81051bcc2cf1bedf378224b0a93e2877, _python_str_chr_10 ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_str_chr_13, _python_str_chr_10 ) );
        frame_guard.setLineNumber( 257 );
        _python_var_t.assign1( BUILTIN_GETATTR( _mvar_django__utils__translation__trans_real__active.asObject0(), _python_unicode_plain_value, Py_None ) );
        frame_guard.setLineNumber( 258 );
        if ( ( _python_var_t.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 259 );
            {
                PyObjectTempKeeper1 call4;
                PyObjectTempKeeper0 getattr1;
                _python_var_result.assign1( ( call4.assign( ( getattr1.assign( _python_var_t.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_var_translation_function.asObject(), NULL ) ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_eol_message.asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 261 );
            if ( ( _mvar_django__utils__translation__trans_real__default.asObject0() == Py_None ) )
            {
                frame_guard.setLineNumber( 262 );
                _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_translation_function.updateLocalsDict( _python_var_message.updateLocalsDict( _python_var_settings.updateLocalsDict( _python_var_result.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_eol_message.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
                frame_guard.setLineNumber( 263 );
                {
                    PyObjectTempKeeper0 call6;
                    UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain__default, ( call6.assign( _mvar_django__utils__translation__trans_real_translation.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LANGUAGE_CODE ) ).asObject() ) ) );
                }
            }
            frame_guard.setLineNumber( 264 );
            {
                PyObjectTempKeeper1 call11;
                PyObjectTempKeeper0 getattr8;
                _python_var_result.assign1( ( call11.assign( ( getattr8.assign( _mvar_django__utils__translation__trans_real__default.asObject0() ), BUILTIN_GETATTR( getattr8.asObject0(), _python_var_translation_function.asObject(), NULL ) ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_eol_message.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 265 );
        {
            PyObjectTempKeeper0 isinstance15;
            if ( ( isinstance15.assign( _python_var_message.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance15.asObject0(), _mvar_django__utils__translation__trans_real_SafeData.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 266 );
            {
                PyObjectTempKeeper0 call13;
                return ( call13.assign( _mvar_django__utils__translation__trans_real_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_var_result.asObject() ) );
            }
        }
        }
        frame_guard.setLineNumber( 267 );
        return _python_var_result.asObject1();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_translation_function.updateLocalsDict( _python_var_message.updateLocalsDict( _python_var_settings.updateLocalsDict( _python_var_result.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_eol_message.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_11_do_translate_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_11_do_translate_of_module_django__utils__translation__trans_real );
           frame_function_11_do_translate_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_do_translate_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_message = NULL;
    PyObject *_python_par_translation_function = NULL;
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
                PyErr_Format( PyExc_TypeError, "do_translate() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_message == key )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "do_translate() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_translation_function == key )
            {
                if (unlikely( _python_par_translation_function ))
                {
                    PyErr_Format( PyExc_TypeError, "do_translate() got multiple values for keyword argument 'translation_function'" );
                    goto error_exit;
                }

                _python_par_translation_function = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_message, key ) )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "do_translate() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_translation_function, key ) )
            {
                if (unlikely( _python_par_translation_function ))
                {
                    PyErr_Format( PyExc_TypeError, "do_translate() got multiple values for keyword argument 'translation_function'" );
                    goto error_exit;
                }

                _python_par_translation_function = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "do_translate() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "do_translate() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "do_translate() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "do_translate() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "do_translate() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "do_translate() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "do_translate() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "do_translate() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "do_translate() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "do_translate() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "do_translate() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "do_translate() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "do_translate() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "do_translate() got multiple values for keyword argument 'message'" );
             goto error_exit;
         }

        _python_par_message = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_translation_function != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "do_translate() got multiple values for keyword argument 'translation_function'" );
             goto error_exit;
         }

        _python_par_translation_function = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_11_do_translate_of_module_django__utils__translation__trans_real( self, _python_par_message, _python_par_translation_function );

error_exit:;

    Py_XDECREF( _python_par_message );
    Py_XDECREF( _python_par_translation_function );

    return NULL;
}

static PyObject *dparse_function_11_do_translate_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_11_do_translate_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_do_translate_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_gettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_message )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_message( _python_str_plain_message, _python_par_message );

    // Actual function code.
    static PyFrameObject *frame_function_12_gettext_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_12_gettext_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_12_gettext_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_gettext_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_12_gettext_of_module_django__utils__translation__trans_real );
        }

        frame_function_12_gettext_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_0551104e0b3297a81c1db2cc5daa22d1, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_12_gettext_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_12_gettext_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 275 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__utils__translation__trans_real_do_translate.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_message.asObject(), _python_unicode_plain_gettext ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_message.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_12_gettext_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_12_gettext_of_module_django__utils__translation__trans_real );
           frame_function_12_gettext_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_12_gettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_message = NULL;
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
                PyErr_Format( PyExc_TypeError, "gettext() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_message == key )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "gettext() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_message, key ) )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "gettext() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "gettext() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "gettext() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "gettext() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "gettext() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "gettext() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "gettext() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "gettext() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "gettext() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "gettext() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "gettext() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "gettext() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "gettext() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "gettext() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "gettext() got multiple values for keyword argument 'message'" );
             goto error_exit;
         }

        _python_par_message = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_12_gettext_of_module_django__utils__translation__trans_real( self, _python_par_message );

error_exit:;

    Py_XDECREF( _python_par_message );

    return NULL;
}

static PyObject *dparse_function_12_gettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_12_gettext_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_gettext_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_ugettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_message )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_message( _python_str_plain_message, _python_par_message );

    // Actual function code.
    static PyFrameObject *frame_function_13_ugettext_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_13_ugettext_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_13_ugettext_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_ugettext_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_13_ugettext_of_module_django__utils__translation__trans_real );
        }

        frame_function_13_ugettext_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_0c2ec8535f0ecc50db0b675c553e113c, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_13_ugettext_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_13_ugettext_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 281 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__utils__translation__trans_real_do_translate.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_message.asObject(), _python_unicode_plain_ugettext ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_message.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_13_ugettext_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_13_ugettext_of_module_django__utils__translation__trans_real );
           frame_function_13_ugettext_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_ugettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_message = NULL;
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
                PyErr_Format( PyExc_TypeError, "ugettext() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_message == key )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "ugettext() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_message, key ) )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "ugettext() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "ugettext() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "ugettext() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "ugettext() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "ugettext() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "ugettext() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "ugettext() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ugettext() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "ugettext() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ugettext() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "ugettext() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "ugettext() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "ugettext() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "ugettext() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ugettext() got multiple values for keyword argument 'message'" );
             goto error_exit;
         }

        _python_par_message = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_13_ugettext_of_module_django__utils__translation__trans_real( self, _python_par_message );

error_exit:;

    Py_XDECREF( _python_par_message );

    return NULL;
}

static PyObject *dparse_function_13_ugettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_13_ugettext_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_ugettext_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_pgettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_context, PyObject *_python_par_message )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_context( _python_str_plain_context, _python_par_context );
    PyObjectLocalParameterVariableNoDel _python_var_message( _python_str_plain_message, _python_par_message );
    PyObjectLocalVariable _python_var_msg_with_ctxt( _python_str_plain_msg_with_ctxt );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );

    // Actual function code.
    static PyFrameObject *frame_function_14_pgettext_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_14_pgettext_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_14_pgettext_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14_pgettext_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_14_pgettext_of_module_django__utils__translation__trans_real );
        }

        frame_function_14_pgettext_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_952729fa6666a9122995f63fc40d08f7, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_14_pgettext_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_14_pgettext_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 284 );
        {
            PyObjectTempKeeper0 make_tuple1;
            PyObjectTempKeeper0 make_tuple2;
            _python_var_msg_with_ctxt.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_01f53e42b0247f24e3030ed68606e4cf, PyObjectTemporary( ( make_tuple1.assign( _python_var_context.asObject() ), make_tuple2.assign( _mvar_django__utils__translation__trans_real_CONTEXT_SEPARATOR.asObject0() ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), _python_var_message.asObject() ) ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 285 );
        {
            PyObjectTempKeeper0 call4;
            _python_var_result.assign1( ( call4.assign( _mvar_django__utils__translation__trans_real_ugettext.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_msg_with_ctxt.asObject() ) ) );
        }
        frame_guard.setLineNumber( 286 );
        {
            PyObjectTempKeeper0 cmp6;
            if ( ( cmp6.assign( _mvar_django__utils__translation__trans_real_CONTEXT_SEPARATOR.asObject0() ), SEQUENCE_CONTAINS_BOOL( cmp6.asObject0(), _python_var_result.asObject() ) ) )
        {
            frame_guard.setLineNumber( 288 );
            _python_var_result.assign0( _python_var_message.asObject() );
        }
        }
        frame_guard.setLineNumber( 289 );
        return _python_var_result.asObject1();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_message.updateLocalsDict( _python_var_context.updateLocalsDict( _python_var_result.updateLocalsDict( _python_var_msg_with_ctxt.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_14_pgettext_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_14_pgettext_of_module_django__utils__translation__trans_real );
           frame_function_14_pgettext_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_14_pgettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_context = NULL;
    PyObject *_python_par_message = NULL;
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
                PyErr_Format( PyExc_TypeError, "pgettext() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_context == key )
            {
                if (unlikely( _python_par_context ))
                {
                    PyErr_Format( PyExc_TypeError, "pgettext() got multiple values for keyword argument 'context'" );
                    goto error_exit;
                }

                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_message == key )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "pgettext() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_context, key ) )
            {
                if (unlikely( _python_par_context ))
                {
                    PyErr_Format( PyExc_TypeError, "pgettext() got multiple values for keyword argument 'context'" );
                    goto error_exit;
                }

                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_message, key ) )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "pgettext() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "pgettext() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "pgettext() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "pgettext() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "pgettext() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "pgettext() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "pgettext() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "pgettext() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "pgettext() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "pgettext() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "pgettext() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "pgettext() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "pgettext() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "pgettext() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_context != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "pgettext() got multiple values for keyword argument 'context'" );
             goto error_exit;
         }

        _python_par_context = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "pgettext() got multiple values for keyword argument 'message'" );
             goto error_exit;
         }

        _python_par_message = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_14_pgettext_of_module_django__utils__translation__trans_real( self, _python_par_context, _python_par_message );

error_exit:;

    Py_XDECREF( _python_par_context );
    Py_XDECREF( _python_par_message );

    return NULL;
}

static PyObject *dparse_function_14_pgettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_14_pgettext_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_pgettext_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_gettext_noop_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_message )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_message( _python_str_plain_message, _python_par_message );

    // Actual function code.
    static PyFrameObject *frame_function_15_gettext_noop_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_15_gettext_noop_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_15_gettext_noop_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_gettext_noop_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_15_gettext_noop_of_module_django__utils__translation__trans_real );
        }

        frame_function_15_gettext_noop_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_6c0ff476296aae33026b9f20ccc98599, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_15_gettext_noop_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_15_gettext_noop_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 298 );
        return _python_var_message.asObject1();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_message.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_15_gettext_noop_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_15_gettext_noop_of_module_django__utils__translation__trans_real );
           frame_function_15_gettext_noop_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_15_gettext_noop_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_message = NULL;
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
                PyErr_Format( PyExc_TypeError, "gettext_noop() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_message == key )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "gettext_noop() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_message, key ) )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "gettext_noop() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "gettext_noop() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "gettext_noop() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "gettext_noop() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "gettext_noop() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "gettext_noop() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "gettext_noop() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "gettext_noop() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "gettext_noop() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "gettext_noop() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "gettext_noop() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "gettext_noop() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "gettext_noop() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "gettext_noop() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "gettext_noop() got multiple values for keyword argument 'message'" );
             goto error_exit;
         }

        _python_par_message = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_15_gettext_noop_of_module_django__utils__translation__trans_real( self, _python_par_message );

error_exit:;

    Py_XDECREF( _python_par_message );

    return NULL;
}

static PyObject *dparse_function_15_gettext_noop_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_15_gettext_noop_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_gettext_noop_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_do_ntranslate_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_singular, PyObject *_python_par_plural, PyObject *_python_par_number, PyObject *_python_par_translation_function )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_singular( _python_str_plain_singular, _python_par_singular );
    PyObjectLocalParameterVariableNoDel _python_var_plural( _python_str_plain_plural, _python_par_plural );
    PyObjectLocalParameterVariableNoDel _python_var_number( _python_str_plain_number, _python_par_number );
    PyObjectLocalParameterVariableNoDel _python_var_translation_function( _python_str_plain_translation_function, _python_par_translation_function );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );

    // Actual function code.
    static PyFrameObject *frame_function_16_do_ntranslate_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_16_do_ntranslate_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_16_do_ntranslate_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16_do_ntranslate_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_16_do_ntranslate_of_module_django__utils__translation__trans_real );
        }

        frame_function_16_do_ntranslate_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_5c01a92644bcd5fe1db5595e65e65ea4, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_16_do_ntranslate_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_16_do_ntranslate_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 303 );
        _python_var_t.assign1( BUILTIN_GETATTR( _mvar_django__utils__translation__trans_real__active.asObject0(), _python_unicode_plain_value, Py_None ) );
        frame_guard.setLineNumber( 304 );
        if ( ( _python_var_t.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 305 );
            {
                PyObjectTempKeeper1 call4;
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call6;
                PyObjectTempKeeper0 getattr1;
                return ( call4.assign( ( getattr1.assign( _python_var_t.asObject() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_var_translation_function.asObject(), NULL ) ) ), call5.assign( _python_var_singular.asObject() ), call6.assign( _python_var_plural.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), call6.asObject0(), _python_var_number.asObject() ) );
            }
        }
        frame_guard.setLineNumber( 306 );
        if ( ( _mvar_django__utils__translation__trans_real__default.asObject0() == Py_None ) )
        {
            frame_guard.setLineNumber( 307 );
            _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_translation_function.updateLocalsDict( _python_var_number.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( _python_var_settings.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
            frame_guard.setLineNumber( 308 );
            {
                PyObjectTempKeeper0 call8;
                UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain__default, ( call8.assign( _mvar_django__utils__translation__trans_real_translation.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LANGUAGE_CODE ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 309 );
        {
            PyObjectTempKeeper1 call13;
            PyObjectTempKeeper0 call14;
            PyObjectTempKeeper0 call15;
            PyObjectTempKeeper0 getattr10;
            return ( call13.assign( ( getattr10.assign( _mvar_django__utils__translation__trans_real__default.asObject0() ), BUILTIN_GETATTR( getattr10.asObject0(), _python_var_translation_function.asObject(), NULL ) ) ), call14.assign( _python_var_singular.asObject() ), call15.assign( _python_var_plural.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), call14.asObject0(), call15.asObject0(), _python_var_number.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_translation_function.updateLocalsDict( _python_var_number.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( _python_var_settings.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_16_do_ntranslate_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_16_do_ntranslate_of_module_django__utils__translation__trans_real );
           frame_function_16_do_ntranslate_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_16_do_ntranslate_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_singular = NULL;
    PyObject *_python_par_plural = NULL;
    PyObject *_python_par_number = NULL;
    PyObject *_python_par_translation_function = NULL;
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
                PyErr_Format( PyExc_TypeError, "do_ntranslate() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_singular == key )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "do_ntranslate() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_plural == key )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "do_ntranslate() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_number == key )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "do_ntranslate() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_translation_function == key )
            {
                if (unlikely( _python_par_translation_function ))
                {
                    PyErr_Format( PyExc_TypeError, "do_ntranslate() got multiple values for keyword argument 'translation_function'" );
                    goto error_exit;
                }

                _python_par_translation_function = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_singular, key ) )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "do_ntranslate() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_plural, key ) )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "do_ntranslate() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_number, key ) )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "do_ntranslate() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_translation_function, key ) )
            {
                if (unlikely( _python_par_translation_function ))
                {
                    PyErr_Format( PyExc_TypeError, "do_ntranslate() got multiple values for keyword argument 'translation_function'" );
                    goto error_exit;
                }

                _python_par_translation_function = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "do_ntranslate() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "do_ntranslate() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "do_ntranslate() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "do_ntranslate() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "do_ntranslate() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "do_ntranslate() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "do_ntranslate() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "do_ntranslate() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "do_ntranslate() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "do_ntranslate() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "do_ntranslate() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "do_ntranslate() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "do_ntranslate() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_singular != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "do_ntranslate() got multiple values for keyword argument 'singular'" );
             goto error_exit;
         }

        _python_par_singular = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_plural != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "do_ntranslate() got multiple values for keyword argument 'plural'" );
             goto error_exit;
         }

        _python_par_plural = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_number != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "do_ntranslate() got multiple values for keyword argument 'number'" );
             goto error_exit;
         }

        _python_par_number = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_translation_function != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "do_ntranslate() got multiple values for keyword argument 'translation_function'" );
             goto error_exit;
         }

        _python_par_translation_function = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_16_do_ntranslate_of_module_django__utils__translation__trans_real( self, _python_par_singular, _python_par_plural, _python_par_number, _python_par_translation_function );

error_exit:;

    Py_XDECREF( _python_par_singular );
    Py_XDECREF( _python_par_plural );
    Py_XDECREF( _python_par_number );
    Py_XDECREF( _python_par_translation_function );

    return NULL;
}

static PyObject *dparse_function_16_do_ntranslate_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_16_do_ntranslate_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_do_ntranslate_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_ngettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_singular, PyObject *_python_par_plural, PyObject *_python_par_number )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_singular( _python_str_plain_singular, _python_par_singular );
    PyObjectLocalParameterVariableNoDel _python_var_plural( _python_str_plain_plural, _python_par_plural );
    PyObjectLocalParameterVariableNoDel _python_var_number( _python_str_plain_number, _python_par_number );

    // Actual function code.
    static PyFrameObject *frame_function_17_ngettext_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_17_ngettext_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_17_ngettext_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_17_ngettext_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_17_ngettext_of_module_django__utils__translation__trans_real );
        }

        frame_function_17_ngettext_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_f1c023096fc81acee18dc63304e1d343, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_17_ngettext_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_17_ngettext_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 318 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call3;
            return ( call1.assign( _mvar_django__utils__translation__trans_real_do_ntranslate.asObject0() ), call2.assign( _python_var_singular.asObject() ), call3.assign( _python_var_plural.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_number.asObject(), _python_unicode_plain_ngettext ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_number.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_17_ngettext_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_17_ngettext_of_module_django__utils__translation__trans_real );
           frame_function_17_ngettext_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_17_ngettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_singular = NULL;
    PyObject *_python_par_plural = NULL;
    PyObject *_python_par_number = NULL;
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
                PyErr_Format( PyExc_TypeError, "ngettext() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_singular == key )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_plural == key )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_number == key )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_singular, key ) )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_plural, key ) )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_number, key ) )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "ngettext() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "ngettext() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "ngettext() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "ngettext() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "ngettext() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "ngettext() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ngettext() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "ngettext() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ngettext() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "ngettext() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "ngettext() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_singular != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'singular'" );
             goto error_exit;
         }

        _python_par_singular = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_plural != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'plural'" );
             goto error_exit;
         }

        _python_par_plural = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_number != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'number'" );
             goto error_exit;
         }

        _python_par_number = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_17_ngettext_of_module_django__utils__translation__trans_real( self, _python_par_singular, _python_par_plural, _python_par_number );

error_exit:;

    Py_XDECREF( _python_par_singular );
    Py_XDECREF( _python_par_plural );
    Py_XDECREF( _python_par_number );

    return NULL;
}

static PyObject *dparse_function_17_ngettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_17_ngettext_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_ngettext_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18_ungettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_singular, PyObject *_python_par_plural, PyObject *_python_par_number )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_singular( _python_str_plain_singular, _python_par_singular );
    PyObjectLocalParameterVariableNoDel _python_var_plural( _python_str_plain_plural, _python_par_plural );
    PyObjectLocalParameterVariableNoDel _python_var_number( _python_str_plain_number, _python_par_number );

    // Actual function code.
    static PyFrameObject *frame_function_18_ungettext_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_18_ungettext_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_18_ungettext_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_18_ungettext_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_18_ungettext_of_module_django__utils__translation__trans_real );
        }

        frame_function_18_ungettext_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_bdc38b16208876e9c8a81d456ef09751, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_18_ungettext_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_18_ungettext_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 328 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call3;
            return ( call1.assign( _mvar_django__utils__translation__trans_real_do_ntranslate.asObject0() ), call2.assign( _python_var_singular.asObject() ), call3.assign( _python_var_plural.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_number.asObject(), _python_unicode_plain_ungettext ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_number.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_18_ungettext_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_18_ungettext_of_module_django__utils__translation__trans_real );
           frame_function_18_ungettext_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_18_ungettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_singular = NULL;
    PyObject *_python_par_plural = NULL;
    PyObject *_python_par_number = NULL;
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
                PyErr_Format( PyExc_TypeError, "ungettext() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_singular == key )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_plural == key )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_number == key )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_singular, key ) )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_plural, key ) )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_number, key ) )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "ungettext() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "ungettext() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "ungettext() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "ungettext() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "ungettext() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "ungettext() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ungettext() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "ungettext() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ungettext() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "ungettext() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "ungettext() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_singular != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'singular'" );
             goto error_exit;
         }

        _python_par_singular = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_plural != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'plural'" );
             goto error_exit;
         }

        _python_par_plural = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_number != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'number'" );
             goto error_exit;
         }

        _python_par_number = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_18_ungettext_of_module_django__utils__translation__trans_real( self, _python_par_singular, _python_par_plural, _python_par_number );

error_exit:;

    Py_XDECREF( _python_par_singular );
    Py_XDECREF( _python_par_plural );
    Py_XDECREF( _python_par_number );

    return NULL;
}

static PyObject *dparse_function_18_ungettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_18_ungettext_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_18_ungettext_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_19_npgettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_context, PyObject *_python_par_singular, PyObject *_python_par_plural, PyObject *_python_par_number )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_context( _python_str_plain_context, _python_par_context );
    PyObjectLocalParameterVariableNoDel _python_var_singular( _python_str_plain_singular, _python_par_singular );
    PyObjectLocalParameterVariableNoDel _python_var_plural( _python_str_plain_plural, _python_par_plural );
    PyObjectLocalParameterVariableNoDel _python_var_number( _python_str_plain_number, _python_par_number );
    PyObjectLocalVariable _python_var_msgs_with_ctxt( _python_str_plain_msgs_with_ctxt );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );

    // Actual function code.
    static PyFrameObject *frame_function_19_npgettext_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_19_npgettext_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_19_npgettext_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_19_npgettext_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_19_npgettext_of_module_django__utils__translation__trans_real );
        }

        frame_function_19_npgettext_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_d1d01302c53ca4591b3e35e648658d5e, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_19_npgettext_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_19_npgettext_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 331 );
        {
            PyObjectTempKeeper0 make_tuple1;
            PyObjectTempKeeper0 make_tuple2;
            PyObjectTempKeeper0 make_tuple4;
            PyObjectTempKeeper0 make_tuple5;
            PyObjectTempKeeper1 make_tuple7;
            PyObjectTempKeeper1 make_tuple8;
            _python_var_msgs_with_ctxt.assign1( ( make_tuple7.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_01f53e42b0247f24e3030ed68606e4cf, PyObjectTemporary( ( make_tuple1.assign( _python_var_context.asObject() ), make_tuple2.assign( _mvar_django__utils__translation__trans_real_CONTEXT_SEPARATOR.asObject0() ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), _python_var_singular.asObject() ) ) ).asObject() ) ), make_tuple8.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_01f53e42b0247f24e3030ed68606e4cf, PyObjectTemporary( ( make_tuple4.assign( _python_var_context.asObject() ), make_tuple5.assign( _mvar_django__utils__translation__trans_real_CONTEXT_SEPARATOR.asObject0() ), MAKE_TUPLE3( make_tuple4.asObject0(), make_tuple5.asObject0(), _python_var_plural.asObject() ) ) ).asObject() ) ), MAKE_TUPLE3( make_tuple7.asObject0(), make_tuple8.asObject0(), _python_var_number.asObject() ) ) );
        }
        frame_guard.setLineNumber( 334 );
        {
            PyObjectTempKeeper0 call_tmp10;
            _python_var_result.assign1( ( call_tmp10.assign( _mvar_django__utils__translation__trans_real_ungettext.asObject0() ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp10.asObject(), _python_var_msgs_with_ctxt.asObject1() ) ) );
        }
        frame_guard.setLineNumber( 335 );
        {
            PyObjectTempKeeper0 cmp16;
            if ( ( cmp16.assign( _mvar_django__utils__translation__trans_real_CONTEXT_SEPARATOR.asObject0() ), SEQUENCE_CONTAINS_BOOL( cmp16.asObject0(), _python_var_result.asObject() ) ) )
        {
            frame_guard.setLineNumber( 337 );
            {
                PyObjectTempKeeper0 call12;
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call14;
                _python_var_result.assign1( ( call12.assign( _mvar_django__utils__translation__trans_real_ungettext.asObject0() ), call13.assign( _python_var_singular.asObject() ), call14.assign( _python_var_plural.asObject() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), call13.asObject0(), call14.asObject0(), _python_var_number.asObject() ) ) );
            }
        }
        }
        frame_guard.setLineNumber( 338 );
        return _python_var_result.asObject1();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_number.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( _python_var_context.updateLocalsDict( _python_var_result.updateLocalsDict( _python_var_msgs_with_ctxt.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_19_npgettext_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_19_npgettext_of_module_django__utils__translation__trans_real );
           frame_function_19_npgettext_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_19_npgettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_context = NULL;
    PyObject *_python_par_singular = NULL;
    PyObject *_python_par_plural = NULL;
    PyObject *_python_par_number = NULL;
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
                PyErr_Format( PyExc_TypeError, "npgettext() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_context == key )
            {
                if (unlikely( _python_par_context ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'context'" );
                    goto error_exit;
                }

                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_singular == key )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_plural == key )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_number == key )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_context, key ) )
            {
                if (unlikely( _python_par_context ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'context'" );
                    goto error_exit;
                }

                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_singular, key ) )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_plural, key ) )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_number, key ) )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "npgettext() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "npgettext() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "npgettext() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "npgettext() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "npgettext() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "npgettext() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "npgettext() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "npgettext() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "npgettext() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "npgettext() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "npgettext() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_context != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'context'" );
             goto error_exit;
         }

        _python_par_context = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_singular != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'singular'" );
             goto error_exit;
         }

        _python_par_singular = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_plural != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'plural'" );
             goto error_exit;
         }

        _python_par_plural = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_number != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'number'" );
             goto error_exit;
         }

        _python_par_number = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_19_npgettext_of_module_django__utils__translation__trans_real( self, _python_par_context, _python_par_singular, _python_par_plural, _python_par_number );

error_exit:;

    Py_XDECREF( _python_par_context );
    Py_XDECREF( _python_par_singular );
    Py_XDECREF( _python_par_plural );
    Py_XDECREF( _python_par_number );

    return NULL;
}

static PyObject *dparse_function_19_npgettext_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_19_npgettext_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_19_npgettext_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_20_all_locale_paths_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );
    PyObjectLocalVariable _python_var_globalpath( _python_str_plain_globalpath );

    // Actual function code.
    static PyFrameObject *frame_function_20_all_locale_paths_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_20_all_locale_paths_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_20_all_locale_paths_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_20_all_locale_paths_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_20_all_locale_paths_of_module_django__utils__translation__trans_real );
        }

        frame_function_20_all_locale_paths_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_a9b46ed8d056711a7347c0cdf5f40cd6, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_20_all_locale_paths_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_20_all_locale_paths_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 344 );
        _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_globalpath.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 345 );
        {
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper1 call7;
            PyObjectTempKeeper1 subscr1;
            _python_var_globalpath.assign1( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_dirname ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( _mvar_django__utils__translation__trans_real_upath.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( subscr1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_sys.asObject0(), _python_str_plain_modules ) ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain___module__ ) ).asObject() ) ) ).asObject(), _python_str_plain___file__ ) ).asObject() ) ) ).asObject() ) ) ).asObject(), _python_unicode_plain_locale ) ) );
        }
        frame_guard.setLineNumber( 347 );
        {
            PyObjectTempKeeper1 op10;
            return ( op10.assign( MAKE_LIST1( _python_var_globalpath.asObject1() ) ), BINARY_OPERATION_ADD( op10.asObject0(), PyObjectTemporary( TO_LIST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LOCALE_PATHS ) ).asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_globalpath.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_20_all_locale_paths_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_20_all_locale_paths_of_module_django__utils__translation__trans_real );
           frame_function_20_all_locale_paths_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_20_all_locale_paths_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "all_locale_paths() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "all_locale_paths() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "all_locale_paths() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_20_all_locale_paths_of_module_django__utils__translation__trans_real( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_20_all_locale_paths_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_20_all_locale_paths_of_module_django__utils__translation__trans_real( self );
    }
    else
    {
        PyObject *result = fparse_function_20_all_locale_paths_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_21_check_for_language_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_lang_code )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_lang_code( _python_str_plain_lang_code, _python_par_lang_code );
    PyObjectLocalVariable _python_var_path( _python_str_plain_path );

    // Actual function code.
    static PyFrameObject *frame_function_21_check_for_language_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_21_check_for_language_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_21_check_for_language_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_21_check_for_language_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_21_check_for_language_of_module_django__utils__translation__trans_real );
        }

        frame_function_21_check_for_language_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_37e333f137c41bb925650744d3a678a3, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_21_check_for_language_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_21_check_for_language_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 356 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__translation__trans_real_all_locale_paths.asObject0() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 356 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_path.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 357 );
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper1 call3;
                    PyObjectTempKeeper0 call5;
                    if ( ( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_gettext_module.asObject0(), _python_str_plain_find ) ), call5.assign( _python_var_path.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_unicode_plain_django, call5.asObject0(), PyObjectTemporary( MAKE_LIST1( ( call1.assign( _mvar_django__utils__translation__trans_real_to_locale.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_lang_code.asObject() ) ) ) ).asObject() ) ) ).asObject() != Py_None ) )
                {
                    return INCREASE_REFCOUNT( Py_True );
                }
                }

               CONSIDER_THREADING();
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
        frame_guard.getFrame0()->f_locals = _python_var_lang_code.updateLocalsDict( _python_var_path.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_21_check_for_language_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_21_check_for_language_of_module_django__utils__translation__trans_real );
           frame_function_21_check_for_language_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_False );
}
static PyObject *fparse_function_21_check_for_language_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_lang_code = NULL;
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
                PyErr_Format( PyExc_TypeError, "check_for_language() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_lang_code == key )
            {
                if (unlikely( _python_par_lang_code ))
                {
                    PyErr_Format( PyExc_TypeError, "check_for_language() got multiple values for keyword argument 'lang_code'" );
                    goto error_exit;
                }

                _python_par_lang_code = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_lang_code, key ) )
            {
                if (unlikely( _python_par_lang_code ))
                {
                    PyErr_Format( PyExc_TypeError, "check_for_language() got multiple values for keyword argument 'lang_code'" );
                    goto error_exit;
                }

                _python_par_lang_code = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "check_for_language() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "check_for_language() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "check_for_language() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "check_for_language() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "check_for_language() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "check_for_language() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "check_for_language() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "check_for_language() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "check_for_language() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "check_for_language() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "check_for_language() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "check_for_language() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "check_for_language() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_lang_code != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "check_for_language() got multiple values for keyword argument 'lang_code'" );
             goto error_exit;
         }

        _python_par_lang_code = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_21_check_for_language_of_module_django__utils__translation__trans_real( self, _python_par_lang_code );

error_exit:;

    Py_XDECREF( _python_par_lang_code );

    return NULL;
}

static PyObject *dparse_function_21_check_for_language_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_21_check_for_language_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_21_check_for_language_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_lang_code, PyObject *_python_par_supported, PyObject *_python_par_strict )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_lang_code( _python_str_plain_lang_code, _python_par_lang_code );
    PyObjectLocalParameterVariableNoDel _python_var_supported( _python_str_plain_supported, _python_par_supported );
    PyObjectLocalParameterVariableNoDel _python_var_strict( _python_str_plain_strict, _python_par_strict );
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );
    PyObjectLocalVariable _python_var_generic_lang_code( _python_str_plain_generic_lang_code );
    PyObjectLocalVariable _python_var_variants( _python_str_plain_variants );
    PyObjectLocalVariable _python_var_code( _python_str_plain_code );
    PyObjectLocalVariable _python_var_supported_code( _python_str_plain_supported_code );

    // Actual function code.
    static PyFrameObject *frame_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real );
        }

        frame_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_7a50f5dac1a667d840d91131f6993985, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 370 );
        if ( ( _python_var_supported.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 371 );
            _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_strict.updateLocalsDict( _python_var_supported.updateLocalsDict( _python_var_lang_code.updateLocalsDict( _python_var_supported_code.updateLocalsDict( _python_var_code.updateLocalsDict( _python_var_variants.updateLocalsDict( _python_var_generic_lang_code.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
            frame_guard.setLineNumber( 372 );
            {
                PyObjectTempKeeper0 call1;
                _python_var_supported.assign1( ( call1.assign( _mvar_django__utils__translation__trans_real_SortedDict.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LANGUAGES ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 373 );
        if ( CHECK_IF_TRUE( _python_var_lang_code.asObject() ) )
        {
            frame_guard.setLineNumber( 375 );
            _python_var_generic_lang_code.assign1( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_lang_code.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_45 ) ).asObject(), _python_int_0, 0 ) );
            frame_guard.setLineNumber( 376 );
            {
                PyObjectTempKeeper0 make_tuple3;
                PyObjectTempKeeper1 make_tuple4;
                PyObjectTempKeeper0 make_tuple5;
                _python_var_variants.assign1( ( make_tuple3.assign( _python_var_lang_code.asObject() ), make_tuple4.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_lang_code.asObject(), _python_str_plain_lower ) ).asObject() ) ), make_tuple5.assign( _python_var_generic_lang_code.asObject() ), MAKE_TUPLE4( make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_generic_lang_code.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ) ) );
            }
            {
                frame_guard.setLineNumber( 378 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_variants.asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 378 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_code.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 379 );
                    {
                        PyObjectTempKeeper0 call9;
                        PyObjectTempKeeper0 cmp7;
                        if ( ( ( cmp7.assign( _python_var_code.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp7.asObject0(), _python_var_supported.asObject() ) ) && CHECK_IF_TRUE( PyObjectTemporary( ( call9.assign( _mvar_django__utils__translation__trans_real_check_for_language.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_code.asObject() ) ) ).asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 380 );
                        return _python_var_code.asObject1();
                    }
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 381 );
            if ( (!( CHECK_IF_TRUE( _python_var_strict.asObject() ) )) )
            {
                {
                    frame_guard.setLineNumber( 383 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_supported.asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 383 );
                            PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_2 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                            _python_var_supported_code.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 384 );
                        {
                            PyObjectTempKeeper1 call13;
                            PyObjectTempKeeper1 make_tuple11;
                            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_supported_code.asObject(), _python_str_plain_startswith ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), PyObjectTemporary( ( make_tuple11.assign( BINARY_OPERATION_ADD( _python_var_generic_lang_code.asObject(), _python_unicode_chr_45 ) ), MAKE_TUPLE2( make_tuple11.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_generic_lang_code.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_unicode_chr_45 ) ).asObject() ) ) ).asObject() ) ) ).asObject() ) )
                        {
                            frame_guard.setLineNumber( 386 );
                            return _python_var_supported_code.asObject1();
                        }
                        }

                       CONSIDER_THREADING();
                    }
                }
            }
        }
        frame_guard.setLineNumber( 387 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_LookupError, PyObjectTemporary( MAKE_TUPLE1( _python_var_lang_code.asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_strict.updateLocalsDict( _python_var_supported.updateLocalsDict( _python_var_lang_code.updateLocalsDict( _python_var_supported_code.updateLocalsDict( _python_var_code.updateLocalsDict( _python_var_variants.updateLocalsDict( _python_var_generic_lang_code.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real );
           frame_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_lang_code = NULL;
    PyObject *_python_par_supported = NULL;
    PyObject *_python_par_strict = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_supported_language_variant() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_lang_code == key )
            {
                if (unlikely( _python_par_lang_code ))
                {
                    PyErr_Format( PyExc_TypeError, "get_supported_language_variant() got multiple values for keyword argument 'lang_code'" );
                    goto error_exit;
                }

                _python_par_lang_code = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_supported == key )
            {
                if (unlikely( _python_par_supported ))
                {
                    PyErr_Format( PyExc_TypeError, "get_supported_language_variant() got multiple values for keyword argument 'supported'" );
                    goto error_exit;
                }

                _python_par_supported = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_strict == key )
            {
                if (unlikely( _python_par_strict ))
                {
                    PyErr_Format( PyExc_TypeError, "get_supported_language_variant() got multiple values for keyword argument 'strict'" );
                    goto error_exit;
                }

                _python_par_strict = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_lang_code, key ) )
            {
                if (unlikely( _python_par_lang_code ))
                {
                    PyErr_Format( PyExc_TypeError, "get_supported_language_variant() got multiple values for keyword argument 'lang_code'" );
                    goto error_exit;
                }

                _python_par_lang_code = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_supported, key ) )
            {
                if (unlikely( _python_par_supported ))
                {
                    PyErr_Format( PyExc_TypeError, "get_supported_language_variant() got multiple values for keyword argument 'supported'" );
                    goto error_exit;
                }

                _python_par_supported = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_strict, key ) )
            {
                if (unlikely( _python_par_strict ))
                {
                    PyErr_Format( PyExc_TypeError, "get_supported_language_variant() got multiple values for keyword argument 'strict'" );
                    goto error_exit;
                }

                _python_par_strict = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_supported_language_variant() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_supported_language_variant() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_supported_language_variant() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_supported_language_variant() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_supported_language_variant() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_supported_language_variant() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_supported_language_variant() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_supported_language_variant() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_supported_language_variant() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_supported_language_variant() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_supported_language_variant() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_supported_language_variant() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_supported_language_variant() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_lang_code != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_supported_language_variant() got multiple values for keyword argument 'lang_code'" );
             goto error_exit;
         }

        _python_par_lang_code = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_supported != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_supported_language_variant() got multiple values for keyword argument 'supported'" );
             goto error_exit;
         }

        _python_par_supported = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_strict != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_supported_language_variant() got multiple values for keyword argument 'strict'" );
             goto error_exit;
         }

        _python_par_strict = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_supported == NULL )
    {
        _python_par_supported = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_supported );
    }
    if ( _python_par_strict == NULL )
    {
        _python_par_strict = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_strict );
    }


    return impl_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real( self, _python_par_lang_code, _python_par_supported, _python_par_strict );

error_exit:;

    Py_XDECREF( _python_par_lang_code );
    Py_XDECREF( _python_par_supported );
    Py_XDECREF( _python_par_strict );

    return NULL;
}

static PyObject *dparse_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_23_get_language_from_path_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_path, PyObject *_python_par_supported, PyObject *_python_par_strict )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );
    PyObjectLocalParameterVariableNoDel _python_var_supported( _python_str_plain_supported, _python_par_supported );
    PyObjectLocalParameterVariableNoDel _python_var_strict( _python_str_plain_strict, _python_par_strict );
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );
    PyObjectLocalVariable _python_var_regex_match( _python_str_plain_regex_match );
    PyObjectLocalVariable _python_var_lang_code( _python_str_plain_lang_code );

    // Actual function code.
    static PyFrameObject *frame_function_23_get_language_from_path_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_23_get_language_from_path_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_23_get_language_from_path_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_23_get_language_from_path_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_23_get_language_from_path_of_module_django__utils__translation__trans_real );
        }

        frame_function_23_get_language_from_path_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_e804e994db7542901f162f09c62f9c72, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_23_get_language_from_path_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_23_get_language_from_path_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 397 );
        if ( ( _python_var_supported.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 398 );
            _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_strict.updateLocalsDict( _python_var_supported.updateLocalsDict( _python_var_path.updateLocalsDict( _python_var_lang_code.updateLocalsDict( _python_var_regex_match.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
            frame_guard.setLineNumber( 399 );
            {
                PyObjectTempKeeper0 call1;
                _python_var_supported.assign1( ( call1.assign( _mvar_django__utils__translation__trans_real_SortedDict.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LANGUAGES ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 400 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_regex_match.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_language_code_prefix_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_path.asObject() ) ) );
        }
        frame_guard.setLineNumber( 401 );
        if ( (!( CHECK_IF_TRUE( _python_var_regex_match.asObject() ) )) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 403 );
        _python_var_lang_code.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_regex_match.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) );
        frame_guard.setLineNumber( 404 );
        try
        {
            frame_guard.setLineNumber( 405 );
            {
                PyObjectTempKeeper0 call7;
                PyObjectTempKeeper1 call8;
                PyObjectTempKeeper0 make_tuple5;
                return ( call7.assign( _mvar_django__utils__translation__trans_real_get_supported_language_variant.asObject0() ), call8.assign( ( make_tuple5.assign( _python_var_lang_code.asObject() ), MAKE_TUPLE2( make_tuple5.asObject0(), _python_var_supported.asObject() ) ) ), CALL_FUNCTION( call7.asObject0(), call8.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_strict.asObject(), _python_str_plain_strict ) ).asObject() ) );
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

            if ( _exception.matches( PyExc_LookupError ) )
            {
                frame_guard.detachFrame();
                return INCREASE_REFCOUNT( Py_None );
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
        frame_guard.getFrame0()->f_locals = _python_var_strict.updateLocalsDict( _python_var_supported.updateLocalsDict( _python_var_path.updateLocalsDict( _python_var_lang_code.updateLocalsDict( _python_var_regex_match.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_23_get_language_from_path_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_23_get_language_from_path_of_module_django__utils__translation__trans_real );
           frame_function_23_get_language_from_path_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_23_get_language_from_path_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_path = NULL;
    PyObject *_python_par_supported = NULL;
    PyObject *_python_par_strict = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_language_from_path() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_path == key )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_supported == key )
            {
                if (unlikely( _python_par_supported ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'supported'" );
                    goto error_exit;
                }

                _python_par_supported = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_strict == key )
            {
                if (unlikely( _python_par_strict ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'strict'" );
                    goto error_exit;
                }

                _python_par_strict = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path, key ) )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_supported, key ) )
            {
                if (unlikely( _python_par_supported ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'supported'" );
                    goto error_exit;
                }

                _python_par_supported = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_strict, key ) )
            {
                if (unlikely( _python_par_strict ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'strict'" );
                    goto error_exit;
                }

                _python_par_strict = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_language_from_path() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_language_from_path() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_path() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_path() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_path() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_supported != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'supported'" );
             goto error_exit;
         }

        _python_par_supported = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_strict != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'strict'" );
             goto error_exit;
         }

        _python_par_strict = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_supported == NULL )
    {
        _python_par_supported = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_supported );
    }
    if ( _python_par_strict == NULL )
    {
        _python_par_strict = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_strict );
    }


    return impl_function_23_get_language_from_path_of_module_django__utils__translation__trans_real( self, _python_par_path, _python_par_supported, _python_par_strict );

error_exit:;

    Py_XDECREF( _python_par_path );
    Py_XDECREF( _python_par_supported );
    Py_XDECREF( _python_par_strict );

    return NULL;
}

static PyObject *dparse_function_23_get_language_from_path_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_23_get_language_from_path_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_23_get_language_from_path_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_24_get_language_from_request_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_request, PyObject *_python_par_check_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_check_path( _python_str_plain_check_path, _python_par_check_path );
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );
    PyObjectLocalVariable _python_var_supported( _python_str_plain_supported );
    PyObjectLocalVariable _python_var_lang_code( _python_str_plain_lang_code );
    PyObjectLocalVariable _python_var_accept( _python_str_plain_accept );
    PyObjectLocalVariable _python_var_accept_lang( _python_str_plain_accept_lang );
    PyObjectLocalVariable _python_var_unused( _python_str_plain_unused );
    PyObjectLocalVariable _python_var_normalized( _python_str_plain_normalized );

    // Actual function code.
    static PyFrameObject *frame_function_24_get_language_from_request_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_24_get_language_from_request_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_24_get_language_from_request_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_24_get_language_from_request_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_24_get_language_from_request_of_module_django__utils__translation__trans_real );
        }

        frame_function_24_get_language_from_request_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_e90d4e89134b18651fc5b577f13cf295, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_24_get_language_from_request_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_24_get_language_from_request_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 420 );
        _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_check_path.updateLocalsDict( _python_var_request.updateLocalsDict( _python_var_normalized.updateLocalsDict( _python_var_unused.updateLocalsDict( _python_var_accept_lang.updateLocalsDict( _python_var_accept.updateLocalsDict( _python_var_lang_code.updateLocalsDict( _python_var_supported.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 421 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_supported.assign1( ( call1.assign( _mvar_django__utils__translation__trans_real_SortedDict.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LANGUAGES ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 423 );
        if ( CHECK_IF_TRUE( _python_var_check_path.asObject() ) )
        {
            frame_guard.setLineNumber( 424 );
            {
                PyObjectTempKeeper0 call3;
                PyObjectTempKeeper1 call4;
                _python_var_lang_code.assign1( ( call3.assign( _mvar_django__utils__translation__trans_real_get_language_from_path.asObject0() ), call4.assign( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_path_info ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_supported.asObject() ) ) );
            }
            frame_guard.setLineNumber( 425 );
            if ( ( _python_var_lang_code.asObject() != Py_None ) )
            {
                frame_guard.setLineNumber( 426 );
                return _python_var_lang_code.asObject1();
            }
        }
        frame_guard.setLineNumber( 428 );
        if ( HAS_ATTRIBUTE( _python_var_request.asObject(), _python_unicode_plain_session ) )
        {
            frame_guard.setLineNumber( 429 );
            _python_var_lang_code.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_session ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_django_language, Py_None ) );
            frame_guard.setLineNumber( 430 );
            {
                PyObjectTempKeeper0 call8;
                PyObjectTempKeeper0 cmp6;
                if ( ( ( cmp6.assign( _python_var_lang_code.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp6.asObject0(), _python_var_supported.asObject() ) ) && ( ( _python_var_lang_code.asObject() != Py_None ) && CHECK_IF_TRUE( PyObjectTemporary( ( call8.assign( _mvar_django__utils__translation__trans_real_check_for_language.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_lang_code.asObject() ) ) ).asObject() ) ) ) )
            {
                frame_guard.setLineNumber( 431 );
                return _python_var_lang_code.asObject1();
            }
            }
        }
        frame_guard.setLineNumber( 433 );
        {
            PyObjectTempKeeper1 call10;
            _python_var_lang_code.assign1( ( call10.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_COOKIES ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LANGUAGE_COOKIE_NAME ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 435 );
        try
        {
            frame_guard.setLineNumber( 436 );
            {
                PyObjectTempKeeper0 call12;
                PyObjectTempKeeper0 call13;
                return ( call12.assign( _mvar_django__utils__translation__trans_real_get_supported_language_variant.asObject0() ), call13.assign( _python_var_lang_code.asObject() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), call13.asObject0(), _python_var_supported.asObject() ) );
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

            if ( _exception.matches( PyExc_LookupError ) )
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
        frame_guard.setLineNumber( 440 );
        _python_var_accept.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_META ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_HTTP_ACCEPT_LANGUAGE, _python_unicode_empty ) );
        {
            frame_guard.setLineNumber( 441 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper0 call15;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call15.assign( _mvar_django__utils__translation__trans_real_parse_accept_lang_header.asObject0() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_var_accept.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 441 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 441 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_accept_lang.assign0( _python_tmp_element_1.asObject() );
                        _python_var_unused.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 442 );
                if ( RICH_COMPARE_BOOL_EQ( _python_var_accept_lang.asObject(), _python_unicode_chr_42 ) )
                {
                    frame_guard.setLineNumber( 443 );
                    break;
                }
                frame_guard.setLineNumber( 447 );
                {
                    PyObjectTempKeeper0 call17;
                    PyObjectTempKeeper1 call20;
                    _python_var_normalized.assign1( ( call20.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_locale.asObject0(), _python_str_plain_locale_alias ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), PyObjectTemporary( ( call17.assign( _mvar_django__utils__translation__trans_real_to_locale.asObject0() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_var_accept_lang.asObject(), Py_True ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 448 );
                if ( (!( CHECK_IF_TRUE( _python_var_normalized.asObject() ) )) )
                {
                    frame_guard.setLineNumber( 449 );
                    CONSIDER_THREADING(); continue;
                }
                frame_guard.setLineNumber( 451 );
                _python_var_normalized.assign1( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_normalized.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_dot ) ).asObject(), _python_int_0, 0 ) );
                frame_guard.setLineNumber( 453 );
                {
                    PyObjectTempKeeper0 cmp24;
                    if ( ( cmp24.assign( _python_var_normalized.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp24.asObject0(), _mvar_django__utils__translation__trans_real__accepted.asObject0() ) ) )
                {
                    frame_guard.setLineNumber( 456 );
                    {
                        PyObjectTempKeeper0 subscr22;
                        return ( subscr22.assign( _mvar_django__utils__translation__trans_real__accepted.asObject0() ), LOOKUP_SUBSCRIPT( subscr22.asObject0(), _python_var_normalized.asObject() ) );
                    }
                }
                }
                {
                    PyObject *_python_tmp_unhandled_indicator = Py_True;
                    frame_guard.setLineNumber( 458 );
                    try
                    {
                        frame_guard.setLineNumber( 459 );
                        {
                            PyObjectTempKeeper0 call26;
                            PyObjectTempKeeper0 call27;
                            _python_var_accept_lang.assign1( ( call26.assign( _mvar_django__utils__translation__trans_real_get_supported_language_variant.asObject0() ), call27.assign( _python_var_accept_lang.asObject() ), CALL_FUNCTION_WITH_ARGS( call26.asObject0(), call27.asObject0(), _python_var_supported.asObject() ) ) );
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

                        if ( _exception.matches( PyExc_LookupError ) )
                        {
                            frame_guard.detachFrame();
                            _python_tmp_unhandled_indicator = Py_False;
                            frame_guard.setLineNumber( 461 );
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
                    if ( ( _python_tmp_unhandled_indicator == Py_True ) )
                    {
                        frame_guard.setLineNumber( 463 );
                        {
                                PyObject *tmp_identifier = _python_var_accept_lang.asObject();
                                PyObject *tmp_subscribed = _mvar_django__utils__translation__trans_real__accepted.asObject0();
                                SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_normalized.asObject() );
                        }
                        frame_guard.setLineNumber( 464 );
                        return _python_var_accept_lang.asObject1();
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 466 );
        try
        {
            frame_guard.setLineNumber( 467 );
            {
                PyObjectTempKeeper0 call29;
                PyObjectTempKeeper1 call30;
                return ( call29.assign( _mvar_django__utils__translation__trans_real_get_supported_language_variant.asObject0() ), call30.assign( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LANGUAGE_CODE ) ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), call30.asObject0(), _python_var_supported.asObject() ) );
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

            if ( _exception.matches( PyExc_LookupError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 469 );
                return LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_LANGUAGE_CODE );
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
        frame_guard.getFrame0()->f_locals = _python_var_check_path.updateLocalsDict( _python_var_request.updateLocalsDict( _python_var_normalized.updateLocalsDict( _python_var_unused.updateLocalsDict( _python_var_accept_lang.updateLocalsDict( _python_var_accept.updateLocalsDict( _python_var_lang_code.updateLocalsDict( _python_var_supported.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_24_get_language_from_request_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_24_get_language_from_request_of_module_django__utils__translation__trans_real );
           frame_function_24_get_language_from_request_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_24_get_language_from_request_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_check_path = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_language_from_request() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_language_from_request() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_check_path == key )
            {
                if (unlikely( _python_par_check_path ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_request() got multiple values for keyword argument 'check_path'" );
                    goto error_exit;
                }

                _python_par_check_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_request() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_check_path, key ) )
            {
                if (unlikely( _python_par_check_path ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_request() got multiple values for keyword argument 'check_path'" );
                    goto error_exit;
                }

                _python_par_check_path = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_language_from_request() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_language_from_request() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_request() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_request() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_request() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_request() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_language_from_request() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_check_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_language_from_request() got multiple values for keyword argument 'check_path'" );
             goto error_exit;
         }

        _python_par_check_path = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_check_path == NULL )
    {
        _python_par_check_path = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_check_path );
    }


    return impl_function_24_get_language_from_request_of_module_django__utils__translation__trans_real( self, _python_par_request, _python_par_check_path );

error_exit:;

    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_check_path );

    return NULL;
}

static PyObject *dparse_function_24_get_language_from_request_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_24_get_language_from_request_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_24_get_language_from_request_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_25_blankout_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_src, PyObject *_python_par_char )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_src( _python_str_plain_src, _python_par_src );
    PyObjectLocalParameterVariableNoDel _python_var_char( _python_str_plain_char, _python_par_char );

    // Actual function code.
    static PyFrameObject *frame_function_25_blankout_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_25_blankout_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_25_blankout_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_25_blankout_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_25_blankout_of_module_django__utils__translation__trans_real );
        }

        frame_function_25_blankout_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_353d2d00682f60381fff88361fa868bd, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_25_blankout_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_25_blankout_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 477 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_dot_re.asObject0(), _python_str_plain_sub ) ), call2.assign( _python_var_char.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_src.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_char.updateLocalsDict( _python_var_src.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_25_blankout_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_25_blankout_of_module_django__utils__translation__trans_real );
           frame_function_25_blankout_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_25_blankout_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_src = NULL;
    PyObject *_python_par_char = NULL;
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
                PyErr_Format( PyExc_TypeError, "blankout() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_src == key )
            {
                if (unlikely( _python_par_src ))
                {
                    PyErr_Format( PyExc_TypeError, "blankout() got multiple values for keyword argument 'src'" );
                    goto error_exit;
                }

                _python_par_src = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_char == key )
            {
                if (unlikely( _python_par_char ))
                {
                    PyErr_Format( PyExc_TypeError, "blankout() got multiple values for keyword argument 'char'" );
                    goto error_exit;
                }

                _python_par_char = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_src, key ) )
            {
                if (unlikely( _python_par_src ))
                {
                    PyErr_Format( PyExc_TypeError, "blankout() got multiple values for keyword argument 'src'" );
                    goto error_exit;
                }

                _python_par_src = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_char, key ) )
            {
                if (unlikely( _python_par_char ))
                {
                    PyErr_Format( PyExc_TypeError, "blankout() got multiple values for keyword argument 'char'" );
                    goto error_exit;
                }

                _python_par_char = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "blankout() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "blankout() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "blankout() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "blankout() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "blankout() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "blankout() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "blankout() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "blankout() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "blankout() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "blankout() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "blankout() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "blankout() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "blankout() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_src != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "blankout() got multiple values for keyword argument 'src'" );
             goto error_exit;
         }

        _python_par_src = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_char != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "blankout() got multiple values for keyword argument 'char'" );
             goto error_exit;
         }

        _python_par_char = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_25_blankout_of_module_django__utils__translation__trans_real( self, _python_par_src, _python_par_char );

error_exit:;

    Py_XDECREF( _python_par_src );
    Py_XDECREF( _python_par_char );

    return NULL;
}

static PyObject *dparse_function_25_blankout_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_25_blankout_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_25_blankout_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_26_templatize_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_src, PyObject *_python_par_origin )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_src( _python_str_plain_src, _python_par_src );
    PyObjectLocalParameterVariableNoDel _python_var_origin( _python_str_plain_origin, _python_par_origin );
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );
    PyObjectLocalVariable _python_var_Lexer( _python_str_plain_Lexer );
    PyObjectLocalVariable _python_var_TOKEN_TEXT( _python_str_plain_TOKEN_TEXT );
    PyObjectLocalVariable _python_var_TOKEN_VAR( _python_str_plain_TOKEN_VAR );
    PyObjectLocalVariable _python_var_TOKEN_BLOCK( _python_str_plain_TOKEN_BLOCK );
    PyObjectLocalVariable _python_var_TOKEN_COMMENT( _python_str_plain_TOKEN_COMMENT );
    PyObjectLocalVariable _python_var_TRANSLATOR_COMMENT_MARK( _python_str_plain_TRANSLATOR_COMMENT_MARK );
    PyObjectLocalVariable _python_var_out( _python_str_plain_out );
    PyObjectLocalVariable _python_var_message_context( _python_str_plain_message_context );
    PyObjectLocalVariable _python_var_intrans( _python_str_plain_intrans );
    PyObjectLocalVariable _python_var_inplural( _python_str_plain_inplural );
    PyObjectLocalVariable _python_var_singular( _python_str_plain_singular );
    PyObjectLocalVariable _python_var_plural( _python_str_plain_plural );
    PyObjectLocalVariable _python_var_incomment( _python_str_plain_incomment );
    PyObjectLocalVariable _python_var_comment( _python_str_plain_comment );
    PyObjectLocalVariable _python_var_lineno_comment_map( _python_str_plain_lineno_comment_map );
    PyObjectLocalVariable _python_var_comment_lineno_cache( _python_str_plain_comment_lineno_cache );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_content( _python_str_plain_content );
    PyObjectLocalVariable _python_var_translators_comment_start( _python_str_plain_translators_comment_start );
    PyObjectLocalVariable _python_var_lineno( _python_str_plain_lineno );
    PyObjectLocalVariable _python_var_line( _python_str_plain_line );
    PyObjectLocalVariable _python_var_endbmatch( _python_str_plain_endbmatch );
    PyObjectLocalVariable _python_var_pluralmatch( _python_str_plain_pluralmatch );
    PyObjectLocalVariable _python_var_part( _python_str_plain_part );
    PyObjectLocalVariable _python_var_filemsg( _python_str_plain_filemsg );
    PyObjectLocalVariable _python_var_contents( _python_str_plain_contents );
    PyObjectLocalVariable _python_var_cur_lineno( _python_str_plain_cur_lineno );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );
    PyObjectLocalVariable _python_var_warn_msg( _python_str_plain_warn_msg );
    PyObjectLocalVariable _python_var_imatch( _python_str_plain_imatch );
    PyObjectLocalVariable _python_var_bmatch( _python_str_plain_bmatch );
    PyObjectLocalVariable _python_var_cmatches( _python_str_plain_cmatches );
    PyObjectLocalVariable _python_var_g( _python_str_plain_g );
    PyObjectLocalVariable _python_var_context_match( _python_str_plain_context_match );
    PyObjectLocalVariable _python_var_fmatch( _python_str_plain_fmatch );
    PyObjectLocalVariable _python_var_cmatch( _python_str_plain_cmatch );
    PyObjectLocalVariable _python_var_parts( _python_str_plain_parts );
    PyObjectLocalVariable _python_var_p( _python_str_plain_p );

    // Actual function code.
    static PyFrameObject *frame_function_26_templatize_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_26_templatize_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_26_templatize_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_26_templatize_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_26_templatize_of_module_django__utils__translation__trans_real );
        }

        frame_function_26_templatize_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_04e4e8c4c5d261d5cde907790872895c, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_26_templatize_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_26_templatize_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 494 );
        _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_origin.updateLocalsDict( _python_var_src.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_parts.updateLocalsDict( _python_var_cmatch.updateLocalsDict( _python_var_fmatch.updateLocalsDict( _python_var_context_match.updateLocalsDict( _python_var_g.updateLocalsDict( _python_var_cmatches.updateLocalsDict( _python_var_bmatch.updateLocalsDict( _python_var_imatch.updateLocalsDict( _python_var_warn_msg.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_cur_lineno.updateLocalsDict( _python_var_contents.updateLocalsDict( _python_var_filemsg.updateLocalsDict( _python_var_part.updateLocalsDict( _python_var_pluralmatch.updateLocalsDict( _python_var_endbmatch.updateLocalsDict( _python_var_line.updateLocalsDict( _python_var_lineno.updateLocalsDict( _python_var_translators_comment_start.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_comment_lineno_cache.updateLocalsDict( _python_var_lineno_comment_map.updateLocalsDict( _python_var_comment.updateLocalsDict( _python_var_incomment.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( _python_var_inplural.updateLocalsDict( _python_var_intrans.updateLocalsDict( _python_var_message_context.updateLocalsDict( _python_var_out.updateLocalsDict( _python_var_TRANSLATOR_COMMENT_MARK.updateLocalsDict( _python_var_TOKEN_COMMENT.updateLocalsDict( _python_var_TOKEN_BLOCK.updateLocalsDict( _python_var_TOKEN_VAR.updateLocalsDict( _python_var_TOKEN_TEXT.updateLocalsDict( _python_var_Lexer.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 495 );
        _python_var_Lexer.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2c787db14d44c2e8d2ef6ec28149f0b6, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_origin.updateLocalsDict( _python_var_src.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_parts.updateLocalsDict( _python_var_cmatch.updateLocalsDict( _python_var_fmatch.updateLocalsDict( _python_var_context_match.updateLocalsDict( _python_var_g.updateLocalsDict( _python_var_cmatches.updateLocalsDict( _python_var_bmatch.updateLocalsDict( _python_var_imatch.updateLocalsDict( _python_var_warn_msg.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_cur_lineno.updateLocalsDict( _python_var_contents.updateLocalsDict( _python_var_filemsg.updateLocalsDict( _python_var_part.updateLocalsDict( _python_var_pluralmatch.updateLocalsDict( _python_var_endbmatch.updateLocalsDict( _python_var_line.updateLocalsDict( _python_var_lineno.updateLocalsDict( _python_var_translators_comment_start.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_comment_lineno_cache.updateLocalsDict( _python_var_lineno_comment_map.updateLocalsDict( _python_var_comment.updateLocalsDict( _python_var_incomment.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( _python_var_inplural.updateLocalsDict( _python_var_intrans.updateLocalsDict( _python_var_message_context.updateLocalsDict( _python_var_out.updateLocalsDict( _python_var_TRANSLATOR_COMMENT_MARK.updateLocalsDict( _python_var_TOKEN_COMMENT.updateLocalsDict( _python_var_TOKEN_BLOCK.updateLocalsDict( _python_var_TOKEN_VAR.updateLocalsDict( _python_var_TOKEN_TEXT.updateLocalsDict( _python_var_Lexer.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_11ec652cafb8eb2496f34fdf35eeccec_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Lexer ) );
        _python_var_TOKEN_TEXT.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2c787db14d44c2e8d2ef6ec28149f0b6, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_origin.updateLocalsDict( _python_var_src.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_parts.updateLocalsDict( _python_var_cmatch.updateLocalsDict( _python_var_fmatch.updateLocalsDict( _python_var_context_match.updateLocalsDict( _python_var_g.updateLocalsDict( _python_var_cmatches.updateLocalsDict( _python_var_bmatch.updateLocalsDict( _python_var_imatch.updateLocalsDict( _python_var_warn_msg.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_cur_lineno.updateLocalsDict( _python_var_contents.updateLocalsDict( _python_var_filemsg.updateLocalsDict( _python_var_part.updateLocalsDict( _python_var_pluralmatch.updateLocalsDict( _python_var_endbmatch.updateLocalsDict( _python_var_line.updateLocalsDict( _python_var_lineno.updateLocalsDict( _python_var_translators_comment_start.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_comment_lineno_cache.updateLocalsDict( _python_var_lineno_comment_map.updateLocalsDict( _python_var_comment.updateLocalsDict( _python_var_incomment.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( _python_var_inplural.updateLocalsDict( _python_var_intrans.updateLocalsDict( _python_var_message_context.updateLocalsDict( _python_var_out.updateLocalsDict( _python_var_TRANSLATOR_COMMENT_MARK.updateLocalsDict( _python_var_TOKEN_COMMENT.updateLocalsDict( _python_var_TOKEN_BLOCK.updateLocalsDict( _python_var_TOKEN_VAR.updateLocalsDict( _python_var_TOKEN_TEXT.updateLocalsDict( _python_var_Lexer.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_11ec652cafb8eb2496f34fdf35eeccec_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TOKEN_TEXT ) );
        _python_var_TOKEN_VAR.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2c787db14d44c2e8d2ef6ec28149f0b6, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_origin.updateLocalsDict( _python_var_src.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_parts.updateLocalsDict( _python_var_cmatch.updateLocalsDict( _python_var_fmatch.updateLocalsDict( _python_var_context_match.updateLocalsDict( _python_var_g.updateLocalsDict( _python_var_cmatches.updateLocalsDict( _python_var_bmatch.updateLocalsDict( _python_var_imatch.updateLocalsDict( _python_var_warn_msg.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_cur_lineno.updateLocalsDict( _python_var_contents.updateLocalsDict( _python_var_filemsg.updateLocalsDict( _python_var_part.updateLocalsDict( _python_var_pluralmatch.updateLocalsDict( _python_var_endbmatch.updateLocalsDict( _python_var_line.updateLocalsDict( _python_var_lineno.updateLocalsDict( _python_var_translators_comment_start.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_comment_lineno_cache.updateLocalsDict( _python_var_lineno_comment_map.updateLocalsDict( _python_var_comment.updateLocalsDict( _python_var_incomment.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( _python_var_inplural.updateLocalsDict( _python_var_intrans.updateLocalsDict( _python_var_message_context.updateLocalsDict( _python_var_out.updateLocalsDict( _python_var_TRANSLATOR_COMMENT_MARK.updateLocalsDict( _python_var_TOKEN_COMMENT.updateLocalsDict( _python_var_TOKEN_BLOCK.updateLocalsDict( _python_var_TOKEN_VAR.updateLocalsDict( _python_var_TOKEN_TEXT.updateLocalsDict( _python_var_Lexer.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_11ec652cafb8eb2496f34fdf35eeccec_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TOKEN_VAR ) );
        _python_var_TOKEN_BLOCK.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2c787db14d44c2e8d2ef6ec28149f0b6, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_origin.updateLocalsDict( _python_var_src.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_parts.updateLocalsDict( _python_var_cmatch.updateLocalsDict( _python_var_fmatch.updateLocalsDict( _python_var_context_match.updateLocalsDict( _python_var_g.updateLocalsDict( _python_var_cmatches.updateLocalsDict( _python_var_bmatch.updateLocalsDict( _python_var_imatch.updateLocalsDict( _python_var_warn_msg.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_cur_lineno.updateLocalsDict( _python_var_contents.updateLocalsDict( _python_var_filemsg.updateLocalsDict( _python_var_part.updateLocalsDict( _python_var_pluralmatch.updateLocalsDict( _python_var_endbmatch.updateLocalsDict( _python_var_line.updateLocalsDict( _python_var_lineno.updateLocalsDict( _python_var_translators_comment_start.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_comment_lineno_cache.updateLocalsDict( _python_var_lineno_comment_map.updateLocalsDict( _python_var_comment.updateLocalsDict( _python_var_incomment.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( _python_var_inplural.updateLocalsDict( _python_var_intrans.updateLocalsDict( _python_var_message_context.updateLocalsDict( _python_var_out.updateLocalsDict( _python_var_TRANSLATOR_COMMENT_MARK.updateLocalsDict( _python_var_TOKEN_COMMENT.updateLocalsDict( _python_var_TOKEN_BLOCK.updateLocalsDict( _python_var_TOKEN_VAR.updateLocalsDict( _python_var_TOKEN_TEXT.updateLocalsDict( _python_var_Lexer.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_11ec652cafb8eb2496f34fdf35eeccec_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TOKEN_BLOCK ) );
        _python_var_TOKEN_COMMENT.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2c787db14d44c2e8d2ef6ec28149f0b6, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_origin.updateLocalsDict( _python_var_src.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_parts.updateLocalsDict( _python_var_cmatch.updateLocalsDict( _python_var_fmatch.updateLocalsDict( _python_var_context_match.updateLocalsDict( _python_var_g.updateLocalsDict( _python_var_cmatches.updateLocalsDict( _python_var_bmatch.updateLocalsDict( _python_var_imatch.updateLocalsDict( _python_var_warn_msg.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_cur_lineno.updateLocalsDict( _python_var_contents.updateLocalsDict( _python_var_filemsg.updateLocalsDict( _python_var_part.updateLocalsDict( _python_var_pluralmatch.updateLocalsDict( _python_var_endbmatch.updateLocalsDict( _python_var_line.updateLocalsDict( _python_var_lineno.updateLocalsDict( _python_var_translators_comment_start.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_comment_lineno_cache.updateLocalsDict( _python_var_lineno_comment_map.updateLocalsDict( _python_var_comment.updateLocalsDict( _python_var_incomment.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( _python_var_inplural.updateLocalsDict( _python_var_intrans.updateLocalsDict( _python_var_message_context.updateLocalsDict( _python_var_out.updateLocalsDict( _python_var_TRANSLATOR_COMMENT_MARK.updateLocalsDict( _python_var_TOKEN_COMMENT.updateLocalsDict( _python_var_TOKEN_BLOCK.updateLocalsDict( _python_var_TOKEN_VAR.updateLocalsDict( _python_var_TOKEN_TEXT.updateLocalsDict( _python_var_Lexer.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_11ec652cafb8eb2496f34fdf35eeccec_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TOKEN_COMMENT ) );
        _python_var_TRANSLATOR_COMMENT_MARK.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2c787db14d44c2e8d2ef6ec28149f0b6, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, PyObjectTemporary( _python_var_origin.updateLocalsDict( _python_var_src.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_parts.updateLocalsDict( _python_var_cmatch.updateLocalsDict( _python_var_fmatch.updateLocalsDict( _python_var_context_match.updateLocalsDict( _python_var_g.updateLocalsDict( _python_var_cmatches.updateLocalsDict( _python_var_bmatch.updateLocalsDict( _python_var_imatch.updateLocalsDict( _python_var_warn_msg.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_cur_lineno.updateLocalsDict( _python_var_contents.updateLocalsDict( _python_var_filemsg.updateLocalsDict( _python_var_part.updateLocalsDict( _python_var_pluralmatch.updateLocalsDict( _python_var_endbmatch.updateLocalsDict( _python_var_line.updateLocalsDict( _python_var_lineno.updateLocalsDict( _python_var_translators_comment_start.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_comment_lineno_cache.updateLocalsDict( _python_var_lineno_comment_map.updateLocalsDict( _python_var_comment.updateLocalsDict( _python_var_incomment.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( _python_var_inplural.updateLocalsDict( _python_var_intrans.updateLocalsDict( _python_var_message_context.updateLocalsDict( _python_var_out.updateLocalsDict( _python_var_TRANSLATOR_COMMENT_MARK.updateLocalsDict( _python_var_TOKEN_COMMENT.updateLocalsDict( _python_var_TOKEN_BLOCK.updateLocalsDict( _python_var_TOKEN_VAR.updateLocalsDict( _python_var_TOKEN_TEXT.updateLocalsDict( _python_var_Lexer.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_11ec652cafb8eb2496f34fdf35eeccec_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TRANSLATOR_COMMENT_MARK ) );
        frame_guard.setLineNumber( 497 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            _python_var_src.assign1( ( call1.assign( _mvar_django__utils__translation__trans_real_force_text.asObject0() ), call2.assign( _python_var_src.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_FILE_CHARSET ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 498 );
        _python_var_out.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__translation__trans_real_StringIO.asObject0() ) );
        _python_var_message_context.assign0( Py_None );
        _python_var_intrans.assign0( Py_False );
        _python_var_inplural.assign0( Py_False );
        _python_var_singular.assign1( PyList_New( 0 ) );
        _python_var_plural.assign1( PyList_New( 0 ) );
        _python_var_incomment.assign0( Py_False );
        _python_var_comment.assign1( PyList_New( 0 ) );
        _python_var_lineno_comment_map.assign1( PyDict_New() );
        _python_var_comment_lineno_cache.assign0( Py_None );
        {
            frame_guard.setLineNumber( 509 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper0 call4;
                PyObjectTempKeeper0 call5;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call4.assign( _python_var_Lexer.asObject() ), call5.assign( _python_var_src.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), _python_var_origin.asObject() ) ) ).asObject(), _python_str_plain_tokenize ) ).asObject() ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 509 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_t.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 510 );
                if ( CHECK_IF_TRUE( _python_var_incomment.asObject() ) )
                {
                    frame_guard.setLineNumber( 511 );
                    {
                        PyObjectTempKeeper1 cmp17;
                        if ( ( ( cmp17.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_token_type ) ), RICH_COMPARE_BOOL_EQ( cmp17.asObject0(), _python_var_TOKEN_BLOCK.asObject() ) ) && RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject(), _python_unicode_plain_endcomment ) ) )
                    {
                        frame_guard.setLineNumber( 512 );
                        {
                            PyObjectTempKeeper1 call7;
                            _python_var_content.assign1( ( call7.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_comment.asObject() ) ) );
                        }
                        _python_var_translators_comment_start.assign0( Py_None );
                        {
                            frame_guard.setLineNumber( 514 );
                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_content.asObject(), _python_str_plain_splitlines ) ).asObject(), Py_True ) ).asObject() ) ).asObject() ) );
                            while( true )
                            {
                                {
                                    frame_guard.setLineNumber( 514 );
                                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                    if ( _tmp_unpack_2 == NULL )
                                    {
                                        break;
                                    }
                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                    {
                                        frame_guard.setLineNumber( 514 );
                                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                        _python_var_lineno.assign0( _python_tmp_element_1.asObject() );
                                        _python_var_line.assign0( _python_tmp_element_2.asObject() );
                                    }
                                }
                                frame_guard.setLineNumber( 515 );
                                {
                                    PyObjectTempKeeper1 call9;
                                    if ( CHECK_IF_TRUE( PyObjectTemporary( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_line.asObject(), _python_str_plain_lstrip ) ).asObject() ) ).asObject(), _python_str_plain_startswith ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_TRANSLATOR_COMMENT_MARK.asObject() ) ) ).asObject() ) )
                                {
                                    frame_guard.setLineNumber( 516 );
                                    _python_var_translators_comment_start.assign0( _python_var_lineno.asObject() );
                                }
                                }

                               CONSIDER_THREADING();
                            }
                        }
                        {
                            frame_guard.setLineNumber( 517 );
                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_content.asObject(), _python_str_plain_splitlines ) ).asObject(), Py_True ) ).asObject() ) ).asObject() ) );
                            while( true )
                            {
                                {
                                    frame_guard.setLineNumber( 517 );
                                    PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                    if ( _tmp_unpack_3 == NULL )
                                    {
                                        break;
                                    }
                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                                    {
                                        frame_guard.setLineNumber( 517 );
                                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                        _python_var_lineno.assign0( _python_tmp_element_1.asObject() );
                                        _python_var_line.assign0( _python_tmp_element_2.asObject() );
                                    }
                                }
                                frame_guard.setLineNumber( 518 );
                                {
                                    PyObjectTempKeeper0 cmp13;
                                    if ( ( ( _python_var_translators_comment_start.asObject() != Py_None ) && ( cmp13.assign( _python_var_lineno.asObject() ), RICH_COMPARE_BOOL_GE( cmp13.asObject0(), _python_var_translators_comment_start.asObject() ) ) ) )
                                {
                                    frame_guard.setLineNumber( 519 );
                                    {
                                        PyObjectTempKeeper1 call11;
                                        DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_867a4a0c832146a97224cfb89f0b28bb, _python_var_line.asObject() ) ).asObject() ) ) );
                                    }
                                }
                                else
                                {
                                    frame_guard.setLineNumber( 521 );
                                    DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ).asObject(), _python_unicode_digest_dcf240faa79bfdc210c1136213cb88d7 ) );
                                }
                                }

                               CONSIDER_THREADING();
                            }
                        }
                        _python_var_incomment.assign0( Py_False );
                        _python_var_comment.assign1( PyList_New( 0 ) );
                    }
                    else
                    {
                        frame_guard.setLineNumber( 525 );
                        {
                            PyObjectTempKeeper1 call15;
                            DECREASE_REFCOUNT( ( call15.assign( LOOKUP_ATTRIBUTE( _python_var_comment.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject() ) ) );
                        }
                    }
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 526 );
                    if ( CHECK_IF_TRUE( _python_var_intrans.asObject() ) )
                    {
                        frame_guard.setLineNumber( 527 );
                        {
                            PyObjectTempKeeper1 cmp83;
                            if ( ( cmp83.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_token_type ) ), RICH_COMPARE_BOOL_EQ( cmp83.asObject0(), _python_var_TOKEN_BLOCK.asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 528 );
                            {
                                PyObjectTempKeeper1 call19;
                                _python_var_endbmatch.assign1( ( call19.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_endblock_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 529 );
                            {
                                PyObjectTempKeeper1 call21;
                                _python_var_pluralmatch.assign1( ( call21.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_plural_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 530 );
                            if ( CHECK_IF_TRUE( _python_var_endbmatch.asObject() ) )
                            {
                                frame_guard.setLineNumber( 531 );
                                if ( CHECK_IF_TRUE( _python_var_inplural.asObject() ) )
                                {
                                    frame_guard.setLineNumber( 532 );
                                    if ( CHECK_IF_TRUE( _python_var_message_context.asObject() ) )
                                    {
                                        frame_guard.setLineNumber( 533 );
                                        {
                                            PyObjectTempKeeper1 call23;
                                            PyObjectTempKeeper1 call25;
                                            PyObjectTempKeeper1 call30;
                                            PyObjectTempKeeper0 make_tuple27;
                                            PyObjectTempKeeper1 make_tuple28;
                                            DECREASE_REFCOUNT( ( call30.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call30.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_ced2fee752496953979c49a84acb9118, PyObjectTemporary( ( make_tuple27.assign( _python_var_message_context.asObject() ), make_tuple28.assign( ( call23.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), _python_var_singular.asObject() ) ) ), MAKE_TUPLE3( make_tuple27.asObject0(), make_tuple28.asObject0(), PyObjectTemporary( ( call25.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), _python_var_plural.asObject() ) ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        }
                                    }
                                    else
                                    {
                                        frame_guard.setLineNumber( 535 );
                                        {
                                            PyObjectTempKeeper1 call32;
                                            PyObjectTempKeeper1 call34;
                                            PyObjectTempKeeper1 call38;
                                            PyObjectTempKeeper1 make_tuple36;
                                            DECREASE_REFCOUNT( ( call38.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call38.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_fcd505a93346fa16ed3c1a3b4fd90113, PyObjectTemporary( ( make_tuple36.assign( ( call32.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), _python_var_singular.asObject() ) ) ), MAKE_TUPLE2( make_tuple36.asObject0(), PyObjectTemporary( ( call34.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call34.asObject0(), _python_var_plural.asObject() ) ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        }
                                    }
                                    {
                                        frame_guard.setLineNumber( 536 );
                                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_singular.asObject() ) );
                                        while( true )
                                        {
                                            {
                                                frame_guard.setLineNumber( 536 );
                                                PyObject *_tmp_unpack_4 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                                if ( _tmp_unpack_4 == NULL )
                                                {
                                                    break;
                                                }
                                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_4 );
                                                _python_var_part.assign0( _python_tmp_iter_value.asObject() );
                                            }
                                            frame_guard.setLineNumber( 537 );
                                            {
                                                PyObjectTempKeeper0 call40;
                                                PyObjectTempKeeper1 call43;
                                                DECREASE_REFCOUNT( ( call43.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call43.asObject0(), PyObjectTemporary( ( call40.assign( _mvar_django__utils__translation__trans_real_blankout.asObject0() ), CALL_FUNCTION_WITH_ARGS( call40.asObject0(), _python_var_part.asObject(), _python_unicode_plain_S ) ) ).asObject() ) ) );
                                            }

                                           CONSIDER_THREADING();
                                        }
                                    }
                                    {
                                        frame_guard.setLineNumber( 538 );
                                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_plural.asObject() ) );
                                        while( true )
                                        {
                                            {
                                                frame_guard.setLineNumber( 538 );
                                                PyObject *_tmp_unpack_5 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                                if ( _tmp_unpack_5 == NULL )
                                                {
                                                    break;
                                                }
                                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_5 );
                                                _python_var_part.assign0( _python_tmp_iter_value.asObject() );
                                            }
                                            frame_guard.setLineNumber( 539 );
                                            {
                                                PyObjectTempKeeper0 call45;
                                                PyObjectTempKeeper1 call48;
                                                DECREASE_REFCOUNT( ( call48.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call48.asObject0(), PyObjectTemporary( ( call45.assign( _mvar_django__utils__translation__trans_real_blankout.asObject0() ), CALL_FUNCTION_WITH_ARGS( call45.asObject0(), _python_var_part.asObject(), _python_unicode_plain_P ) ) ).asObject() ) ) );
                                            }

                                           CONSIDER_THREADING();
                                        }
                                    }
                                }
                                else
                                {
                                    frame_guard.setLineNumber( 541 );
                                    if ( CHECK_IF_TRUE( _python_var_message_context.asObject() ) )
                                    {
                                        frame_guard.setLineNumber( 542 );
                                        {
                                            PyObjectTempKeeper1 call50;
                                            PyObjectTempKeeper1 call54;
                                            PyObjectTempKeeper0 make_tuple52;
                                            DECREASE_REFCOUNT( ( call54.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call54.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_76ec9b4cfb5f9fd16687767a2e57f29c, PyObjectTemporary( ( make_tuple52.assign( _python_var_message_context.asObject() ), MAKE_TUPLE2( make_tuple52.asObject0(), PyObjectTemporary( ( call50.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call50.asObject0(), _python_var_singular.asObject() ) ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        }
                                    }
                                    else
                                    {
                                        frame_guard.setLineNumber( 544 );
                                        {
                                            PyObjectTempKeeper1 call56;
                                            PyObjectTempKeeper1 call58;
                                            DECREASE_REFCOUNT( ( call58.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call58.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_4ff0c738cc37142a6c3015fdc903e534, PyObjectTemporary( ( call56.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call56.asObject0(), _python_var_singular.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        }
                                    }
                                    {
                                        frame_guard.setLineNumber( 545 );
                                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_singular.asObject() ) );
                                        while( true )
                                        {
                                            {
                                                frame_guard.setLineNumber( 545 );
                                                PyObject *_tmp_unpack_6 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                                if ( _tmp_unpack_6 == NULL )
                                                {
                                                    break;
                                                }
                                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_6 );
                                                _python_var_part.assign0( _python_tmp_iter_value.asObject() );
                                            }
                                            frame_guard.setLineNumber( 546 );
                                            {
                                                PyObjectTempKeeper0 call60;
                                                PyObjectTempKeeper1 call63;
                                                DECREASE_REFCOUNT( ( call63.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call63.asObject0(), PyObjectTemporary( ( call60.assign( _mvar_django__utils__translation__trans_real_blankout.asObject0() ), CALL_FUNCTION_WITH_ARGS( call60.asObject0(), _python_var_part.asObject(), _python_unicode_plain_S ) ) ).asObject() ) ) );
                                            }

                                           CONSIDER_THREADING();
                                        }
                                    }
                                }
                                _python_var_message_context.assign0( Py_None );
                                _python_var_intrans.assign0( Py_False );
                                _python_var_inplural.assign0( Py_False );
                                _python_var_singular.assign1( PyList_New( 0 ) );
                                _python_var_plural.assign1( PyList_New( 0 ) );
                            }
                            else
                            {
                                frame_guard.setLineNumber( 552 );
                                if ( CHECK_IF_TRUE( _python_var_pluralmatch.asObject() ) )
                                {
                                    _python_var_inplural.assign0( Py_True );
                                }
                                else
                                {
                                    _python_var_filemsg.assign0( _python_unicode_empty );
                                    frame_guard.setLineNumber( 556 );
                                    if ( CHECK_IF_TRUE( _python_var_origin.asObject() ) )
                                    {
                                        frame_guard.setLineNumber( 557 );
                                        _python_var_filemsg.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_3fdbef5c3ea692ecc3c65fe20fa17fb9, _python_var_origin.asObject() ) );
                                    }
                                    frame_guard.setLineNumber( 558 );
                                    {
                                        PyObjectTempKeeper1 make_tuple65;
                                        PyObjectTempKeeper0 make_tuple66;
                                        {
                                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_SyntaxError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_8bdad1aeee0b02fdfe3d27fb2a0a2236, PyObjectTemporary( ( make_tuple65.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ), make_tuple66.assign( _python_var_filemsg.asObject() ), MAKE_TUPLE3( make_tuple65.asObject0(), make_tuple66.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_lineno ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                                    }
                                    }
                                }
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 559 );
                            {
                                PyObjectTempKeeper1 cmp81;
                                if ( ( cmp81.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_token_type ) ), RICH_COMPARE_BOOL_EQ( cmp81.asObject0(), _python_var_TOKEN_VAR.asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 560 );
                                if ( CHECK_IF_TRUE( _python_var_inplural.asObject() ) )
                                {
                                    frame_guard.setLineNumber( 561 );
                                    {
                                        PyObjectTempKeeper1 call68;
                                        DECREASE_REFCOUNT( ( call68.assign( LOOKUP_ATTRIBUTE( _python_var_plural.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call68.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_d1c54d665b7e45f024341d31b65467b9, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject() ) ).asObject() ) ) );
                                    }
                                }
                                else
                                {
                                    frame_guard.setLineNumber( 563 );
                                    {
                                        PyObjectTempKeeper1 call70;
                                        DECREASE_REFCOUNT( ( call70.assign( LOOKUP_ATTRIBUTE( _python_var_singular.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call70.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_d1c54d665b7e45f024341d31b65467b9, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject() ) ).asObject() ) ) );
                                    }
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 564 );
                                {
                                    PyObjectTempKeeper1 cmp79;
                                    if ( ( cmp79.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_token_type ) ), RICH_COMPARE_BOOL_EQ( cmp79.asObject0(), _python_var_TOKEN_TEXT.asObject() ) ) )
                                {
                                    frame_guard.setLineNumber( 565 );
                                    {
                                        PyObjectTempKeeper1 call72;
                                        _python_var_contents.assign1( ( call72.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_one_percent_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call72.asObject0(), _python_unicode_digest_e91a81cacf6ba680079a9fbfd32893eb, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject() ) ) );
                                    }
                                    frame_guard.setLineNumber( 566 );
                                    if ( CHECK_IF_TRUE( _python_var_inplural.asObject() ) )
                                    {
                                        frame_guard.setLineNumber( 567 );
                                        {
                                            PyObjectTempKeeper1 call75;
                                            DECREASE_REFCOUNT( ( call75.assign( LOOKUP_ATTRIBUTE( _python_var_plural.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call75.asObject0(), _python_var_contents.asObject() ) ) );
                                        }
                                    }
                                    else
                                    {
                                        frame_guard.setLineNumber( 569 );
                                        {
                                            PyObjectTempKeeper1 call77;
                                            DECREASE_REFCOUNT( ( call77.assign( LOOKUP_ATTRIBUTE( _python_var_singular.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call77.asObject0(), _python_var_contents.asObject() ) ) );
                                        }
                                    }
                                }
                                }
                            }
                            }
                        }
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 574 );
                        if ( ( _python_var_comment_lineno_cache.asObject() != Py_None ) )
                        {
                            frame_guard.setLineNumber( 575 );
                            {
                                PyObjectTempKeeper1 op85;
                                _python_var_cur_lineno.assign1( ( op85.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_lineno ) ), BINARY_OPERATION_ADD( op85.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject(), _python_str_plain_count ) ).asObject(), _python_unicode_chr_10 ) ).asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 576 );
                            {
                                PyObjectTempKeeper0 cmp103;
                                if ( ( cmp103.assign( _python_var_comment_lineno_cache.asObject() ), RICH_COMPARE_BOOL_EQ( cmp103.asObject0(), _python_var_cur_lineno.asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 577 );
                                {
                                    PyObjectTempKeeper1 cmp95;
                                    if ( ( cmp95.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_token_type ) ), RICH_COMPARE_BOOL_NE( cmp95.asObject0(), _python_var_TOKEN_COMMENT.asObject() ) ) )
                                {
                                    {
                                        frame_guard.setLineNumber( 578 );
                                        PyObject *_tmp_python_tmp_for_iterator;
                                        {
                                            PyObjectTempKeeper0 subscr87;
                                            _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( subscr87.assign( _python_var_lineno_comment_map.asObject() ), LOOKUP_SUBSCRIPT( subscr87.asObject0(), _python_var_comment_lineno_cache.asObject() ) ) ).asObject() );
                                        }
                                        PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                                        while( true )
                                        {
                                            {
                                                frame_guard.setLineNumber( 578 );
                                                PyObject *_tmp_unpack_7 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                                if ( _tmp_unpack_7 == NULL )
                                                {
                                                    break;
                                                }
                                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_7 );
                                                _python_var_c.assign0( _python_tmp_iter_value.asObject() );
                                            }
                                            _python_var_filemsg.assign0( _python_unicode_empty );
                                            frame_guard.setLineNumber( 580 );
                                            if ( CHECK_IF_TRUE( _python_var_origin.asObject() ) )
                                            {
                                                frame_guard.setLineNumber( 581 );
                                                _python_var_filemsg.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_3fdbef5c3ea692ecc3c65fe20fa17fb9, _python_var_origin.asObject() ) );
                                            }
                                            frame_guard.setLineNumber( 582 );
                                            {
                                                PyObjectTempKeeper0 make_tuple89;
                                                PyObjectTempKeeper0 make_tuple90;
                                                _python_var_warn_msg.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_91586722b86e8f5a3936d4ea8083012b, PyObjectTemporary( ( make_tuple89.assign( _python_var_c.asObject() ), make_tuple90.assign( _python_var_filemsg.asObject() ), MAKE_TUPLE3( make_tuple89.asObject0(), make_tuple90.asObject0(), _python_var_comment_lineno_cache.asObject() ) ) ).asObject() ) );
                                            }
                                            frame_guard.setLineNumber( 585 );
                                            {
                                                PyObjectTempKeeper1 call92;
                                                PyObjectTempKeeper0 call93;
                                                DECREASE_REFCOUNT( ( call92.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_warnings.asObject0(), _python_str_plain_warn ) ), call93.assign( _python_var_warn_msg.asObject() ), CALL_FUNCTION_WITH_ARGS( call92.asObject0(), call93.asObject0(), _mvar_django__utils__translation__trans_real_TranslatorCommentWarning.asObject0() ) ) );
                                            }

                                           CONSIDER_THREADING();
                                        }
                                    }
                                    frame_guard.setLineNumber( 586 );
                                    {
                                            PyObject *tmp_subscribed = _python_var_lineno_comment_map.asObject();
                                            SET_SUBSCRIPT( PyObjectTemporary( PyList_New( 0 ) ).asObject(), tmp_subscribed, _python_var_comment_lineno_cache.asObject() );
                                    }
                                }
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 588 );
                                {
                                    PyObjectTempKeeper1 call101;
                                    PyObjectTempKeeper1 call99;
                                    PyObjectTempKeeper0 subscr97;
                                    DECREASE_REFCOUNT( ( call101.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call101.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_9bc6a43441f1c8ec772b48b37615f16a, PyObjectTemporary( ( call99.assign( LOOKUP_ATTRIBUTE( _python_unicode_digest_c02f226ecf3f20e24e102b8f4809dc1b, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call99.asObject0(), PyObjectTemporary( ( subscr97.assign( _python_var_lineno_comment_map.asObject() ), LOOKUP_SUBSCRIPT( subscr97.asObject0(), _python_var_comment_lineno_cache.asObject() ) ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                }
                            }
                            }
                            _python_var_comment_lineno_cache.assign0( Py_None );
                        }
                        frame_guard.setLineNumber( 591 );
                        {
                            PyObjectTempKeeper1 cmp162;
                            if ( ( cmp162.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_token_type ) ), RICH_COMPARE_BOOL_EQ( cmp162.asObject0(), _python_var_TOKEN_BLOCK.asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 592 );
                            {
                                PyObjectTempKeeper1 call105;
                                _python_var_imatch.assign1( ( call105.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_inline_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call105.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 593 );
                            {
                                PyObjectTempKeeper1 call107;
                                _python_var_bmatch.assign1( ( call107.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_block_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call107.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 594 );
                            {
                                PyObjectTempKeeper1 call109;
                                _python_var_cmatches.assign1( ( call109.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_constant_re.asObject0(), _python_str_plain_findall ) ), CALL_FUNCTION_WITH_ARGS( call109.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 595 );
                            if ( CHECK_IF_TRUE( _python_var_imatch.asObject() ) )
                            {
                                frame_guard.setLineNumber( 596 );
                                _python_var_g.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_imatch.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) );
                                frame_guard.setLineNumber( 597 );
                                if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_g.asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_chr_34 ) )
                                {
                                    frame_guard.setLineNumber( 598 );
                                    _python_var_g.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_g.asObject(), _python_str_plain_strip ) ).asObject(), _python_unicode_chr_34 ) );
                                }
                                else
                                {
                                    frame_guard.setLineNumber( 599 );
                                    if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_g.asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_chr_39 ) )
                                    {
                                        frame_guard.setLineNumber( 600 );
                                        _python_var_g.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_g.asObject(), _python_str_plain_strip ) ).asObject(), _python_unicode_chr_39 ) );
                                    }
                                }
                                frame_guard.setLineNumber( 601 );
                                {
                                    PyObjectTempKeeper1 call111;
                                    _python_var_g.assign1( ( call111.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_one_percent_re.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call111.asObject0(), _python_unicode_digest_e91a81cacf6ba680079a9fbfd32893eb, _python_var_g.asObject() ) ) );
                                }
                                frame_guard.setLineNumber( 602 );
                                if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_imatch.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_2 ) ).asObject() ) )
                                {
                                    frame_guard.setLineNumber( 604 );
                                    {
                                        PyObjectTempKeeper1 call114;
                                        _python_var_context_match.assign1( ( call114.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_context_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call114.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_imatch.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_2 ) ).asObject() ) ) );
                                    }
                                    frame_guard.setLineNumber( 605 );
                                    _python_var_message_context.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_context_match.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) );
                                    frame_guard.setLineNumber( 606 );
                                    if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_message_context.asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_chr_34 ) )
                                    {
                                        frame_guard.setLineNumber( 607 );
                                        _python_var_message_context.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_message_context.asObject(), _python_str_plain_strip ) ).asObject(), _python_unicode_chr_34 ) );
                                    }
                                    else
                                    {
                                        frame_guard.setLineNumber( 608 );
                                        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_message_context.asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_chr_39 ) )
                                        {
                                            frame_guard.setLineNumber( 609 );
                                            _python_var_message_context.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_message_context.asObject(), _python_str_plain_strip ) ).asObject(), _python_unicode_chr_39 ) );
                                        }
                                    }
                                    frame_guard.setLineNumber( 610 );
                                    {
                                        PyObjectTempKeeper1 call118;
                                        PyObjectTempKeeper0 make_tuple116;
                                        DECREASE_REFCOUNT( ( call118.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call118.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_76ec9b4cfb5f9fd16687767a2e57f29c, PyObjectTemporary( ( make_tuple116.assign( _python_var_message_context.asObject() ), MAKE_TUPLE2( make_tuple116.asObject0(), _python_var_g.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                    }
                                    _python_var_message_context.assign0( Py_None );
                                }
                                else
                                {
                                    frame_guard.setLineNumber( 613 );
                                    {
                                        PyObjectTempKeeper1 call120;
                                        DECREASE_REFCOUNT( ( call120.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call120.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_4ff0c738cc37142a6c3015fdc903e534, _python_var_g.asObject() ) ).asObject() ) ) );
                                    }
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 614 );
                                if ( CHECK_IF_TRUE( _python_var_bmatch.asObject() ) )
                                {
                                    {
                                        frame_guard.setLineNumber( 615 );
                                        PyObject *_tmp_python_tmp_for_iterator;
                                        {
                                            PyObjectTempKeeper1 call122;
                                            _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call122.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_constant_re.asObject0(), _python_str_plain_findall ) ), CALL_FUNCTION_WITH_ARGS( call122.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject() ) ) ).asObject() );
                                        }
                                        PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                                        while( true )
                                        {
                                            {
                                                frame_guard.setLineNumber( 615 );
                                                PyObject *_tmp_unpack_8 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                                if ( _tmp_unpack_8 == NULL )
                                                {
                                                    break;
                                                }
                                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_8 );
                                                _python_var_fmatch.assign0( _python_tmp_iter_value.asObject() );
                                            }
                                            frame_guard.setLineNumber( 616 );
                                            {
                                                PyObjectTempKeeper1 call124;
                                                DECREASE_REFCOUNT( ( call124.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call124.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_0cc72c33af7d899566f0d34fcd9d905f, _python_var_fmatch.asObject() ) ).asObject() ) ) );
                                            }

                                           CONSIDER_THREADING();
                                        }
                                    }
                                    frame_guard.setLineNumber( 617 );
                                    if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_bmatch.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) ).asObject() ) )
                                    {
                                        frame_guard.setLineNumber( 619 );
                                        {
                                            PyObjectTempKeeper1 call126;
                                            _python_var_context_match.assign1( ( call126.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_context_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call126.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_bmatch.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) ).asObject() ) ) );
                                        }
                                        frame_guard.setLineNumber( 620 );
                                        _python_var_message_context.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_context_match.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) );
                                        frame_guard.setLineNumber( 621 );
                                        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_message_context.asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_chr_34 ) )
                                        {
                                            frame_guard.setLineNumber( 622 );
                                            _python_var_message_context.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_message_context.asObject(), _python_str_plain_strip ) ).asObject(), _python_unicode_chr_34 ) );
                                        }
                                        else
                                        {
                                            frame_guard.setLineNumber( 623 );
                                            if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_message_context.asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_chr_39 ) )
                                            {
                                                frame_guard.setLineNumber( 624 );
                                                _python_var_message_context.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_message_context.asObject(), _python_str_plain_strip ) ).asObject(), _python_unicode_chr_39 ) );
                                            }
                                        }
                                    }
                                    _python_var_intrans.assign0( Py_True );
                                    _python_var_inplural.assign0( Py_False );
                                    _python_var_singular.assign1( PyList_New( 0 ) );
                                    _python_var_plural.assign1( PyList_New( 0 ) );
                                }
                                else
                                {
                                    frame_guard.setLineNumber( 629 );
                                    if ( CHECK_IF_TRUE( _python_var_cmatches.asObject() ) )
                                    {
                                        {
                                            frame_guard.setLineNumber( 630 );
                                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_cmatches.asObject() ) );
                                            while( true )
                                            {
                                                {
                                                    frame_guard.setLineNumber( 630 );
                                                    PyObject *_tmp_unpack_9 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                                    if ( _tmp_unpack_9 == NULL )
                                                    {
                                                        break;
                                                    }
                                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_9 );
                                                    _python_var_cmatch.assign0( _python_tmp_iter_value.asObject() );
                                                }
                                                frame_guard.setLineNumber( 631 );
                                                {
                                                    PyObjectTempKeeper1 call128;
                                                    DECREASE_REFCOUNT( ( call128.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call128.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_0cc72c33af7d899566f0d34fcd9d905f, _python_var_cmatch.asObject() ) ).asObject() ) ) );
                                                }

                                               CONSIDER_THREADING();
                                            }
                                        }
                                    }
                                    else
                                    {
                                        frame_guard.setLineNumber( 632 );
                                        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject(), _python_unicode_plain_comment ) )
                                        {
                                            _python_var_incomment.assign0( Py_True );
                                        }
                                        else
                                        {
                                            frame_guard.setLineNumber( 635 );
                                            {
                                                PyObjectTempKeeper0 call130;
                                                PyObjectTempKeeper1 call133;
                                                DECREASE_REFCOUNT( ( call133.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call133.asObject0(), PyObjectTemporary( ( call130.assign( _mvar_django__utils__translation__trans_real_blankout.asObject0() ), CALL_FUNCTION_WITH_ARGS( call130.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject(), _python_unicode_plain_B ) ) ).asObject() ) ) );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 636 );
                            {
                                PyObjectTempKeeper1 cmp160;
                                if ( ( cmp160.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_token_type ) ), RICH_COMPARE_BOOL_EQ( cmp160.asObject0(), _python_var_TOKEN_VAR.asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 637 );
                                _python_var_parts.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_124 ) );
                                frame_guard.setLineNumber( 638 );
                                {
                                    PyObjectTempKeeper1 call135;
                                    _python_var_cmatch.assign1( ( call135.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_constant_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call135.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_parts.asObject(), _python_int_0, 0 ) ).asObject() ) ) );
                                }
                                frame_guard.setLineNumber( 639 );
                                if ( CHECK_IF_TRUE( _python_var_cmatch.asObject() ) )
                                {
                                    frame_guard.setLineNumber( 640 );
                                    {
                                        PyObjectTempKeeper1 call137;
                                        DECREASE_REFCOUNT( ( call137.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call137.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_0cc72c33af7d899566f0d34fcd9d905f, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_cmatch.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) ).asObject() ) ).asObject() ) ) );
                                    }
                                }
                                {
                                    frame_guard.setLineNumber( 641 );
                                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_parts.asObject(), 1, PY_SSIZE_T_MAX ) ).asObject() ) );
                                    while( true )
                                    {
                                        {
                                            frame_guard.setLineNumber( 641 );
                                            PyObject *_tmp_unpack_10 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                            if ( _tmp_unpack_10 == NULL )
                                            {
                                                break;
                                            }
                                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_10 );
                                            _python_var_p.assign0( _python_tmp_iter_value.asObject() );
                                        }
                                        frame_guard.setLineNumber( 642 );
                                        if ( RICH_COMPARE_BOOL_GE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_p.asObject(), _python_str_plain_find ) ).asObject(), _python_unicode_digest_fec20072d4c914e4699ddd1fb55e7aa5 ) ).asObject(), _python_int_0 ) )
                                        {
                                            frame_guard.setLineNumber( 643 );
                                            {
                                                PyObjectTempKeeper1 call139;
                                                DECREASE_REFCOUNT( ( call139.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call139.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_d4ac1387ebf94213a7a0a4a571390d03, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_p.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_58, _python_int_pos_1 ) ).asObject(), _python_int_pos_1, 1 ) ).asObject() ) ).asObject() ) ) );
                                            }
                                        }
                                        else
                                        {
                                            frame_guard.setLineNumber( 645 );
                                            {
                                                PyObjectTempKeeper0 call141;
                                                PyObjectTempKeeper1 call144;
                                                DECREASE_REFCOUNT( ( call144.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call144.asObject0(), PyObjectTemporary( ( call141.assign( _mvar_django__utils__translation__trans_real_blankout.asObject0() ), CALL_FUNCTION_WITH_ARGS( call141.asObject0(), _python_var_p.asObject(), _python_unicode_plain_F ) ) ).asObject() ) ) );
                                            }
                                        }

                                       CONSIDER_THREADING();
                                    }
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 646 );
                                {
                                    PyObjectTempKeeper1 cmp158;
                                    if ( ( cmp158.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_token_type ) ), RICH_COMPARE_BOOL_EQ( cmp158.asObject0(), _python_var_TOKEN_COMMENT.asObject() ) ) )
                                {
                                    frame_guard.setLineNumber( 647 );
                                    {
                                        PyObjectTempKeeper1 call151;
                                        if ( CHECK_IF_TRUE( PyObjectTemporary( ( call151.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject(), _python_str_plain_lstrip ) ).asObject() ) ).asObject(), _python_str_plain_startswith ) ), CALL_FUNCTION_WITH_ARGS( call151.asObject0(), _python_var_TRANSLATOR_COMMENT_MARK.asObject() ) ) ).asObject() ) )
                                    {
                                        frame_guard.setLineNumber( 648 );
                                        {
                                            PyObjectTempKeeper1 call146;
                                            PyObjectTempKeeper1 call149;
                                            DECREASE_REFCOUNT( ( call149.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call146.assign( LOOKUP_ATTRIBUTE( _python_var_lineno_comment_map.asObject(), _python_str_plain_setdefault ) ), CALL_FUNCTION_WITH_ARGS( call146.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_lineno ) ).asObject(), PyObjectTemporary( PyList_New( 0 ) ).asObject() ) ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call149.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject() ) ) );
                                        }
                                        frame_guard.setLineNumber( 650 );
                                        _python_var_comment_lineno_cache.assign1( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_lineno ) );
                                    }
                                    }
                                }
                                else
                                {
                                    frame_guard.setLineNumber( 652 );
                                    {
                                        PyObjectTempKeeper0 call153;
                                        PyObjectTempKeeper1 call156;
                                        DECREASE_REFCOUNT( ( call156.assign( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call156.asObject0(), PyObjectTemporary( ( call153.assign( _mvar_django__utils__translation__trans_real_blankout.asObject0() ), CALL_FUNCTION_WITH_ARGS( call153.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_contents ) ).asObject(), _python_unicode_plain_X ) ) ).asObject() ) ) );
                                    }
                                }
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
        frame_guard.setLineNumber( 653 );
        {
            PyObjectTempKeeper0 call164;
            return ( call164.assign( _mvar_django__utils__translation__trans_real_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call164.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_out.asObject(), _python_str_plain_getvalue ) ).asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_origin.updateLocalsDict( _python_var_src.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_parts.updateLocalsDict( _python_var_cmatch.updateLocalsDict( _python_var_fmatch.updateLocalsDict( _python_var_context_match.updateLocalsDict( _python_var_g.updateLocalsDict( _python_var_cmatches.updateLocalsDict( _python_var_bmatch.updateLocalsDict( _python_var_imatch.updateLocalsDict( _python_var_warn_msg.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_cur_lineno.updateLocalsDict( _python_var_contents.updateLocalsDict( _python_var_filemsg.updateLocalsDict( _python_var_part.updateLocalsDict( _python_var_pluralmatch.updateLocalsDict( _python_var_endbmatch.updateLocalsDict( _python_var_line.updateLocalsDict( _python_var_lineno.updateLocalsDict( _python_var_translators_comment_start.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_comment_lineno_cache.updateLocalsDict( _python_var_lineno_comment_map.updateLocalsDict( _python_var_comment.updateLocalsDict( _python_var_incomment.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( _python_var_inplural.updateLocalsDict( _python_var_intrans.updateLocalsDict( _python_var_message_context.updateLocalsDict( _python_var_out.updateLocalsDict( _python_var_TRANSLATOR_COMMENT_MARK.updateLocalsDict( _python_var_TOKEN_COMMENT.updateLocalsDict( _python_var_TOKEN_BLOCK.updateLocalsDict( _python_var_TOKEN_VAR.updateLocalsDict( _python_var_TOKEN_TEXT.updateLocalsDict( _python_var_Lexer.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_26_templatize_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_26_templatize_of_module_django__utils__translation__trans_real );
           frame_function_26_templatize_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_26_templatize_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_src = NULL;
    PyObject *_python_par_origin = NULL;
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
                PyErr_Format( PyExc_TypeError, "templatize() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_src == key )
            {
                if (unlikely( _python_par_src ))
                {
                    PyErr_Format( PyExc_TypeError, "templatize() got multiple values for keyword argument 'src'" );
                    goto error_exit;
                }

                _python_par_src = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_origin == key )
            {
                if (unlikely( _python_par_origin ))
                {
                    PyErr_Format( PyExc_TypeError, "templatize() got multiple values for keyword argument 'origin'" );
                    goto error_exit;
                }

                _python_par_origin = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_src, key ) )
            {
                if (unlikely( _python_par_src ))
                {
                    PyErr_Format( PyExc_TypeError, "templatize() got multiple values for keyword argument 'src'" );
                    goto error_exit;
                }

                _python_par_src = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_origin, key ) )
            {
                if (unlikely( _python_par_origin ))
                {
                    PyErr_Format( PyExc_TypeError, "templatize() got multiple values for keyword argument 'origin'" );
                    goto error_exit;
                }

                _python_par_origin = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "templatize() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "templatize() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "templatize() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "templatize() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "templatize() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "templatize() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "templatize() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "templatize() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "templatize() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "templatize() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "templatize() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "templatize() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "templatize() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_src != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "templatize() got multiple values for keyword argument 'src'" );
             goto error_exit;
         }

        _python_par_src = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_origin != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "templatize() got multiple values for keyword argument 'origin'" );
             goto error_exit;
         }

        _python_par_origin = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_origin == NULL )
    {
        _python_par_origin = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_origin );
    }


    return impl_function_26_templatize_of_module_django__utils__translation__trans_real( self, _python_par_src, _python_par_origin );

error_exit:;

    Py_XDECREF( _python_par_src );
    Py_XDECREF( _python_par_origin );

    return NULL;
}

static PyObject *dparse_function_26_templatize_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_26_templatize_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_26_templatize_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_lang_string )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_lang_string( _python_str_plain_lang_string, _python_par_lang_string );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );
    PyObjectLocalVariable _python_var_pieces( _python_str_plain_pieces );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_first( _python_str_plain_first );
    PyObjectLocalVariable _python_var_lang( _python_str_plain_lang );
    PyObjectLocalVariable _python_var_priority( _python_str_plain_priority );

    // Actual function code.
    _python_var_result.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real );
        }

        frame_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_d6ceddcee8f93caf79106b917a34502a, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 663 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_pieces.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_accept_language_re.asObject0(), _python_str_plain_split ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_lang_string.asObject() ) ) );
        }
        frame_guard.setLineNumber( 664 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_pieces.asObject(), _python_int_neg_1, -1 ) ).asObject() ) )
        {
            return PyList_New( 0 );
        }
        {
            frame_guard.setLineNumber( 666 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_RANGE3( _python_int_0, PyObjectTemporary( BINARY_OPERATION_SUB( PyObjectTemporary( BUILTIN_LEN( _python_var_pieces.asObject() ) ).asObject(), _python_int_pos_1 ) ).asObject(), _python_int_pos_3 ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 666 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_i.assign0( _python_tmp_iter_value.asObject() );
                }
                {
                    frame_guard.setLineNumber( 667 );
                    PyObject *_tmp_python_tmp_source_iter;
                    {
                        PyObjectTempKeeper0 slice3;
                        PyObjectTempKeeper0 slice4;
                        _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( slice3.assign( _python_var_pieces.asObject() ), slice4.assign( _python_var_i.asObject() ), LOOKUP_SLICE( slice3.asObject0(), slice4.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_i.asObject(), _python_int_pos_3 ) ).asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                    _python_var_first.assign0( _python_tmp_element_1.asObject() );
                    _python_var_lang.assign0( _python_tmp_element_2.asObject() );
                    _python_var_priority.assign0( _python_tmp_element_3.asObject() );
                }
                frame_guard.setLineNumber( 668 );
                if ( CHECK_IF_TRUE( _python_var_first.asObject() ) )
                {
                    return PyList_New( 0 );
                }
                frame_guard.setLineNumber( 670 );
                if ( CHECK_IF_TRUE( _python_var_priority.asObject() ) )
                {
                    frame_guard.setLineNumber( 671 );
                    _python_var_priority.assign1( TO_FLOAT( _python_var_priority.asObject() ) );
                }
                frame_guard.setLineNumber( 672 );
                if ( (!( CHECK_IF_TRUE( _python_var_priority.asObject() ) )) )
                {
                    _python_var_priority.assign0( _python_float_1_0 );
                }
                frame_guard.setLineNumber( 674 );
                {
                    PyObjectTempKeeper1 call8;
                    PyObjectTempKeeper0 make_tuple6;
                    DECREASE_REFCOUNT( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( ( make_tuple6.assign( _python_var_lang.asObject() ), MAKE_TUPLE2( make_tuple6.asObject0(), _python_var_priority.asObject() ) ) ).asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 675 );
        DECREASE_REFCOUNT( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_sort ) ).asObject(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT2( PyObjectTemporary( MAKE_FUNCTION_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real(  ) ).asObject(), _python_str_plain_key, Py_True, _python_str_plain_reverse ) ).asObject() ) );
        frame_guard.setLineNumber( 676 );
        return _python_var_result.asObject1();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_lang_string.updateLocalsDict( _python_var_priority.updateLocalsDict( _python_var_lang.updateLocalsDict( _python_var_first.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_pieces.updateLocalsDict( _python_var_result.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real );
           frame_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_lang_string = NULL;
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
                PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_lang_string == key )
            {
                if (unlikely( _python_par_lang_string ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() got multiple values for keyword argument 'lang_string'" );
                    goto error_exit;
                }

                _python_par_lang_string = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_lang_string, key ) )
            {
                if (unlikely( _python_par_lang_string ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() got multiple values for keyword argument 'lang_string'" );
                    goto error_exit;
                }

                _python_par_lang_string = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "parse_accept_lang_header() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_lang_string != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_accept_lang_header() got multiple values for keyword argument 'lang_string'" );
             goto error_exit;
         }

        _python_par_lang_string = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real( self, _python_par_lang_string );

error_exit:;

    Py_XDECREF( _python_par_lang_string );

    return NULL;
}

static PyObject *dparse_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject *_python_par_k )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_k( _python_str_plain_k, _python_par_k );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real ) )
    {
        if ( frame_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real );
        }

        frame_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_e8f65b5bcba67dec448bae342651b302, _module_django__utils__translation__trans_real );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 675 );
        return LOOKUP_SUBSCRIPT_CONST( _python_var_k.asObject(), _python_int_pos_1, 1 );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_k.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real );
           frame_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_k = NULL;
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
            if ( found == false && _python_str_plain_k == key )
            {
                if (unlikely( _python_par_k ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'k'" );
                    goto error_exit;
                }

                _python_par_k = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_k, key ) )
            {
                if (unlikely( _python_par_k ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'k'" );
                    goto error_exit;
                }

                _python_par_k = value;

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
         if (unlikely( _python_par_k != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'k'" );
             goto error_exit;
         }

        _python_par_k = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real( self, _python_par_k );

error_exit:;

    Py_XDECREF( _python_par_k );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_catalog_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_catalog_of_module_django__utils__translation__trans_real,
        dparse_function_10_catalog_of_module_django__utils__translation__trans_real,
        _python_str_plain_catalog,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_32276c332f9391c77bbe1ceb120ed8e0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_11684b252ab0ea91aed8967e273e0fb7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_do_translate_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_do_translate_of_module_django__utils__translation__trans_real,
        dparse_function_11_do_translate_of_module_django__utils__translation__trans_real,
        _python_str_plain_do_translate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8c6c4a99e5887f4c69690ef57d686528,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_e035c6f59756673959bfba3a541f6059
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_gettext_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_gettext_of_module_django__utils__translation__trans_real,
        dparse_function_12_gettext_of_module_django__utils__translation__trans_real,
        _python_str_plain_gettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0551104e0b3297a81c1db2cc5daa22d1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_33b45007dc779056ab9171538d1d55aa
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_ugettext_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_ugettext_of_module_django__utils__translation__trans_real,
        dparse_function_13_ugettext_of_module_django__utils__translation__trans_real,
        _python_str_plain_ugettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0c2ec8535f0ecc50db0b675c553e113c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_pgettext_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_pgettext_of_module_django__utils__translation__trans_real,
        dparse_function_14_pgettext_of_module_django__utils__translation__trans_real,
        _python_str_plain_pgettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_952729fa6666a9122995f63fc40d08f7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_gettext_noop_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_gettext_noop_of_module_django__utils__translation__trans_real,
        dparse_function_15_gettext_noop_of_module_django__utils__translation__trans_real,
        _python_str_plain_gettext_noop,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6c0ff476296aae33026b9f20ccc98599,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_e44bbf8dc5a6bc8a08b9c31975263032
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_do_ntranslate_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_do_ntranslate_of_module_django__utils__translation__trans_real,
        dparse_function_16_do_ntranslate_of_module_django__utils__translation__trans_real,
        _python_str_plain_do_ntranslate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5c01a92644bcd5fe1db5595e65e65ea4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_ngettext_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_ngettext_of_module_django__utils__translation__trans_real,
        dparse_function_17_ngettext_of_module_django__utils__translation__trans_real,
        _python_str_plain_ngettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f1c023096fc81acee18dc63304e1d343,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_bb3c9853a1f24f858bcb2423f073661a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18_ungettext_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18_ungettext_of_module_django__utils__translation__trans_real,
        dparse_function_18_ungettext_of_module_django__utils__translation__trans_real,
        _python_str_plain_ungettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bdc38b16208876e9c8a81d456ef09751,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_2335d0622ae30beb63d490d2b82acb57
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_19_npgettext_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_19_npgettext_of_module_django__utils__translation__trans_real,
        dparse_function_19_npgettext_of_module_django__utils__translation__trans_real,
        _python_str_plain_npgettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d1d01302c53ca4591b3e35e648658d5e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real,
        dparse_function_1___init___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5ad4b276b83dae4f2507f5161a1334f3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( PyObjectSharedLocalVariable &python_closure_globalpath, PyObjectSharedLocalVariable &python_closure_settings )
{
    struct _context_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *_python_context = new _context_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_globalpath.shareWith( python_closure_globalpath );
    _python_context->python_closure_settings.shareWith( python_closure_settings );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real,
        dparse_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real,
        _python_str_plain__fetch,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9e39e47e42c3adaaa90a4580f59b06ee,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None,
        _python_context,
        _context_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( PyObjectSharedLocalVariable &python_closure_lang, PyObjectSharedLocalVariable &python_closure_loc )
{
    struct _context_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *_python_context = new _context_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_lang.shareWith( python_closure_lang );
    _python_context->python_closure_loc.shareWith( python_closure_loc );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real,
        dparse_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real,
        _python_str_plain__translation,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1b5f926ceb12494727f0c11f4627e622,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None,
        _python_context,
        _context_function_1__translation_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_to_locale_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_to_locale_of_module_django__utils__translation__trans_real,
        dparse_function_1_to_locale_of_module_django__utils__translation__trans_real,
        _python_str_plain_to_locale,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ce4d8a8b36978aa9fcc55a40f8b4b9ee,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_dcf6e5900098c6260bcdecc6c9ac2c54
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_20_all_locale_paths_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_20_all_locale_paths_of_module_django__utils__translation__trans_real,
        dparse_function_20_all_locale_paths_of_module_django__utils__translation__trans_real,
        _python_str_plain_all_locale_paths,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a9b46ed8d056711a7347c0cdf5f40cd6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_43c3e3f34fa9e820753e0622668f310a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_21_check_for_language_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_21_check_for_language_of_module_django__utils__translation__trans_real,
        dparse_function_21_check_for_language_of_module_django__utils__translation__trans_real,
        _python_str_plain_check_for_language,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_37e333f137c41bb925650744d3a678a3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_2c5b6f7a74953c73b80210777bcc2d73
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real,
        dparse_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real,
        _python_str_plain_get_supported_language_variant,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7a50f5dac1a667d840d91131f6993985,
        INCREASE_REFCOUNT( _python_tuple_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_ef4bcd2e3b01784367e28a3609b766f5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_23_get_language_from_path_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_23_get_language_from_path_of_module_django__utils__translation__trans_real,
        dparse_function_23_get_language_from_path_of_module_django__utils__translation__trans_real,
        _python_str_plain_get_language_from_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e804e994db7542901f162f09c62f9c72,
        INCREASE_REFCOUNT( _python_tuple_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_f3d7c54e01a28ed24d00260d6dc50dc1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_24_get_language_from_request_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_24_get_language_from_request_of_module_django__utils__translation__trans_real,
        dparse_function_24_get_language_from_request_of_module_django__utils__translation__trans_real,
        _python_str_plain_get_language_from_request,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e90d4e89134b18651fc5b577f13cf295,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_6e420c694fadf2f007bee4d251c80f7a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_25_blankout_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_25_blankout_of_module_django__utils__translation__trans_real,
        dparse_function_25_blankout_of_module_django__utils__translation__trans_real,
        _python_str_plain_blankout,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_353d2d00682f60381fff88361fa868bd,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_c7e7cc280ff6a4d1beab872ed49aad30
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_26_templatize_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_26_templatize_of_module_django__utils__translation__trans_real,
        dparse_function_26_templatize_of_module_django__utils__translation__trans_real,
        _python_str_plain_templatize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_04e4e8c4c5d261d5cde907790872895c,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_19bfafd2d88e881fa251de48c6789b51
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real,
        dparse_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real,
        _python_str_plain_parse_accept_lang_header,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d6ceddcee8f93caf79106b917a34502a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_5eeb6b5c763198ddbefb578b946776a4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real,
        dparse_function_2_merge_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real,
        _python_str_plain_merge,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b8d893e3114e6b8db4ca2a7494a13afc,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_to_language_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_to_language_of_module_django__utils__translation__trans_real,
        dparse_function_2_to_language_of_module_django__utils__translation__trans_real,
        _python_str_plain_to_language,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_305ca03a58fdfef3723b3518e74c8cb8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_3f0141c5650f0731983286a09f81f689
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real,
        dparse_function_3_set_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real,
        _python_str_plain_set_language,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7f21ea965596518cba99e2e9e57f35e9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real( PyObjectSharedLocalVariable &python_closure__translation, PyObjectSharedLocalVariable &python_closure_res )
{
    struct _context_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t *_python_context = new _context_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure__translation.shareWith( python_closure__translation );
    _python_context->python_closure_res.shareWith( python_closure_res );

    PyObject *result = Nuitka_Function_New(
        fparse_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real,
        dparse_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real,
        _python_str_plain__merge,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_194b2b532905f28771be7565399bb952,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None,
        _python_context,
        _context_function_4__merge_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real,
        dparse_function_4_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real,
        _python_str_plain_language,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2a46aae140f354a27fd274bc497738da,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_translation_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_translation_of_module_django__utils__translation__trans_real,
        dparse_function_4_translation_of_module_django__utils__translation__trans_real,
        _python_str_plain_translation,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7ae61f9f4d34be8386ff1db70e727986,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_1c3932deb88c2baabdf3c028abe32c3a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_activate_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_activate_of_module_django__utils__translation__trans_real,
        dparse_function_5_activate_of_module_django__utils__translation__trans_real,
        _python_str_plain_activate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b24b68bc8cf3d98d69d21875353f060f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_50ff0c9b88405bf5d65c53c8d0eae8e1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real,
        dparse_function_5_to_language_of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real,
        _python_str_plain_to_language,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8fd104110f0cdff788521f4753d733e6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real,
        dparse_function_6___repr___of_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fa16c66b6093c1fb4e13d5d73088a794,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_deactivate_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_deactivate_of_module_django__utils__translation__trans_real,
        dparse_function_6_deactivate_of_module_django__utils__translation__trans_real,
        _python_str_plain_deactivate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_132eb2d9d080acfc9dcdf9659631a3c7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_7ce84858bc58ee7bd578f1fc98279a89
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_deactivate_all_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_deactivate_all_of_module_django__utils__translation__trans_real,
        dparse_function_7_deactivate_all_of_module_django__utils__translation__trans_real,
        _python_str_plain_deactivate_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5db1dee8aed089c02bd1d6ed3849ae47,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_72bcb7745b450c5d85b7fc00782c3e2e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_get_language_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_get_language_of_module_django__utils__translation__trans_real,
        dparse_function_8_get_language_of_module_django__utils__translation__trans_real,
        _python_str_plain_get_language,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_85f8813bbde2f6fca6332014a77cd028,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_6c230fd03766abbac1bb310d5330bd6d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_get_language_bidi_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_get_language_bidi_of_module_django__utils__translation__trans_real,
        dparse_function_9_get_language_bidi_of_module_django__utils__translation__trans_real,
        _python_str_plain_get_language_bidi,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ee34851a01bc85984f4b040630153f1b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        _python_unicode_digest_dee24027e7287e5971958e0998a4150e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real,
        dparse_lambda_1_lambda_of_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e8f65b5bcba67dec448bae342651b302,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real,
        dparse_lambda_2_lambda_of_function_1__fetch_of_function_4_translation_of_module_django__utils__translation__trans_real,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_40f4019b195dceca0f3698b28d713c37,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_real,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.translation.trans_real",   /* m_name */
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

MOD_INIT_DECL( django__utils__translation__trans_real )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__translation__trans_real );
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

    // puts( "in initdjango__utils__translation__trans_real" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__translation__trans_real = Py_InitModule4(
        "django.utils.translation.trans_real",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__translation__trans_real = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__translation__trans_real = (PyDictObject *)((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict;

    assertObject( _module_django__utils__translation__trans_real );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_d48bd08a0dad4060851e17353df24774, _module_django__utils__translation__trans_real );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__translation__trans_real );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__translation__trans_real != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_b06125cb597079f974de7d23ad38861d );
    UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_7842753675ad0f0534e5a34c68d857f3 );
    PyFrameObject *frame_module_django__utils__translation__trans_real = MAKE_FRAME( _codeobj_10ae981ef01fe5a28b33f9e05baad817, _module_django__utils__translation__trans_real );

    FrameGuard frame_guard( frame_module_django__utils__translation__trans_real );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__translation__trans_real ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_locale, IMPORT_MODULE( _python_str_plain_locale, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_re, IMPORT_MODULE( _python_str_plain_re, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_gettext_module, IMPORT_MODULE( _python_str_plain_gettext, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_local, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_threading, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_local_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_local ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_warnings, IMPORT_MODULE( _python_str_plain_warnings, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_import_module, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_4fc502edf9b4c184659c220d993c01d3, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_import_module_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_module ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_SortedDict, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_36fff8b06be9a51fbe6af4a1029911c0, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_SortedDict_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SortedDict ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_force_str, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_force_str_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_str ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_force_str_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_memoize, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_memoize_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_memoize ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_upath, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_88846ba615a71fb6c28246da44176ee3, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_upath_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_upath ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_mark_safe, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_33422e2c698707541621bf8ab31ea849, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_mark_safe_str_plain_SafeData_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_mark_safe ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_SafeData, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_33422e2c698707541621bf8ab31ea849, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_mark_safe_str_plain_SafeData_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SafeData ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 19 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_StringIO, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_772afb12ed313dc4d07194ad296c647d, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_StringIO_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_StringIO ) );
        frame_guard.setLineNumber( 20 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_TranslatorCommentWarning, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict, _python_list_str_plain_TranslatorCommentWarning_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TranslatorCommentWarning ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain__translations, PyDict_New() );
        frame_guard.setLineNumber( 26 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain__active, CALL_FUNCTION_NO_ARGS( _mvar_django__utils__translation__trans_real_local.asObject0() ) );
        UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain__default, Py_None );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain__accepted, PyDict_New() );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain__checked_languages, PyDict_New() );
        UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_CONTEXT_SEPARATOR, _python_unicode_chr_4 );
        frame_guard.setLineNumber( 41 );
        {
            PyObjectTempKeeper1 call1;
            UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_accept_language_re, ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_re.asObject0(), _python_str_plain_compile ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_unicode_digest_df78726a4a9d22d57a4120eb0f45da34, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_re.asObject0(), _python_str_plain_VERBOSE ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 47 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_language_code_prefix_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_aa0b3f700da11c31e3f2ebf2418a0375 ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_to_locale, MAKE_FUNCTION_function_1_to_locale_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_to_language, MAKE_FUNCTION_function_2_to_language_of_module_django__utils__translation__trans_real(  ) );
        {
            frame_guard.setLineNumber( 75 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_gettext_module.asObject0(), _python_str_plain_GNUTranslations ) ).asObject() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_DjangoTranslation_of_module_django__utils__translation__trans_real(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__translation__trans_real___metaclass__.isInitialized( false ) ? _mvar_django__utils__translation__trans_real___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call4;
                PyObjectTempKeeper0 call6;
                _tmp_python_tmp_class = ( call4.assign( _python_tmp_metaclass.asObject() ), call6.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_str_plain_DjangoTranslation, call6.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_DjangoTranslation, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_translation, MAKE_FUNCTION_function_4_translation_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_activate, MAKE_FUNCTION_function_5_activate_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_deactivate, MAKE_FUNCTION_function_6_deactivate_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_deactivate_all, MAKE_FUNCTION_function_7_deactivate_all_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_get_language, MAKE_FUNCTION_function_8_get_language_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_get_language_bidi, MAKE_FUNCTION_function_9_get_language_bidi_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_catalog, MAKE_FUNCTION_function_10_catalog_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_do_translate, MAKE_FUNCTION_function_11_do_translate_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_gettext, MAKE_FUNCTION_function_12_gettext_of_module_django__utils__translation__trans_real(  ) );
        frame_guard.setLineNumber( 277 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 278 );
            UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_ugettext, _mvar_django__utils__translation__trans_real_gettext.asObject0() );
        }
        else
        {
            UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_ugettext, MAKE_FUNCTION_function_13_ugettext_of_module_django__utils__translation__trans_real(  ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_pgettext, MAKE_FUNCTION_function_14_pgettext_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_gettext_noop, MAKE_FUNCTION_function_15_gettext_noop_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_do_ntranslate, MAKE_FUNCTION_function_16_do_ntranslate_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_ngettext, MAKE_FUNCTION_function_17_ngettext_of_module_django__utils__translation__trans_real(  ) );
        frame_guard.setLineNumber( 320 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 321 );
            UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_ungettext, _mvar_django__utils__translation__trans_real_ngettext.asObject0() );
        }
        else
        {
            UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_ungettext, MAKE_FUNCTION_function_18_ungettext_of_module_django__utils__translation__trans_real(  ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_npgettext, MAKE_FUNCTION_function_19_npgettext_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_all_locale_paths, MAKE_FUNCTION_function_20_all_locale_paths_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_check_for_language, MAKE_FUNCTION_function_21_check_for_language_of_module_django__utils__translation__trans_real(  ) );
        frame_guard.setLineNumber( 360 );
        {
            PyObjectTempKeeper0 call8;
            PyObjectTempKeeper0 call9;
            UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_check_for_language, ( call8.assign( _mvar_django__utils__translation__trans_real_memoize.asObject0() ), call9.assign( _mvar_django__utils__translation__trans_real_check_for_language.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), call9.asObject0(), _mvar_django__utils__translation__trans_real__checked_languages.asObject0(), _python_int_pos_1 ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_get_supported_language_variant, MAKE_FUNCTION_function_22_get_supported_language_variant_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_get_language_from_path, MAKE_FUNCTION_function_23_get_language_from_path_of_module_django__utils__translation__trans_real(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_get_language_from_request, MAKE_FUNCTION_function_24_get_language_from_request_of_module_django__utils__translation__trans_real(  ) );
        frame_guard.setLineNumber( 471 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_dot_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_09700b05417a749d1d44aca99c89f6e1 ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_blankout, MAKE_FUNCTION_function_25_blankout_of_module_django__utils__translation__trans_real(  ) );
        frame_guard.setLineNumber( 479 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_context_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_853fdcd86a47176dbaa4ede5cacd8ea9 ) );
        frame_guard.setLineNumber( 480 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_inline_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_a6c823bc966cd71d90f3335147a362c3 ) );
        frame_guard.setLineNumber( 481 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_block_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_863f3d2c8124cc8b2c8b05424f8760b1 ) );
        frame_guard.setLineNumber( 482 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_endblock_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_8cffcd04c1b8b419bcb61f73a2fd43ee ) );
        frame_guard.setLineNumber( 483 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_plural_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_775b91c80834ba67b115bafba90ecc12 ) );
        frame_guard.setLineNumber( 484 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_constant_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_25ec36e895b19f4c459a1bdf12436e3f ) );
        frame_guard.setLineNumber( 485 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_one_percent_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_real_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_1e6f950c0fde1b2d246dabba94fb1fcb ) );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__translation__trans_real)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_templatize, MAKE_FUNCTION_function_26_templatize_of_module_django__utils__translation__trans_real(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_real, (Nuitka_StringObject *)_python_str_plain_parse_accept_lang_header, MAKE_FUNCTION_function_27_parse_accept_lang_header_of_module_django__utils__translation__trans_real(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__translation__trans_real );
}
