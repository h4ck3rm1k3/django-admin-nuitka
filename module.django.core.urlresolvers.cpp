// Generated code for Python source for module 'django.core.urlresolvers'
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

// The _module_django__core__urlresolvers is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__urlresolvers;
PyDictObject *_moduledict_django__core__urlresolvers;

// The module level variables.
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_Http404( &_module_django__core__urlresolvers, &_python_str_plain_Http404 );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_ImproperlyConfigured( &_module_django__core__urlresolvers, &_python_str_plain_ImproperlyConfigured );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_LocaleRegexProvider( &_module_django__core__urlresolvers, &_python_str_plain_LocaleRegexProvider );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_LocaleRegexURLResolver( &_module_django__core__urlresolvers, &_python_str_plain_LocaleRegexURLResolver );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_MultiValueDict( &_module_django__core__urlresolvers, &_python_str_plain_MultiValueDict );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_NoReverseMatch( &_module_django__core__urlresolvers, &_python_str_plain_NoReverseMatch );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_RegexURLResolver( &_module_django__core__urlresolvers, &_python_str_plain_RegexURLResolver );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_Resolver404( &_module_django__core__urlresolvers, &_python_str_plain_Resolver404 );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_ResolverMatch( &_module_django__core__urlresolvers, &_python_str_plain_ResolverMatch );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_ViewDoesNotExist( &_module_django__core__urlresolvers, &_python_str_plain_ViewDoesNotExist );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers___metaclass__( &_module_django__core__urlresolvers, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers__callable_cache( &_module_django__core__urlresolvers, &_python_str_plain__callable_cache );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers__ns_resolver_cache( &_module_django__core__urlresolvers, &_python_str_plain__ns_resolver_cache );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers__prefixes( &_module_django__core__urlresolvers, &_python_str_plain__prefixes );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers__resolver_cache( &_module_django__core__urlresolvers, &_python_str_plain__resolver_cache );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers__urlconfs( &_module_django__core__urlresolvers, &_python_str_plain__urlconfs );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_force_str( &_module_django__core__urlresolvers, &_python_str_plain_force_str );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_force_text( &_module_django__core__urlresolvers, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_get_callable( &_module_django__core__urlresolvers, &_python_str_plain_get_callable );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_get_language( &_module_django__core__urlresolvers, &_python_str_plain_get_language );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_get_mod_func( &_module_django__core__urlresolvers, &_python_str_plain_get_mod_func );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_get_ns_resolver( &_module_django__core__urlresolvers, &_python_str_plain_get_ns_resolver );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_get_resolver( &_module_django__core__urlresolvers, &_python_str_plain_get_resolver );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_get_script_prefix( &_module_django__core__urlresolvers, &_python_str_plain_get_script_prefix );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_get_urlconf( &_module_django__core__urlresolvers, &_python_str_plain_get_urlconf );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_import_module( &_module_django__core__urlresolvers, &_python_str_plain_import_module );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_iri_to_uri( &_module_django__core__urlresolvers, &_python_str_plain_iri_to_uri );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_lazy( &_module_django__core__urlresolvers, &_python_str_plain_lazy );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_local( &_module_django__core__urlresolvers, &_python_str_plain_local );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_memoize( &_module_django__core__urlresolvers, &_python_str_plain_memoize );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_module_has_submodule( &_module_django__core__urlresolvers, &_python_str_plain_module_has_submodule );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_normalize( &_module_django__core__urlresolvers, &_python_str_plain_normalize );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_re( &_module_django__core__urlresolvers, &_python_str_plain_re );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_resolve( &_module_django__core__urlresolvers, &_python_str_plain_resolve );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_reverse( &_module_django__core__urlresolvers, &_python_str_plain_reverse );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_six( &_module_django__core__urlresolvers, &_python_str_plain_six );
static PyObjectGlobalVariable_django__core__urlresolvers _mvar_django__core__urlresolvers_urlquote( &_module_django__core__urlresolvers, &_python_str_plain_urlquote );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_ResolverMatch_of_module_django__core__urlresolvers(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_x );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_x );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_Resolver404_of_module_django__core__urlresolvers(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_NoReverseMatch_of_module_django__core__urlresolvers(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_args, PyObjectLocalVariable &python_closure_p_args, PyObjectLocalVariable &python_closure_piece, PyObjectLocalVariable &python_closure_suffix );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_pattern, PyObjectLocalVariable &python_closure_t );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_v );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_12_resolve_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_13_reverse_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_14_clear_url_caches_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_15_set_script_prefix_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_16_get_script_prefix_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_17_clear_script_prefix_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_18_set_urlconf_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_19_get_urlconf_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_20_is_valid_path_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_4_get_callable_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_5_get_resolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_6_get_ns_resolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_7_get_mod_func_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


static PyObject *MAKE_FUNCTION_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_ResolverMatch_of_module_django__core__urlresolvers(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_namespace( _python_str_plain_namespace );
    PyObjectLocalVariable _python_var_view_name( _python_str_plain_view_name );
    PyObjectLocalVariable _python_var___getitem__( _python_str_plain___getitem__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_urlresolvers );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  ) );
    static PyFrameObject *frame_class_1_ResolverMatch_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_class_1_ResolverMatch_of_module_django__core__urlresolvers ) )
    {
        if ( frame_class_1_ResolverMatch_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_1_ResolverMatch_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_class_1_ResolverMatch_of_module_django__core__urlresolvers );
        }

        frame_class_1_ResolverMatch_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_fb960cb270e14a2429717834b3924464, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_class_1_ResolverMatch_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_class_1_ResolverMatch_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 59 );
        _python_var_namespace.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  ) ).asObject() ) );
        frame_guard.setLineNumber( 63 );
        _python_var_view_name.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  ) ).asObject() ) );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var___repr__.updateLocalsDict( _python_var___getitem__.updateLocalsDict( _python_var_view_name.updateLocalsDict( _python_var_namespace.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_1_ResolverMatch_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_class_1_ResolverMatch_of_module_django__core__urlresolvers );
           frame_class_1_ResolverMatch_of_module_django__core__urlresolvers = NULL;
        }

        throw;
    }
    _python_var___getitem__.assign1( MAKE_FUNCTION_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  ) );
    return _python_var___repr__.updateLocalsDict( _python_var___getitem__.updateLocalsDict( _python_var_view_name.updateLocalsDict( _python_var_namespace.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_func, PyObject *_python_par_args, PyObject *_python_par_kwargs, PyObject *_python_par_url_name, PyObject *_python_par_app_name, PyObject *_python_par_namespaces )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_func( _python_str_plain_func, _python_par_func );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalParameterVariableNoDel _python_var_url_name( _python_str_plain_url_name, _python_par_url_name );
    PyObjectLocalParameterVariableNoDel _python_var_app_name( _python_str_plain_app_name, _python_par_app_name );
    PyObjectLocalParameterVariableNoDel _python_var_namespaces( _python_str_plain_namespaces, _python_par_namespaces );
    PyObjectLocalVariable _python_var_x( _python_str_plain_x );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
        }

        frame_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_d92490192871014512e2e52f0a0b1df0, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 42 );
        {
                PyObject *tmp_identifier = _python_var_func.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_func );
        }
        frame_guard.setLineNumber( 43 );
        {
                PyObject *tmp_identifier = _python_var_args.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_args );
        }
        frame_guard.setLineNumber( 44 );
        {
                PyObject *tmp_identifier = _python_var_kwargs.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_kwargs );
        }
        frame_guard.setLineNumber( 45 );
        {
                PyObject *tmp_identifier = _python_var_app_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_app_name );
        }
        frame_guard.setLineNumber( 46 );
        if ( CHECK_IF_TRUE( _python_var_namespaces.asObject() ) )
        {
            frame_guard.setLineNumber( 47 );
            {
                    PyObjectTemporary tmp_identifier( impl_listcontr_1_of_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( MAKE_ITERATOR( _python_var_namespaces.asObject() ), _python_var_x ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_namespaces );
            }
        }
        else
        {
            frame_guard.setLineNumber( 49 );
            SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain_namespaces );
        }
        frame_guard.setLineNumber( 50 );
        if ( (!( CHECK_IF_TRUE( _python_var_url_name.asObject() ) )) )
        {
            frame_guard.setLineNumber( 51 );
            if ( (!( HAS_ATTRIBUTE( _python_var_func.asObject(), _python_unicode_plain___name__ ) )) )
            {
                frame_guard.setLineNumber( 53 );
                {
                    PyObjectTempKeeper1 call3;
                    PyObjectTempKeeper1 make_list1;
                    _python_var_url_name.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_unicode_dot, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( make_list1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_func.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___module__ ) ), MAKE_LIST2( make_list1.asObject(), LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_func.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ) ) ).asObject() ) ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 56 );
                {
                    PyObjectTempKeeper1 call7;
                    PyObjectTempKeeper1 make_list5;
                    _python_var_url_name.assign1( ( call7.assign( LOOKUP_ATTRIBUTE( _python_unicode_dot, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( ( make_list5.assign( LOOKUP_ATTRIBUTE( _python_var_func.asObject(), _python_str_plain___module__ ) ), MAKE_LIST2( make_list5.asObject(), LOOKUP_ATTRIBUTE( _python_var_func.asObject(), _python_str_plain___name__ ) ) ) ).asObject() ) ) );
                }
            }
        }
        frame_guard.setLineNumber( 57 );
        {
                PyObject *tmp_identifier = _python_var_url_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_url_name );
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
        frame_guard.getFrame0()->f_locals = _python_var_namespaces.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_url_name.updateLocalsDict( _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_func.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_x.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
           frame_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kwargs = NULL;
    PyObject *_python_par_url_name = NULL;
    PyObject *_python_par_app_name = NULL;
    PyObject *_python_par_namespaces = NULL;
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
            if ( found == false && _python_str_plain_func == key )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_args == key )
            {
                if (unlikely( _python_par_args ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'args'" );
                    goto error_exit;
                }

                _python_par_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_kwargs == key )
            {
                if (unlikely( _python_par_kwargs ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'kwargs'" );
                    goto error_exit;
                }

                _python_par_kwargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_url_name == key )
            {
                if (unlikely( _python_par_url_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'url_name'" );
                    goto error_exit;
                }

                _python_par_url_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_app_name == key )
            {
                if (unlikely( _python_par_app_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'app_name'" );
                    goto error_exit;
                }

                _python_par_app_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_namespaces == key )
            {
                if (unlikely( _python_par_namespaces ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'namespaces'" );
                    goto error_exit;
                }

                _python_par_namespaces = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_func, key ) )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_args, key ) )
            {
                if (unlikely( _python_par_args ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'args'" );
                    goto error_exit;
                }

                _python_par_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_kwargs, key ) )
            {
                if (unlikely( _python_par_kwargs ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'kwargs'" );
                    goto error_exit;
                }

                _python_par_kwargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_url_name, key ) )
            {
                if (unlikely( _python_par_url_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'url_name'" );
                    goto error_exit;
                }

                _python_par_url_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_app_name, key ) )
            {
                if (unlikely( _python_par_app_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'app_name'" );
                    goto error_exit;
                }

                _python_par_app_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_namespaces, key ) )
            {
                if (unlikely( _python_par_namespaces ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'namespaces'" );
                    goto error_exit;
                }

                _python_par_namespaces = value;

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
    if (unlikely( args_given > 7 ))
    {
        if ( 7 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 7, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 7 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 7, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 7, args_given + kw_only_found );
            }
#else
            if ( 7 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 7, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 7, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
    {
        if ( 7 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 7, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 7 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 7 ? args_given : 7;

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
         if (unlikely( _python_par_func != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'func'" );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_args != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'args'" );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_kwargs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'kwargs'" );
             goto error_exit;
         }

        _python_par_kwargs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_url_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'url_name'" );
             goto error_exit;
         }

        _python_par_url_name = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_app_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'app_name'" );
             goto error_exit;
         }

        _python_par_app_name = INCREASE_REFCOUNT( args[ 5 ] );
    }
    if (likely( 6 < args_usable_count ))
    {
         if (unlikely( _python_par_namespaces != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'namespaces'" );
             goto error_exit;
         }

        _python_par_namespaces = INCREASE_REFCOUNT( args[ 6 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_url_name == NULL )
    {
        _python_par_url_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_url_name );
    }
    if ( _python_par_app_name == NULL )
    {
        _python_par_app_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_app_name );
    }
    if ( _python_par_namespaces == NULL )
    {
        _python_par_namespaces = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_namespaces );
    }


    return impl_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, _python_par_self, _python_par_func, _python_par_args, _python_par_kwargs, _python_par_url_name, _python_par_app_name, _python_par_namespaces );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );
    Py_XDECREF( _python_par_url_name );
    Py_XDECREF( _python_par_app_name );
    Py_XDECREF( _python_par_namespaces );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 7)
    {
        return impl_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 47 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 47 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_x.assign0( _python_tmp_iter_value.asObject() );
                if ( CHECK_IF_TRUE( python_closure_x.asObject() ) )
                {
                    frame_guard.setLineNumber( 47 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_x.asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
        }

        frame_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_729c000b2cc1e65be5e9efebb8e0dcb8, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 61 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _python_unicode_chr_58, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_namespaces ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
           frame_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "namespace() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "namespace() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "namespace() got multiple values for keyword argument 'self'" );
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
                   "namespace() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "namespace() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "namespace() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "namespace() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "namespace() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "namespace() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "namespace() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "namespace() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "namespace() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "namespace() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "namespace() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "namespace() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "namespace() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "namespace() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_x( _python_str_plain_x );

    // Actual function code.
    static PyFrameObject *frame_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
        }

        frame_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_b812719151319426ba02a43f9e2cec33, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 65 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 make_list1;
            return ( call3.assign( LOOKUP_ATTRIBUTE( _python_unicode_chr_58, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( impl_listcontr_1_of_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( MAKE_ITERATOR( PyObjectTemporary( ( make_list1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_namespace ) ), MAKE_LIST2( make_list1.asObject(), LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_url_name ) ) ) ).asObject() ), _python_var_x ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_x.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
           frame_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "view_name() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "view_name() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "view_name() got multiple values for keyword argument 'self'" );
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
                   "view_name() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "view_name() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "view_name() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "view_name() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "view_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "view_name() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "view_name() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "view_name() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "view_name() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "view_name() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "view_name() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "view_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "view_name() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "view_name() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_x )
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
                python_closure_x.assign0( _python_tmp_iter_value.asObject() );
                if ( CHECK_IF_TRUE( python_closure_x.asObject() ) )
                {
                    frame_guard.setLineNumber( 65 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_x.asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_index )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_index( _python_str_plain_index, _python_par_index );

    // Actual function code.
    static PyFrameObject *frame_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
        }

        frame_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_e336be7f505ec58f19e2f6f603148ce3, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 68 );
        {
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            PyObjectTempKeeper1 subscr4;
            return ( subscr4.assign( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_func ) ), make_tuple2.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_args ) ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_kwargs ) ).asObject() ) ) ), LOOKUP_SUBSCRIPT( subscr4.asObject0(), _python_var_index.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_index.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
           frame_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_index = NULL;
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
                PyErr_Format( PyExc_TypeError, "__getitem__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__getitem__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_index == key )
            {
                if (unlikely( _python_par_index ))
                {
                    PyErr_Format( PyExc_TypeError, "__getitem__() got multiple values for keyword argument 'index'" );
                    goto error_exit;
                }

                _python_par_index = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__getitem__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_index, key ) )
            {
                if (unlikely( _python_par_index ))
                {
                    PyErr_Format( PyExc_TypeError, "__getitem__() got multiple values for keyword argument 'index'" );
                    goto error_exit;
                }

                _python_par_index = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__getitem__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__getitem__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getitem__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__getitem__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getitem__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__getitem__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__getitem__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__getitem__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_index != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__getitem__() got multiple values for keyword argument 'index'" );
             goto error_exit;
         }

        _python_par_index = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, _python_par_self, _python_par_index );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_index );

    return NULL;
}

static PyObject *dparse_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
        }

        frame_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_e909eaf246c53e90cde7e01624d9ce44, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 71 );
        {
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            PyObjectTempKeeper1 make_tuple3;
            PyObjectTempKeeper1 make_tuple4;
            PyObjectTempKeeper1 make_tuple5;
            return BINARY_OPERATION_REMAINDER( _python_unicode_digest_60602e44fc111aafc21c396f7aed593b, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_func ) ), make_tuple2.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_args ) ), make_tuple3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_kwargs ) ), make_tuple4.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_url_name ) ), make_tuple5.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_name ) ), MAKE_TUPLE6( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_namespace ) ).asObject() ) ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers );
           frame_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_Resolver404_of_module_django__core__urlresolvers(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_urlresolvers );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_NoReverseMatch_of_module_django__core__urlresolvers(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_urlresolvers );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


static PyObject *impl_function_4_get_callable_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_lookup_view, PyObject *_python_par_can_fail )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_lookup_view( _python_str_plain_lookup_view, _python_par_lookup_view );
    PyObjectLocalParameterVariableNoDel _python_var_can_fail( _python_str_plain_can_fail, _python_par_can_fail );
    PyObjectLocalVariable _python_var_mod_name( _python_str_plain_mod_name );
    PyObjectLocalVariable _python_var_func_name( _python_str_plain_func_name );
    PyObjectLocalVariable _python_var_mod( _python_str_plain_mod );
    PyObjectLocalVariable _python_var_parentmod( _python_str_plain_parentmod );
    PyObjectLocalVariable _python_var_submod( _python_str_plain_submod );

    // Actual function code.
    static PyFrameObject *frame_function_4_get_callable_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_4_get_callable_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_4_get_callable_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_get_callable_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_4_get_callable_of_module_django__core__urlresolvers );
        }

        frame_function_4_get_callable_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_df4c899f208aaf7f9a93bea406d9c601, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_4_get_callable_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_4_get_callable_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 90 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_callable ), _python_var_lookup_view.asObject() ) ).asObject() ) )) )
        {
            {
                frame_guard.setLineNumber( 91 );
                PyObject *_tmp_python_tmp_source_iter;
                {
                    PyObjectTempKeeper0 call1;
                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( _mvar_django__core__urlresolvers_get_mod_func.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_lookup_view.asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_mod_name.assign0( _python_tmp_element_1.asObject() );
                _python_var_func_name.assign0( _python_tmp_element_2.asObject() );
            }
            frame_guard.setLineNumber( 92 );
            if ( RICH_COMPARE_BOOL_EQ( _python_var_func_name.asObject(), _python_unicode_empty ) )
            {
                frame_guard.setLineNumber( 93 );
                return _python_var_lookup_view.asObject1();
            }
            {
                PyObject *_python_tmp_unhandled_indicator = Py_True;
                frame_guard.setLineNumber( 95 );
                try
                {
                    frame_guard.setLineNumber( 96 );
                    {
                        PyObjectTempKeeper0 call14;
                        _python_var_mod.assign1( ( call14.assign( _mvar_django__core__urlresolvers_import_module.asObject0() ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), _python_var_mod_name.asObject() ) ) );
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
                        _python_tmp_unhandled_indicator = Py_False;
                        {
                            frame_guard.setLineNumber( 98 );
                            PyObject *_tmp_python_tmp_source_iter;
                            {
                                PyObjectTempKeeper0 call3;
                                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call3.assign( _mvar_django__core__urlresolvers_get_mod_func.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_mod_name.asObject() ) ) ).asObject() );
                            }
                            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_parentmod.assign0( _python_tmp_element_1.asObject() );
                            _python_var_submod.assign0( _python_tmp_element_2.asObject() );
                        }
                        frame_guard.setLineNumber( 99 );
                        {
                            PyObjectTempKeeper0 call11;
                            PyObjectTempKeeper1 call12;
                            PyObjectTempKeeper0 call9;
                            if ( ( (!( CHECK_IF_TRUE( _python_var_can_fail.asObject() ) )) && ( RICH_COMPARE_BOOL_NE( _python_var_submod.asObject(), _python_unicode_empty ) && (!( CHECK_IF_TRUE( PyObjectTemporary( ( call11.assign( _mvar_django__core__urlresolvers_module_has_submodule.asObject0() ), call12.assign( ( call9.assign( _mvar_django__core__urlresolvers_import_module.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_parentmod.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), call12.asObject0(), _python_var_submod.asObject() ) ) ).asObject() ) )) ) ) )
                        {
                            frame_guard.setLineNumber( 101 );
                            {
                                PyObjectTempKeeper0 call7;
                                PyObjectTempKeeper0 make_tuple5;
                                {
                                    PyObjectTemporary tmp_exception_type( ( call7.assign( _mvar_django__core__urlresolvers_ViewDoesNotExist.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_0038b442f36161152aa8f86eb2368fc3, PyObjectTemporary( ( make_tuple5.assign( _python_var_lookup_view.asObject() ), MAKE_TUPLE2( make_tuple5.asObject0(), _python_var_mod_name.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                            }
                            }
                        }
                        }
                        frame_guard.setLineNumber( 104 );
                        if ( (!( CHECK_IF_TRUE( _python_var_can_fail.asObject() ) )) )
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
                if ( ( _python_tmp_unhandled_indicator == Py_True ) )
                {
                    frame_guard.setLineNumber( 107 );
                    try
                    {
                        frame_guard.setLineNumber( 108 );
                        {
                            PyObjectTempKeeper0 getattr20;
                            _python_var_lookup_view.assign1( ( getattr20.assign( _python_var_mod.asObject() ), BUILTIN_GETATTR( getattr20.asObject0(), _python_var_func_name.asObject(), NULL ) ) );
                        }
                        frame_guard.setLineNumber( 109 );
                        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_callable ), _python_var_lookup_view.asObject() ) ).asObject() ) )) )
                        {
                            frame_guard.setLineNumber( 110 );
                            {
                                PyObjectTempKeeper0 call25;
                                PyObjectTempKeeper0 make_tuple23;
                                {
                                    PyObjectTemporary tmp_exception_type( ( call25.assign( _mvar_django__core__urlresolvers_ViewDoesNotExist.asObject0() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_a524c4ee0dc05bfe6ddc07b8cb120655, PyObjectTemporary( ( make_tuple23.assign( _python_var_mod_name.asObject() ), MAKE_TUPLE2( make_tuple23.asObject0(), _python_var_func_name.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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

                        if ( _exception.matches( PyExc_AttributeError ) )
                        {
                            frame_guard.detachFrame();
                            frame_guard.setLineNumber( 114 );
                            if ( (!( CHECK_IF_TRUE( _python_var_can_fail.asObject() ) )) )
                            {
                                frame_guard.setLineNumber( 115 );
                                {
                                    PyObjectTempKeeper0 call18;
                                    PyObjectTempKeeper0 make_tuple16;
                                    {
                                        PyObjectTemporary tmp_exception_type( ( call18.assign( _mvar_django__core__urlresolvers_ViewDoesNotExist.asObject0() ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_898f4301eb55e70ffa3f33850a3abe20, PyObjectTemporary( ( make_tuple16.assign( _python_var_lookup_view.asObject() ), MAKE_TUPLE2( make_tuple16.asObject0(), _python_var_mod_name.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                                }
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
            }
        }
        frame_guard.setLineNumber( 118 );
        return _python_var_lookup_view.asObject1();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_can_fail.updateLocalsDict( _python_var_lookup_view.updateLocalsDict( _python_var_submod.updateLocalsDict( _python_var_parentmod.updateLocalsDict( _python_var_mod.updateLocalsDict( _python_var_func_name.updateLocalsDict( _python_var_mod_name.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_get_callable_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_4_get_callable_of_module_django__core__urlresolvers );
           frame_function_4_get_callable_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_get_callable_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_lookup_view = NULL;
    PyObject *_python_par_can_fail = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_callable() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_lookup_view == key )
            {
                if (unlikely( _python_par_lookup_view ))
                {
                    PyErr_Format( PyExc_TypeError, "get_callable() got multiple values for keyword argument 'lookup_view'" );
                    goto error_exit;
                }

                _python_par_lookup_view = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_can_fail == key )
            {
                if (unlikely( _python_par_can_fail ))
                {
                    PyErr_Format( PyExc_TypeError, "get_callable() got multiple values for keyword argument 'can_fail'" );
                    goto error_exit;
                }

                _python_par_can_fail = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_lookup_view, key ) )
            {
                if (unlikely( _python_par_lookup_view ))
                {
                    PyErr_Format( PyExc_TypeError, "get_callable() got multiple values for keyword argument 'lookup_view'" );
                    goto error_exit;
                }

                _python_par_lookup_view = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_can_fail, key ) )
            {
                if (unlikely( _python_par_can_fail ))
                {
                    PyErr_Format( PyExc_TypeError, "get_callable() got multiple values for keyword argument 'can_fail'" );
                    goto error_exit;
                }

                _python_par_can_fail = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_callable() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_callable() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_callable() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_callable() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_callable() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_callable() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_callable() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_callable() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_callable() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_callable() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_callable() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_callable() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_callable() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_lookup_view != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_callable() got multiple values for keyword argument 'lookup_view'" );
             goto error_exit;
         }

        _python_par_lookup_view = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_can_fail != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_callable() got multiple values for keyword argument 'can_fail'" );
             goto error_exit;
         }

        _python_par_can_fail = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_can_fail == NULL )
    {
        _python_par_can_fail = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_can_fail );
    }


    return impl_function_4_get_callable_of_module_django__core__urlresolvers( self, _python_par_lookup_view, _python_par_can_fail );

error_exit:;

    Py_XDECREF( _python_par_lookup_view );
    Py_XDECREF( _python_par_can_fail );

    return NULL;
}

static PyObject *dparse_function_4_get_callable_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_get_callable_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_get_callable_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_get_resolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_urlconf )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_urlconf( _python_str_plain_urlconf, _python_par_urlconf );
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );

    // Actual function code.
    static PyFrameObject *frame_function_5_get_resolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_5_get_resolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_5_get_resolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_get_resolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_5_get_resolver_of_module_django__core__urlresolvers );
        }

        frame_function_5_get_resolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_7ac93a26e4f2fc5f72c654bbc21e124e, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_5_get_resolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_5_get_resolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 122 );
        if ( ( _python_var_urlconf.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 123 );
            _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, PyObjectTemporary( _python_var_urlconf.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
            frame_guard.setLineNumber( 124 );
            _python_var_urlconf.assign1( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_ROOT_URLCONF ) );
        }
        frame_guard.setLineNumber( 125 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__core__urlresolvers_RegexURLResolver.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_unicode_digest_5e3697fa25fe821332b316dd47429e55, _python_var_urlconf.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_urlconf.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5_get_resolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_5_get_resolver_of_module_django__core__urlresolvers );
           frame_function_5_get_resolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_get_resolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_urlconf = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_resolver() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_urlconf == key )
            {
                if (unlikely( _python_par_urlconf ))
                {
                    PyErr_Format( PyExc_TypeError, "get_resolver() got multiple values for keyword argument 'urlconf'" );
                    goto error_exit;
                }

                _python_par_urlconf = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_urlconf, key ) )
            {
                if (unlikely( _python_par_urlconf ))
                {
                    PyErr_Format( PyExc_TypeError, "get_resolver() got multiple values for keyword argument 'urlconf'" );
                    goto error_exit;
                }

                _python_par_urlconf = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_resolver() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_resolver() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_resolver() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_resolver() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_resolver() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_resolver() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_resolver() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_resolver() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_resolver() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_resolver() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_resolver() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_resolver() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_resolver() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_urlconf != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_resolver() got multiple values for keyword argument 'urlconf'" );
             goto error_exit;
         }

        _python_par_urlconf = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_get_resolver_of_module_django__core__urlresolvers( self, _python_par_urlconf );

error_exit:;

    Py_XDECREF( _python_par_urlconf );

    return NULL;
}

static PyObject *dparse_function_5_get_resolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_get_resolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_get_resolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_get_ns_resolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_ns_pattern, PyObject *_python_par_resolver )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_ns_pattern( _python_str_plain_ns_pattern, _python_par_ns_pattern );
    PyObjectLocalParameterVariableNoDel _python_var_resolver( _python_str_plain_resolver, _python_par_resolver );
    PyObjectLocalVariable _python_var_ns_resolver( _python_str_plain_ns_resolver );

    // Actual function code.
    static PyFrameObject *frame_function_6_get_ns_resolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_6_get_ns_resolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_6_get_ns_resolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_get_ns_resolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_6_get_ns_resolver_of_module_django__core__urlresolvers );
        }

        frame_function_6_get_ns_resolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_13b04ff33b7989d72f1ab6cb112a8484, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_6_get_ns_resolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_6_get_ns_resolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 132 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            _python_var_ns_resolver.assign1( ( call1.assign( _mvar_django__core__urlresolvers_RegexURLResolver.asObject0() ), call2.assign( _python_var_ns_pattern.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_resolver.asObject(), _python_str_plain_url_patterns ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 134 );
        {
            PyObjectTempKeeper0 call4;
            return ( call4.assign( _mvar_django__core__urlresolvers_RegexURLResolver.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_unicode_digest_5e3697fa25fe821332b316dd47429e55, PyObjectTemporary( MAKE_LIST1( _python_var_ns_resolver.asObject1() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_resolver.updateLocalsDict( _python_var_ns_pattern.updateLocalsDict( _python_var_ns_resolver.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_get_ns_resolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_6_get_ns_resolver_of_module_django__core__urlresolvers );
           frame_function_6_get_ns_resolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_get_ns_resolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ns_pattern = NULL;
    PyObject *_python_par_resolver = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_ns_resolver() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_ns_pattern == key )
            {
                if (unlikely( _python_par_ns_pattern ))
                {
                    PyErr_Format( PyExc_TypeError, "get_ns_resolver() got multiple values for keyword argument 'ns_pattern'" );
                    goto error_exit;
                }

                _python_par_ns_pattern = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_resolver == key )
            {
                if (unlikely( _python_par_resolver ))
                {
                    PyErr_Format( PyExc_TypeError, "get_ns_resolver() got multiple values for keyword argument 'resolver'" );
                    goto error_exit;
                }

                _python_par_resolver = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ns_pattern, key ) )
            {
                if (unlikely( _python_par_ns_pattern ))
                {
                    PyErr_Format( PyExc_TypeError, "get_ns_resolver() got multiple values for keyword argument 'ns_pattern'" );
                    goto error_exit;
                }

                _python_par_ns_pattern = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_resolver, key ) )
            {
                if (unlikely( _python_par_resolver ))
                {
                    PyErr_Format( PyExc_TypeError, "get_ns_resolver() got multiple values for keyword argument 'resolver'" );
                    goto error_exit;
                }

                _python_par_resolver = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_ns_resolver() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_ns_resolver() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_ns_resolver() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_ns_resolver() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_ns_resolver() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_ns_resolver() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_ns_resolver() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_ns_resolver() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_ns_resolver() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_ns_resolver() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_ns_resolver() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "get_ns_resolver() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_ns_resolver() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_ns_pattern != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_ns_resolver() got multiple values for keyword argument 'ns_pattern'" );
             goto error_exit;
         }

        _python_par_ns_pattern = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_resolver != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_ns_resolver() got multiple values for keyword argument 'resolver'" );
             goto error_exit;
         }

        _python_par_resolver = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6_get_ns_resolver_of_module_django__core__urlresolvers( self, _python_par_ns_pattern, _python_par_resolver );

error_exit:;

    Py_XDECREF( _python_par_ns_pattern );
    Py_XDECREF( _python_par_resolver );

    return NULL;
}

static PyObject *dparse_function_6_get_ns_resolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6_get_ns_resolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_get_ns_resolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_get_mod_func_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_callback )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_callback( _python_str_plain_callback, _python_par_callback );
    PyObjectLocalVariable _python_var_dot( _python_str_plain_dot );

    // Actual function code.
    static PyFrameObject *frame_function_7_get_mod_func_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_7_get_mod_func_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_7_get_mod_func_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_get_mod_func_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_7_get_mod_func_of_module_django__core__urlresolvers );
        }

        frame_function_7_get_mod_func_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_66199800ef620a2222ccdc79229cb615, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_7_get_mod_func_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_7_get_mod_func_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 140 );
        try
        {
            frame_guard.setLineNumber( 141 );
            _python_var_dot.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_callback.asObject(), _python_str_plain_rindex ) ).asObject(), _python_unicode_dot ) );
        }
        catch ( PythonException &_exception )
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
                frame_guard.setLineNumber( 143 );
                return MAKE_TUPLE2( _python_var_callback.asObject(), _python_unicode_empty );
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
        {
            PyObjectTempKeeper1 make_tuple7;
            PyObjectTempKeeper0 slice1;
            PyObjectTempKeeper0 slice4;
            return ( make_tuple7.assign( ( slice1.assign( _python_var_callback.asObject() ), LOOKUP_SLICE( slice1.asObject0(), Py_None, _python_var_dot.asObject() ) ) ), MAKE_TUPLE2( make_tuple7.asObject0(), PyObjectTemporary( ( slice4.assign( _python_var_callback.asObject() ), LOOKUP_SLICE( slice4.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_dot.asObject(), _python_int_pos_1 ) ).asObject(), Py_None ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_callback.updateLocalsDict( _python_var_dot.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_7_get_mod_func_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_7_get_mod_func_of_module_django__core__urlresolvers );
           frame_function_7_get_mod_func_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_get_mod_func_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_callback = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_mod_func() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_callback == key )
            {
                if (unlikely( _python_par_callback ))
                {
                    PyErr_Format( PyExc_TypeError, "get_mod_func() got multiple values for keyword argument 'callback'" );
                    goto error_exit;
                }

                _python_par_callback = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_callback, key ) )
            {
                if (unlikely( _python_par_callback ))
                {
                    PyErr_Format( PyExc_TypeError, "get_mod_func() got multiple values for keyword argument 'callback'" );
                    goto error_exit;
                }

                _python_par_callback = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_mod_func() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_mod_func() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_mod_func() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_mod_func() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_mod_func() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_mod_func() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_mod_func() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_mod_func() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_mod_func() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_mod_func() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_mod_func() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_mod_func() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_mod_func() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_callback != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_mod_func() got multiple values for keyword argument 'callback'" );
             goto error_exit;
         }

        _python_par_callback = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7_get_mod_func_of_module_django__core__urlresolvers( self, _python_par_callback );

error_exit:;

    Py_XDECREF( _python_par_callback );

    return NULL;
}

static PyObject *dparse_function_7_get_mod_func_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7_get_mod_func_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_get_mod_func_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_regex( _python_str_plain_regex );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_urlresolvers );
    _python_var___doc__.assign0( _python_unicode_digest_cf25dd664ecf464ed5b51c552c7f0ea9 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers(  ) );
    static PyFrameObject *frame_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers ) )
    {
        if ( frame_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_8_LocaleRegexProvider_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers );
        }

        frame_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_fce72f0182f25e34876d3f2042bdc72f, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 160 );
        _python_var_regex.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers(  ) ).asObject() ) );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_regex.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers );
           frame_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers = NULL;
        }

        throw;
    }
    return _python_var_regex.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_regex )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_regex( _python_str_plain_regex, _python_par_regex );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers );
        }

        frame_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_bfb9832e3df3fc47ce55588f773145a6, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 156 );
        {
                PyObject *tmp_identifier = _python_var_regex.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__regex );
        }
        frame_guard.setLineNumber( 157 );
        SET_ATTRIBUTE( PyObjectTemporary( PyDict_New() ).asObject(), _python_var_self.asObject(), _python_str_plain__regex_dict );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_regex.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers );
           frame_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_regex = NULL;
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
            if ( found == false && _python_str_plain_regex == key )
            {
                if (unlikely( _python_par_regex ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'regex'" );
                    goto error_exit;
                }

                _python_par_regex = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_regex, key ) )
            {
                if (unlikely( _python_par_regex ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'regex'" );
                    goto error_exit;
                }

                _python_par_regex = value;

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
         if (unlikely( _python_par_regex != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'regex'" );
             goto error_exit;
         }

        _python_par_regex = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers( self, _python_par_self, _python_par_regex );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_regex );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_language_code( _python_str_plain_language_code );
    PyObjectLocalVariable _python_var_regex( _python_str_plain_regex );
    PyObjectLocalVariable _python_var_compiled_regex( _python_str_plain_compiled_regex );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers );
        }

        frame_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_6343ce71cc6bddcfd77317da6e25a7cb, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 166 );
        _python_var_language_code.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__urlresolvers_get_language.asObject0() ) );
        frame_guard.setLineNumber( 167 );
        {
            PyObjectTempKeeper0 cmp14;
            if ( ( cmp14.assign( _python_var_language_code.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp14.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__regex_dict ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 168 );
            {
                PyObjectTempKeeper1 isinstance3;
                if ( ( isinstance3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__regex ) ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 169 );
                _python_var_regex.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__regex ) );
            }
            else
            {
                frame_guard.setLineNumber( 171 );
                {
                    PyObjectTempKeeper0 call1;
                    _python_var_regex.assign1( ( call1.assign( _mvar_django__core__urlresolvers_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__regex ) ).asObject() ) ) );
                }
            }
            }
            frame_guard.setLineNumber( 172 );
            try
            {
                frame_guard.setLineNumber( 173 );
                {
                    PyObjectTempKeeper1 call11;
                    PyObjectTempKeeper0 call12;
                    _python_var_compiled_regex.assign1( ( call11.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_re.asObject0(), _python_str_plain_compile ) ), call12.assign( _python_var_regex.asObject() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), call12.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_re.asObject0(), _python_str_plain_UNICODE ) ).asObject() ) ) );
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

                if ( _exception.matches( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_re.asObject0(), _python_str_plain_error ) ).asObject() ) )
                {
                    frame_guard.detachFrame();
                    _python_var_e.assign0( _exception.getValue() );
                    frame_guard.setLineNumber( 175 );
                    {
                        PyObjectTempKeeper1 call5;
                        PyObjectTempKeeper0 call9;
                        PyObjectTempKeeper0 make_tuple7;
                        {
                            PyObjectTemporary tmp_exception_type( ( call9.assign( _mvar_django__core__urlresolvers_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_eaa864b0ae5965baf85ba7027a85a18b, PyObjectTemporary( ( make_tuple7.assign( _python_var_regex.asObject() ), MAKE_TUPLE2( make_tuple7.asObject0(), PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_e.asObject() ) ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
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
            frame_guard.setLineNumber( 179 );
            {
                    PyObject *tmp_identifier = _python_var_compiled_regex.asObject();
                    PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__regex_dict ) );
                    SET_SUBSCRIPT( tmp_identifier, tmp_subscribed.asObject(), _python_var_language_code.asObject() );
            }
        }
        }
        frame_guard.setLineNumber( 180 );
        {
            PyObjectTempKeeper1 subscr16;
            return ( subscr16.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__regex_dict ) ), LOOKUP_SUBSCRIPT( subscr16.asObject0(), _python_var_language_code.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_compiled_regex.updateLocalsDict( _python_var_regex.updateLocalsDict( _python_var_language_code.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers );
           frame_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "regex() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "regex() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "regex() got multiple values for keyword argument 'self'" );
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
                   "regex() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "regex() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "regex() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "regex() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "regex() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "regex() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "regex() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "regex() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "regex() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "regex() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "regex() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "regex() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "regex() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "regex() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var_add_prefix( _python_str_plain_add_prefix );
    PyObjectLocalVariable _python_var_resolve( _python_str_plain_resolve );
    PyObjectLocalVariable _python_var_callback( _python_str_plain_callback );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_urlresolvers );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  ) );
    _python_var_add_prefix.assign1( MAKE_FUNCTION_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  ) );
    _python_var_resolve.assign1( MAKE_FUNCTION_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  ) );
    static PyFrameObject *frame_class_9_RegexURLPattern_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_class_9_RegexURLPattern_of_module_django__core__urlresolvers ) )
    {
        if ( frame_class_9_RegexURLPattern_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_9_RegexURLPattern_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
        }

        frame_class_9_RegexURLPattern_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_b93e06bfcb0b667dbfdd89f73a6f977c, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_class_9_RegexURLPattern_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 224 );
        _python_var_callback.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  ) ).asObject() ) );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_callback.updateLocalsDict( _python_var_resolve.updateLocalsDict( _python_var_add_prefix.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_9_RegexURLPattern_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
           frame_class_9_RegexURLPattern_of_module_django__core__urlresolvers = NULL;
        }

        throw;
    }
    return _python_var_callback.updateLocalsDict( _python_var_resolve.updateLocalsDict( _python_var_add_prefix.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_regex, PyObject *_python_par_callback, PyObject *_python_par_default_args, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_regex( _python_str_plain_regex, _python_par_regex );
    PyObjectLocalParameterVariableNoDel _python_var_callback( _python_str_plain_callback, _python_par_callback );
    PyObjectLocalParameterVariableNoDel _python_var_default_args( _python_str_plain_default_args, _python_par_default_args );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
        }

        frame_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_f18a6b47b3c8514967440befc044b24a, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 185 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_LocaleRegexProvider.asObject0(), _python_str_plain___init__ ) ), call2.assign( _python_var_self.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_regex.asObject() ) ) );
        }
        frame_guard.setLineNumber( 189 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_callable ), _python_var_callback.asObject() ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 190 );
            {
                    PyObject *tmp_identifier = _python_var_callback.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__callback );
            }
        }
        else
        {
            frame_guard.setLineNumber( 192 );
            SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain__callback );
            frame_guard.setLineNumber( 193 );
            {
                    PyObject *tmp_identifier = _python_var_callback.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__callback_str );
            }
        }
        frame_guard.setLineNumber( 194 );
        {
            PyObjectTempKeeper0 keeper_0;
            {
                PyObjectTemporary tmp_identifier( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_default_args.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : PyDict_New() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_default_args );
        }
        }
        frame_guard.setLineNumber( 195 );
        {
                PyObject *tmp_identifier = _python_var_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_name );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_default_args.updateLocalsDict( _python_var_callback.updateLocalsDict( _python_var_regex.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
           frame_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_regex = NULL;
    PyObject *_python_par_callback = NULL;
    PyObject *_python_par_default_args = NULL;
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
            if ( found == false && _python_str_plain_regex == key )
            {
                if (unlikely( _python_par_regex ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'regex'" );
                    goto error_exit;
                }

                _python_par_regex = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_callback == key )
            {
                if (unlikely( _python_par_callback ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'callback'" );
                    goto error_exit;
                }

                _python_par_callback = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_default_args == key )
            {
                if (unlikely( _python_par_default_args ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'default_args'" );
                    goto error_exit;
                }

                _python_par_default_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
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
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_regex, key ) )
            {
                if (unlikely( _python_par_regex ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'regex'" );
                    goto error_exit;
                }

                _python_par_regex = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_callback, key ) )
            {
                if (unlikely( _python_par_callback ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'callback'" );
                    goto error_exit;
                }

                _python_par_callback = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_default_args, key ) )
            {
                if (unlikely( _python_par_default_args ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'default_args'" );
                    goto error_exit;
                }

                _python_par_default_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
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
    if (unlikely( args_given > 5 ))
    {
        if ( 5 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 5 ? args_given : 5;

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
         if (unlikely( _python_par_regex != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'regex'" );
             goto error_exit;
         }

        _python_par_regex = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_callback != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'callback'" );
             goto error_exit;
         }

        _python_par_callback = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_default_args != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'default_args'" );
             goto error_exit;
         }

        _python_par_default_args = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_default_args == NULL )
    {
        _python_par_default_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_default_args );
    }
    if ( _python_par_name == NULL )
    {
        _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_name );
    }


    return impl_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, _python_par_self, _python_par_regex, _python_par_callback, _python_par_default_args, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_regex );
    Py_XDECREF( _python_par_callback );
    Py_XDECREF( _python_par_default_args );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
        }

        frame_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_6eedd270df4a4a4427a74c1c87e95bad, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 198 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            return ( call4.assign( _mvar_django__core__urlresolvers_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_adcaeadc384d686c30af6a1076d00a71, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ), make_tuple2.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_regex ) ).asObject(), _python_str_plain_pattern ) ).asObject() ) ) ).asObject() ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
           frame_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_prefix )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_prefix( _python_str_plain_prefix, _python_par_prefix );

    // Actual function code.
    static PyFrameObject *frame_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
        }

        frame_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_7e8fb56ea04c4b170f52c7bf3c402d5d, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 204 );
        if ( ( (!( CHECK_IF_TRUE( _python_var_prefix.asObject() ) )) || (!( HAS_ATTRIBUTE( _python_var_self.asObject(), _python_unicode_plain__callback_str ) )) ) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 206 );
        {
            PyObjectTempKeeper1 op1;
            {
                PyObjectTemporary tmp_identifier( ( op1.assign( BINARY_OPERATION_ADD( _python_var_prefix.asObject(), _python_unicode_dot ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__callback_str ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__callback_str );
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
        frame_guard.getFrame0()->f_locals = _python_var_prefix.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
           frame_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_prefix = NULL;
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
                PyErr_Format( PyExc_TypeError, "add_prefix() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "add_prefix() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_prefix == key )
            {
                if (unlikely( _python_par_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "add_prefix() got multiple values for keyword argument 'prefix'" );
                    goto error_exit;
                }

                _python_par_prefix = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "add_prefix() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_prefix, key ) )
            {
                if (unlikely( _python_par_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "add_prefix() got multiple values for keyword argument 'prefix'" );
                    goto error_exit;
                }

                _python_par_prefix = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add_prefix() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "add_prefix() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "add_prefix() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "add_prefix() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "add_prefix() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "add_prefix() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add_prefix() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "add_prefix() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add_prefix() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "add_prefix() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "add_prefix() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "add_prefix() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "add_prefix() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "add_prefix() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_prefix != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add_prefix() got multiple values for keyword argument 'prefix'" );
             goto error_exit;
         }

        _python_par_prefix = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, _python_par_self, _python_par_prefix );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_prefix );

    return NULL;
}

static PyObject *dparse_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );
    PyObjectLocalVariable _python_var_match( _python_str_plain_match );
    PyObjectLocalVariable _python_var_kwargs( _python_str_plain_kwargs );
    PyObjectLocalVariable _python_var_args( _python_str_plain_args );

    // Actual function code.
    static PyFrameObject *frame_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
        }

        frame_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_9de2799f633af8b3fb22c562e34303f8, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 209 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_match.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_regex ) ).asObject(), _python_str_plain_search ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_path.asObject() ) ) );
        }
        frame_guard.setLineNumber( 210 );
        if ( CHECK_IF_TRUE( _python_var_match.asObject() ) )
        {
            frame_guard.setLineNumber( 214 );
            _python_var_kwargs.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_groupdict ) ).asObject() ) );
            frame_guard.setLineNumber( 215 );
            if ( CHECK_IF_TRUE( _python_var_kwargs.asObject() ) )
            {
                _python_var_args.assign0( _python_tuple_empty );
            }
            else
            {
                frame_guard.setLineNumber( 218 );
                _python_var_args.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_groups ) ).asObject() ) );
            }
            frame_guard.setLineNumber( 220 );
            {
                PyObjectTempKeeper1 call3;
                DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_default_args ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 222 );
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper1 call6;
                PyObjectTempKeeper0 call7;
                PyObjectTempKeeper0 call8;
                return ( call5.assign( _mvar_django__core__urlresolvers_ResolverMatch.asObject0() ), call6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_callback ) ), call7.assign( _python_var_args.asObject() ), call8.assign( _python_var_kwargs.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), call7.asObject0(), call8.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_path.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_kwargs.updateLocalsDict( _python_var_match.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
           frame_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "resolve() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'path'" );
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
                    PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'path'" );
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
                   "resolve() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "resolve() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "resolve() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "resolve() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "resolve() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "resolve() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "resolve() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "resolve() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, _python_par_self, _python_par_path );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_path );

    return NULL;
}

static PyObject *dparse_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
        }

        frame_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_c9c3e1634d374fdb8ba4e3a56d9acc39, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 226 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__callback ) ).asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 227 );
            return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__callback );
        }
        frame_guard.setLineNumber( 229 );
        {
            PyObjectTempKeeper0 call1;
            {
                PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__core__urlresolvers_get_callable.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__callback_str ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__callback );
        }
        }
        frame_guard.setLineNumber( 230 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__callback );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers );
           frame_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "callback() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "callback() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "callback() got multiple values for keyword argument 'self'" );
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
                   "callback() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "callback() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "callback() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "callback() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "callback() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "callback() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "callback() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "callback() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "callback() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "callback() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "callback() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "callback() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "callback() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "callback() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var__populate( _python_str_plain__populate );
    PyObjectLocalVariable _python_var_reverse_dict( _python_str_plain_reverse_dict );
    PyObjectLocalVariable _python_var_namespace_dict( _python_str_plain_namespace_dict );
    PyObjectLocalVariable _python_var_app_dict( _python_str_plain_app_dict );
    PyObjectLocalVariable _python_var_resolve( _python_str_plain_resolve );
    PyObjectLocalVariable _python_var_urlconf_module( _python_str_plain_urlconf_module );
    PyObjectLocalVariable _python_var_url_patterns( _python_str_plain_url_patterns );
    PyObjectLocalVariable _python_var__resolve_special( _python_str_plain__resolve_special );
    PyObjectLocalVariable _python_var_resolve400( _python_str_plain_resolve400 );
    PyObjectLocalVariable _python_var_resolve403( _python_str_plain_resolve403 );
    PyObjectLocalVariable _python_var_resolve404( _python_str_plain_resolve404 );
    PyObjectLocalVariable _python_var_resolve500( _python_str_plain_resolve500 );
    PyObjectLocalVariable _python_var_reverse( _python_str_plain_reverse );
    PyObjectLocalVariable _python_var__reverse_with_prefix( _python_str_plain__reverse_with_prefix );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_urlresolvers );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) );
    _python_var__populate.assign1( MAKE_FUNCTION_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) );
    static PyFrameObject *frame_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_0f25a20a1bc7cd1fdabc97c1e15855d5, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 292 );
        _python_var_reverse_dict.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) ).asObject() ) );
        frame_guard.setLineNumber( 299 );
        _python_var_namespace_dict.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) ).asObject() ) );
        frame_guard.setLineNumber( 306 );
        _python_var_app_dict.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) ).asObject() ) );
        _python_var_resolve.assign1( MAKE_FUNCTION_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) );
        frame_guard.setLineNumber( 336 );
        _python_var_urlconf_module.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) ).asObject() ) );
        frame_guard.setLineNumber( 344 );
        _python_var_url_patterns.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) ).asObject() ) );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var__reverse_with_prefix.updateLocalsDict( _python_var_reverse.updateLocalsDict( _python_var_resolve500.updateLocalsDict( _python_var_resolve404.updateLocalsDict( _python_var_resolve403.updateLocalsDict( _python_var_resolve400.updateLocalsDict( _python_var__resolve_special.updateLocalsDict( _python_var_url_patterns.updateLocalsDict( _python_var_urlconf_module.updateLocalsDict( _python_var_resolve.updateLocalsDict( _python_var_app_dict.updateLocalsDict( _python_var_namespace_dict.updateLocalsDict( _python_var_reverse_dict.updateLocalsDict( _python_var__populate.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        throw;
    }
    _python_var__resolve_special.assign1( MAKE_FUNCTION_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) );
    _python_var_resolve400.assign1( MAKE_FUNCTION_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) );
    _python_var_resolve403.assign1( MAKE_FUNCTION_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) );
    _python_var_resolve404.assign1( MAKE_FUNCTION_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) );
    _python_var_resolve500.assign1( MAKE_FUNCTION_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) );
    _python_var_reverse.assign1( MAKE_FUNCTION_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) );
    _python_var__reverse_with_prefix.assign1( MAKE_FUNCTION_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) );
    return _python_var__reverse_with_prefix.updateLocalsDict( _python_var_reverse.updateLocalsDict( _python_var_resolve500.updateLocalsDict( _python_var_resolve404.updateLocalsDict( _python_var_resolve403.updateLocalsDict( _python_var_resolve400.updateLocalsDict( _python_var__resolve_special.updateLocalsDict( _python_var_url_patterns.updateLocalsDict( _python_var_urlconf_module.updateLocalsDict( _python_var_resolve.updateLocalsDict( _python_var_app_dict.updateLocalsDict( _python_var_namespace_dict.updateLocalsDict( _python_var_reverse_dict.updateLocalsDict( _python_var__populate.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_regex, PyObject *_python_par_urlconf_name, PyObject *_python_par_default_kwargs, PyObject *_python_par_app_name, PyObject *_python_par_namespace )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_regex( _python_str_plain_regex, _python_par_regex );
    PyObjectLocalParameterVariableNoDel _python_var_urlconf_name( _python_str_plain_urlconf_name, _python_par_urlconf_name );
    PyObjectLocalParameterVariableNoDel _python_var_default_kwargs( _python_str_plain_default_kwargs, _python_par_default_kwargs );
    PyObjectLocalParameterVariableNoDel _python_var_app_name( _python_str_plain_app_name, _python_par_app_name );
    PyObjectLocalParameterVariableNoDel _python_var_namespace( _python_str_plain_namespace, _python_par_namespace );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_7b3aa3510f9aa697279b2f62ab11c290, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 234 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_LocaleRegexProvider.asObject0(), _python_str_plain___init__ ) ), call2.assign( _python_var_self.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_regex.asObject() ) ) );
        }
        frame_guard.setLineNumber( 236 );
        {
                PyObject *tmp_identifier = _python_var_urlconf_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_urlconf_name );
        }
        frame_guard.setLineNumber( 237 );
        {
            PyObjectTempKeeper0 isinstance4;
            if ( (!( ( isinstance4.assign( _python_var_urlconf_name.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )) )
        {
            frame_guard.setLineNumber( 238 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_urlconf_name ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__urlconf_module );
            }
        }
        }
        frame_guard.setLineNumber( 239 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_callback );
        frame_guard.setLineNumber( 240 );
        {
            PyObjectTempKeeper0 keeper_0;
            {
                PyObjectTemporary tmp_identifier( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_default_kwargs.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : PyDict_New() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_default_kwargs );
        }
        }
        frame_guard.setLineNumber( 241 );
        {
                PyObject *tmp_identifier = _python_var_namespace.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_namespace );
        }
        frame_guard.setLineNumber( 242 );
        {
                PyObject *tmp_identifier = _python_var_app_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_app_name );
        }
        frame_guard.setLineNumber( 243 );
        SET_ATTRIBUTE( PyObjectTemporary( PyDict_New() ).asObject(), _python_var_self.asObject(), _python_str_plain__reverse_dict );
        frame_guard.setLineNumber( 244 );
        SET_ATTRIBUTE( PyObjectTemporary( PyDict_New() ).asObject(), _python_var_self.asObject(), _python_str_plain__namespace_dict );
        frame_guard.setLineNumber( 245 );
        SET_ATTRIBUTE( PyObjectTemporary( PyDict_New() ).asObject(), _python_var_self.asObject(), _python_str_plain__app_dict );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_namespace.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_default_kwargs.updateLocalsDict( _python_var_urlconf_name.updateLocalsDict( _python_var_regex.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_regex = NULL;
    PyObject *_python_par_urlconf_name = NULL;
    PyObject *_python_par_default_kwargs = NULL;
    PyObject *_python_par_app_name = NULL;
    PyObject *_python_par_namespace = NULL;
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
            if ( found == false && _python_str_plain_regex == key )
            {
                if (unlikely( _python_par_regex ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'regex'" );
                    goto error_exit;
                }

                _python_par_regex = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_urlconf_name == key )
            {
                if (unlikely( _python_par_urlconf_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'urlconf_name'" );
                    goto error_exit;
                }

                _python_par_urlconf_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_default_kwargs == key )
            {
                if (unlikely( _python_par_default_kwargs ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'default_kwargs'" );
                    goto error_exit;
                }

                _python_par_default_kwargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_app_name == key )
            {
                if (unlikely( _python_par_app_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'app_name'" );
                    goto error_exit;
                }

                _python_par_app_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_namespace == key )
            {
                if (unlikely( _python_par_namespace ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'namespace'" );
                    goto error_exit;
                }

                _python_par_namespace = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_regex, key ) )
            {
                if (unlikely( _python_par_regex ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'regex'" );
                    goto error_exit;
                }

                _python_par_regex = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_urlconf_name, key ) )
            {
                if (unlikely( _python_par_urlconf_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'urlconf_name'" );
                    goto error_exit;
                }

                _python_par_urlconf_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_default_kwargs, key ) )
            {
                if (unlikely( _python_par_default_kwargs ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'default_kwargs'" );
                    goto error_exit;
                }

                _python_par_default_kwargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_app_name, key ) )
            {
                if (unlikely( _python_par_app_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'app_name'" );
                    goto error_exit;
                }

                _python_par_app_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_namespace, key ) )
            {
                if (unlikely( _python_par_namespace ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'namespace'" );
                    goto error_exit;
                }

                _python_par_namespace = value;

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
            if ( 6 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 3 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
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
                if ( 6 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
         if (unlikely( _python_par_regex != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'regex'" );
             goto error_exit;
         }

        _python_par_regex = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_urlconf_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'urlconf_name'" );
             goto error_exit;
         }

        _python_par_urlconf_name = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_default_kwargs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'default_kwargs'" );
             goto error_exit;
         }

        _python_par_default_kwargs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_app_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'app_name'" );
             goto error_exit;
         }

        _python_par_app_name = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_namespace != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'namespace'" );
             goto error_exit;
         }

        _python_par_namespace = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_default_kwargs == NULL )
    {
        _python_par_default_kwargs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_default_kwargs );
    }
    if ( _python_par_app_name == NULL )
    {
        _python_par_app_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_app_name );
    }
    if ( _python_par_namespace == NULL )
    {
        _python_par_namespace = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_namespace );
    }


    return impl_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self, _python_par_regex, _python_par_urlconf_name, _python_par_default_kwargs, _python_par_app_name, _python_par_namespace );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_regex );
    Py_XDECREF( _python_par_urlconf_name );
    Py_XDECREF( _python_par_default_kwargs );
    Py_XDECREF( _python_par_app_name );
    Py_XDECREF( _python_par_namespace );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_urlconf_repr( _python_str_plain_urlconf_repr );

    // Actual function code.
    static PyFrameObject *frame_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_cbabf69130d1f68cc5ab6dc099f34ab6, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 248 );
        if ( ( BUILTIN_ISINSTANCE_BOOL( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_urlconf_name ) ).asObject(), LOOKUP_BUILTIN( _python_str_plain_list ) ) && CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_urlconf_name ) ).asObject() ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 250 );
            _python_var_urlconf_repr.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_861ce321dc5b1d5434c4a51f8b9096cd, PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_urlconf_name ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) );
        }
        else
        {
            frame_guard.setLineNumber( 252 );
            _python_var_urlconf_repr.assign1( UNARY_OPERATION( PyObject_Repr, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_urlconf_name ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 253 );
        {
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper0 make_tuple2;
            PyObjectTempKeeper1 make_tuple3;
            PyObjectTempKeeper1 make_tuple4;
            return BINARY_OPERATION_REMAINDER( _python_str_digest_89f254f5c210b31cab180a50118b7213, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ), make_tuple2.assign( _python_var_urlconf_repr.asObject() ), make_tuple3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_name ) ), make_tuple4.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_namespace ) ), MAKE_TUPLE5( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), make_tuple4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_regex ) ).asObject(), _python_str_plain_pattern ) ).asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_urlconf_repr.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_lookups( _python_str_plain_lookups );
    PyObjectLocalVariable _python_var_namespaces( _python_str_plain_namespaces );
    PyObjectLocalVariable _python_var_apps( _python_str_plain_apps );
    PyObjectLocalVariable _python_var_language_code( _python_str_plain_language_code );
    PyObjectLocalVariable _python_var_pattern( _python_str_plain_pattern );
    PyObjectLocalVariable _python_var_p_pattern( _python_str_plain_p_pattern );
    PyObjectLocalVariable _python_var_parent( _python_str_plain_parent );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );
    PyObjectLocalVariable _python_var_matches( _python_str_plain_matches );
    PyObjectLocalVariable _python_var_pat( _python_str_plain_pat );
    PyObjectLocalVariable _python_var_defaults( _python_str_plain_defaults );
    PyObjectLocalVariable _python_var_new_matches( _python_str_plain_new_matches );
    PyObjectLocalVariable _python_var_piece( _python_str_plain_piece );
    PyObjectLocalVariable _python_var_p_args( _python_str_plain_p_args );
    PyObjectLocalVariable _python_var_namespace( _python_str_plain_namespace );
    PyObjectLocalVariable _python_var_prefix( _python_str_plain_prefix );
    PyObjectLocalVariable _python_var_sub_pattern( _python_str_plain_sub_pattern );
    PyObjectLocalVariable _python_var_app_name( _python_str_plain_app_name );
    PyObjectLocalVariable _python_var_namespace_list( _python_str_plain_namespace_list );
    PyObjectLocalVariable _python_var_bits( _python_str_plain_bits );
    PyObjectLocalVariable _python_var_suffix( _python_str_plain_suffix );
    PyObjectLocalVariable _python_var_args( _python_str_plain_args );

    // Actual function code.
    static PyFrameObject *frame_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_8e76820e6d0f0f63bfa594ad2801bfb6, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 258 );
        _python_var_lookups.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__urlresolvers_MultiValueDict.asObject0() ) );
        _python_var_namespaces.assign1( PyDict_New() );
        _python_var_apps.assign1( PyDict_New() );
        frame_guard.setLineNumber( 261 );
        _python_var_language_code.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__urlresolvers_get_language.asObject0() ) );
        {
            frame_guard.setLineNumber( 262 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_reversed ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_url_patterns ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 262 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_pattern.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 263 );
                _python_var_p_pattern.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_regex ) ).asObject(), _python_str_plain_pattern ) );
                frame_guard.setLineNumber( 264 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_p_pattern.asObject(), _python_str_plain_startswith ) ).asObject(), _python_unicode_chr_94 ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 265 );
                    _python_var_p_pattern.assign1( LOOKUP_INDEX_SLICE( _python_var_p_pattern.asObject(), 1, PY_SSIZE_T_MAX ) );
                }
                frame_guard.setLineNumber( 266 );
                {
                    PyObjectTempKeeper0 isinstance48;
                    if ( ( isinstance48.assign( _python_var_pattern.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance48.asObject0(), _mvar_django__core__urlresolvers_RegexURLResolver.asObject0() ) ) )
                {
                    frame_guard.setLineNumber( 267 );
                    if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_namespace ) ).asObject() ) )
                    {
                        frame_guard.setLineNumber( 268 );
                        {
                            PyObjectTempKeeper0 make_tuple1;
                            {
                                PyObjectTemporary tmp_identifier( ( make_tuple1.assign( _python_var_p_pattern.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_var_pattern.asObject() ) ) );
                                PyObject *tmp_subscribed = _python_var_namespaces.asObject();
                                SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_namespace ) ).asObject() );
                        }
                        }
                        frame_guard.setLineNumber( 269 );
                        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_app_name ) ).asObject() ) )
                        {
                            frame_guard.setLineNumber( 270 );
                            {
                                PyObjectTempKeeper1 call3;
                                PyObjectTempKeeper1 call6;
                                DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_apps.asObject(), _python_str_plain_setdefault ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_app_name ) ).asObject(), PyObjectTemporary( PyList_New( 0 ) ).asObject() ) ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_namespace ) ).asObject() ) ) );
                            }
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 272 );
                        {
                            PyObjectTempKeeper0 call8;
                            _python_var_parent.assign1( ( call8.assign( _mvar_django__core__urlresolvers_normalize.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_regex ) ).asObject(), _python_str_plain_pattern ) ).asObject() ) ) );
                        }
                        {
                            frame_guard.setLineNumber( 273 );
                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_reverse_dict ) ).asObject() ) );
                            while( true )
                            {
                                {
                                    frame_guard.setLineNumber( 273 );
                                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                    if ( _tmp_unpack_2 == NULL )
                                    {
                                        break;
                                    }
                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                    _python_var_name.assign0( _python_tmp_iter_value.asObject() );
                                }
                                {
                                    frame_guard.setLineNumber( 274 );
                                    PyObject *_tmp_python_tmp_for_iterator;
                                    {
                                        PyObjectTempKeeper1 call10;
                                        _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call10.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_reverse_dict ) ).asObject(), _python_str_plain_getlist ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_name.asObject() ) ) ).asObject() );
                                    }
                                    PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                                    while( true )
                                    {
                                        {
                                            frame_guard.setLineNumber( 274 );
                                            PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                            if ( _tmp_unpack_3 == NULL )
                                            {
                                                break;
                                            }
                                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                                            {
                                                frame_guard.setLineNumber( 274 );
                                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                                                _python_var_matches.assign0( _python_tmp_element_1.asObject() );
                                                _python_var_pat.assign0( _python_tmp_element_2.asObject() );
                                                _python_var_defaults.assign0( _python_tmp_element_3.asObject() );
                                            }
                                        }
                                        _python_var_new_matches.assign1( PyList_New( 0 ) );
                                        {
                                            frame_guard.setLineNumber( 276 );
                                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_parent.asObject() ) );
                                            while( true )
                                            {
                                                {
                                                    frame_guard.setLineNumber( 276 );
                                                    PyObject *_tmp_unpack_4 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                                    if ( _tmp_unpack_4 == NULL )
                                                    {
                                                        break;
                                                    }
                                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_4 );
                                                    {
                                                        frame_guard.setLineNumber( 276 );
                                                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                                        _python_var_piece.assign0( _python_tmp_element_1.asObject() );
                                                        _python_var_p_args.assign0( _python_tmp_element_2.asObject() );
                                                    }
                                                }
                                                frame_guard.setLineNumber( 277 );
                                                {
                                                    PyObjectTempKeeper1 call12;
                                                    DECREASE_REFCOUNT( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_new_matches.asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), PyObjectTemporary( impl_listcontr_1_of_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( MAKE_ITERATOR( _python_var_matches.asObject() ), _python_var_args, _python_var_p_args, _python_var_piece, _python_var_suffix ) ).asObject() ) ) );
                                                }

                                               CONSIDER_THREADING();
                                            }
                                        }
                                        frame_guard.setLineNumber( 278 );
                                        {
                                            PyObjectTempKeeper1 call22;
                                            PyObjectTempKeeper0 call23;
                                            PyObjectTempKeeper1 call_tmp17;
                                            PyObjectTempKeeper0 make_tuple19;
                                            PyObjectTempKeeper1 make_tuple20;
                                            PyObjectTempKeeper0 op14;
                                            DECREASE_REFCOUNT( ( call22.assign( LOOKUP_ATTRIBUTE( _python_var_lookups.asObject(), _python_str_plain_appendlist ) ), call23.assign( _python_var_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call22.asObject0(), call23.asObject0(), PyObjectTemporary( ( make_tuple19.assign( _python_var_new_matches.asObject() ), make_tuple20.assign( ( op14.assign( _python_var_p_pattern.asObject() ), BINARY_OPERATION_ADD( op14.asObject0(), _python_var_pat.asObject() ) ) ), MAKE_TUPLE3( make_tuple19.asObject0(), make_tuple20.asObject0(), PyObjectTemporary( ( call_tmp17.assign( MAKE_TUPLE1( _python_var_defaults.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( INCREASE_REFCOUNT( LOOKUP_BUILTIN( _python_str_plain_dict ) ), call_tmp17.asObject(), LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_default_kwargs ) ) ) ).asObject() ) ) ).asObject() ) ) );
                                        }

                                       CONSIDER_THREADING();
                                    }
                                }

                               CONSIDER_THREADING();
                            }
                        }
                        {
                            frame_guard.setLineNumber( 279 );
                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_namespace_dict ) ).asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
                            while( true )
                            {
                                {
                                    frame_guard.setLineNumber( 279 );
                                    PyObject *_tmp_unpack_5 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                    if ( _tmp_unpack_5 == NULL )
                                    {
                                        break;
                                    }
                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_5 );
                                    {
                                        frame_guard.setLineNumber( 279 );
                                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                        _python_var_namespace.assign0( _python_tmp_element_1.asObject() );
                                        {
                                            frame_guard.setLineNumber( 279 );
                                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_element_2.asObject() ) );
                                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                            _python_var_prefix.assign0( _python_tmp_element_1.asObject() );
                                            _python_var_sub_pattern.assign0( _python_tmp_element_2.asObject() );
                                        }
                                    }
                                }
                                frame_guard.setLineNumber( 280 );
                                {
                                    PyObjectTempKeeper1 make_tuple27;
                                    PyObjectTempKeeper0 op25;
                                    {
                                        PyObjectTemporary tmp_identifier( ( make_tuple27.assign( ( op25.assign( _python_var_p_pattern.asObject() ), BINARY_OPERATION_ADD( op25.asObject0(), _python_var_prefix.asObject() ) ) ), MAKE_TUPLE2( make_tuple27.asObject0(), _python_var_sub_pattern.asObject() ) ) );
                                        PyObject *tmp_subscribed = _python_var_namespaces.asObject();
                                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_namespace.asObject() );
                                }
                                }

                               CONSIDER_THREADING();
                            }
                        }
                        {
                            frame_guard.setLineNumber( 281 );
                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_app_dict ) ).asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
                            while( true )
                            {
                                {
                                    frame_guard.setLineNumber( 281 );
                                    PyObject *_tmp_unpack_6 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                    if ( _tmp_unpack_6 == NULL )
                                    {
                                        break;
                                    }
                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_6 );
                                    {
                                        frame_guard.setLineNumber( 281 );
                                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                        _python_var_app_name.assign0( _python_tmp_element_1.asObject() );
                                        _python_var_namespace_list.assign0( _python_tmp_element_2.asObject() );
                                    }
                                }
                                frame_guard.setLineNumber( 282 );
                                {
                                    PyObjectTempKeeper1 call29;
                                    PyObjectTempKeeper1 call32;
                                    DECREASE_REFCOUNT( ( call32.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call29.assign( LOOKUP_ATTRIBUTE( _python_var_apps.asObject(), _python_str_plain_setdefault ) ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), _python_var_app_name.asObject(), PyObjectTemporary( PyList_New( 0 ) ).asObject() ) ) ).asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), _python_var_namespace_list.asObject() ) ) );
                                }

                               CONSIDER_THREADING();
                            }
                        }
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 284 );
                    {
                        PyObjectTempKeeper0 call34;
                        _python_var_bits.assign1( ( call34.assign( _mvar_django__core__urlresolvers_normalize.asObject0() ), CALL_FUNCTION_WITH_ARGS( call34.asObject0(), _python_var_p_pattern.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 285 );
                    {
                        PyObjectTempKeeper1 call39;
                        PyObjectTempKeeper1 call40;
                        PyObjectTempKeeper0 make_tuple36;
                        PyObjectTempKeeper0 make_tuple37;
                        DECREASE_REFCOUNT( ( call39.assign( LOOKUP_ATTRIBUTE( _python_var_lookups.asObject(), _python_str_plain_appendlist ) ), call40.assign( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_callback ) ), CALL_FUNCTION_WITH_ARGS( call39.asObject0(), call40.asObject0(), PyObjectTemporary( ( make_tuple36.assign( _python_var_bits.asObject() ), make_tuple37.assign( _python_var_p_pattern.asObject() ), MAKE_TUPLE3( make_tuple36.asObject0(), make_tuple37.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_default_args ) ).asObject() ) ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 286 );
                    if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_name ) ).asObject() != Py_None ) )
                    {
                        frame_guard.setLineNumber( 287 );
                        {
                            PyObjectTempKeeper1 call45;
                            PyObjectTempKeeper1 call46;
                            PyObjectTempKeeper0 make_tuple42;
                            PyObjectTempKeeper0 make_tuple43;
                            DECREASE_REFCOUNT( ( call45.assign( LOOKUP_ATTRIBUTE( _python_var_lookups.asObject(), _python_str_plain_appendlist ) ), call46.assign( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_name ) ), CALL_FUNCTION_WITH_ARGS( call45.asObject0(), call46.asObject0(), PyObjectTemporary( ( make_tuple42.assign( _python_var_bits.asObject() ), make_tuple43.assign( _python_var_p_pattern.asObject() ), MAKE_TUPLE3( make_tuple42.asObject0(), make_tuple43.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_default_args ) ).asObject() ) ) ).asObject() ) ) );
                        }
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 288 );
        {
                PyObject *tmp_identifier = _python_var_lookups.asObject();
                PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__reverse_dict ) );
                SET_SUBSCRIPT( tmp_identifier, tmp_subscribed.asObject(), _python_var_language_code.asObject() );
        }
        frame_guard.setLineNumber( 289 );
        {
                PyObject *tmp_identifier = _python_var_namespaces.asObject();
                PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__namespace_dict ) );
                SET_SUBSCRIPT( tmp_identifier, tmp_subscribed.asObject(), _python_var_language_code.asObject() );
        }
        frame_guard.setLineNumber( 290 );
        {
                PyObject *tmp_identifier = _python_var_apps.asObject();
                PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__app_dict ) );
                SET_SUBSCRIPT( tmp_identifier, tmp_subscribed.asObject(), _python_var_language_code.asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_suffix.updateLocalsDict( _python_var_bits.updateLocalsDict( _python_var_namespace_list.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_sub_pattern.updateLocalsDict( _python_var_prefix.updateLocalsDict( _python_var_namespace.updateLocalsDict( _python_var_p_args.updateLocalsDict( _python_var_piece.updateLocalsDict( _python_var_new_matches.updateLocalsDict( _python_var_defaults.updateLocalsDict( _python_var_pat.updateLocalsDict( _python_var_matches.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_parent.updateLocalsDict( _python_var_p_pattern.updateLocalsDict( _python_var_pattern.updateLocalsDict( _python_var_language_code.updateLocalsDict( _python_var_apps.updateLocalsDict( _python_var_namespaces.updateLocalsDict( _python_var_lookups.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_populate() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_populate() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_populate() got multiple values for keyword argument 'self'" );
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
                   "_populate() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_populate() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_populate() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_populate() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_populate() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_populate() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_populate() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_populate() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_populate() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_populate() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_populate() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_populate() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_populate() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_populate() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_args,PyObjectLocalVariable &python_closure_p_args,PyObjectLocalVariable &python_closure_piece,PyObjectLocalVariable &python_closure_suffix )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 277 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 277 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                {
                    frame_guard.setLineNumber( 277 );
                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    python_closure_suffix.assign0( _python_tmp_element_1.asObject() );
                    python_closure_args.assign0( _python_tmp_element_2.asObject() );
                }
                {
                    PyObjectTempKeeper1 make_tuple5;
                    PyObjectTempKeeper0 op1;
                    PyObjectTempKeeper0 op3;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( make_tuple5.assign( ( op1.assign( python_closure_piece.asObject() ), BINARY_OPERATION_ADD( op1.asObject0(), python_closure_suffix.asObject() ) ) ), MAKE_TUPLE2( make_tuple5.asObject0(), PyObjectTemporary( ( op3.assign( python_closure_p_args.asObject() ), BINARY_OPERATION_ADD( op3.asObject0(), python_closure_args.asObject() ) ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_language_code( _python_str_plain_language_code );

    // Actual function code.
    static PyFrameObject *frame_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_07d86a2e18b8329ee6c926e3c9be6db7, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 294 );
        _python_var_language_code.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__urlresolvers_get_language.asObject0() ) );
        frame_guard.setLineNumber( 295 );
        {
            PyObjectTempKeeper0 cmp1;
            if ( ( cmp1.assign( _python_var_language_code.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__reverse_dict ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 296 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__populate ) ).asObject() ) );
        }
        }
        frame_guard.setLineNumber( 297 );
        {
            PyObjectTempKeeper1 subscr3;
            return ( subscr3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__reverse_dict ) ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_var_language_code.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_language_code.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "reverse_dict() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "reverse_dict() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "reverse_dict() got multiple values for keyword argument 'self'" );
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
                   "reverse_dict() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "reverse_dict() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "reverse_dict() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "reverse_dict() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "reverse_dict() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "reverse_dict() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "reverse_dict() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "reverse_dict() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "reverse_dict() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "reverse_dict() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "reverse_dict() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "reverse_dict() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "reverse_dict() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "reverse_dict() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_language_code( _python_str_plain_language_code );

    // Actual function code.
    static PyFrameObject *frame_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_e56a449a61f4e68f0546707b79f0dc40, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 301 );
        _python_var_language_code.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__urlresolvers_get_language.asObject0() ) );
        frame_guard.setLineNumber( 302 );
        {
            PyObjectTempKeeper0 cmp1;
            if ( ( cmp1.assign( _python_var_language_code.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__namespace_dict ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 303 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__populate ) ).asObject() ) );
        }
        }
        frame_guard.setLineNumber( 304 );
        {
            PyObjectTempKeeper1 subscr3;
            return ( subscr3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__namespace_dict ) ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_var_language_code.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_language_code.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "namespace_dict() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "namespace_dict() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "namespace_dict() got multiple values for keyword argument 'self'" );
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
                   "namespace_dict() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "namespace_dict() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "namespace_dict() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "namespace_dict() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "namespace_dict() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "namespace_dict() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "namespace_dict() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "namespace_dict() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "namespace_dict() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "namespace_dict() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "namespace_dict() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "namespace_dict() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "namespace_dict() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "namespace_dict() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_language_code( _python_str_plain_language_code );

    // Actual function code.
    static PyFrameObject *frame_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_3165d39a57912f479af48d048b06e9ec, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 308 );
        _python_var_language_code.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__urlresolvers_get_language.asObject0() ) );
        frame_guard.setLineNumber( 309 );
        {
            PyObjectTempKeeper0 cmp1;
            if ( ( cmp1.assign( _python_var_language_code.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__app_dict ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 310 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__populate ) ).asObject() ) );
        }
        }
        frame_guard.setLineNumber( 311 );
        {
            PyObjectTempKeeper1 subscr3;
            return ( subscr3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__app_dict ) ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_var_language_code.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_language_code.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "app_dict() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "app_dict() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "app_dict() got multiple values for keyword argument 'self'" );
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
                   "app_dict() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "app_dict() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "app_dict() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "app_dict() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "app_dict() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "app_dict() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "app_dict() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "app_dict() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "app_dict() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "app_dict() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "app_dict() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "app_dict() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "app_dict() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "app_dict() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );
    PyObjectLocalVariable _python_var_tried( _python_str_plain_tried );
    PyObjectLocalVariable _python_var_match( _python_str_plain_match );
    PyObjectLocalVariable _python_var_new_path( _python_str_plain_new_path );
    PyObjectLocalVariable _python_var_pattern( _python_str_plain_pattern );
    PyObjectLocalVariable _python_var_sub_match( _python_str_plain_sub_match );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_sub_tried( _python_str_plain_sub_tried );
    PyObjectLocalVariable _python_var_sub_match_dict( _python_str_plain_sub_match_dict );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );

    // Actual function code.
    _python_var_tried.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_07684fde249526c4b416ddc38f050093, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 315 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_match.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_regex ) ).asObject(), _python_str_plain_search ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_path.asObject() ) ) );
        }
        frame_guard.setLineNumber( 316 );
        if ( CHECK_IF_TRUE( _python_var_match.asObject() ) )
        {
            frame_guard.setLineNumber( 317 );
            {
                PyObjectTempKeeper0 slice3;
                _python_var_new_path.assign1( ( slice3.assign( _python_var_path.asObject() ), LOOKUP_SLICE( slice3.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_end ) ).asObject() ) ).asObject(), Py_None ) ) );
            }
            {
                frame_guard.setLineNumber( 318 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_url_patterns ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 318 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_pattern.assign0( _python_tmp_iter_value.asObject() );
                    }
                    {
                        PyObject *_python_tmp_unhandled_indicator = Py_True;
                        frame_guard.setLineNumber( 319 );
                        try
                        {
                            frame_guard.setLineNumber( 320 );
                            {
                                PyObjectTempKeeper1 call10;
                                _python_var_sub_match.assign1( ( call10.assign( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_resolve ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_new_path.asObject() ) ) );
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

                            if ( _exception.matches( _mvar_django__core__urlresolvers_Resolver404.asObject0() ) )
                            {
                                frame_guard.detachFrame();
                                _python_tmp_unhandled_indicator = Py_False;
                                _python_var_e.assign0( _exception.getValue() );
                                frame_guard.setLineNumber( 322 );
                                _python_var_sub_tried.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_args ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_tried ) );
                                frame_guard.setLineNumber( 323 );
                                if ( ( _python_var_sub_tried.asObject() != Py_None ) )
                                {
                                    frame_guard.setLineNumber( 324 );
                                    {
                                        PyObjectTempKeeper1 call6;
                                        DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_tried.asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( impl_listcontr_1_of_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( MAKE_ITERATOR( _python_var_sub_tried.asObject() ), _python_var_pattern, _python_var_t ) ).asObject() ) ) );
                                    }
                                }
                                else
                                {
                                    frame_guard.setLineNumber( 326 );
                                    {
                                        PyObjectTempKeeper1 call8;
                                        DECREASE_REFCOUNT( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_tried.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( MAKE_LIST1( _python_var_pattern.asObject1() ) ).asObject() ) ) );
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
                        if ( ( _python_tmp_unhandled_indicator == Py_True ) )
                        {
                            frame_guard.setLineNumber( 328 );
                            if ( CHECK_IF_TRUE( _python_var_sub_match.asObject() ) )
                            {
                                frame_guard.setLineNumber( 329 );
                                {
                                    PyObjectTempKeeper1 call_tmp13;
                                    _python_var_sub_match_dict.assign1( ( call_tmp13.assign( MAKE_TUPLE1( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_groupdict ) ).asObject() ) ).asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( INCREASE_REFCOUNT( LOOKUP_BUILTIN( _python_str_plain_dict ) ), call_tmp13.asObject(), LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_default_kwargs ) ) ) );
                                }
                                frame_guard.setLineNumber( 330 );
                                {
                                    PyObjectTempKeeper1 call15;
                                    DECREASE_REFCOUNT( ( call15.assign( LOOKUP_ATTRIBUTE( _python_var_sub_match_dict.asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_sub_match.asObject(), _python_str_plain_kwargs ) ).asObject() ) ) );
                                }
                                frame_guard.setLineNumber( 331 );
                                {
                                    PyObjectTempKeeper0 call25;
                                    PyObjectTempKeeper1 keeper_0;
                                    PyObjectTempKeeper1 make_tuple19;
                                    PyObjectTempKeeper1 make_tuple20;
                                    PyObjectTempKeeper0 make_tuple21;
                                    PyObjectTempKeeper1 make_tuple22;
                                    PyObjectTempKeeper1 make_tuple23;
                                    PyObjectTempKeeper1 op17;
                                    return ( call25.assign( _mvar_django__core__urlresolvers_ResolverMatch.asObject0() ), CALL_FUNCTION_WITH_POSARGS( call25.asObject0(), PyObjectTemporary( ( make_tuple19.assign( LOOKUP_ATTRIBUTE( _python_var_sub_match.asObject(), _python_str_plain_func ) ), make_tuple20.assign( LOOKUP_ATTRIBUTE( _python_var_sub_match.asObject(), _python_str_plain_args ) ), make_tuple21.assign( _python_var_sub_match_dict.asObject() ), make_tuple22.assign( LOOKUP_ATTRIBUTE( _python_var_sub_match.asObject(), _python_str_plain_url_name ) ), make_tuple23.assign( ( CHECK_IF_TRUE( keeper_0.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_app_name ) ) ) ? keeper_0.asObject() : LOOKUP_ATTRIBUTE( _python_var_sub_match.asObject(), _python_str_plain_app_name ) ) ), MAKE_TUPLE6( make_tuple19.asObject0(), make_tuple20.asObject0(), make_tuple21.asObject0(), make_tuple22.asObject0(), make_tuple23.asObject0(), PyObjectTemporary( ( op17.assign( MAKE_LIST1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_namespace ) ) ), BINARY_OPERATION_ADD( op17.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_sub_match.asObject(), _python_str_plain_namespaces ) ).asObject() ) ) ).asObject() ) ) ).asObject() ) );
                                }
                            }
                            frame_guard.setLineNumber( 332 );
                            {
                                PyObjectTempKeeper1 call27;
                                DECREASE_REFCOUNT( ( call27.assign( LOOKUP_ATTRIBUTE( _python_var_tried.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call27.asObject0(), PyObjectTemporary( MAKE_LIST1( _python_var_pattern.asObject1() ) ).asObject() ) ) );
                            }
                        }
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 333 );
            {
                PyObjectTempKeeper0 call33;
                PyObjectTempKeeper0 make_dict29;
                {
                    PyObjectTemporary tmp_exception_type( ( call33.assign( _mvar_django__core__urlresolvers_Resolver404.asObject0() ), CALL_FUNCTION_WITH_ARGS( call33.asObject0(), PyObjectTemporary( ( make_dict29.assign( _python_var_tried.asObject() ), MAKE_DICT2( make_dict29.asObject0(), _python_unicode_plain_tried, _python_var_new_path.asObject(), _python_unicode_plain_path ) ) ).asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        frame_guard.setLineNumber( 334 );
        {
            PyObjectTempKeeper0 call35;
            {
                PyObjectTemporary tmp_exception_type( ( call35.assign( _mvar_django__core__urlresolvers_Resolver404.asObject0() ), CALL_FUNCTION_WITH_ARGS( call35.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_path.asObject(), _python_unicode_plain_path ) ).asObject() ) ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_path.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_sub_match_dict.updateLocalsDict( _python_var_sub_tried.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_sub_match.updateLocalsDict( _python_var_pattern.updateLocalsDict( _python_var_new_path.updateLocalsDict( _python_var_match.updateLocalsDict( _python_var_tried.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "resolve() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'path'" );
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
                    PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'path'" );
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
                   "resolve() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "resolve() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "resolve() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "resolve() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "resolve() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "resolve() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "resolve() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "resolve() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self, _python_par_path );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_path );

    return NULL;
}

static PyObject *dparse_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_pattern,PyObjectLocalVariable &python_closure_t )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 324 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 324 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_t.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 op1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( op1.assign( MAKE_LIST1( INCREASE_REFCOUNT( python_closure_pattern.asObject() ) ) ), BINARY_OPERATION_ADD( op1.asObject0(), python_closure_t.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_8e9d5b0ac293dfd2bc5b8b23c907fb03, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 338 );
        try
        {
            frame_guard.setLineNumber( 339 );
            return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__urlconf_module );
        }
        catch ( PythonException &_exception )
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
                frame_guard.setLineNumber( 341 );
                {
                    PyObjectTempKeeper0 call1;
                    {
                        PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__core__urlresolvers_import_module.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_urlconf_name ) ).asObject() ) ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__urlconf_module );
                }
                }
                frame_guard.setLineNumber( 342 );
                return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__urlconf_module );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "urlconf_module() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "urlconf_module() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "urlconf_module() got multiple values for keyword argument 'self'" );
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
                   "urlconf_module() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "urlconf_module() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "urlconf_module() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "urlconf_module() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "urlconf_module() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "urlconf_module() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "urlconf_module() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "urlconf_module() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "urlconf_module() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "urlconf_module() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "urlconf_module() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "urlconf_module() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "urlconf_module() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "urlconf_module() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_patterns( _python_str_plain_patterns );

    // Actual function code.
    static PyFrameObject *frame_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_488aac42aab4771effaa51f53e0ff120, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 346 );
        {
            PyObjectTempKeeper1 getattr1;
            _python_var_patterns.assign1( ( getattr1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_urlconf_module ) ), BUILTIN_GETATTR( getattr1.asObject0(), _python_unicode_plain_urlpatterns, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_urlconf_module ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 347 );
        try
        {
            frame_guard.setLineNumber( 348 );
            DECREASE_REFCOUNT( MAKE_ITERATOR( _python_var_patterns.asObject() ) );
        }
        catch ( PythonException &_exception )
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
                frame_guard.setLineNumber( 350 );
                {
                    PyObjectTempKeeper0 call4;
                    {
                        PyObjectTemporary tmp_exception_type( ( call4.assign( _mvar_django__core__urlresolvers_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_91e6920281b4565e2b0579fa143d53dd, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_urlconf_name ) ).asObject() ) ).asObject() ) ) );
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
        frame_guard.setLineNumber( 351 );
        return _python_var_patterns.asObject1();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_patterns.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "url_patterns() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "url_patterns() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "url_patterns() got multiple values for keyword argument 'self'" );
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
                   "url_patterns() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "url_patterns() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "url_patterns() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "url_patterns() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "url_patterns() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "url_patterns() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "url_patterns() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "url_patterns() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "url_patterns() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "url_patterns() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "url_patterns() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "url_patterns() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "url_patterns() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "url_patterns() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_view_type )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_view_type( _python_str_plain_view_type, _python_par_view_type );
    PyObjectLocalVariable _python_var_callback( _python_str_plain_callback );
    PyObjectLocalVariable _python_var_urls( _python_str_plain_urls );

    // Actual function code.
    static PyFrameObject *frame_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_e1dd718e02f929cf2e7a40d2ab9282f3, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 354 );
        {
            PyObjectTempKeeper1 getattr1;
            _python_var_callback.assign1( ( getattr1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_urlconf_module ) ), BUILTIN_GETATTR( getattr1.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_7bc9ffe88b1548e8677a8dc7671c566e, _python_var_view_type.asObject() ) ).asObject(), Py_None ) ) );
        }
        frame_guard.setLineNumber( 355 );
        if ( (!( CHECK_IF_TRUE( _python_var_callback.asObject() ) )) )
        {
            frame_guard.setLineNumber( 358 );
            _python_var_urls.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, PyObjectTemporary( _python_var_view_type.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_urls.updateLocalsDict( _python_var_callback.updateLocalsDict( PyDict_New() ) ) ) ) ).asObject(), _python_list_str_plain_urls_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urls ) );
            frame_guard.setLineNumber( 359 );
            {
                PyObjectTempKeeper0 getattr4;
                _python_var_callback.assign1( ( getattr4.assign( _python_var_urls.asObject() ), BUILTIN_GETATTR( getattr4.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_7bc9ffe88b1548e8677a8dc7671c566e, _python_var_view_type.asObject() ) ).asObject(), NULL ) ) );
            }
        }
        frame_guard.setLineNumber( 360 );
        {
            PyObjectTempKeeper0 call7;
            return MAKE_TUPLE2( PyObjectTemporary( ( call7.assign( _mvar_django__core__urlresolvers_get_callable.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_callback.asObject() ) ) ).asObject(), PyObjectTemporary( PyDict_New() ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_view_type.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_urls.updateLocalsDict( _python_var_callback.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_view_type = NULL;
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
                PyErr_Format( PyExc_TypeError, "_resolve_special() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_resolve_special() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_view_type == key )
            {
                if (unlikely( _python_par_view_type ))
                {
                    PyErr_Format( PyExc_TypeError, "_resolve_special() got multiple values for keyword argument 'view_type'" );
                    goto error_exit;
                }

                _python_par_view_type = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_resolve_special() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_view_type, key ) )
            {
                if (unlikely( _python_par_view_type ))
                {
                    PyErr_Format( PyExc_TypeError, "_resolve_special() got multiple values for keyword argument 'view_type'" );
                    goto error_exit;
                }

                _python_par_view_type = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_resolve_special() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_resolve_special() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_resolve_special() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_resolve_special() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_resolve_special() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_resolve_special() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_resolve_special() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_resolve_special() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_resolve_special() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_resolve_special() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_resolve_special() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_resolve_special() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_resolve_special() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_resolve_special() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_view_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_resolve_special() got multiple values for keyword argument 'view_type'" );
             goto error_exit;
         }

        _python_par_view_type = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self, _python_par_view_type );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_view_type );

    return NULL;
}

static PyObject *dparse_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_8af69da1911189f5de9a75bd8ba8061f, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 363 );
        return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__resolve_special ) ).asObject(), _python_unicode_plain_400 );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "resolve400() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "resolve400() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "resolve400() got multiple values for keyword argument 'self'" );
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
                   "resolve400() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "resolve400() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "resolve400() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "resolve400() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "resolve400() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "resolve400() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve400() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "resolve400() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve400() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "resolve400() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "resolve400() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "resolve400() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "resolve400() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "resolve400() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_06cc46a51ff38d9db3d160e1d4783b3c, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 366 );
        return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__resolve_special ) ).asObject(), _python_unicode_plain_403 );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "resolve403() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "resolve403() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "resolve403() got multiple values for keyword argument 'self'" );
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
                   "resolve403() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "resolve403() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "resolve403() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "resolve403() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "resolve403() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "resolve403() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve403() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "resolve403() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve403() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "resolve403() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "resolve403() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "resolve403() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "resolve403() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "resolve403() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_37adddc1aaaedfda3e66d13f82547182, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 369 );
        return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__resolve_special ) ).asObject(), _python_unicode_plain_404 );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "resolve404() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "resolve404() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "resolve404() got multiple values for keyword argument 'self'" );
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
                   "resolve404() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "resolve404() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "resolve404() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "resolve404() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "resolve404() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "resolve404() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve404() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "resolve404() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve404() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "resolve404() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "resolve404() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "resolve404() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "resolve404() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "resolve404() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_2e774504d9b31626687ad679d9f3bc4f, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 372 );
        return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__resolve_special ) ).asObject(), _python_unicode_plain_500 );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "resolve500() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "resolve500() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "resolve500() got multiple values for keyword argument 'self'" );
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
                   "resolve500() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "resolve500() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "resolve500() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "resolve500() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "resolve500() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "resolve500() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve500() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "resolve500() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve500() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "resolve500() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "resolve500() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "resolve500() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "resolve500() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "resolve500() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_lookup_view, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_lookup_view( _python_str_plain_lookup_view, _python_par_lookup_view );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_d332d60ca1e5fb0071853a9a632cbb7d, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 375 );
        {
            PyObjectTempKeeper1 call_tmp1;
            PyObjectTempKeeper1 call_tmp2;
            PyObjectTempKeeper0 call_tmp3;
            return ( call_tmp1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__reverse_with_prefix ) ), call_tmp2.assign( MAKE_TUPLE2( _python_var_lookup_view.asObject(), _python_unicode_empty ) ), call_tmp3.assign( _python_var_args.asObject() ), impl_function_8_complex_call_helper_pos_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), call_tmp3.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_lookup_view.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_lookup_view = NULL;
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
                        PyErr_Format( PyExc_TypeError, "reverse() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "reverse() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "reverse() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument lookup_view was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_lookup_view );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_lookup_view == NULL );

            _python_par_lookup_view = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_lookup_view );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "reverse() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "reverse() takes at least %d non-keyword arguments (%zd given)", 2, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "reverse() takes at least %d arguments (%zd given)", 2, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_lookup_view != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'lookup_view'" );
             goto error_exit;
         }

        _python_par_lookup_view = INCREASE_REFCOUNT( args[ 1 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 2 )
    {
        _python_par_args = PyTuple_New( args_size - 2 );

        for( Py_ssize_t i = 0; i < args_size - 2; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[2+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self, _python_par_lookup_view, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_lookup_view );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), MAKE_TUPLE( &args[ 2 ], size > 2 ? size-2 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_lookup_view, PyObject *_python_par__prefix, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_lookup_view( _python_str_plain_lookup_view, _python_par_lookup_view );
    PyObjectLocalParameterVariableNoDel _python_var__prefix( _python_str_plain__prefix, _python_par__prefix );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_text_args( _python_str_plain_text_args );
    PyObjectLocalVariable _python_var_text_kwargs( _python_str_plain_text_kwargs );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_possibilities( _python_str_plain_possibilities );
    PyObjectLocalVariable _python_var_prefix_norm( _python_str_plain_prefix_norm );
    PyObjectLocalVariable _python_var_prefix_args( _python_str_plain_prefix_args );
    PyObjectLocalVariable _python_var_possibility( _python_str_plain_possibility );
    PyObjectLocalVariable _python_var_pattern( _python_str_plain_pattern );
    PyObjectLocalVariable _python_var_defaults( _python_str_plain_defaults );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );
    PyObjectLocalVariable _python_var_params( _python_str_plain_params );
    PyObjectLocalVariable _python_var_candidate_subs( _python_str_plain_candidate_subs );
    PyObjectLocalVariable _python_var_matches( _python_str_plain_matches );
    PyObjectLocalVariable _python_var_k( _python_str_plain_k );
    PyObjectLocalVariable _python_var_v( _python_str_plain_v );
    PyObjectLocalVariable _python_var_candidate_pat( _python_str_plain_candidate_pat );
    PyObjectLocalVariable _python_var_m( _python_str_plain_m );
    PyObjectLocalVariable _python_var_n( _python_str_plain_n );
    PyObjectLocalVariable _python_var_lookup_view_s( _python_str_plain_lookup_view_s );

    // Actual function code.
    static PyFrameObject *frame_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_c1e70108b85e0e201c0a8cd6362707e9, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 378 );
        if ( ( CHECK_IF_TRUE( _python_var_args.asObject() ) && CHECK_IF_TRUE( _python_var_kwargs.asObject() ) ) )
        {
            frame_guard.setLineNumber( 379 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_6a442e02ffcf3ce93ac558d77f341ada ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 380 );
        _python_var_text_args.assign1( impl_listcontr_1_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( MAKE_ITERATOR( _python_var_args.asObject() ), _python_var_v ) );
        frame_guard.setLineNumber( 381 );
        _python_var_text_kwargs.assign1( TO_DICT( PyObjectTemporary( impl_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) ) ).asObject(), NULL ) );
        frame_guard.setLineNumber( 383 );
        try
        {
            frame_guard.setLineNumber( 384 );
            {
                PyObjectTempKeeper0 call5;
                _python_var_lookup_view.assign1( ( call5.assign( _mvar_django__core__urlresolvers_get_callable.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_lookup_view.asObject(), Py_True ) ) );
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

            if ( _exception.matches( PyExc_ImportError ) || _exception.matches( PyExc_AttributeError ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 386 );
                {
                    PyObjectTempKeeper0 call3;
                    PyObjectTempKeeper0 make_tuple1;
                    {
                        PyObjectTemporary tmp_exception_type( ( call3.assign( _mvar_django__core__urlresolvers_NoReverseMatch.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_f20b40d1e213cfad33c49521daf325c2, PyObjectTemporary( ( make_tuple1.assign( _python_var_lookup_view.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_var_e.asObject() ) ) ).asObject() ) ).asObject() ) ) );
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
        frame_guard.setLineNumber( 387 );
        {
            PyObjectTempKeeper1 call8;
            _python_var_possibilities.assign1( ( call8.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_reverse_dict ) ).asObject(), _python_str_plain_getlist ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_lookup_view.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 389 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper0 call10;
                PyObjectTempKeeper0 call12;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( ( call12.assign( _mvar_django__core__urlresolvers_normalize.asObject0() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), PyObjectTemporary( ( call10.assign( _mvar_django__core__urlresolvers_urlquote.asObject0() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var__prefix.asObject() ) ) ).asObject() ) ) ).asObject(), _python_int_0, 0 ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_prefix_norm.assign0( _python_tmp_element_1.asObject() );
            _python_var_prefix_args.assign0( _python_tmp_element_2.asObject() );
        }
        {
            frame_guard.setLineNumber( 390 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_possibilities.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 390 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 390 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                        _python_var_possibility.assign0( _python_tmp_element_1.asObject() );
                        _python_var_pattern.assign0( _python_tmp_element_2.asObject() );
                        _python_var_defaults.assign0( _python_tmp_element_3.asObject() );
                    }
                }
                {
                    frame_guard.setLineNumber( 391 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_possibility.asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 391 );
                            PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_2 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                            {
                                frame_guard.setLineNumber( 391 );
                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                _python_var_result.assign0( _python_tmp_element_1.asObject() );
                                _python_var_params.assign0( _python_tmp_element_2.asObject() );
                            }
                        }
                        frame_guard.setLineNumber( 392 );
                        if ( CHECK_IF_TRUE( _python_var_args.asObject() ) )
                        {
                            frame_guard.setLineNumber( 393 );
                            {
                                PyObjectTempKeeper1 cmp16;
                                PyObjectTempKeeper1 op14;
                                if ( ( cmp16.assign( BUILTIN_LEN( _python_var_args.asObject() ) ), RICH_COMPARE_BOOL_NE( cmp16.asObject0(), PyObjectTemporary( ( op14.assign( BUILTIN_LEN( _python_var_params.asObject() ) ), BINARY_OPERATION_ADD( op14.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_prefix_args.asObject() ) ).asObject() ) ) ).asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 394 );
                                CONSIDER_THREADING(); continue;
                            }
                            }
                            frame_guard.setLineNumber( 395 );
                            {
                                PyObjectTempKeeper1 call21;
                                PyObjectTempKeeper0 op18;
                                _python_var_candidate_subs.assign1( TO_DICT( PyObjectTemporary( ( call21.assign( ( op18.assign( _python_var_prefix_args.asObject() ), BINARY_OPERATION_ADD( op18.asObject0(), _python_var_params.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_zip ), call21.asObject0(), _python_var_text_args.asObject() ) ) ).asObject(), NULL ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 397 );
                            {
                                PyObjectTempKeeper1 cmp29;
                                PyObjectTempKeeper1 op23;
                                PyObjectTempKeeper1 op25;
                                PyObjectTempKeeper1 op27;
                                if ( ( cmp29.assign( ( op23.assign( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_keys ) ).asObject() ) ).asObject() ) ), BINARY_OPERATION( PyNumber_Or, op23.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_defaults.asObject(), _python_str_plain_keys ) ).asObject() ) ).asObject() ) ).asObject() ) ) ), RICH_COMPARE_BOOL_NE( cmp29.asObject0(), PyObjectTemporary( ( op27.assign( ( op25.assign( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), _python_var_params.asObject() ) ), BINARY_OPERATION( PyNumber_Or, op25.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_defaults.asObject(), _python_str_plain_keys ) ).asObject() ) ).asObject() ) ).asObject() ) ) ), BINARY_OPERATION( PyNumber_Or, op27.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), _python_var_prefix_args.asObject() ) ).asObject() ) ) ).asObject() ) ) )
                            {
                                frame_guard.setLineNumber( 398 );
                                CONSIDER_THREADING(); continue;
                            }
                            }
                            _python_var_matches.assign0( Py_True );
                            {
                                frame_guard.setLineNumber( 400 );
                                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_defaults.asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
                                while( true )
                                {
                                    {
                                        frame_guard.setLineNumber( 400 );
                                        PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                        if ( _tmp_unpack_3 == NULL )
                                        {
                                            break;
                                        }
                                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                                        {
                                            frame_guard.setLineNumber( 400 );
                                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                            _python_var_k.assign0( _python_tmp_element_1.asObject() );
                                            _python_var_v.assign0( _python_tmp_element_2.asObject() );
                                        }
                                    }
                                    frame_guard.setLineNumber( 401 );
                                    {
                                        PyObjectTempKeeper1 call31;
                                        PyObjectTempKeeper0 call32;
                                        PyObjectTempKeeper1 cmp34;
                                        if ( ( cmp34.assign( ( call31.assign( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_get ) ), call32.assign( _python_var_k.asObject() ), CALL_FUNCTION_WITH_ARGS( call31.asObject0(), call32.asObject0(), _python_var_v.asObject() ) ) ), RICH_COMPARE_BOOL_NE( cmp34.asObject0(), _python_var_v.asObject() ) ) )
                                    {
                                        _python_var_matches.assign0( Py_False );
                                        frame_guard.setLineNumber( 403 );
                                        break;
                                    }
                                    }

                                   CONSIDER_THREADING();
                                }
                            }
                            frame_guard.setLineNumber( 404 );
                            if ( (!( CHECK_IF_TRUE( _python_var_matches.asObject() ) )) )
                            {
                                frame_guard.setLineNumber( 405 );
                                CONSIDER_THREADING(); continue;
                            }
                            frame_guard.setLineNumber( 406 );
                            _python_var_candidate_subs.assign0( _python_var_text_kwargs.asObject() );
                        }
                        frame_guard.setLineNumber( 412 );
                        {
                            PyObjectTempKeeper1 op36;
                            _python_var_candidate_pat.assign1( ( op36.assign( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_prefix_norm.asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_37, _python_unicode_digest_e91a81cacf6ba680079a9fbfd32893eb ) ), BINARY_OPERATION_ADD( op36.asObject0(), _python_var_result.asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 413 );
                        {
                            PyObjectTempKeeper1 call44;
                            PyObjectTempKeeper1 call45;
                            PyObjectTempKeeper1 call46;
                            PyObjectTempKeeper0 make_tuple40;
                            PyObjectTempKeeper0 op42;
                            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call44.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_re.asObject0(), _python_str_plain_search ) ), call45.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_a855df372d180e51145f5cb3eb1e8612, PyObjectTemporary( ( make_tuple40.assign( _python_var_prefix_norm.asObject() ), MAKE_TUPLE2( make_tuple40.asObject0(), _python_var_pattern.asObject() ) ) ).asObject() ) ), call46.assign( ( op42.assign( _python_var_candidate_pat.asObject() ), BINARY_OPERATION_REMAINDER( op42.asObject0(), _python_var_candidate_subs.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call44.asObject0(), call45.asObject0(), call46.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_re.asObject0(), _python_str_plain_UNICODE ) ).asObject() ) ) ).asObject() ) )
                        {
                            frame_guard.setLineNumber( 414 );
                            _python_var_candidate_subs.assign1( TO_DICT( PyObjectTemporary( impl_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_candidate_subs.asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) ) ).asObject(), NULL ) );
                            frame_guard.setLineNumber( 415 );
                            {
                                PyObjectTempKeeper0 op38;
                                return ( op38.assign( _python_var_candidate_pat.asObject() ), BINARY_OPERATION_REMAINDER( op38.asObject0(), _python_var_candidate_subs.asObject() ) );
                            }
                        }
                        }

                       CONSIDER_THREADING();
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 419 );
        _python_var_m.assign1( BUILTIN_GETATTR( _python_var_lookup_view.asObject(), _python_unicode_plain___module__, Py_None ) );
        frame_guard.setLineNumber( 420 );
        _python_var_n.assign1( BUILTIN_GETATTR( _python_var_lookup_view.asObject(), _python_unicode_plain___name__, Py_None ) );
        frame_guard.setLineNumber( 421 );
        if ( ( ( _python_var_m.asObject() != Py_None ) && ( _python_var_n.asObject() != Py_None ) ) )
        {
            frame_guard.setLineNumber( 422 );
            {
                PyObjectTempKeeper0 make_tuple48;
                _python_var_lookup_view_s.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_fffb2b4b5e45eb8109d63f2497fbdbc1, PyObjectTemporary( ( make_tuple48.assign( _python_var_m.asObject() ), MAKE_TUPLE2( make_tuple48.asObject0(), _python_var_n.asObject() ) ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 424 );
            _python_var_lookup_view_s.assign0( _python_var_lookup_view.asObject() );
        }
        frame_guard.setLineNumber( 425 );
        {
            PyObjectTempKeeper0 call53;
            PyObjectTempKeeper0 make_tuple50;
            PyObjectTempKeeper0 make_tuple51;
            {
                PyObjectTemporary tmp_exception_type( ( call53.assign( _mvar_django__core__urlresolvers_NoReverseMatch.asObject0() ), CALL_FUNCTION_WITH_ARGS( call53.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_fcece9f21e61345db98b540c51a887ec, PyObjectTemporary( ( make_tuple50.assign( _python_var_lookup_view_s.asObject() ), make_tuple51.assign( _python_var_args.asObject() ), MAKE_TUPLE3( make_tuple50.asObject0(), make_tuple51.asObject0(), _python_var_kwargs.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var__prefix.updateLocalsDict( _python_var_lookup_view.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_lookup_view_s.updateLocalsDict( _python_var_n.updateLocalsDict( _python_var_m.updateLocalsDict( _python_var_candidate_pat.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_matches.updateLocalsDict( _python_var_candidate_subs.updateLocalsDict( _python_var_params.updateLocalsDict( _python_var_result.updateLocalsDict( _python_var_defaults.updateLocalsDict( _python_var_pattern.updateLocalsDict( _python_var_possibility.updateLocalsDict( _python_var_prefix_args.updateLocalsDict( _python_var_prefix_norm.updateLocalsDict( _python_var_possibilities.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_text_kwargs.updateLocalsDict( _python_var_text_args.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_lookup_view = NULL;
    PyObject *_python_par__prefix = NULL;
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
                        PyErr_Format( PyExc_TypeError, "_reverse_with_prefix() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_reverse_with_prefix() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "_reverse_with_prefix() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument lookup_view was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_lookup_view );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_lookup_view == NULL );

            _python_par_lookup_view = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_lookup_view );

            kw_found += 1;
        }
    }

    // Check if argument _prefix was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain__prefix );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par__prefix == NULL );

            _python_par__prefix = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain__prefix );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "_reverse_with_prefix() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_reverse_with_prefix() takes at least %d non-keyword arguments (%zd given)", 3, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "_reverse_with_prefix() takes at least %d arguments (%zd given)", 3, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "_reverse_with_prefix() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_lookup_view != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_reverse_with_prefix() got multiple values for keyword argument 'lookup_view'" );
             goto error_exit;
         }

        _python_par_lookup_view = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par__prefix != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_reverse_with_prefix() got multiple values for keyword argument '_prefix'" );
             goto error_exit;
         }

        _python_par__prefix = INCREASE_REFCOUNT( args[ 2 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 3 )
    {
        _python_par_args = PyTuple_New( args_size - 3 );

        for( Py_ssize_t i = 0; i < args_size - 3; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[3+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self, _python_par_lookup_view, _python_par__prefix, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_lookup_view );
    Py_XDECREF( _python_par__prefix );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), MAKE_TUPLE( &args[ 3 ], size > 3 ? size-3 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_v )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 380 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 380 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_v.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( _mvar_django__core__urlresolvers_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_v.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}



struct _context_generator_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_k;
    PyObjectLocalVariable python_var_v;
};

static void _context_generator_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_destructor( void *context_voidptr )
{
    _context_generator_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t *_python_context = (struct _context_generator_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t *_python_context = (_context_generator_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_k.setVariableName( _python_str_plain_k );
        _python_context->python_var_v.setVariableName( _python_str_plain_v );

        // Actual function code.
        static PyFrameObject *frame_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
        {
            if ( frame_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
                Py_DECREF( frame_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
            }

            frame_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_be4667e0acb0227e1e452258e86bfc2d, _module_django__core__urlresolvers );
        }

        Py_INCREF( frame_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        generator->m_frame = frame_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers;

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
                    frame_guard.setLineNumber( 381 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 381 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        {
                            frame_guard.setLineNumber( 381 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_context->python_var_k.assign0( _python_tmp_element_1.asObject() );
                            _python_context->python_var_v.assign0( _python_tmp_element_2.asObject() );
                        }
                        {
                            PyObjectTempKeeper0 call1;
                            PyObjectTempKeeper0 make_tuple3;
                            YIELD_VALUE( generator, ( make_tuple3.assign( _python_context->python_var_k.asObject() ), MAKE_TUPLE2( make_tuple3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__core__urlresolvers_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_context->python_var_v.asObject() ) ) ).asObject() ) ) );
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

static PyObject *impl_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t *_python_context = new _context_generator_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_context,
            _python_str_angle_genexpr,
            _codeobj_ab9048fb4ad946e8fa6a6b5b9a408b6e,
            _python_context,
            _context_generator_genexpr_2_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_destructor
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



struct _context_generator_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_k;
    PyObjectLocalVariable python_var_v;
};

static void _context_generator_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_destructor( void *context_voidptr )
{
    _context_generator_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t *_python_context = (struct _context_generator_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t *_python_context = (_context_generator_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_k.setVariableName( _python_str_plain_k );
        _python_context->python_var_v.setVariableName( _python_str_plain_v );

        // Actual function code.
        static PyFrameObject *frame_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers ) )
        {
            if ( frame_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers" );
#endif
                Py_DECREF( frame_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
            }

            frame_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_680397d1158d729ecff5bdef47bf2df6, _module_django__core__urlresolvers );
        }

        Py_INCREF( frame_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers );
        generator->m_frame = frame_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers;

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
                    frame_guard.setLineNumber( 414 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 414 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        {
                            frame_guard.setLineNumber( 414 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_context->python_var_k.assign0( _python_tmp_element_1.asObject() );
                            _python_context->python_var_v.assign0( _python_tmp_element_2.asObject() );
                        }
                        {
                            PyObjectTempKeeper0 call1;
                            PyObjectTempKeeper0 make_tuple3;
                            YIELD_VALUE( generator, ( make_tuple3.assign( _python_context->python_var_k.asObject() ), MAKE_TUPLE2( make_tuple3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__core__urlresolvers_urlquote.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_context->python_var_v.asObject() ) ) ).asObject() ) ) );
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

static PyObject *impl_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t *_python_context = new _context_generator_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_context,
            _python_str_angle_genexpr,
            _codeobj_f9df54e77ea972d15114d1d84000c0c4,
            _python_context,
            _context_generator_genexpr_3_of_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers_destructor
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


NUITKA_LOCAL_MODULE PyObject *impl_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_regex( _python_str_plain_regex );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_urlresolvers );
    _python_var___doc__.assign0( _python_unicode_digest_8c195ebd08dd97a1f5d48b9e2645e540 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers(  ) );
    static PyFrameObject *frame_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_e4b5c297b87be20d3b994c5b24bb0ff3, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 439 );
        _python_var_regex.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers(  ) ).asObject() ) );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_regex.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers );
           frame_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        throw;
    }
    return _python_var_regex.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_urlconf_name, PyObject *_python_par_default_kwargs, PyObject *_python_par_app_name, PyObject *_python_par_namespace )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_urlconf_name( _python_str_plain_urlconf_name, _python_par_urlconf_name );
    PyObjectLocalParameterVariableNoDel _python_var_default_kwargs( _python_str_plain_default_kwargs, _python_par_default_kwargs );
    PyObjectLocalParameterVariableNoDel _python_var_app_name( _python_str_plain_app_name, _python_par_app_name );
    PyObjectLocalParameterVariableNoDel _python_var_namespace( _python_str_plain_namespace, _python_par_namespace );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_239519604426e7543e59175c9f3f31e6, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 436 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__core__urlresolvers_LocaleRegexURLResolver.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), call5.assign( _python_var_urlconf_name.asObject() ), call6.assign( _python_var_default_kwargs.asObject() ), call7.assign( _python_var_app_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), Py_None, call5.asObject0(), call6.asObject0(), call7.asObject0(), _python_var_namespace.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_namespace.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_default_kwargs.updateLocalsDict( _python_var_urlconf_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_urlconf_name = NULL;
    PyObject *_python_par_default_kwargs = NULL;
    PyObject *_python_par_app_name = NULL;
    PyObject *_python_par_namespace = NULL;
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
            if ( found == false && _python_str_plain_urlconf_name == key )
            {
                if (unlikely( _python_par_urlconf_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'urlconf_name'" );
                    goto error_exit;
                }

                _python_par_urlconf_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_default_kwargs == key )
            {
                if (unlikely( _python_par_default_kwargs ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'default_kwargs'" );
                    goto error_exit;
                }

                _python_par_default_kwargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_app_name == key )
            {
                if (unlikely( _python_par_app_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'app_name'" );
                    goto error_exit;
                }

                _python_par_app_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_namespace == key )
            {
                if (unlikely( _python_par_namespace ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'namespace'" );
                    goto error_exit;
                }

                _python_par_namespace = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_urlconf_name, key ) )
            {
                if (unlikely( _python_par_urlconf_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'urlconf_name'" );
                    goto error_exit;
                }

                _python_par_urlconf_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_default_kwargs, key ) )
            {
                if (unlikely( _python_par_default_kwargs ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'default_kwargs'" );
                    goto error_exit;
                }

                _python_par_default_kwargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_app_name, key ) )
            {
                if (unlikely( _python_par_app_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'app_name'" );
                    goto error_exit;
                }

                _python_par_app_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_namespace, key ) )
            {
                if (unlikely( _python_par_namespace ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'namespace'" );
                    goto error_exit;
                }

                _python_par_namespace = value;

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
    if (unlikely( args_given > 5 ))
    {
        if ( 5 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 2 )
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
    args_usable_count = args_given < 5 ? args_given : 5;

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
         if (unlikely( _python_par_urlconf_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'urlconf_name'" );
             goto error_exit;
         }

        _python_par_urlconf_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_default_kwargs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'default_kwargs'" );
             goto error_exit;
         }

        _python_par_default_kwargs = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_app_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'app_name'" );
             goto error_exit;
         }

        _python_par_app_name = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_namespace != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'namespace'" );
             goto error_exit;
         }

        _python_par_namespace = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_default_kwargs == NULL )
    {
        _python_par_default_kwargs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_default_kwargs );
    }
    if ( _python_par_app_name == NULL )
    {
        _python_par_app_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_app_name );
    }
    if ( _python_par_namespace == NULL )
    {
        _python_par_namespace = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_namespace );
    }


    return impl_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self, _python_par_urlconf_name, _python_par_default_kwargs, _python_par_app_name, _python_par_namespace );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_urlconf_name );
    Py_XDECREF( _python_par_default_kwargs );
    Py_XDECREF( _python_par_app_name );
    Py_XDECREF( _python_par_namespace );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_language_code( _python_str_plain_language_code );
    PyObjectLocalVariable _python_var_regex_compiled( _python_str_plain_regex_compiled );

    // Actual function code.
    static PyFrameObject *frame_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers );
        }

        frame_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_b9a190aa822982d8c41f37728674ca0d, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 441 );
        _python_var_language_code.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__urlresolvers_get_language.asObject0() ) );
        frame_guard.setLineNumber( 442 );
        {
            PyObjectTempKeeper0 cmp4;
            if ( ( cmp4.assign( _python_var_language_code.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__regex_dict ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 443 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper1 call2;
                _python_var_regex_compiled.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_re.asObject0(), _python_str_plain_compile ) ), call2.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_10fbcde428de9cdb179cae1e03acdb68, _python_var_language_code.asObject() ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_re.asObject0(), _python_str_plain_UNICODE ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 444 );
            {
                    PyObject *tmp_identifier = _python_var_regex_compiled.asObject();
                    PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__regex_dict ) );
                    SET_SUBSCRIPT( tmp_identifier, tmp_subscribed.asObject(), _python_var_language_code.asObject() );
            }
        }
        }
        frame_guard.setLineNumber( 445 );
        {
            PyObjectTempKeeper1 subscr6;
            return ( subscr6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__regex_dict ) ), LOOKUP_SUBSCRIPT( subscr6.asObject0(), _python_var_language_code.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_regex_compiled.updateLocalsDict( _python_var_language_code.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers );
           frame_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "regex() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "regex() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "regex() got multiple values for keyword argument 'self'" );
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
                   "regex() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "regex() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "regex() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "regex() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "regex() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "regex() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "regex() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "regex() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "regex() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "regex() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "regex() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "regex() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "regex() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "regex() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_resolve_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_path, PyObject *_python_par_urlconf )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );
    PyObjectLocalParameterVariableNoDel _python_var_urlconf( _python_str_plain_urlconf, _python_par_urlconf );

    // Actual function code.
    static PyFrameObject *frame_function_12_resolve_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_12_resolve_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_12_resolve_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_resolve_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_12_resolve_of_module_django__core__urlresolvers );
        }

        frame_function_12_resolve_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_709e4d18456a9aea2ebf905a94e4c674, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_12_resolve_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_12_resolve_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 448 );
        if ( ( _python_var_urlconf.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 449 );
            _python_var_urlconf.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__urlresolvers_get_urlconf.asObject0() ) );
        }
        frame_guard.setLineNumber( 450 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__core__urlresolvers_get_resolver.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_urlconf.asObject() ) ) ).asObject(), _python_str_plain_resolve ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_path.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_urlconf.updateLocalsDict( _python_var_path.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_12_resolve_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_12_resolve_of_module_django__core__urlresolvers );
           frame_function_12_resolve_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_12_resolve_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_path = NULL;
    PyObject *_python_par_urlconf = NULL;
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
                PyErr_Format( PyExc_TypeError, "resolve() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_urlconf == key )
            {
                if (unlikely( _python_par_urlconf ))
                {
                    PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'urlconf'" );
                    goto error_exit;
                }

                _python_par_urlconf = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path, key ) )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_urlconf, key ) )
            {
                if (unlikely( _python_par_urlconf ))
                {
                    PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'urlconf'" );
                    goto error_exit;
                }

                _python_par_urlconf = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "resolve() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "resolve() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "resolve() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "resolve() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "resolve() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "resolve() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "resolve() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "resolve() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "resolve() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_urlconf != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "resolve() got multiple values for keyword argument 'urlconf'" );
             goto error_exit;
         }

        _python_par_urlconf = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_urlconf == NULL )
    {
        _python_par_urlconf = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_urlconf );
    }


    return impl_function_12_resolve_of_module_django__core__urlresolvers( self, _python_par_path, _python_par_urlconf );

error_exit:;

    Py_XDECREF( _python_par_path );
    Py_XDECREF( _python_par_urlconf );

    return NULL;
}

static PyObject *dparse_function_12_resolve_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_12_resolve_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_resolve_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_reverse_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_viewname, PyObject *_python_par_urlconf, PyObject *_python_par_args, PyObject *_python_par_kwargs, PyObject *_python_par_prefix, PyObject *_python_par_current_app )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_viewname( _python_str_plain_viewname, _python_par_viewname );
    PyObjectLocalParameterVariableNoDel _python_var_urlconf( _python_str_plain_urlconf, _python_par_urlconf );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalParameterVariableNoDel _python_var_prefix( _python_str_plain_prefix, _python_par_prefix );
    PyObjectLocalParameterVariableNoDel _python_var_current_app( _python_str_plain_current_app, _python_par_current_app );
    PyObjectLocalVariable _python_var_resolver( _python_str_plain_resolver );
    PyObjectLocalVariable _python_var_view( _python_str_plain_view );
    PyObjectLocalVariable _python_var_parts( _python_str_plain_parts );
    PyObjectLocalVariable _python_var_path( _python_str_plain_path );
    PyObjectLocalVariable _python_var_resolved_path( _python_str_plain_resolved_path );
    PyObjectLocalVariable _python_var_ns_pattern( _python_str_plain_ns_pattern );
    PyObjectLocalVariable _python_var_ns( _python_str_plain_ns );
    PyObjectLocalVariable _python_var_app_list( _python_str_plain_app_list );
    PyObjectLocalVariable _python_var_extra( _python_str_plain_extra );
    PyObjectLocalVariable _python_var_key( _python_str_plain_key );

    // Actual function code.
    static PyFrameObject *frame_function_13_reverse_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_13_reverse_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_13_reverse_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_reverse_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_13_reverse_of_module_django__core__urlresolvers );
        }

        frame_function_13_reverse_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_4a041c20efc34275af5ddc47667b6745, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_13_reverse_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_13_reverse_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 453 );
        if ( ( _python_var_urlconf.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 454 );
            _python_var_urlconf.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__urlresolvers_get_urlconf.asObject0() ) );
        }
        frame_guard.setLineNumber( 455 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_resolver.assign1( ( call1.assign( _mvar_django__core__urlresolvers_get_resolver.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_urlconf.asObject() ) ) );
        }
        frame_guard.setLineNumber( 456 );
        {
            PyObjectTempKeeper0 keeper_0;
            _python_var_args.assign1( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_args.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : PyList_New( 0 ) ) );
        }
        frame_guard.setLineNumber( 457 );
        {
            PyObjectTempKeeper0 keeper_1;
            _python_var_kwargs.assign1( ( CHECK_IF_TRUE( keeper_1.assign( _python_var_kwargs.asObject() ) ) ? INCREASE_REFCOUNT( keeper_1.asObject0() ) : PyDict_New() ) );
        }
        frame_guard.setLineNumber( 459 );
        if ( ( _python_var_prefix.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 460 );
            _python_var_prefix.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__urlresolvers_get_script_prefix.asObject0() ) );
        }
        frame_guard.setLineNumber( 462 );
        {
            PyObjectTempKeeper0 isinstance26;
            if ( (!( ( isinstance26.assign( _python_var_viewname.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance26.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )) )
        {
            frame_guard.setLineNumber( 463 );
            _python_var_view.assign0( _python_var_viewname.asObject() );
        }
        else
        {
            frame_guard.setLineNumber( 465 );
            _python_var_parts.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_viewname.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_58 ) );
            frame_guard.setLineNumber( 466 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_parts.asObject(), _python_str_plain_reverse ) ).asObject() ) );
            frame_guard.setLineNumber( 467 );
            _python_var_view.assign1( LOOKUP_SUBSCRIPT_CONST( _python_var_parts.asObject(), _python_int_0, 0 ) );
            frame_guard.setLineNumber( 468 );
            _python_var_path.assign1( LOOKUP_INDEX_SLICE( _python_var_parts.asObject(), 1, PY_SSIZE_T_MAX ) );
            _python_var_resolved_path.assign1( PyList_New( 0 ) );
            _python_var_ns_pattern.assign0( _python_unicode_empty );
            frame_guard.setLineNumber( 472 );
            while( true )
            {
                frame_guard.setLineNumber( 472 );
                if ( (!( CHECK_IF_TRUE( _python_var_path.asObject() ) )) )
                {
                    frame_guard.setLineNumber( 472 );
                    break;
                }
                frame_guard.setLineNumber( 473 );
                _python_var_ns.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_path.asObject(), _python_str_plain_pop ) ).asObject() ) );
                frame_guard.setLineNumber( 476 );
                try
                {
                    frame_guard.setLineNumber( 477 );
                    {
                        PyObjectTempKeeper1 subscr3;
                        _python_var_app_list.assign1( ( subscr3.assign( LOOKUP_ATTRIBUTE( _python_var_resolver.asObject(), _python_str_plain_app_dict ) ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_var_ns.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 479 );
                    {
                        PyObjectTempKeeper0 cmp7;
                        if ( ( CHECK_IF_TRUE( _python_var_current_app.asObject() ) && ( cmp7.assign( _python_var_current_app.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp7.asObject0(), _python_var_app_list.asObject() ) ) ) )
                    {
                        frame_guard.setLineNumber( 482 );
                        _python_var_ns.assign0( _python_var_current_app.asObject() );
                    }
                    else
                    {
                        frame_guard.setLineNumber( 483 );
                        {
                            PyObjectTempKeeper0 cmp5;
                            if ( ( cmp5.assign( _python_var_ns.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp5.asObject0(), _python_var_app_list.asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 487 );
                            _python_var_ns.assign1( LOOKUP_SUBSCRIPT_CONST( _python_var_app_list.asObject(), _python_int_0, 0 ) );
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

                    frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
                    ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
                    _exception.toExceptionHandler();

                    if ( _exception.matches( PyExc_KeyError ) )
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
                frame_guard.setLineNumber( 491 );
                try
                {
                    {
                        frame_guard.setLineNumber( 492 );
                        PyObject *_tmp_python_tmp_source_iter;
                        {
                            PyObjectTempKeeper1 subscr17;
                            _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( subscr17.assign( LOOKUP_ATTRIBUTE( _python_var_resolver.asObject(), _python_str_plain_namespace_dict ) ), LOOKUP_SUBSCRIPT( subscr17.asObject0(), _python_var_ns.asObject() ) ) ).asObject() );
                        }
                        PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_extra.assign0( _python_tmp_element_1.asObject() );
                        _python_var_resolver.assign0( _python_tmp_element_2.asObject() );
                    }
                    frame_guard.setLineNumber( 493 );
                    {
                        PyObjectTempKeeper1 call19;
                        DECREASE_REFCOUNT( ( call19.assign( LOOKUP_ATTRIBUTE( _python_var_resolved_path.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), _python_var_ns.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 494 );
                    {
                        PyObjectTempKeeper0 op21;
                        _python_var_ns_pattern.assign1( ( op21.assign( _python_var_ns_pattern.asObject() ), BINARY_OPERATION_ADD( op21.asObject0(), _python_var_extra.asObject() ) ) );
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
                        _python_var_key.assign0( _exception.getValue() );
                        frame_guard.setLineNumber( 496 );
                        if ( CHECK_IF_TRUE( _python_var_resolved_path.asObject() ) )
                        {
                            frame_guard.setLineNumber( 497 );
                            {
                                PyObjectTempKeeper0 call13;
                                PyObjectTempKeeper1 call9;
                                PyObjectTempKeeper0 make_tuple11;
                                {
                                    PyObjectTemporary tmp_exception_type( ( call13.assign( _mvar_django__core__urlresolvers_NoReverseMatch.asObject0() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_8d3d108d5fb055a5e92d0f11eccf5f5f, PyObjectTemporary( ( make_tuple11.assign( _python_var_key.asObject() ), MAKE_TUPLE2( make_tuple11.asObject0(), PyObjectTemporary( ( call9.assign( LOOKUP_ATTRIBUTE( _python_unicode_chr_58, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_resolved_path.asObject() ) ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                            }
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 501 );
                            {
                                PyObjectTempKeeper0 call15;
                                {
                                    PyObjectTemporary tmp_exception_type( ( call15.assign( _mvar_django__core__urlresolvers_NoReverseMatch.asObject0() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_986de27a1a4d1d0eb50a5ced5b497874, _python_var_key.asObject() ) ).asObject() ) ) );
                                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                            }
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

               CONSIDER_THREADING();
            }
            frame_guard.setLineNumber( 503 );
            if ( CHECK_IF_TRUE( _python_var_ns_pattern.asObject() ) )
            {
                frame_guard.setLineNumber( 504 );
                {
                    PyObjectTempKeeper0 call23;
                    PyObjectTempKeeper0 call24;
                    _python_var_resolver.assign1( ( call23.assign( _mvar_django__core__urlresolvers_get_ns_resolver.asObject0() ), call24.assign( _python_var_ns_pattern.asObject() ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), call24.asObject0(), _python_var_resolver.asObject() ) ) );
                }
            }
        }
        }
        frame_guard.setLineNumber( 506 );
        {
            PyObjectTempKeeper0 call34;
            PyObjectTempKeeper1 call_tmp30;
            PyObjectTempKeeper1 call_tmp31;
            PyObjectTempKeeper0 call_tmp32;
            PyObjectTempKeeper0 make_tuple28;
            return ( call34.assign( _mvar_django__core__urlresolvers_iri_to_uri.asObject0() ), CALL_FUNCTION_WITH_ARGS( call34.asObject0(), PyObjectTemporary( ( call_tmp30.assign( LOOKUP_ATTRIBUTE( _python_var_resolver.asObject(), _python_str_plain__reverse_with_prefix ) ), call_tmp31.assign( ( make_tuple28.assign( _python_var_view.asObject() ), MAKE_TUPLE2( make_tuple28.asObject0(), _python_var_prefix.asObject() ) ) ), call_tmp32.assign( _python_var_args.asObject() ), impl_function_8_complex_call_helper_pos_star_list_star_dict_of_module___internal__( call_tmp30.asObject(), call_tmp31.asObject(), call_tmp32.asObject(), _python_var_kwargs.asObject1() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_current_app.updateLocalsDict( _python_var_prefix.updateLocalsDict( _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_urlconf.updateLocalsDict( _python_var_viewname.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_extra.updateLocalsDict( _python_var_app_list.updateLocalsDict( _python_var_ns.updateLocalsDict( _python_var_ns_pattern.updateLocalsDict( _python_var_resolved_path.updateLocalsDict( _python_var_path.updateLocalsDict( _python_var_parts.updateLocalsDict( _python_var_view.updateLocalsDict( _python_var_resolver.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_13_reverse_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_13_reverse_of_module_django__core__urlresolvers );
           frame_function_13_reverse_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_reverse_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_viewname = NULL;
    PyObject *_python_par_urlconf = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kwargs = NULL;
    PyObject *_python_par_prefix = NULL;
    PyObject *_python_par_current_app = NULL;
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
                PyErr_Format( PyExc_TypeError, "reverse() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_viewname == key )
            {
                if (unlikely( _python_par_viewname ))
                {
                    PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'viewname'" );
                    goto error_exit;
                }

                _python_par_viewname = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_urlconf == key )
            {
                if (unlikely( _python_par_urlconf ))
                {
                    PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'urlconf'" );
                    goto error_exit;
                }

                _python_par_urlconf = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_args == key )
            {
                if (unlikely( _python_par_args ))
                {
                    PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'args'" );
                    goto error_exit;
                }

                _python_par_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_kwargs == key )
            {
                if (unlikely( _python_par_kwargs ))
                {
                    PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'kwargs'" );
                    goto error_exit;
                }

                _python_par_kwargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_prefix == key )
            {
                if (unlikely( _python_par_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'prefix'" );
                    goto error_exit;
                }

                _python_par_prefix = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_current_app == key )
            {
                if (unlikely( _python_par_current_app ))
                {
                    PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'current_app'" );
                    goto error_exit;
                }

                _python_par_current_app = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_viewname, key ) )
            {
                if (unlikely( _python_par_viewname ))
                {
                    PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'viewname'" );
                    goto error_exit;
                }

                _python_par_viewname = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_urlconf, key ) )
            {
                if (unlikely( _python_par_urlconf ))
                {
                    PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'urlconf'" );
                    goto error_exit;
                }

                _python_par_urlconf = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_args, key ) )
            {
                if (unlikely( _python_par_args ))
                {
                    PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'args'" );
                    goto error_exit;
                }

                _python_par_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_kwargs, key ) )
            {
                if (unlikely( _python_par_kwargs ))
                {
                    PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'kwargs'" );
                    goto error_exit;
                }

                _python_par_kwargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_prefix, key ) )
            {
                if (unlikely( _python_par_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'prefix'" );
                    goto error_exit;
                }

                _python_par_prefix = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_current_app, key ) )
            {
                if (unlikely( _python_par_current_app ))
                {
                    PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'current_app'" );
                    goto error_exit;
                }

                _python_par_current_app = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "reverse() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "reverse() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "reverse() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "reverse() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "reverse() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "reverse() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "reverse() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "reverse() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "reverse() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 6 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "reverse() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "reverse() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "reverse() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "reverse() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 6 ? args_given : 6;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_viewname != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'viewname'" );
             goto error_exit;
         }

        _python_par_viewname = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_urlconf != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'urlconf'" );
             goto error_exit;
         }

        _python_par_urlconf = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_args != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'args'" );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_kwargs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'kwargs'" );
             goto error_exit;
         }

        _python_par_kwargs = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_prefix != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'prefix'" );
             goto error_exit;
         }

        _python_par_prefix = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_current_app != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "reverse() got multiple values for keyword argument 'current_app'" );
             goto error_exit;
         }

        _python_par_current_app = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_urlconf == NULL )
    {
        _python_par_urlconf = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_urlconf );
    }
    if ( _python_par_args == NULL )
    {
        _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_args );
    }
    if ( _python_par_kwargs == NULL )
    {
        _python_par_kwargs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_kwargs );
    }
    if ( _python_par_prefix == NULL )
    {
        _python_par_prefix = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_prefix );
    }
    if ( _python_par_current_app == NULL )
    {
        _python_par_current_app = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 4 ) );
        assertObject( _python_par_current_app );
    }


    return impl_function_13_reverse_of_module_django__core__urlresolvers( self, _python_par_viewname, _python_par_urlconf, _python_par_args, _python_par_kwargs, _python_par_prefix, _python_par_current_app );

error_exit:;

    Py_XDECREF( _python_par_viewname );
    Py_XDECREF( _python_par_urlconf );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );
    Py_XDECREF( _python_par_prefix );
    Py_XDECREF( _python_par_current_app );

    return NULL;
}

static PyObject *dparse_function_13_reverse_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_13_reverse_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_reverse_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_clear_url_caches_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_function_14_clear_url_caches_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_14_clear_url_caches_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_14_clear_url_caches_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14_clear_url_caches_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_14_clear_url_caches_of_module_django__core__urlresolvers );
        }

        frame_function_14_clear_url_caches_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_ad61fa782c2d737768645a729c060e5a, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_14_clear_url_caches_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_14_clear_url_caches_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 514 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers__resolver_cache.asObject0(), _python_str_plain_clear ) ).asObject() ) );
        frame_guard.setLineNumber( 515 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers__ns_resolver_cache.asObject0(), _python_str_plain_clear ) ).asObject() ) );
        frame_guard.setLineNumber( 516 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__urlresolvers__callable_cache.asObject0(), _python_str_plain_clear ) ).asObject() ) );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        if ( frame_guard.getFrame0() == frame_function_14_clear_url_caches_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_14_clear_url_caches_of_module_django__core__urlresolvers );
           frame_function_14_clear_url_caches_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_14_clear_url_caches_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "clear_url_caches() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "clear_url_caches() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "clear_url_caches() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_14_clear_url_caches_of_module_django__core__urlresolvers( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_14_clear_url_caches_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_14_clear_url_caches_of_module_django__core__urlresolvers( self );
    }
    else
    {
        PyObject *result = fparse_function_14_clear_url_caches_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_set_script_prefix_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_prefix )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_prefix( _python_str_plain_prefix, _python_par_prefix );

    // Actual function code.
    static PyFrameObject *frame_function_15_set_script_prefix_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_15_set_script_prefix_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_15_set_script_prefix_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_set_script_prefix_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_15_set_script_prefix_of_module_django__core__urlresolvers );
        }

        frame_function_15_set_script_prefix_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_d5763201076d023d52883001fe0316aa, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_15_set_script_prefix_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_15_set_script_prefix_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 522 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_prefix.asObject(), _python_str_plain_endswith ) ).asObject(), _python_unicode_chr_47 ) ).asObject() ) )) )
        {
            {
                frame_guard.setLineNumber( 523 );
                PyObject *_python_tmp_inplace_start = _python_var_prefix.asObject();
                PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_unicode_chr_47 ) );
                if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                {
                    _python_var_prefix.assign0( _python_tmp_inplace_end.asObject() );
                }
            }
        }
        frame_guard.setLineNumber( 524 );
        {
                PyObject *tmp_identifier = _python_var_prefix.asObject();
                SET_ATTRIBUTE( tmp_identifier, _mvar_django__core__urlresolvers__prefixes.asObject0(), _python_str_plain_value );
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
        frame_guard.getFrame0()->f_locals = _python_var_prefix.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_15_set_script_prefix_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_15_set_script_prefix_of_module_django__core__urlresolvers );
           frame_function_15_set_script_prefix_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_15_set_script_prefix_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_prefix = NULL;
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
                PyErr_Format( PyExc_TypeError, "set_script_prefix() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_prefix == key )
            {
                if (unlikely( _python_par_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "set_script_prefix() got multiple values for keyword argument 'prefix'" );
                    goto error_exit;
                }

                _python_par_prefix = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_prefix, key ) )
            {
                if (unlikely( _python_par_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "set_script_prefix() got multiple values for keyword argument 'prefix'" );
                    goto error_exit;
                }

                _python_par_prefix = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "set_script_prefix() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "set_script_prefix() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "set_script_prefix() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "set_script_prefix() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "set_script_prefix() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "set_script_prefix() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_script_prefix() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "set_script_prefix() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_script_prefix() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "set_script_prefix() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "set_script_prefix() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "set_script_prefix() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "set_script_prefix() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_prefix != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "set_script_prefix() got multiple values for keyword argument 'prefix'" );
             goto error_exit;
         }

        _python_par_prefix = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_15_set_script_prefix_of_module_django__core__urlresolvers( self, _python_par_prefix );

error_exit:;

    Py_XDECREF( _python_par_prefix );

    return NULL;
}

static PyObject *dparse_function_15_set_script_prefix_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_15_set_script_prefix_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_set_script_prefix_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_get_script_prefix_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_function_16_get_script_prefix_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_16_get_script_prefix_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_16_get_script_prefix_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16_get_script_prefix_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_16_get_script_prefix_of_module_django__core__urlresolvers );
        }

        frame_function_16_get_script_prefix_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_745dd2e4242d1bc28b63180647ae5350, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_16_get_script_prefix_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_16_get_script_prefix_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 532 );
        return BUILTIN_GETATTR( _mvar_django__core__urlresolvers__prefixes.asObject0(), _python_unicode_plain_value, _python_unicode_chr_47 );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        if ( frame_guard.getFrame0() == frame_function_16_get_script_prefix_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_16_get_script_prefix_of_module_django__core__urlresolvers );
           frame_function_16_get_script_prefix_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_16_get_script_prefix_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "get_script_prefix() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "get_script_prefix() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "get_script_prefix() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_16_get_script_prefix_of_module_django__core__urlresolvers( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_16_get_script_prefix_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_16_get_script_prefix_of_module_django__core__urlresolvers( self );
    }
    else
    {
        PyObject *result = fparse_function_16_get_script_prefix_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_clear_script_prefix_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_function_17_clear_script_prefix_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_17_clear_script_prefix_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_17_clear_script_prefix_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_17_clear_script_prefix_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_17_clear_script_prefix_of_module_django__core__urlresolvers );
        }

        frame_function_17_clear_script_prefix_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_b3b39acaa5ed12353483316baa0f2336, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_17_clear_script_prefix_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_17_clear_script_prefix_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 538 );
        try
        {
            frame_guard.setLineNumber( 539 );
            DEL_ATTRIBUTE( _mvar_django__core__urlresolvers__prefixes.asObject0(), _python_str_plain_value );
        }
        catch ( PythonException &_exception )
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
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        if ( frame_guard.getFrame0() == frame_function_17_clear_script_prefix_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_17_clear_script_prefix_of_module_django__core__urlresolvers );
           frame_function_17_clear_script_prefix_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_17_clear_script_prefix_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "clear_script_prefix() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "clear_script_prefix() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "clear_script_prefix() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_17_clear_script_prefix_of_module_django__core__urlresolvers( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_17_clear_script_prefix_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_17_clear_script_prefix_of_module_django__core__urlresolvers( self );
    }
    else
    {
        PyObject *result = fparse_function_17_clear_script_prefix_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18_set_urlconf_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_urlconf_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_urlconf_name( _python_str_plain_urlconf_name, _python_par_urlconf_name );

    // Actual function code.
    static PyFrameObject *frame_function_18_set_urlconf_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_18_set_urlconf_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_18_set_urlconf_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_18_set_urlconf_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_18_set_urlconf_of_module_django__core__urlresolvers );
        }

        frame_function_18_set_urlconf_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_05cb2d4966213c1fb499d1f00789a4f4, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_18_set_urlconf_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_18_set_urlconf_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 548 );
        if ( CHECK_IF_TRUE( _python_var_urlconf_name.asObject() ) )
        {
            frame_guard.setLineNumber( 549 );
            {
                    PyObject *tmp_identifier = _python_var_urlconf_name.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _mvar_django__core__urlresolvers__urlconfs.asObject0(), _python_str_plain_value );
            }
        }
        else
        {
            frame_guard.setLineNumber( 551 );
            if ( HAS_ATTRIBUTE( _mvar_django__core__urlresolvers__urlconfs.asObject0(), _python_unicode_plain_value ) )
            {
                frame_guard.setLineNumber( 552 );
                DEL_ATTRIBUTE( _mvar_django__core__urlresolvers__urlconfs.asObject0(), _python_str_plain_value );
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
        frame_guard.getFrame0()->f_locals = _python_var_urlconf_name.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_18_set_urlconf_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_18_set_urlconf_of_module_django__core__urlresolvers );
           frame_function_18_set_urlconf_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_18_set_urlconf_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_urlconf_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "set_urlconf() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_urlconf_name == key )
            {
                if (unlikely( _python_par_urlconf_name ))
                {
                    PyErr_Format( PyExc_TypeError, "set_urlconf() got multiple values for keyword argument 'urlconf_name'" );
                    goto error_exit;
                }

                _python_par_urlconf_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_urlconf_name, key ) )
            {
                if (unlikely( _python_par_urlconf_name ))
                {
                    PyErr_Format( PyExc_TypeError, "set_urlconf() got multiple values for keyword argument 'urlconf_name'" );
                    goto error_exit;
                }

                _python_par_urlconf_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "set_urlconf() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "set_urlconf() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "set_urlconf() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "set_urlconf() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "set_urlconf() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "set_urlconf() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_urlconf() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "set_urlconf() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_urlconf() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "set_urlconf() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "set_urlconf() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "set_urlconf() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "set_urlconf() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_urlconf_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "set_urlconf() got multiple values for keyword argument 'urlconf_name'" );
             goto error_exit;
         }

        _python_par_urlconf_name = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_18_set_urlconf_of_module_django__core__urlresolvers( self, _python_par_urlconf_name );

error_exit:;

    Py_XDECREF( _python_par_urlconf_name );

    return NULL;
}

static PyObject *dparse_function_18_set_urlconf_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_18_set_urlconf_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_18_set_urlconf_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_19_get_urlconf_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_default )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_default( _python_str_plain_default, _python_par_default );

    // Actual function code.
    static PyFrameObject *frame_function_19_get_urlconf_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_19_get_urlconf_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_19_get_urlconf_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_19_get_urlconf_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_19_get_urlconf_of_module_django__core__urlresolvers );
        }

        frame_function_19_get_urlconf_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_ad372889915ea4bbb1d55bdf91241e8e, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_19_get_urlconf_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_19_get_urlconf_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 559 );
        {
            PyObjectTempKeeper0 getattr1;
            return ( getattr1.assign( _mvar_django__core__urlresolvers__urlconfs.asObject0() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_unicode_plain_value, _python_var_default.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_default.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_19_get_urlconf_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_19_get_urlconf_of_module_django__core__urlresolvers );
           frame_function_19_get_urlconf_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_19_get_urlconf_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "get_urlconf() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_default == key )
            {
                if (unlikely( _python_par_default ))
                {
                    PyErr_Format( PyExc_TypeError, "get_urlconf() got multiple values for keyword argument 'default'" );
                    goto error_exit;
                }

                _python_par_default = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_default, key ) )
            {
                if (unlikely( _python_par_default ))
                {
                    PyErr_Format( PyExc_TypeError, "get_urlconf() got multiple values for keyword argument 'default'" );
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
                   "get_urlconf() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_urlconf() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_urlconf() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_urlconf() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_urlconf() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_urlconf() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_urlconf() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_urlconf() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_urlconf() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_urlconf() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_urlconf() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "get_urlconf() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_urlconf() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_default != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_urlconf() got multiple values for keyword argument 'default'" );
             goto error_exit;
         }

        _python_par_default = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_default == NULL )
    {
        _python_par_default = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_default );
    }


    return impl_function_19_get_urlconf_of_module_django__core__urlresolvers( self, _python_par_default );

error_exit:;

    Py_XDECREF( _python_par_default );

    return NULL;
}

static PyObject *dparse_function_19_get_urlconf_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_19_get_urlconf_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_19_get_urlconf_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_20_is_valid_path_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject *_python_par_path, PyObject *_python_par_urlconf )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );
    PyObjectLocalParameterVariableNoDel _python_var_urlconf( _python_str_plain_urlconf, _python_par_urlconf );

    // Actual function code.
    static PyFrameObject *frame_function_20_is_valid_path_of_module_django__core__urlresolvers = NULL;

    if ( isFrameUnusable( frame_function_20_is_valid_path_of_module_django__core__urlresolvers ) )
    {
        if ( frame_function_20_is_valid_path_of_module_django__core__urlresolvers )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_20_is_valid_path_of_module_django__core__urlresolvers" );
#endif
            Py_DECREF( frame_function_20_is_valid_path_of_module_django__core__urlresolvers );
        }

        frame_function_20_is_valid_path_of_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_048982ace2980454f3ebc0d3462ef71d, _module_django__core__urlresolvers );
    }

    FrameGuard frame_guard( frame_function_20_is_valid_path_of_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_function_20_is_valid_path_of_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 569 );
        try
        {
            frame_guard.setLineNumber( 570 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call2;
                DECREASE_REFCOUNT( ( call1.assign( _mvar_django__core__urlresolvers_resolve.asObject0() ), call2.assign( _python_var_path.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_urlconf.asObject() ) ) );
            }
            return INCREASE_REFCOUNT( Py_True );
        }
        catch ( PythonException &_exception )
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

            if ( _exception.matches( _mvar_django__core__urlresolvers_Resolver404.asObject0() ) )
            {
                frame_guard.detachFrame();
                return INCREASE_REFCOUNT( Py_False );
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
        frame_guard.getFrame0()->f_locals = _python_var_urlconf.updateLocalsDict( _python_var_path.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_20_is_valid_path_of_module_django__core__urlresolvers )
        {
           Py_DECREF( frame_function_20_is_valid_path_of_module_django__core__urlresolvers );
           frame_function_20_is_valid_path_of_module_django__core__urlresolvers = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_20_is_valid_path_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_path = NULL;
    PyObject *_python_par_urlconf = NULL;
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
                PyErr_Format( PyExc_TypeError, "is_valid_path() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "is_valid_path() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_urlconf == key )
            {
                if (unlikely( _python_par_urlconf ))
                {
                    PyErr_Format( PyExc_TypeError, "is_valid_path() got multiple values for keyword argument 'urlconf'" );
                    goto error_exit;
                }

                _python_par_urlconf = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path, key ) )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "is_valid_path() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_urlconf, key ) )
            {
                if (unlikely( _python_par_urlconf ))
                {
                    PyErr_Format( PyExc_TypeError, "is_valid_path() got multiple values for keyword argument 'urlconf'" );
                    goto error_exit;
                }

                _python_par_urlconf = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "is_valid_path() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "is_valid_path() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "is_valid_path() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "is_valid_path() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "is_valid_path() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_valid_path() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_valid_path() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_valid_path() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_valid_path() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "is_valid_path() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_valid_path() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "is_valid_path() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "is_valid_path() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "is_valid_path() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_urlconf != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "is_valid_path() got multiple values for keyword argument 'urlconf'" );
             goto error_exit;
         }

        _python_par_urlconf = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_urlconf == NULL )
    {
        _python_par_urlconf = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_urlconf );
    }


    return impl_function_20_is_valid_path_of_module_django__core__urlresolvers( self, _python_par_path, _python_par_urlconf );

error_exit:;

    Py_XDECREF( _python_par_path );
    Py_XDECREF( _python_par_urlconf );

    return NULL;
}

static PyObject *dparse_function_20_is_valid_path_of_module_django__core__urlresolvers( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_20_is_valid_path_of_module_django__core__urlresolvers( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_20_is_valid_path_of_module_django__core__urlresolvers( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_10__resolve_special_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain__resolve_special,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e1dd718e02f929cf2e7a40d2ab9282f3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_11_resolve400_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain_resolve400,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8af69da1911189f5de9a75bd8ba8061f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_12_resolve403_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain_resolve403,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_06cc46a51ff38d9db3d160e1d4783b3c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_resolve_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_resolve_of_module_django__core__urlresolvers,
        dparse_function_12_resolve_of_module_django__core__urlresolvers,
        _python_str_plain_resolve,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_709e4d18456a9aea2ebf905a94e4c674,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_13_resolve404_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain_resolve404,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_37adddc1aaaedfda3e66d13f82547182,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_reverse_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_reverse_of_module_django__core__urlresolvers,
        dparse_function_13_reverse_of_module_django__core__urlresolvers,
        _python_str_plain_reverse,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4a041c20efc34275af5ddc47667b6745,
        INCREASE_REFCOUNT( _python_tuple_none_none_none_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_clear_url_caches_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_clear_url_caches_of_module_django__core__urlresolvers,
        dparse_function_14_clear_url_caches_of_module_django__core__urlresolvers,
        _python_str_plain_clear_url_caches,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ad61fa782c2d737768645a729c060e5a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_14_resolve500_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain_resolve500,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2e774504d9b31626687ad679d9f3bc4f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_15_reverse_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain_reverse,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d332d60ca1e5fb0071853a9a632cbb7d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_set_script_prefix_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_set_script_prefix_of_module_django__core__urlresolvers,
        dparse_function_15_set_script_prefix_of_module_django__core__urlresolvers,
        _python_str_plain_set_script_prefix,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d5763201076d023d52883001fe0316aa,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        _python_unicode_digest_1b38b20de189ef7cc73b0f4fd3fcb47d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_16__reverse_with_prefix_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain__reverse_with_prefix,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c1e70108b85e0e201c0a8cd6362707e9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_get_script_prefix_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_get_script_prefix_of_module_django__core__urlresolvers,
        dparse_function_16_get_script_prefix_of_module_django__core__urlresolvers,
        _python_str_plain_get_script_prefix,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_745dd2e4242d1bc28b63180647ae5350,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        _python_unicode_digest_a947f1f12090c12ff6c36437b4890446
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_clear_script_prefix_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_clear_script_prefix_of_module_django__core__urlresolvers,
        dparse_function_17_clear_script_prefix_of_module_django__core__urlresolvers,
        _python_str_plain_clear_script_prefix,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b3b39acaa5ed12353483316baa0f2336,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        _python_unicode_digest_39e8e2b6187a7aaea4f7f63db0ccc78a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18_set_urlconf_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18_set_urlconf_of_module_django__core__urlresolvers,
        dparse_function_18_set_urlconf_of_module_django__core__urlresolvers,
        _python_str_plain_set_urlconf,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_05cb2d4966213c1fb499d1f00789a4f4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        _python_unicode_digest_d5870fa4dbb179aaab22c1f9f2605861
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_19_get_urlconf_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_19_get_urlconf_of_module_django__core__urlresolvers,
        dparse_function_19_get_urlconf_of_module_django__core__urlresolvers,
        _python_str_plain_get_urlconf,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ad372889915ea4bbb1d55bdf91241e8e,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        _python_unicode_digest_7710ebbf9a0ec90510eb79a93c932806
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_1___init___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7b3aa3510f9aa697279b2f62ab11c290,
        INCREASE_REFCOUNT( _python_tuple_none_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_1___init___of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_239519604426e7543e59175c9f3f31e6,
        INCREASE_REFCOUNT( _python_tuple_none_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers,
        dparse_function_1___init___of_class_1_ResolverMatch_of_module_django__core__urlresolvers,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d92490192871014512e2e52f0a0b1df0,
        INCREASE_REFCOUNT( _python_tuple_none_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers,
        dparse_function_1___init___of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bfb9832e3df3fc47ce55588f773145a6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers,
        dparse_function_1___init___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f18a6b47b3c8514967440befc044b24a,
        INCREASE_REFCOUNT( _python_tuple_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_20_is_valid_path_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_20_is_valid_path_of_module_django__core__urlresolvers,
        dparse_function_20_is_valid_path_of_module_django__core__urlresolvers,
        _python_str_plain_is_valid_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_048982ace2980454f3ebc0d3462ef71d,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        _python_unicode_digest_b11022dc1a4fbce516f2f430fcdf1eeb
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_2___repr___of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cbabf69130d1f68cc5ab6dc099f34ab6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers,
        dparse_function_2___repr___of_class_9_RegexURLPattern_of_module_django__core__urlresolvers,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6eedd270df4a4a4427a74c1c87e95bad,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers,
        dparse_function_2_namespace_of_class_1_ResolverMatch_of_module_django__core__urlresolvers,
        _python_str_plain_namespace,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_729c000b2cc1e65be5e9efebb8e0dcb8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_2_regex_of_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain_regex,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b9a190aa822982d8c41f37728674ca0d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers,
        dparse_function_2_regex_of_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers,
        _python_str_plain_regex,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6343ce71cc6bddcfd77317da6e25a7cb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        _python_unicode_digest_2e368a24d88a6fbf52082b4ce844892f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_3__populate_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain__populate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8e76820e6d0f0f63bfa594ad2801bfb6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers,
        dparse_function_3_add_prefix_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers,
        _python_str_plain_add_prefix,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7e8fb56ea04c4b170f52c7bf3c402d5d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        _python_unicode_digest_ccdd61f205cf46232a6cf816d08c7097
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers,
        dparse_function_3_view_name_of_class_1_ResolverMatch_of_module_django__core__urlresolvers,
        _python_str_plain_view_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b812719151319426ba02a43f9e2cec33,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers,
        dparse_function_4___getitem___of_class_1_ResolverMatch_of_module_django__core__urlresolvers,
        _python_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e336be7f505ec58f19e2f6f603148ce3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_get_callable_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_get_callable_of_module_django__core__urlresolvers,
        dparse_function_4_get_callable_of_module_django__core__urlresolvers,
        _python_str_plain_get_callable,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_df4c899f208aaf7f9a93bea406d9c601,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        _python_unicode_digest_d68d1e645fa9c43442472e47709dc4d3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers,
        dparse_function_4_resolve_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers,
        _python_str_plain_resolve,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9de2799f633af8b3fb22c562e34303f8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_4_reverse_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain_reverse_dict,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_07d86a2e18b8329ee6c926e3c9be6db7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers,
        dparse_function_5___repr___of_class_1_ResolverMatch_of_module_django__core__urlresolvers,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e909eaf246c53e90cde7e01624d9ce44,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers,
        dparse_function_5_callback_of_class_9_RegexURLPattern_of_module_django__core__urlresolvers,
        _python_str_plain_callback,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c9c3e1634d374fdb8ba4e3a56d9acc39,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_get_resolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_get_resolver_of_module_django__core__urlresolvers,
        dparse_function_5_get_resolver_of_module_django__core__urlresolvers,
        _python_str_plain_get_resolver,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7ac93a26e4f2fc5f72c654bbc21e124e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_5_namespace_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain_namespace_dict,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e56a449a61f4e68f0546707b79f0dc40,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_6_app_dict_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain_app_dict,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3165d39a57912f479af48d048b06e9ec,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_get_ns_resolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_get_ns_resolver_of_module_django__core__urlresolvers,
        dparse_function_6_get_ns_resolver_of_module_django__core__urlresolvers,
        _python_str_plain_get_ns_resolver,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_13b04ff33b7989d72f1ab6cb112a8484,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_get_mod_func_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_get_mod_func_of_module_django__core__urlresolvers,
        dparse_function_7_get_mod_func_of_module_django__core__urlresolvers,
        _python_str_plain_get_mod_func,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_66199800ef620a2222ccdc79229cb615,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_7_resolve_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain_resolve,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_07684fde249526c4b416ddc38f050093,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_8_urlconf_module_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain_urlconf_module,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8e9d5b0ac293dfd2bc5b8b23c907fb03,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        dparse_function_9_url_patterns_of_class_10_RegexURLResolver_of_module_django__core__urlresolvers,
        _python_str_plain_url_patterns,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_488aac42aab4771effaa51f53e0ff120,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__urlresolvers,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.urlresolvers",   /* m_name */
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

MOD_INIT_DECL( django__core__urlresolvers )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__urlresolvers );
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

    // puts( "in initdjango__core__urlresolvers" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__urlresolvers = Py_InitModule4(
        "django.core.urlresolvers",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__urlresolvers = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__urlresolvers = (PyDictObject *)((PyModuleObject *)_module_django__core__urlresolvers)->md_dict;

    assertObject( _module_django__core__urlresolvers );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_4c07869702570273c29e851966a4b9ca, _module_django__core__urlresolvers );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__urlresolvers );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__urlresolvers != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_8196f14a8d7644880197f6e1b76397df );
    UPDATE_STRING_DICT0( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_c8e00b8aa44e5e1cb0fc5e752d8d7075 );
    PyFrameObject *frame_module_django__core__urlresolvers = MAKE_FRAME( _codeobj_e92ba9116a5c6612421b4657c582fecb, _module_django__core__urlresolvers );

    FrameGuard frame_guard( frame_module_django__core__urlresolvers );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__urlresolvers ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_re, IMPORT_MODULE( _python_str_plain_re, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_local, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_threading, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_local_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_local ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_Http404, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_0086d976470a512ed29688abea23aec5, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_Http404_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Http404 ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_ImproperlyConfigured, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_ImproperlyConfigured_str_plain_ViewDoesNotExist_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImproperlyConfigured ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_ViewDoesNotExist, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_ImproperlyConfigured_str_plain_ViewDoesNotExist_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ViewDoesNotExist ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_MultiValueDict, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_36fff8b06be9a51fbe6af4a1029911c0, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_MultiValueDict_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_MultiValueDict ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_force_str, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_4e89bca292c493d338789703ae61607c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_str ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_4e89bca292c493d338789703ae61607c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_iri_to_uri, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_4e89bca292c493d338789703ae61607c_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_iri_to_uri ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_memoize, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_memoize_str_plain_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_memoize ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_lazy, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_memoize_str_plain_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_lazy ) );
        frame_guard.setLineNumber( 19 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_urlquote, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_f4668c827d7041d030daf78b0a7ea554, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_urlquote_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urlquote ) );
        frame_guard.setLineNumber( 20 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_import_module, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_4fc502edf9b4c184659c220d993c01d3, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_import_module_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_module ) );
        frame_guard.setLineNumber( 21 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_module_has_submodule, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_03bb9f131d782ff4dbd31e0966379285, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_module_has_submodule_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_module_has_submodule ) );
        frame_guard.setLineNumber( 22 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_normalize, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7b7eabebde19226a9b3f810dd8408c48, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_normalize_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_normalize ) );
        frame_guard.setLineNumber( 23 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 24 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_get_language, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict, _python_list_str_plain_get_language_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_language ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain__resolver_cache, PyDict_New() );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain__ns_resolver_cache, PyDict_New() );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain__callable_cache, PyDict_New() );
        frame_guard.setLineNumber( 34 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain__prefixes, CALL_FUNCTION_NO_ARGS( _mvar_django__core__urlresolvers_local.asObject0() ) );
        frame_guard.setLineNumber( 37 );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain__urlconfs, CALL_FUNCTION_NO_ARGS( _mvar_django__core__urlresolvers_local.asObject0() ) );
        {
            frame_guard.setLineNumber( 40 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_ResolverMatch_of_module_django__core__urlresolvers(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__urlresolvers___metaclass__.isInitialized( false ) ? _mvar_django__core__urlresolvers___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_ResolverMatch, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_ResolverMatch, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 74 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__urlresolvers_Http404.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_Resolver404_of_module_django__core__urlresolvers(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__urlresolvers___metaclass__.isInitialized( false ) ? _mvar_django__core__urlresolvers___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_Resolver404, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_Resolver404, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 77 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_Exception ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_NoReverseMatch_of_module_django__core__urlresolvers(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__urlresolvers___metaclass__.isInitialized( false ) ? _mvar_django__core__urlresolvers___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_NoReverseMatch, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_NoReverseMatch, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_get_callable, MAKE_FUNCTION_function_4_get_callable_of_module_django__core__urlresolvers(  ) );
        frame_guard.setLineNumber( 119 );
        {
            PyObjectTempKeeper0 call13;
            PyObjectTempKeeper0 call14;
            UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_get_callable, ( call13.assign( _mvar_django__core__urlresolvers_memoize.asObject0() ), call14.assign( _mvar_django__core__urlresolvers_get_callable.asObject0() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), call14.asObject0(), _mvar_django__core__urlresolvers__callable_cache.asObject0(), _python_int_pos_1 ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_get_resolver, MAKE_FUNCTION_function_5_get_resolver_of_module_django__core__urlresolvers(  ) );
        frame_guard.setLineNumber( 126 );
        {
            PyObjectTempKeeper0 call17;
            PyObjectTempKeeper0 call18;
            UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_get_resolver, ( call17.assign( _mvar_django__core__urlresolvers_memoize.asObject0() ), call18.assign( _mvar_django__core__urlresolvers_get_resolver.asObject0() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), call18.asObject0(), _mvar_django__core__urlresolvers__resolver_cache.asObject0(), _python_int_pos_1 ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_get_ns_resolver, MAKE_FUNCTION_function_6_get_ns_resolver_of_module_django__core__urlresolvers(  ) );
        frame_guard.setLineNumber( 135 );
        {
            PyObjectTempKeeper0 call21;
            PyObjectTempKeeper0 call22;
            UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_get_ns_resolver, ( call21.assign( _mvar_django__core__urlresolvers_memoize.asObject0() ), call22.assign( _mvar_django__core__urlresolvers_get_ns_resolver.asObject0() ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), call22.asObject0(), _mvar_django__core__urlresolvers__ns_resolver_cache.asObject0(), _python_int_pos_2 ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_get_mod_func, MAKE_FUNCTION_function_7_get_mod_func_of_module_django__core__urlresolvers(  ) );
        {
            frame_guard.setLineNumber( 146 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_8_LocaleRegexProvider_of_module_django__core__urlresolvers(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__urlresolvers___metaclass__.isInitialized( false ) ? _mvar_django__core__urlresolvers___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call25;
                PyObjectTempKeeper0 call27;
                _tmp_python_tmp_class = ( call25.assign( _python_tmp_metaclass.asObject() ), call27.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), _python_str_plain_LocaleRegexProvider, call27.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_LocaleRegexProvider, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 183 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__urlresolvers_LocaleRegexProvider.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_9_RegexURLPattern_of_module_django__core__urlresolvers(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__urlresolvers___metaclass__.isInitialized( false ) ? _mvar_django__core__urlresolvers___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call29;
                PyObjectTempKeeper0 call31;
                _tmp_python_tmp_class = ( call29.assign( _python_tmp_metaclass.asObject() ), call31.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), _python_str_plain_RegexURLPattern, call31.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_RegexURLPattern, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 232 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__urlresolvers_LocaleRegexProvider.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_10_RegexURLResolver_of_module_django__core__urlresolvers(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__urlresolvers___metaclass__.isInitialized( false ) ? _mvar_django__core__urlresolvers___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call33;
                PyObjectTempKeeper0 call35;
                _tmp_python_tmp_class = ( call33.assign( _python_tmp_metaclass.asObject() ), call35.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call33.asObject0(), _python_str_plain_RegexURLResolver, call35.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_RegexURLResolver, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 428 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__urlresolvers_RegexURLResolver.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_11_LocaleRegexURLResolver_of_module_django__core__urlresolvers(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__urlresolvers___metaclass__.isInitialized( false ) ? _mvar_django__core__urlresolvers___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call37;
                PyObjectTempKeeper0 call39;
                _tmp_python_tmp_class = ( call37.assign( _python_tmp_metaclass.asObject() ), call39.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call37.asObject0(), _python_str_plain_LocaleRegexURLResolver, call39.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_LocaleRegexURLResolver, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_resolve, MAKE_FUNCTION_function_12_resolve_of_module_django__core__urlresolvers(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_reverse, MAKE_FUNCTION_function_13_reverse_of_module_django__core__urlresolvers(  ) );
        frame_guard.setLineNumber( 508 );
        {
            PyObjectTempKeeper0 call41;
            UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_reverse_lazy, ( call41.assign( _mvar_django__core__urlresolvers_lazy.asObject0() ), CALL_FUNCTION_WITH_ARGS( call41.asObject0(), _mvar_django__core__urlresolvers_reverse.asObject0(), LOOKUP_BUILTIN( _python_str_plain_str ) ) ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__urlresolvers)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_clear_url_caches, MAKE_FUNCTION_function_14_clear_url_caches_of_module_django__core__urlresolvers(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_set_script_prefix, MAKE_FUNCTION_function_15_set_script_prefix_of_module_django__core__urlresolvers(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_get_script_prefix, MAKE_FUNCTION_function_16_get_script_prefix_of_module_django__core__urlresolvers(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_clear_script_prefix, MAKE_FUNCTION_function_17_clear_script_prefix_of_module_django__core__urlresolvers(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_set_urlconf, MAKE_FUNCTION_function_18_set_urlconf_of_module_django__core__urlresolvers(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_get_urlconf, MAKE_FUNCTION_function_19_get_urlconf_of_module_django__core__urlresolvers(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__urlresolvers, (Nuitka_StringObject *)_python_str_plain_is_valid_path, MAKE_FUNCTION_function_20_is_valid_path_of_module_django__core__urlresolvers(  ) );

   return MOD_RETURN_VALUE( _module_django__core__urlresolvers );
}
