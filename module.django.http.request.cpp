// Generated code for Python source for module 'django.http.request'
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

// The _module_django__http__request is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__http__request;
PyDictObject *_moduledict_django__http__request;

// The module level variables.
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_BytesIO( &_module_django__http__request, &_python_str_plain_BytesIO );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_DisallowedHost( &_module_django__http__request, &_python_str_plain_DisallowedHost );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_ImmutableList( &_module_django__http__request, &_python_str_plain_ImmutableList );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_ImproperlyConfigured( &_module_django__http__request, &_python_str_plain_ImproperlyConfigured );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_MultiPartParser( &_module_django__http__request, &_python_str_plain_MultiPartParser );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_MultiValueDict( &_module_django__http__request, &_python_str_plain_MultiValueDict );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_QueryDict( &_module_django__http__request, &_python_str_plain_QueryDict );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_RAISE_ERROR( &_module_django__http__request, &_python_str_plain_RAISE_ERROR );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_UnreadablePostError( &_module_django__http__request, &_python_str_plain_UnreadablePostError );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request___metaclass__( &_module_django__http__request, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_absolute_http_url_re( &_module_django__http__request, &_python_str_plain_absolute_http_url_re );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_build_request_repr( &_module_django__http__request, &_python_str_plain_build_request_repr );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_bytes_to_text( &_module_django__http__request, &_python_str_plain_bytes_to_text );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_copy( &_module_django__http__request, &_python_str_plain_copy );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_force_bytes( &_module_django__http__request, &_python_str_plain_force_bytes );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_force_str( &_module_django__http__request, &_python_str_plain_force_str );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_force_text( &_module_django__http__request, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_host_validation_re( &_module_django__http__request, &_python_str_plain_host_validation_re );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_iri_to_uri( &_module_django__http__request, &_python_str_plain_iri_to_uri );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_os( &_module_django__http__request, &_python_str_plain_os );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_parse_qsl( &_module_django__http__request, &_python_str_plain_parse_qsl );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_pformat( &_module_django__http__request, &_python_str_plain_pformat );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_quote( &_module_django__http__request, &_python_str_plain_quote );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_re( &_module_django__http__request, &_python_str_plain_re );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_settings( &_module_django__http__request, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_signing( &_module_django__http__request, &_python_str_plain_signing );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_six( &_module_django__http__request, &_python_str_plain_six );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_split_domain_port( &_module_django__http__request, &_python_str_plain_split_domain_port );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_sys( &_module_django__http__request, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_uploadhandler( &_module_django__http__request, &_python_str_plain_uploadhandler );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_urlencode( &_module_django__http__request, &_python_str_plain_urlencode );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_urljoin( &_module_django__http__request, &_python_str_plain_urljoin );
static PyObjectGlobalVariable_django__http__request _mvar_django__http__request_validate_host( &_module_django__http__request, &_python_str_plain_validate_host );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_UnreadablePostError_of_module_django__http__request(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_HttpRequest_of_module_django__http__request(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_handler, PyObjectLocalParameterVariableNoDel &python_closure_self );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_QueryDict_of_module_django__http__request(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_elt, PyObjectLocalParameterVariableNoDel &python_closure_self );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_3_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_encode, PyObjectLocalVariable &python_closure_k, PyObjectLocalParameterVariableNoDel &python_closure_self, PyObjectLocalVariable &python_closure_v );


static PyObject *MAKE_FUNCTION_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_12_pop_of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_14_clear_of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_16_body_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_16_copy_of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_19_read_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_4_build_request_repr_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_5_bytes_to_text_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_6_split_domain_port_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_7___copy___of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_7_validate_host_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( PyObjectSharedLocalVariable &python_closure_safe );


// This structure is for attachment as self of lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request.
// It is allocated at the time the function object is created.
struct _context_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_safe;
};

static void _context_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request_destructor( void *context_voidptr )
{
    _context_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request_t *_python_context = (_context_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_UnreadablePostError_of_module_django__http__request(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_request );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_HttpRequest_of_module_django__http__request(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var__encoding( _python_str_plain__encoding );
    PyObjectLocalVariable _python_var__upload_handlers( _python_str_plain__upload_handlers );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var_get_host( _python_str_plain_get_host );
    PyObjectLocalVariable _python_var_get_full_path( _python_str_plain_get_full_path );
    PyObjectLocalVariable _python_var_get_signed_cookie( _python_str_plain_get_signed_cookie );
    PyObjectLocalVariable _python_var_build_absolute_uri( _python_str_plain_build_absolute_uri );
    PyObjectLocalVariable _python_var__is_secure( _python_str_plain__is_secure );
    PyObjectLocalVariable _python_var_is_secure( _python_str_plain_is_secure );
    PyObjectLocalVariable _python_var_is_ajax( _python_str_plain_is_ajax );
    PyObjectLocalVariable _python_var_encoding( _python_str_plain_encoding );
    PyObjectLocalVariable _python_var__initialize_handlers( _python_str_plain__initialize_handlers );
    PyObjectLocalVariable _python_var_upload_handlers( _python_str_plain_upload_handlers );
    PyObjectLocalVariable _python_var_parse_file_upload( _python_str_plain_parse_file_upload );
    PyObjectLocalVariable _python_var_body( _python_str_plain_body );
    PyObjectLocalVariable _python_var__mark_post_parse_error( _python_str_plain__mark_post_parse_error );
    PyObjectLocalVariable _python_var__load_post_and_files( _python_str_plain__load_post_and_files );
    PyObjectLocalVariable _python_var_read( _python_str_plain_read );
    PyObjectLocalVariable _python_var_readline( _python_str_plain_readline );
    PyObjectLocalVariable _python_var_xreadlines( _python_str_plain_xreadlines );
    PyObjectLocalVariable _python_var___iter__( _python_str_plain___iter__ );
    PyObjectLocalVariable _python_var_readlines( _python_str_plain_readlines );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_request );
    _python_var___doc__.assign0( _python_unicode_digest_7ccddf0b81f4c5b45d3c016f3783c4b9 );
    _python_var__encoding.assign0( Py_None );
    _python_var__upload_handlers.assign1( PyList_New( 0 ) );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_HttpRequest_of_module_django__http__request(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request(  ) );
    _python_var_get_host.assign1( MAKE_FUNCTION_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request(  ) );
    _python_var_get_full_path.assign1( MAKE_FUNCTION_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request(  ) );
    static PyFrameObject *frame_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_6b0c6cbd1b1b51eb590efad884284d45, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 82 );
        _python_var_get_signed_cookie.assign1( MAKE_FUNCTION_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request( MAKE_TUPLE3( _mvar_django__http__request_RAISE_ERROR.asObject0(), _python_unicode_empty, Py_None ) ) );
        _python_var_build_absolute_uri.assign1( MAKE_FUNCTION_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request(  ) );
        _python_var__is_secure.assign1( MAKE_FUNCTION_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request(  ) );
        _python_var_is_secure.assign1( MAKE_FUNCTION_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request(  ) );
        _python_var_is_ajax.assign1( MAKE_FUNCTION_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request(  ) );
        frame_guard.setLineNumber( 139 );
        _python_var_encoding.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request(  ) ).asObject() ) );
        frame_guard.setLineNumber( 143 );
        _python_var_encoding.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_encoding.asObject(), _python_str_plain_setter ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request(  ) ).asObject() ) );
        _python_var__initialize_handlers.assign1( MAKE_FUNCTION_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request(  ) );
        frame_guard.setLineNumber( 160 );
        _python_var_upload_handlers.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request(  ) ).asObject() ) );
        frame_guard.setLineNumber( 167 );
        _python_var_upload_handlers.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_upload_handlers.asObject(), _python_str_plain_setter ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request(  ) ).asObject() ) );
        _python_var_parse_file_upload.assign1( MAKE_FUNCTION_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request(  ) );
        frame_guard.setLineNumber( 182 );
        _python_var_body.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_16_body_of_class_2_HttpRequest_of_module_django__http__request(  ) ).asObject() ) );
        _python_var__mark_post_parse_error.assign1( MAKE_FUNCTION_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request(  ) );
        _python_var__load_post_and_files.assign1( MAKE_FUNCTION_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request(  ) );
        _python_var_read.assign1( MAKE_FUNCTION_function_19_read_of_class_2_HttpRequest_of_module_django__http__request(  ) );
        _python_var_readline.assign1( MAKE_FUNCTION_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request(  ) );
        _python_var_xreadlines.assign1( MAKE_FUNCTION_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request(  ) );
        frame_guard.setLineNumber( 260 );
        _python_var___iter__.assign0( _python_var_xreadlines.asObject() );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_readlines.updateLocalsDict( _python_var___iter__.updateLocalsDict( _python_var_xreadlines.updateLocalsDict( _python_var_readline.updateLocalsDict( _python_var_read.updateLocalsDict( _python_var__load_post_and_files.updateLocalsDict( _python_var__mark_post_parse_error.updateLocalsDict( _python_var_body.updateLocalsDict( _python_var_parse_file_upload.updateLocalsDict( _python_var_upload_handlers.updateLocalsDict( _python_var__initialize_handlers.updateLocalsDict( _python_var_encoding.updateLocalsDict( _python_var_is_ajax.updateLocalsDict( _python_var_is_secure.updateLocalsDict( _python_var__is_secure.updateLocalsDict( _python_var_build_absolute_uri.updateLocalsDict( _python_var_get_signed_cookie.updateLocalsDict( _python_var_get_full_path.updateLocalsDict( _python_var_get_host.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var__upload_handlers.updateLocalsDict( _python_var__encoding.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_class_2_HttpRequest_of_module_django__http__request );
           frame_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        throw;
    }
    _python_var_readlines.assign1( MAKE_FUNCTION_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request(  ) );
    return _python_var_readlines.updateLocalsDict( _python_var___iter__.updateLocalsDict( _python_var_xreadlines.updateLocalsDict( _python_var_readline.updateLocalsDict( _python_var_read.updateLocalsDict( _python_var__load_post_and_files.updateLocalsDict( _python_var__mark_post_parse_error.updateLocalsDict( _python_var_body.updateLocalsDict( _python_var_parse_file_upload.updateLocalsDict( _python_var_upload_handlers.updateLocalsDict( _python_var__initialize_handlers.updateLocalsDict( _python_var_encoding.updateLocalsDict( _python_var_is_ajax.updateLocalsDict( _python_var_is_secure.updateLocalsDict( _python_var__is_secure.updateLocalsDict( _python_var_build_absolute_uri.updateLocalsDict( _python_var_get_signed_cookie.updateLocalsDict( _python_var_get_full_path.updateLocalsDict( _python_var_get_host.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var__upload_handlers.updateLocalsDict( _python_var__encoding.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_1___init___of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_1___init___of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_d0a4bfa96b923fdd20548f080e63af7c, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 42 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( MAKE_TUPLE5( PyObjectTemporary( PyDict_New() ).asObject(), PyObjectTemporary( PyDict_New() ).asObject(), PyObjectTemporary( PyDict_New() ).asObject(), PyObjectTemporary( PyDict_New() ).asObject(), PyObjectTemporary( PyDict_New() ).asObject() ) ).asObject() ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
            PyObjectTemporary _python_tmp_element_4( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 3 ) );
            PyObjectTemporary _python_tmp_element_5( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 4 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 5 );
            {
                    PyObject *tmp_identifier = _python_tmp_element_1.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_GET );
            }
            {
                    PyObject *tmp_identifier = _python_tmp_element_2.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_POST );
            }
            {
                    PyObject *tmp_identifier = _python_tmp_element_3.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_COOKIES );
            }
            {
                    PyObject *tmp_identifier = _python_tmp_element_4.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_META );
            }
            {
                    PyObject *tmp_identifier = _python_tmp_element_5.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_FILES );
            }
        }
        frame_guard.setLineNumber( 43 );
        SET_ATTRIBUTE( _python_unicode_empty, _python_var_self.asObject(), _python_str_plain_path );
        frame_guard.setLineNumber( 44 );
        SET_ATTRIBUTE( _python_unicode_empty, _python_var_self.asObject(), _python_str_plain_path_info );
        frame_guard.setLineNumber( 45 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_method );
        frame_guard.setLineNumber( 46 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_resolver_match );
        frame_guard.setLineNumber( 47 );
        SET_ATTRIBUTE( Py_False, _python_var_self.asObject(), _python_str_plain__post_parse_error );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_1___init___of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_1___init___of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___init___of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___init___of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___repr___of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_192a3a87c23608a928b639925994d01d, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 50 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__http__request_build_request_repr.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_self.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_host( _python_str_plain_host );
    PyObjectLocalVariable _python_var_server_port( _python_str_plain_server_port );
    PyObjectLocalVariable _python_var_allowed_hosts( _python_str_plain_allowed_hosts );
    PyObjectLocalVariable _python_var_domain( _python_str_plain_domain );
    PyObjectLocalVariable _python_var_port( _python_str_plain_port );
    PyObjectLocalVariable _python_var_msg( _python_str_plain_msg );

    // Actual function code.
    static PyFrameObject *frame_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_d0dce22e4e865c2642af1068639baba5, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 55 );
        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_settings.asObject0(), _python_str_plain_USE_X_FORWARDED_HOST ) ).asObject() ) && SEQUENCE_CONTAINS_BOOL( _python_unicode_plain_HTTP_X_FORWARDED_HOST, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 57 );
            _python_var_host.assign1( LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ).asObject(), _python_unicode_plain_HTTP_X_FORWARDED_HOST ) );
        }
        else
        {
            frame_guard.setLineNumber( 58 );
            if ( SEQUENCE_CONTAINS_BOOL( _python_unicode_plain_HTTP_HOST, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 59 );
                _python_var_host.assign1( LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ).asObject(), _python_unicode_plain_HTTP_HOST ) );
            }
            else
            {
                frame_guard.setLineNumber( 62 );
                _python_var_host.assign1( LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ).asObject(), _python_unicode_plain_SERVER_NAME ) );
                frame_guard.setLineNumber( 63 );
                _python_var_server_port.assign1( TO_STR( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ).asObject(), _python_unicode_plain_SERVER_PORT ) ).asObject() ) );
                frame_guard.setLineNumber( 64 );
                {
                    PyObjectTempKeeper0 cmp3;
                    if ( ( cmp3.assign( _python_var_server_port.asObject() ), RICH_COMPARE_BOOL_NE( cmp3.asObject0(), ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_is_secure ) ).asObject() ) ).asObject() ) ? _python_unicode_plain_443 : _python_unicode_plain_80 ) ) ) )
                {
                    frame_guard.setLineNumber( 65 );
                    {
                        PyObjectTempKeeper0 make_tuple1;
                        _python_var_host.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_530ccab821bb1f0f9080f24abeeee028, PyObjectTemporary( ( make_tuple1.assign( _python_var_host.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_var_server_port.asObject() ) ) ).asObject() ) );
                    }
                }
                }
            }
        }
        frame_guard.setLineNumber( 67 );
        _python_var_allowed_hosts.assign1( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_settings.asObject0(), _python_str_plain_DEBUG ) ).asObject() ) ? LIST_COPY( _python_list_unicode_chr_42_list ) : LOOKUP_ATTRIBUTE( _mvar_django__http__request_settings.asObject0(), _python_str_plain_ALLOWED_HOSTS ) ) );
        {
            frame_guard.setLineNumber( 68 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper0 call5;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call5.assign( _mvar_django__http__request_split_domain_port.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_host.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_domain.assign0( _python_tmp_element_1.asObject() );
            _python_var_port.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 69 );
        {
            PyObjectTempKeeper0 call11;
            PyObjectTempKeeper0 call12;
            if ( ( CHECK_IF_TRUE( _python_var_domain.asObject() ) && CHECK_IF_TRUE( PyObjectTemporary( ( call11.assign( _mvar_django__http__request_validate_host.asObject0() ), call12.assign( _python_var_domain.asObject() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), call12.asObject0(), _python_var_allowed_hosts.asObject() ) ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 70 );
            return _python_var_host.asObject1();
        }
        else
        {
            frame_guard.setLineNumber( 72 );
            _python_var_msg.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_1c62a42bcc71f5937d6410da4ca9f371, _python_var_host.asObject() ) );
            frame_guard.setLineNumber( 73 );
            if ( CHECK_IF_TRUE( _python_var_domain.asObject() ) )
            {
                {
                    frame_guard.setLineNumber( 74 );
                    PyObject *_python_tmp_inplace_start = _python_var_msg.asObject();
                    PyObject *_tmp_python_tmp_inplace_end;
                    {
                        PyObjectTempKeeper0 op7;
                        _tmp_python_tmp_inplace_end = ( op7.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op7.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_a3c4f343a498c69f6f36ec2bf8437f58, _python_var_domain.asObject() ) ).asObject() ) );
                    }
                    PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                    if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                    {
                        _python_var_msg.assign0( _python_tmp_inplace_end.asObject() );
                    }
                }
            }
            frame_guard.setLineNumber( 75 );
            {
                PyObjectTempKeeper0 call9;
                {
                    PyObjectTemporary tmp_exception_type( ( call9.assign( _mvar_django__http__request_DisallowedHost.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_msg.asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_msg.updateLocalsDict( _python_var_port.updateLocalsDict( _python_var_domain.updateLocalsDict( _python_var_allowed_hosts.updateLocalsDict( _python_var_server_port.updateLocalsDict( _python_var_host.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_host() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_host() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_host() got multiple values for keyword argument 'self'" );
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
                   "get_host() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_host() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_host() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_host() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_host() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_host() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_host() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_host() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_host() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_host() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_host() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_host() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_host() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_host() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_e9d3ea7cb1d4f17f66993f3889e7b96b, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 80 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 make_tuple3;
            return BINARY_OPERATION_REMAINDER( _python_unicode_digest_f0275d2ae1aaf69b3b06259723647d35, PyObjectTemporary( ( make_tuple3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ), MAKE_TUPLE2( make_tuple3.asObject0(), PyObjectTemporary( ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_QUERY_STRING, _python_unicode_empty ) ).asObject() ) ? BINARY_OPERATION_ADD( _python_unicode_chr_63, PyObjectTemporary( ( call1.assign( _mvar_django__http__request_iri_to_uri.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_QUERY_STRING, _python_unicode_empty ) ).asObject() ) ) ).asObject() ) : INCREASE_REFCOUNT( _python_unicode_empty ) ) ).asObject() ) ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "get_full_path() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_full_path() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "get_full_path() got multiple values for keyword argument 'self'" );
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
                   "get_full_path() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_full_path() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_full_path() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_full_path() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_full_path() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_full_path() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_full_path() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_full_path() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_full_path() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_full_path() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_full_path() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_full_path() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_full_path() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_full_path() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key, PyObject *_python_par_default, PyObject *_python_par_salt, PyObject *_python_par_max_age )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_default( _python_str_plain_default, _python_par_default );
    PyObjectLocalParameterVariableNoDel _python_var_salt( _python_str_plain_salt, _python_par_salt );
    PyObjectLocalParameterVariableNoDel _python_var_max_age( _python_str_plain_max_age, _python_par_max_age );
    PyObjectLocalVariable _python_var_cookie_value( _python_str_plain_cookie_value );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_0817b7e06463a1c4b8de13083ce38064, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 88 );
        try
        {
            frame_guard.setLineNumber( 89 );
            {
                PyObjectTempKeeper1 subscr1;
                _python_var_cookie_value.assign1( ( subscr1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_COOKIES ) ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), _python_var_key.asObject() ) ) );
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
                frame_guard.setLineNumber( 91 );
                if ( ( _python_var_default.asObject() != _mvar_django__http__request_RAISE_ERROR.asObject0() ) )
                {
                    frame_guard.setLineNumber( 92 );
                    return _python_var_default.asObject1();
                }
                else
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
        frame_guard.setLineNumber( 95 );
        try
        {
            frame_guard.setLineNumber( 96 );
            {
                PyObjectTempKeeper1 call5;
                PyObjectTempKeeper1 call8;
                PyObjectTempKeeper1 call9;
                PyObjectTempKeeper0 op3;
                _python_var_value.assign1( ( call8.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_signing.asObject0(), _python_str_plain_get_cookie_signer ) ), CALL_FUNCTION( call5.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( ( op3.assign( _python_var_key.asObject() ), BINARY_OPERATION_ADD( op3.asObject0(), _python_var_salt.asObject() ) ) ).asObject(), _python_str_plain_salt ) ).asObject() ) ) ).asObject(), _python_str_plain_unsign ) ), call9.assign( MAKE_TUPLE1( _python_var_cookie_value.asObject() ) ), CALL_FUNCTION( call8.asObject0(), call9.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_max_age.asObject(), _python_str_plain_max_age ) ).asObject() ) ) );
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

            if ( _exception.matches( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_signing.asObject0(), _python_str_plain_BadSignature ) ).asObject() ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 99 );
                if ( ( _python_var_default.asObject() != _mvar_django__http__request_RAISE_ERROR.asObject0() ) )
                {
                    frame_guard.setLineNumber( 100 );
                    return _python_var_default.asObject1();
                }
                else
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
        frame_guard.setLineNumber( 103 );
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
        frame_guard.getFrame0()->f_locals = _python_var_max_age.updateLocalsDict( _python_var_salt.updateLocalsDict( _python_var_default.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_cookie_value.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
    PyObject *_python_par_default = NULL;
    PyObject *_python_par_salt = NULL;
    PyObject *_python_par_max_age = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_signed_cookie() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_default == key )
            {
                if (unlikely( _python_par_default ))
                {
                    PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'default'" );
                    goto error_exit;
                }

                _python_par_default = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_salt == key )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_max_age == key )
            {
                if (unlikely( _python_par_max_age ))
                {
                    PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'max_age'" );
                    goto error_exit;
                }

                _python_par_max_age = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_default, key ) )
            {
                if (unlikely( _python_par_default ))
                {
                    PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'default'" );
                    goto error_exit;
                }

                _python_par_default = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_salt, key ) )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_max_age, key ) )
            {
                if (unlikely( _python_par_max_age ))
                {
                    PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'max_age'" );
                    goto error_exit;
                }

                _python_par_max_age = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_signed_cookie() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_signed_cookie() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_signed_cookie() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_signed_cookie() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_signed_cookie() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_signed_cookie() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_signed_cookie() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_signed_cookie() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_signed_cookie() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_signed_cookie() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_signed_cookie() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "get_signed_cookie() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_signed_cookie() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_default != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'default'" );
             goto error_exit;
         }

        _python_par_default = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_salt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'salt'" );
             goto error_exit;
         }

        _python_par_salt = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_max_age != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_signed_cookie() got multiple values for keyword argument 'max_age'" );
             goto error_exit;
         }

        _python_par_max_age = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_default == NULL )
    {
        _python_par_default = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_default );
    }
    if ( _python_par_salt == NULL )
    {
        _python_par_salt = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_salt );
    }
    if ( _python_par_max_age == NULL )
    {
        _python_par_max_age = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_max_age );
    }


    return impl_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self, _python_par_key, _python_par_default, _python_par_salt, _python_par_max_age );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_default );
    Py_XDECREF( _python_par_salt );
    Py_XDECREF( _python_par_max_age );

    return NULL;
}

static PyObject *dparse_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_location )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_location( _python_str_plain_location, _python_par_location );
    PyObjectLocalVariable _python_var_current_uri( _python_str_plain_current_uri );

    // Actual function code.
    static PyFrameObject *frame_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_a076c8e386821d2c686a1eaaf9c6954c, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 111 );
        if ( (!( CHECK_IF_TRUE( _python_var_location.asObject() ) )) )
        {
            frame_guard.setLineNumber( 112 );
            _python_var_location.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_full_path ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 113 );
        {
            PyObjectTempKeeper1 call7;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_absolute_http_url_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_location.asObject() ) ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 114 );
            {
                PyObjectTempKeeper0 make_tuple1;
                PyObjectTempKeeper1 make_tuple2;
                _python_var_current_uri.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_b8b23bd50d1ca6ff4eb5b744570287ec, PyObjectTemporary( ( make_tuple1.assign( ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_is_secure ) ).asObject() ) ).asObject() ) ? _python_unicode_plain_https : _python_unicode_plain_http ) ), make_tuple2.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_host ) ).asObject() ) ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ).asObject() ) ) ).asObject() ) );
            }
            frame_guard.setLineNumber( 116 );
            {
                PyObjectTempKeeper0 call4;
                PyObjectTempKeeper0 call5;
                _python_var_location.assign1( ( call4.assign( _mvar_django__http__request_urljoin.asObject0() ), call5.assign( _python_var_current_uri.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), _python_var_location.asObject() ) ) );
            }
        }
        }
        frame_guard.setLineNumber( 117 );
        {
            PyObjectTempKeeper0 call9;
            return ( call9.assign( _mvar_django__http__request_iri_to_uri.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_location.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_location.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_current_uri.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_location = NULL;
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
                PyErr_Format( PyExc_TypeError, "build_absolute_uri() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "build_absolute_uri() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_location == key )
            {
                if (unlikely( _python_par_location ))
                {
                    PyErr_Format( PyExc_TypeError, "build_absolute_uri() got multiple values for keyword argument 'location'" );
                    goto error_exit;
                }

                _python_par_location = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "build_absolute_uri() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_location, key ) )
            {
                if (unlikely( _python_par_location ))
                {
                    PyErr_Format( PyExc_TypeError, "build_absolute_uri() got multiple values for keyword argument 'location'" );
                    goto error_exit;
                }

                _python_par_location = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "build_absolute_uri() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "build_absolute_uri() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "build_absolute_uri() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "build_absolute_uri() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "build_absolute_uri() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "build_absolute_uri() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "build_absolute_uri() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "build_absolute_uri() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "build_absolute_uri() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "build_absolute_uri() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "build_absolute_uri() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "build_absolute_uri() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "build_absolute_uri() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "build_absolute_uri() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_location != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "build_absolute_uri() got multiple values for keyword argument 'location'" );
             goto error_exit;
         }

        _python_par_location = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_location == NULL )
    {
        _python_par_location = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_location );
    }


    return impl_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self, _python_par_location );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_location );

    return NULL;
}

static PyObject *dparse_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_bbe3d8e9fa6f8e3fe7be1a3c740d2503, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 120 );
        return RICH_COMPARE_EQ( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_os.asObject0(), _python_str_plain_environ ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_HTTPS ) ).asObject(), _python_unicode_plain_on );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_is_secure() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_is_secure() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_is_secure() got multiple values for keyword argument 'self'" );
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
                   "_is_secure() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_is_secure() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_is_secure() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_is_secure() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_is_secure() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_is_secure() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_is_secure() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_is_secure() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_is_secure() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_is_secure() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_is_secure() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_is_secure() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_is_secure() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_is_secure() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_header( _python_str_plain_header );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_9fc507970d08ac2413d88491532c29ed, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 124 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_settings.asObject0(), _python_str_plain_SECURE_PROXY_SSL_HEADER ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 125 );
            try
            {
                {
                    frame_guard.setLineNumber( 126 );
                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_settings.asObject0(), _python_str_plain_SECURE_PROXY_SSL_HEADER ) ).asObject() ) );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    _python_var_header.assign0( _python_tmp_element_1.asObject() );
                    _python_var_value.assign0( _python_tmp_element_2.asObject() );
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
                    frame_guard.setLineNumber( 128 );
                    {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__http__request_ImproperlyConfigured.asObject0(), _python_unicode_digest_eacb3d228aa0ca31eab5d636716f918b ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
            frame_guard.setLineNumber( 129 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper1 cmp4;
                if ( ( cmp4.assign( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_header.asObject(), Py_None ) ) ), RICH_COMPARE_BOOL_EQ( cmp4.asObject0(), _python_var_value.asObject() ) ) )
            {
                return INCREASE_REFCOUNT( Py_True );
            }
            }
        }
        frame_guard.setLineNumber( 134 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__is_secure ) ).asObject() );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_header.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "is_secure() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "is_secure() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "is_secure() got multiple values for keyword argument 'self'" );
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
                   "is_secure() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "is_secure() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "is_secure() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "is_secure() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "is_secure() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_secure() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_secure() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_secure() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_secure() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "is_secure() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_secure() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "is_secure() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "is_secure() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "is_secure() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_035398c5bdcca80ff0650b51d12c39de, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 137 );
        return RICH_COMPARE_EQ( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_HTTP_X_REQUESTED_WITH ) ).asObject(), _python_unicode_plain_XMLHttpRequest );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "is_ajax() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "is_ajax() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "is_ajax() got multiple values for keyword argument 'self'" );
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
                   "is_ajax() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "is_ajax() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "is_ajax() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "is_ajax() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "is_ajax() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_ajax() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_ajax() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_ajax() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_ajax() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "is_ajax() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_ajax() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "is_ajax() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "is_ajax() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "is_ajax() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_05dd70e884c1c06cd3eb40705f94f6bc, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 141 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__encoding );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "encoding() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'self'" );
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
                   "encoding() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "encoding() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "encoding() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_val )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_val( _python_str_plain_val, _python_par_val );

    // Actual function code.
    static PyFrameObject *frame_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_b1133569acca0ceb90ee57786d3eefa7, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 150 );
        {
                PyObject *tmp_identifier = _python_var_val.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__encoding );
        }
        frame_guard.setLineNumber( 151 );
        if ( HAS_ATTRIBUTE( _python_var_self.asObject(), _python_unicode_plain__get ) )
        {
            frame_guard.setLineNumber( 152 );
            DEL_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__get );
        }
        frame_guard.setLineNumber( 153 );
        if ( HAS_ATTRIBUTE( _python_var_self.asObject(), _python_unicode_plain__post ) )
        {
            frame_guard.setLineNumber( 154 );
            DEL_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__post );
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

        if ( frame_guard.getFrame0() == frame_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "encoding() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'val'" );
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
                    PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'val'" );
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
                   "encoding() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "encoding() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "encoding() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_val != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'val'" );
             goto error_exit;
         }

        _python_par_val = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self, _python_par_val );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_val );

    return NULL;
}

static PyObject *dparse_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_handler( _python_str_plain_handler );

    // Actual function code.
    static PyFrameObject *frame_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_99d61c173a35754493a96b516c18331e, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 157 );
        {
                PyObjectTemporary tmp_identifier( impl_listcontr_1_of_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_settings.asObject0(), _python_str_plain_FILE_UPLOAD_HANDLERS ) ).asObject() ), _python_var_handler, _python_var_self ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__upload_handlers );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_handler.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_initialize_handlers() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_initialize_handlers() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_initialize_handlers() got multiple values for keyword argument 'self'" );
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
                   "_initialize_handlers() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_initialize_handlers() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_initialize_handlers() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_initialize_handlers() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_initialize_handlers() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_initialize_handlers() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_initialize_handlers() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_initialize_handlers() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_initialize_handlers() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_initialize_handlers() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_initialize_handlers() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_initialize_handlers() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_initialize_handlers() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_initialize_handlers() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_handler,PyObjectLocalParameterVariableNoDel &python_closure_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 157 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 157 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_handler.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 call2;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_uploadhandler.asObject0(), _python_str_plain_load_handler ) ), call2.assign( python_closure_handler.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), python_closure_self.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_16e78c765ca006e6ab32adb8b94682a8, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 162 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__upload_handlers ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 164 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__initialize_handlers ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 165 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__upload_handlers );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "upload_handlers() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "upload_handlers() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "upload_handlers() got multiple values for keyword argument 'self'" );
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
                   "upload_handlers() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "upload_handlers() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "upload_handlers() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "upload_handlers() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "upload_handlers() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "upload_handlers() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "upload_handlers() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_upload_handlers )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_upload_handlers( _python_str_plain_upload_handlers, _python_par_upload_handlers );

    // Actual function code.
    static PyFrameObject *frame_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_45cc7a422879b2e751e475bd094071f0, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 169 );
        if ( HAS_ATTRIBUTE( _python_var_self.asObject(), _python_unicode_plain__files ) )
        {
            frame_guard.setLineNumber( 170 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AttributeError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_468b71b00520482fa52569980bcada1c ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 171 );
        {
                PyObject *tmp_identifier = _python_var_upload_handlers.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__upload_handlers );
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
        frame_guard.getFrame0()->f_locals = _python_var_upload_handlers.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_upload_handlers = NULL;
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
                PyErr_Format( PyExc_TypeError, "upload_handlers() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "upload_handlers() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_upload_handlers == key )
            {
                if (unlikely( _python_par_upload_handlers ))
                {
                    PyErr_Format( PyExc_TypeError, "upload_handlers() got multiple values for keyword argument 'upload_handlers'" );
                    goto error_exit;
                }

                _python_par_upload_handlers = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "upload_handlers() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_upload_handlers, key ) )
            {
                if (unlikely( _python_par_upload_handlers ))
                {
                    PyErr_Format( PyExc_TypeError, "upload_handlers() got multiple values for keyword argument 'upload_handlers'" );
                    goto error_exit;
                }

                _python_par_upload_handlers = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "upload_handlers() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "upload_handlers() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "upload_handlers() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "upload_handlers() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "upload_handlers() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "upload_handlers() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "upload_handlers() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "upload_handlers() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_upload_handlers != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "upload_handlers() got multiple values for keyword argument 'upload_handlers'" );
             goto error_exit;
         }

        _python_par_upload_handlers = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self, _python_par_upload_handlers );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_upload_handlers );

    return NULL;
}

static PyObject *dparse_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_META, PyObject *_python_par_post_data )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_META( _python_str_plain_META, _python_par_META );
    PyObjectLocalParameterVariableNoDel _python_var_post_data( _python_str_plain_post_data, _python_par_post_data );
    PyObjectLocalVariable _python_var_parser( _python_str_plain_parser );

    // Actual function code.
    static PyFrameObject *frame_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_4ba5ab0f897bfa72bf5345154f7344df, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 175 );
        {
            PyObjectTempKeeper0 call1;
            {
                PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__http__request_ImmutableList.asObject0() ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_upload_handlers ) ).asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_deddf7684c77bcd5679a5fc7fdbf5a32 ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_upload_handlers );
        }
        }
        frame_guard.setLineNumber( 179 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper1 call7;
            _python_var_parser.assign1( ( call4.assign( _mvar_django__http__request_MultiPartParser.asObject0() ), call5.assign( _python_var_META.asObject() ), call6.assign( _python_var_post_data.asObject() ), call7.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_upload_handlers ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), call6.asObject0(), call7.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 180 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_parser.asObject(), _python_str_plain_parse ) ).asObject() );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_post_data.updateLocalsDict( _python_var_META.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_parser.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_META = NULL;
    PyObject *_python_par_post_data = NULL;
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
                PyErr_Format( PyExc_TypeError, "parse_file_upload() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "parse_file_upload() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_META == key )
            {
                if (unlikely( _python_par_META ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_file_upload() got multiple values for keyword argument 'META'" );
                    goto error_exit;
                }

                _python_par_META = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_post_data == key )
            {
                if (unlikely( _python_par_post_data ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_file_upload() got multiple values for keyword argument 'post_data'" );
                    goto error_exit;
                }

                _python_par_post_data = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_file_upload() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_META, key ) )
            {
                if (unlikely( _python_par_META ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_file_upload() got multiple values for keyword argument 'META'" );
                    goto error_exit;
                }

                _python_par_META = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_post_data, key ) )
            {
                if (unlikely( _python_par_post_data ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_file_upload() got multiple values for keyword argument 'post_data'" );
                    goto error_exit;
                }

                _python_par_post_data = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "parse_file_upload() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "parse_file_upload() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "parse_file_upload() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "parse_file_upload() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "parse_file_upload() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "parse_file_upload() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_file_upload() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "parse_file_upload() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_file_upload() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "parse_file_upload() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "parse_file_upload() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "parse_file_upload() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "parse_file_upload() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "parse_file_upload() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_META != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_file_upload() got multiple values for keyword argument 'META'" );
             goto error_exit;
         }

        _python_par_META = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_post_data != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_file_upload() got multiple values for keyword argument 'post_data'" );
             goto error_exit;
         }

        _python_par_post_data = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self, _python_par_META, _python_par_post_data );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_META );
    Py_XDECREF( _python_par_post_data );

    return NULL;
}

static PyObject *dparse_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_body_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_16_body_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_16_body_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_16_body_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16_body_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_16_body_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_16_body_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_d819064c59c08d866667b22236110415, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_16_body_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_16_body_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 184 );
        if ( (!( HAS_ATTRIBUTE( _python_var_self.asObject(), _python_unicode_plain__body ) )) )
        {
            frame_guard.setLineNumber( 185 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__read_started ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 186 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_Exception, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_a0ad0f55dee44954517723c8d9b88ba6 ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            frame_guard.setLineNumber( 187 );
            try
            {
                frame_guard.setLineNumber( 188 );
                {
                        PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_read ) ).asObject() ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__body );
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

                if ( _exception.matches( PyExc_IOError ) )
                {
                    frame_guard.detachFrame();
                    _python_var_e.assign0( _exception.getValue() );
                    frame_guard.setLineNumber( 190 );
                    {
                        PyObjectTempKeeper1 call3;
                        PyObjectTempKeeper0 call4;
                        PyObjectTempKeeper1 call5;
                        PyObjectTempKeeper0 call_tmp1;
                        DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_six.asObject0(), _python_str_plain_reraise ) ), call4.assign( _mvar_django__http__request_UnreadablePostError.asObject0() ), call5.assign( ( call_tmp1.assign( _mvar_django__http__request_UnreadablePostError.asObject0() ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp1.asObject(), LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_args ) ) ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), call5.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_sys.asObject0(), _python_str_plain_exc_info ) ).asObject() ) ).asObject(), _python_int_pos_2, 2 ) ).asObject() ) ) );
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
            frame_guard.setLineNumber( 191 );
            {
                PyObjectTempKeeper0 call7;
                {
                    PyObjectTemporary tmp_identifier( ( call7.assign( _mvar_django__http__request_BytesIO.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__body ) ).asObject() ) ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__stream );
            }
            }
        }
        frame_guard.setLineNumber( 192 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__body );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_e.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_16_body_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_16_body_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_16_body_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_16_body_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "body() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "body() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "body() got multiple values for keyword argument 'self'" );
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
                   "body() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "body() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "body() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "body() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "body() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "body() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "body() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "body() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "body() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "body() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "body() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "body() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "body() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "body() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_16_body_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_16_body_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_16_body_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_body_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_9fb8812c8211198bb4428258de54c85a, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 195 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_WITH_ARGS( _mvar_django__http__request_QueryDict.asObject0(), _python_unicode_empty ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__post );
        }
        frame_guard.setLineNumber( 196 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( _mvar_django__http__request_MultiValueDict.asObject0() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__files );
        }
        frame_guard.setLineNumber( 197 );
        SET_ATTRIBUTE( Py_True, _python_var_self.asObject(), _python_str_plain__post_parse_error );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() got multiple values for keyword argument 'self'" );
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
                   "_mark_post_parse_error() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_mark_post_parse_error() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_data( _python_str_plain_data );

    // Actual function code.
    static PyFrameObject *frame_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_6349eab074c4579a2dc679d77f1686d4, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 201 );
        if ( RICH_COMPARE_BOOL_NE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_method ) ).asObject(), _python_unicode_plain_POST ) )
        {
            {
                frame_guard.setLineNumber( 202 );
                PyObject *_tmp_python_tmp_source_iter;
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper1 make_tuple4;
                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple4.assign( ( call1.assign( _mvar_django__http__request_QueryDict.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_unicode_empty_tuple, PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__encoding ) ).asObject(), _python_str_plain_encoding ) ).asObject() ) ) ), MAKE_TUPLE2( make_tuple4.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__http__request_MultiValueDict.asObject0() ) ).asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                {
                        PyObject *tmp_identifier = _python_tmp_element_1.asObject();
                        SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__post );
                }
                {
                        PyObject *tmp_identifier = _python_tmp_element_2.asObject();
                        SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__files );
                }
            }
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 204 );
        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__read_started ) ).asObject() ) && (!( HAS_ATTRIBUTE( _python_var_self.asObject(), _python_unicode_plain__body ) )) ) )
        {
            frame_guard.setLineNumber( 205 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__mark_post_parse_error ) ).asObject() ) );
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 208 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_CONTENT_TYPE, _python_unicode_empty ) ).asObject(), _python_str_plain_startswith ) ).asObject(), _python_unicode_digest_f3efa1f8e9b15d4009ff745144a61dad ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 209 );
            if ( HAS_ATTRIBUTE( _python_var_self.asObject(), _python_unicode_plain__body ) )
            {
                frame_guard.setLineNumber( 211 );
                {
                    PyObjectTempKeeper0 call6;
                    _python_var_data.assign1( ( call6.assign( _mvar_django__http__request_BytesIO.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__body ) ).asObject() ) ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 213 );
                _python_var_data.assign0( _python_var_self.asObject() );
            }
            frame_guard.setLineNumber( 214 );
            try
            {
                {
                    frame_guard.setLineNumber( 215 );
                    PyObject *_tmp_python_tmp_source_iter;
                    {
                        PyObjectTempKeeper1 call8;
                        PyObjectTempKeeper1 call9;
                        _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_parse_file_upload ) ), call9.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), call9.asObject0(), _python_var_data.asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    {
                            PyObject *tmp_identifier = _python_tmp_element_1.asObject();
                            SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__post );
                    }
                    {
                            PyObject *tmp_identifier = _python_tmp_element_2.asObject();
                            SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__files );
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

                if (true)
                {
                    frame_guard.detachFrame();
                    frame_guard.setLineNumber( 224 );
                    DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__mark_post_parse_error ) ).asObject() ) );
                    {
                        PyTracebackObject *tb = _exception.getTraceback();
                        frame_guard.setLineNumber( tb->tb_lineno );
                        _exception.setTraceback( tb->tb_next );
                        tb->tb_next = NULL;

                        throw;
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
        else
        {
            frame_guard.setLineNumber( 226 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_META ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_CONTENT_TYPE, _python_unicode_empty ) ).asObject(), _python_str_plain_startswith ) ).asObject(), _python_unicode_digest_c71c8610f5121cec1f915ddb1f5a581e ) ).asObject() ) )
            {
                {
                    frame_guard.setLineNumber( 227 );
                    PyObject *_tmp_python_tmp_source_iter;
                    {
                        PyObjectTempKeeper0 call11;
                        PyObjectTempKeeper1 call12;
                        PyObjectTempKeeper1 make_tuple14;
                        _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple14.assign( ( call11.assign( _mvar_django__http__request_QueryDict.asObject0() ), call12.assign( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_body ) ).asObject() ) ), CALL_FUNCTION( call11.asObject0(), call12.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__encoding ) ).asObject(), _python_str_plain_encoding ) ).asObject() ) ) ), MAKE_TUPLE2( make_tuple14.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__http__request_MultiValueDict.asObject0() ) ).asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    {
                            PyObject *tmp_identifier = _python_tmp_element_1.asObject();
                            SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__post );
                    }
                    {
                            PyObject *tmp_identifier = _python_tmp_element_2.asObject();
                            SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__files );
                    }
                }
            }
            else
            {
                {
                    frame_guard.setLineNumber( 229 );
                    PyObject *_tmp_python_tmp_source_iter;
                    {
                        PyObjectTempKeeper0 call16;
                        PyObjectTempKeeper1 make_tuple19;
                        _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple19.assign( ( call16.assign( _mvar_django__http__request_QueryDict.asObject0() ), CALL_FUNCTION( call16.asObject0(), _python_tuple_unicode_empty_tuple, PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__encoding ) ).asObject(), _python_str_plain_encoding ) ).asObject() ) ) ), MAKE_TUPLE2( make_tuple19.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__http__request_MultiValueDict.asObject0() ) ).asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    {
                            PyObject *tmp_identifier = _python_tmp_element_1.asObject();
                            SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__post );
                    }
                    {
                            PyObject *tmp_identifier = _python_tmp_element_2.asObject();
                            SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__files );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_data.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_load_post_and_files() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_load_post_and_files() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_load_post_and_files() got multiple values for keyword argument 'self'" );
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
                   "_load_post_and_files() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_load_post_and_files() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_load_post_and_files() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_load_post_and_files() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_load_post_and_files() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_load_post_and_files() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_load_post_and_files() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_load_post_and_files() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_load_post_and_files() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_load_post_and_files() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_load_post_and_files() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_load_post_and_files() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_load_post_and_files() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_load_post_and_files() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_19_read_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_19_read_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_19_read_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_19_read_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_19_read_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_19_read_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_19_read_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_b92669ee38e8a424d32ddf998aab2ea7, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_19_read_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_19_read_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 240 );
        SET_ATTRIBUTE( Py_True, _python_var_self.asObject(), _python_str_plain__read_started );
        frame_guard.setLineNumber( 241 );
        try
        {
            frame_guard.setLineNumber( 242 );
            {
                PyObjectTempKeeper1 call_tmp7;
                PyObjectTempKeeper0 call_tmp8;
                return ( call_tmp7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__stream ) ).asObject(), _python_str_plain_read ) ), call_tmp8.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp7.asObject(), call_tmp8.asObject(), _python_var_kwargs.asObject1() ) );
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

            if ( _exception.matches( PyExc_IOError ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 244 );
                {
                    PyObjectTempKeeper1 call3;
                    PyObjectTempKeeper0 call4;
                    PyObjectTempKeeper1 call5;
                    PyObjectTempKeeper0 call_tmp1;
                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_six.asObject0(), _python_str_plain_reraise ) ), call4.assign( _mvar_django__http__request_UnreadablePostError.asObject0() ), call5.assign( ( call_tmp1.assign( _mvar_django__http__request_UnreadablePostError.asObject0() ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp1.asObject(), LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_args ) ) ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), call5.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_sys.asObject0(), _python_str_plain_exc_info ) ).asObject() ) ).asObject(), _python_int_pos_2, 2 ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_e.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_19_read_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_19_read_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_19_read_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_19_read_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                        PyErr_Format( PyExc_TypeError, "read() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "read() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "read() keywords must be strings" );
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

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "read() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "read() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "read() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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


    return impl_function_19_read_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_19_read_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_19_read_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_19_read_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_20_readline_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_458439ada6d4612d29bdf4b72d679016, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 247 );
        SET_ATTRIBUTE( Py_True, _python_var_self.asObject(), _python_str_plain__read_started );
        frame_guard.setLineNumber( 248 );
        try
        {
            frame_guard.setLineNumber( 249 );
            {
                PyObjectTempKeeper1 call_tmp7;
                PyObjectTempKeeper0 call_tmp8;
                return ( call_tmp7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__stream ) ).asObject(), _python_str_plain_readline ) ), call_tmp8.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp7.asObject(), call_tmp8.asObject(), _python_var_kwargs.asObject1() ) );
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

            if ( _exception.matches( PyExc_IOError ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 251 );
                {
                    PyObjectTempKeeper1 call3;
                    PyObjectTempKeeper0 call4;
                    PyObjectTempKeeper1 call5;
                    PyObjectTempKeeper0 call_tmp1;
                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_six.asObject0(), _python_str_plain_reraise ) ), call4.assign( _mvar_django__http__request_UnreadablePostError.asObject0() ), call5.assign( ( call_tmp1.assign( _mvar_django__http__request_UnreadablePostError.asObject0() ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp1.asObject(), LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_args ) ) ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), call5.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_sys.asObject0(), _python_str_plain_exc_info ) ).asObject() ) ).asObject(), _python_int_pos_2, 2 ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_e.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                        PyErr_Format( PyExc_TypeError, "readline() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "readline() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "readline() keywords must be strings" );
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

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "readline() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "readline() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "readline() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "readline() got multiple values for keyword argument 'self'" );
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


    return impl_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var_self;
    PyObjectLocalVariable python_var_buf;
};

static void _context_generator_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request_destructor( void *context_voidptr )
{
    _context_generator_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request_t *_python_context = (struct _context_generator_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request_t *)context_voidptr;

    delete _python_context;
}

static void function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request_t *_python_context = (_context_generator_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_buf.setVariableName( _python_str_plain_buf );

        // Actual function code.
        static PyFrameObject *frame_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request ) )
        {
            if ( frame_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
                Py_DECREF( frame_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request );
            }

            frame_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_5723042e9304dff99672378906d812cf, _module_django__http__request );
        }

        Py_INCREF( frame_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request );
        generator->m_frame = frame_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request;

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

            frame_guard.setLineNumber( 254 );
            while( true )
            {
                frame_guard.setLineNumber( 255 );
                _python_context->python_var_buf.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_self.asObject(), _python_str_plain_readline ) ).asObject() ) );
                frame_guard.setLineNumber( 256 );
                if ( (!( CHECK_IF_TRUE( _python_context->python_var_buf.asObject() ) )) )
                {
                    frame_guard.setLineNumber( 257 );
                    break;
                }
                frame_guard.setLineNumber( 258 );
                YIELD_VALUE( generator, _python_context->python_var_buf.asObject1() );

               CONSIDER_THREADING();
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

static PyObject *impl_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // Create context if any
    struct _context_generator_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request_t *_python_context = new _context_generator_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request_context,
            _python_str_plain_xreadlines,
            _codeobj_5723042e9304dff99672378906d812cf,
            _python_context,
            _context_generator_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function xreadlines" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.
        _python_context->python_var_self.setVariableNameAndValue( _python_str_plain_self, _python_par_self );

        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}
static PyObject *fparse_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "xreadlines() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "xreadlines() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "xreadlines() got multiple values for keyword argument 'self'" );
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
                   "xreadlines() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "xreadlines() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "xreadlines() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "xreadlines() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "xreadlines() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "xreadlines() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "xreadlines() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "xreadlines() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "xreadlines() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "xreadlines() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "xreadlines() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "xreadlines() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "xreadlines() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "xreadlines() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request ) )
    {
        if ( frame_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request );
        }

        frame_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request = MAKE_FRAME( _codeobj_20636bbe7b662811b0f2e10cce6a10ef, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 263 );
        return TO_LIST( PyObjectTemporary( MAKE_ITERATOR( _python_var_self.asObject() ) ).asObject() );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request )
        {
           Py_DECREF( frame_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request );
           frame_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "readlines() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "readlines() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "readlines() got multiple values for keyword argument 'self'" );
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
                   "readlines() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "readlines() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "readlines() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "readlines() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "readlines() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "readlines() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "readlines() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "readlines() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "readlines() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "readlines() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "readlines() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "readlines() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "readlines() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "readlines() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_QueryDict_of_module_django__http__request(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var__mutable( _python_str_plain__mutable );
    PyObjectLocalVariable _python_var__encoding( _python_str_plain__encoding );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_encoding( _python_str_plain_encoding );
    PyObjectLocalVariable _python_var__assert_mutable( _python_str_plain__assert_mutable );
    PyObjectLocalVariable _python_var___setitem__( _python_str_plain___setitem__ );
    PyObjectLocalVariable _python_var___delitem__( _python_str_plain___delitem__ );
    PyObjectLocalVariable _python_var___copy__( _python_str_plain___copy__ );
    PyObjectLocalVariable _python_var___deepcopy__( _python_str_plain___deepcopy__ );
    PyObjectLocalVariable _python_var_setlist( _python_str_plain_setlist );
    PyObjectLocalVariable _python_var_setlistdefault( _python_str_plain_setlistdefault );
    PyObjectLocalVariable _python_var_appendlist( _python_str_plain_appendlist );
    PyObjectLocalVariable _python_var_pop( _python_str_plain_pop );
    PyObjectLocalVariable _python_var_popitem( _python_str_plain_popitem );
    PyObjectLocalVariable _python_var_clear( _python_str_plain_clear );
    PyObjectLocalVariable _python_var_setdefault( _python_str_plain_setdefault );
    PyObjectLocalVariable _python_var_copy( _python_str_plain_copy );
    PyObjectLocalVariable _python_var_urlencode( _python_str_plain_urlencode );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_request );
    _python_var___doc__.assign0( _python_unicode_digest_c1c903c5817eb8ed76e0113b981e1dd9 );
    _python_var__mutable.assign0( Py_True );
    _python_var__encoding.assign0( Py_None );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_QueryDict_of_module_django__http__request(  ) );
    static PyFrameObject *frame_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_class_3_QueryDict_of_module_django__http__request );
        }

        frame_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_d54589a2b5cf3d5149f8cea1dc32bd1e, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 299 );
        _python_var_encoding.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), PyObjectTemporary( MAKE_FUNCTION_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request(  ) ).asObject() ) );
        frame_guard.setLineNumber( 305 );
        _python_var_encoding.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_encoding.asObject(), _python_str_plain_setter ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request(  ) ).asObject() ) );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_urlencode.updateLocalsDict( _python_var_copy.updateLocalsDict( _python_var_setdefault.updateLocalsDict( _python_var_clear.updateLocalsDict( _python_var_popitem.updateLocalsDict( _python_var_pop.updateLocalsDict( _python_var_appendlist.updateLocalsDict( _python_var_setlistdefault.updateLocalsDict( _python_var_setlist.updateLocalsDict( _python_var___deepcopy__.updateLocalsDict( _python_var___copy__.updateLocalsDict( _python_var___delitem__.updateLocalsDict( _python_var___setitem__.updateLocalsDict( _python_var__assert_mutable.updateLocalsDict( _python_var_encoding.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var__encoding.updateLocalsDict( _python_var__mutable.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_class_3_QueryDict_of_module_django__http__request );
           frame_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        throw;
    }
    _python_var__assert_mutable.assign1( MAKE_FUNCTION_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var___setitem__.assign1( MAKE_FUNCTION_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var___delitem__.assign1( MAKE_FUNCTION_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var___copy__.assign1( MAKE_FUNCTION_function_7___copy___of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var___deepcopy__.assign1( MAKE_FUNCTION_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var_setlist.assign1( MAKE_FUNCTION_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var_setlistdefault.assign1( MAKE_FUNCTION_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var_appendlist.assign1( MAKE_FUNCTION_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var_pop.assign1( MAKE_FUNCTION_function_12_pop_of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var_popitem.assign1( MAKE_FUNCTION_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var_clear.assign1( MAKE_FUNCTION_function_14_clear_of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var_setdefault.assign1( MAKE_FUNCTION_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var_copy.assign1( MAKE_FUNCTION_function_16_copy_of_class_3_QueryDict_of_module_django__http__request(  ) );
    _python_var_urlencode.assign1( MAKE_FUNCTION_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request(  ) );
    return _python_var_urlencode.updateLocalsDict( _python_var_copy.updateLocalsDict( _python_var_setdefault.updateLocalsDict( _python_var_clear.updateLocalsDict( _python_var_popitem.updateLocalsDict( _python_var_pop.updateLocalsDict( _python_var_appendlist.updateLocalsDict( _python_var_setlistdefault.updateLocalsDict( _python_var_setlist.updateLocalsDict( _python_var___deepcopy__.updateLocalsDict( _python_var___copy__.updateLocalsDict( _python_var___delitem__.updateLocalsDict( _python_var___setitem__.updateLocalsDict( _python_var__assert_mutable.updateLocalsDict( _python_var_encoding.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var__encoding.updateLocalsDict( _python_var__mutable.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_query_string, PyObject *_python_par_mutable, PyObject *_python_par_encoding )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_query_string( _python_str_plain_query_string, _python_par_query_string );
    PyObjectLocalParameterVariableNoDel _python_var_mutable( _python_str_plain_mutable, _python_par_mutable );
    PyObjectLocalParameterVariableNoDel _python_var_encoding( _python_str_plain_encoding, _python_par_encoding );
    PyObjectLocalVariable _python_var_key( _python_str_plain_key );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_1___init___of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_1___init___of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_1175d912c40c0a227655917bae20dbc1, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 280 );
        {
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__http__request_QueryDict.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 281 );
        if ( (!( CHECK_IF_TRUE( _python_var_encoding.asObject() ) )) )
        {
            frame_guard.setLineNumber( 282 );
            _python_var_encoding.assign1( LOOKUP_ATTRIBUTE( _mvar_django__http__request_settings.asObject0(), _python_str_plain_DEFAULT_CHARSET ) );
        }
        frame_guard.setLineNumber( 283 );
        {
                PyObject *tmp_identifier = _python_var_encoding.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_encoding );
        }
        frame_guard.setLineNumber( 284 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 285 );
            if ( BUILTIN_ISINSTANCE_BOOL( _python_var_query_string.asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) )
            {
                frame_guard.setLineNumber( 287 );
                _python_var_query_string.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_query_string.asObject(), _python_str_plain_decode ) ).asObject() ) );
            }
            {
                frame_guard.setLineNumber( 288 );
                PyObject *_tmp_python_tmp_for_iterator;
                {
                    PyObjectTempKeeper0 call3;
                    PyObjectTempKeeper1 call4;
                    PyObjectTempKeeper0 keeper_0;
                    _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call3.assign( _mvar_django__http__request_parse_qsl.asObject0() ), call4.assign( MAKE_TUPLE1( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_query_string.asObject() ) ) ? keeper_0.asObject0() : _python_unicode_empty ) ) ), CALL_FUNCTION( call3.asObject0(), call4.asObject0(), PyObjectTemporary( MAKE_DICT2( Py_True, _python_str_plain_keep_blank_values, _python_var_encoding.asObject(), _python_str_plain_encoding ) ).asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 288 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        {
                            frame_guard.setLineNumber( 288 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_key.assign0( _python_tmp_element_1.asObject() );
                            _python_var_value.assign0( _python_tmp_element_2.asObject() );
                        }
                    }
                    frame_guard.setLineNumber( 291 );
                    {
                        PyObjectTempKeeper1 call6;
                        PyObjectTempKeeper0 call7;
                        DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_appendlist ) ), call7.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), _python_var_value.asObject() ) ) );
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        else
        {
            {
                frame_guard.setLineNumber( 293 );
                PyObject *_tmp_python_tmp_for_iterator;
                {
                    PyObjectTempKeeper0 call9;
                    PyObjectTempKeeper0 keeper_1;
                    _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call9.assign( _mvar_django__http__request_parse_qsl.asObject0() ), CALL_FUNCTION( call9.asObject0(), PyObjectTemporary( MAKE_TUPLE1( ( CHECK_IF_TRUE( keeper_1.assign( _python_var_query_string.asObject() ) ) ? keeper_1.asObject0() : _python_unicode_empty ) ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_2862abe263c0db42ce17d3e5e3c1e0f0 ) ).asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 293 );
                        PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_2 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                        {
                            frame_guard.setLineNumber( 293 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_key.assign0( _python_tmp_element_1.asObject() );
                            _python_var_value.assign0( _python_tmp_element_2.asObject() );
                        }
                    }
                    frame_guard.setLineNumber( 295 );
                    {
                        PyObjectTempKeeper0 call14;
                        PyObjectTempKeeper0 call19;
                        PyObjectTempKeeper1 call22;
                        PyObjectTempKeeper1 call23;
                        PyObjectTempKeeper0 make_tuple12;
                        PyObjectTempKeeper0 make_tuple17;
                        DECREASE_REFCOUNT( ( call22.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_appendlist ) ), call23.assign( ( call14.assign( _mvar_django__http__request_force_text.asObject0() ), CALL_FUNCTION( call14.asObject0(), PyObjectTemporary( ( make_tuple12.assign( _python_var_key.asObject() ), MAKE_TUPLE2( make_tuple12.asObject0(), _python_var_encoding.asObject() ) ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_4593080baa302c9b17627b104a2461c2 ) ).asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call22.asObject0(), call23.asObject0(), PyObjectTemporary( ( call19.assign( _mvar_django__http__request_force_text.asObject0() ), CALL_FUNCTION( call19.asObject0(), PyObjectTemporary( ( make_tuple17.assign( _python_var_value.asObject() ), MAKE_TUPLE2( make_tuple17.asObject0(), _python_var_encoding.asObject() ) ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_4593080baa302c9b17627b104a2461c2 ) ).asObject() ) ) ).asObject() ) ) );
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        frame_guard.setLineNumber( 297 );
        {
                PyObject *tmp_identifier = _python_var_mutable.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__mutable );
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
        frame_guard.getFrame0()->f_locals = _python_var_encoding.updateLocalsDict( _python_var_mutable.updateLocalsDict( _python_var_query_string.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_key.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_1___init___of_class_3_QueryDict_of_module_django__http__request );
           frame_function_1___init___of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_query_string = NULL;
    PyObject *_python_par_mutable = NULL;
    PyObject *_python_par_encoding = NULL;
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
            if ( found == false && _python_str_plain_query_string == key )
            {
                if (unlikely( _python_par_query_string ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'query_string'" );
                    goto error_exit;
                }

                _python_par_query_string = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_mutable == key )
            {
                if (unlikely( _python_par_mutable ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'mutable'" );
                    goto error_exit;
                }

                _python_par_mutable = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_encoding == key )
            {
                if (unlikely( _python_par_encoding ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'encoding'" );
                    goto error_exit;
                }

                _python_par_encoding = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_query_string, key ) )
            {
                if (unlikely( _python_par_query_string ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'query_string'" );
                    goto error_exit;
                }

                _python_par_query_string = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_mutable, key ) )
            {
                if (unlikely( _python_par_mutable ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'mutable'" );
                    goto error_exit;
                }

                _python_par_mutable = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_encoding, key ) )
            {
                if (unlikely( _python_par_encoding ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'encoding'" );
                    goto error_exit;
                }

                _python_par_encoding = value;

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
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 2 )
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
    args_usable_count = args_given < 4 ? args_given : 4;

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
         if (unlikely( _python_par_query_string != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'query_string'" );
             goto error_exit;
         }

        _python_par_query_string = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_mutable != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'mutable'" );
             goto error_exit;
         }

        _python_par_mutable = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_encoding != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'encoding'" );
             goto error_exit;
         }

        _python_par_encoding = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_mutable == NULL )
    {
        _python_par_mutable = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_mutable );
    }
    if ( _python_par_encoding == NULL )
    {
        _python_par_encoding = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_encoding );
    }


    return impl_function_1___init___of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self, _python_par_query_string, _python_par_mutable, _python_par_encoding );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_query_string );
    Py_XDECREF( _python_par_mutable );
    Py_XDECREF( _python_par_encoding );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___init___of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_encoding_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_3cb0cac76058ec6ffc70128bc6fa3baa, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 301 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__encoding ) ).asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 302 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _mvar_django__http__request_settings.asObject0(), _python_str_plain_DEFAULT_CHARSET ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__encoding );
            }
        }
        frame_guard.setLineNumber( 303 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__encoding );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request );
           frame_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "encoding() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'self'" );
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
                   "encoding() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "encoding() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "encoding() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_encoding_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_8fbbf2b3a53df242612cb3cfde8caee5, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 307 );
        {
                PyObject *tmp_identifier = _python_var_value.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__encoding );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request );
           frame_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "encoding() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'value'" );
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
                   "encoding() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "encoding() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "encoding() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "encoding() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "encoding() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "encoding() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_dd75dcaac69f13f0ebe0eed9e5deeac7, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 310 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__mutable ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 311 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AttributeError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_bbac7c8442ebf0d9d289a8861e8b8591 ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request );
           frame_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_assert_mutable() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_assert_mutable() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_assert_mutable() got multiple values for keyword argument 'self'" );
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
                   "_assert_mutable() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_assert_mutable() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_assert_mutable() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_assert_mutable() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_assert_mutable() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_assert_mutable() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_assert_mutable() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_assert_mutable() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_assert_mutable() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_assert_mutable() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_assert_mutable() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_assert_mutable() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_assert_mutable() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_assert_mutable() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5___setitem___of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_0647957e378d9a2e44e200551001b4bb, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 314 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__assert_mutable ) ).asObject() ) );
        frame_guard.setLineNumber( 315 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            _python_var_key.assign1( ( call1.assign( _mvar_django__http__request_bytes_to_text.asObject0() ), call2.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 316 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            _python_var_value.assign1( ( call4.assign( _mvar_django__http__request_bytes_to_text.asObject0() ), call5.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 317 );
        {
            PyObjectTempKeeper0 call10;
            PyObjectTempKeeper1 call9;
            PyObjectTempKeeper0 super7;
            DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super7.assign( _mvar_django__http__request_QueryDict.asObject0() ), BUILTIN_SUPER( super7.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___setitem__ ) ), call10.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), call10.asObject0(), _python_var_value.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request );
           frame_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "__setitem__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'key'" );
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
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'key'" );
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
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'value'" );
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
                   "__setitem__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__setitem__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self, _python_par_key, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );

    // Actual function code.
    static PyFrameObject *frame_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6___delitem___of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_537c2fd57e763e6e2d9dbddf2e32ae12, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 320 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__assert_mutable ) ).asObject() ) );
        frame_guard.setLineNumber( 321 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__http__request_QueryDict.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___delitem__ ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_key.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request );
           frame_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
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
                PyErr_Format( PyExc_TypeError, "__delitem__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__delitem__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "__delitem__() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__delitem__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "__delitem__() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__delitem__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__delitem__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__delitem__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__delitem__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__delitem__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__delitem__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__delitem__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__delitem__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__delitem__() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self, _python_par_key );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );

    return NULL;
}

static PyObject *dparse_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7___copy___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );
    PyObjectLocalVariable _python_var_key( _python_str_plain_key );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_7___copy___of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_7___copy___of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_7___copy___of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7___copy___of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_7___copy___of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_7___copy___of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_1bed2f6b1feffb947ae2a1789a3622fd, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_7___copy___of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_7___copy___of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 324 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_result.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), CALL_FUNCTION( call1.asObject0(), _python_tuple_unicode_empty_tuple, PyObjectTemporary( MAKE_DICT2( Py_True, _python_str_plain_mutable, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject(), _python_str_plain_encoding ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 325 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper1 call4;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_six.asObject0(), _python_str_plain_iterlists ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_self.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 325 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 325 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_key.assign0( _python_tmp_element_1.asObject() );
                        _python_var_value.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 326 );
                {
                    PyObjectTempKeeper1 call6;
                    PyObjectTempKeeper0 call7;
                    DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_setlist ) ), call7.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), _python_var_value.asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 327 );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_result.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7___copy___of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_7___copy___of_class_3_QueryDict_of_module_django__http__request );
           frame_function_7___copy___of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7___copy___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__copy__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__copy__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__copy__() got multiple values for keyword argument 'self'" );
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
                   "__copy__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__copy__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__copy__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__copy__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__copy__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__copy__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__copy__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__copy__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__copy__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__copy__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__copy__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__copy__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__copy__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__copy__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7___copy___of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7___copy___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7___copy___of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7___copy___of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_memo )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_memo( _python_str_plain_memo, _python_par_memo );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );
    PyObjectLocalVariable _python_var_key( _python_str_plain_key );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_ad4f850e4b32b91666c24308996b3ecb, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 330 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_result.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ), CALL_FUNCTION( call1.asObject0(), _python_tuple_unicode_empty_tuple, PyObjectTemporary( MAKE_DICT2( Py_True, _python_str_plain_mutable, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject(), _python_str_plain_encoding ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 331 );
        {
                PyObject *tmp_identifier = _python_var_result.asObject();
                PyObject *tmp_subscribed = _python_var_memo.asObject();
                SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_id ), _python_var_self.asObject() ) ).asObject() );
        }
        {
            frame_guard.setLineNumber( 332 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper1 call4;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_six.asObject0(), _python_str_plain_iterlists ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_self.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 332 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 332 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_key.assign0( _python_tmp_element_1.asObject() );
                        _python_var_value.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 333 );
                {
                    PyObjectTempKeeper0 call10;
                    PyObjectTempKeeper1 call12;
                    PyObjectTempKeeper1 call13;
                    PyObjectTempKeeper1 call6;
                    PyObjectTempKeeper0 call7;
                    PyObjectTempKeeper1 call9;
                    DECREASE_REFCOUNT( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_setlist ) ), call13.assign( ( call6.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_copy.asObject0(), _python_str_plain_deepcopy ) ), call7.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), _python_var_memo.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), call13.asObject0(), PyObjectTemporary( ( call9.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_copy.asObject0(), _python_str_plain_deepcopy ) ), call10.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), call10.asObject0(), _python_var_memo.asObject() ) ) ).asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 334 );
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
        frame_guard.getFrame0()->f_locals = _python_var_memo.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_result.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request );
           frame_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_memo = NULL;
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
                PyErr_Format( PyExc_TypeError, "__deepcopy__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__deepcopy__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_memo == key )
            {
                if (unlikely( _python_par_memo ))
                {
                    PyErr_Format( PyExc_TypeError, "__deepcopy__() got multiple values for keyword argument 'memo'" );
                    goto error_exit;
                }

                _python_par_memo = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__deepcopy__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_memo, key ) )
            {
                if (unlikely( _python_par_memo ))
                {
                    PyErr_Format( PyExc_TypeError, "__deepcopy__() got multiple values for keyword argument 'memo'" );
                    goto error_exit;
                }

                _python_par_memo = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__deepcopy__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__deepcopy__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__deepcopy__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__deepcopy__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__deepcopy__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__deepcopy__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__deepcopy__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__deepcopy__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_memo != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__deepcopy__() got multiple values for keyword argument 'memo'" );
             goto error_exit;
         }

        _python_par_memo = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self, _python_par_memo );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_memo );

    return NULL;
}

static PyObject *dparse_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key, PyObject *_python_par_list_ )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_list_( _python_str_plain_list_, _python_par_list_ );
    PyObjectLocalVariable _python_var_elt( _python_str_plain_elt );

    // Actual function code.
    static PyFrameObject *frame_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_setlist_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_951fb435a3319eee937d8c95583a294d, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 337 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__assert_mutable ) ).asObject() ) );
        frame_guard.setLineNumber( 338 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            _python_var_key.assign1( ( call1.assign( _mvar_django__http__request_bytes_to_text.asObject0() ), call2.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 339 );
        _python_var_list_.assign1( impl_listcontr_1_of_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request( MAKE_ITERATOR( _python_var_list_.asObject() ), _python_var_elt, _python_var_self ) );
        frame_guard.setLineNumber( 340 );
        {
            PyObjectTempKeeper1 call6;
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper0 super4;
            DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super4.assign( _mvar_django__http__request_QueryDict.asObject0() ), BUILTIN_SUPER( super4.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_setlist ) ), call7.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), _python_var_list_.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_list_.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_elt.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request );
           frame_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
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
                PyErr_Format( PyExc_TypeError, "setlist() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "setlist() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "setlist() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_list_ == key )
            {
                if (unlikely( _python_par_list_ ))
                {
                    PyErr_Format( PyExc_TypeError, "setlist() got multiple values for keyword argument 'list_'" );
                    goto error_exit;
                }

                _python_par_list_ = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "setlist() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "setlist() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_list_, key ) )
            {
                if (unlikely( _python_par_list_ ))
                {
                    PyErr_Format( PyExc_TypeError, "setlist() got multiple values for keyword argument 'list_'" );
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
                   "setlist() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "setlist() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "setlist() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "setlist() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "setlist() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "setlist() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "setlist() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "setlist() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "setlist() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "setlist() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "setlist() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "setlist() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "setlist() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "setlist() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "setlist() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_list_ != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "setlist() got multiple values for keyword argument 'list_'" );
             goto error_exit;
         }

        _python_par_list_ = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self, _python_par_key, _python_par_list_ );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_list_ );

    return NULL;
}

static PyObject *dparse_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_elt,PyObjectLocalParameterVariableNoDel &python_closure_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 339 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 339 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_elt.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper0 call2;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( _mvar_django__http__request_bytes_to_text.asObject0() ), call2.assign( python_closure_elt.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key, PyObject *_python_par_default_list )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_default_list( _python_str_plain_default_list, _python_par_default_list );

    // Actual function code.
    static PyFrameObject *frame_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_b7bfec918428d443f3e4bbd4c2150ae4, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 343 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__assert_mutable ) ).asObject() ) );
        frame_guard.setLineNumber( 344 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 super1;
            return ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__http__request_QueryDict.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_setlistdefault ) ), call4.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_default_list.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_default_list.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request );
           frame_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
    PyObject *_python_par_default_list = NULL;
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
                PyErr_Format( PyExc_TypeError, "setlistdefault() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "setlistdefault() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "setlistdefault() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_default_list == key )
            {
                if (unlikely( _python_par_default_list ))
                {
                    PyErr_Format( PyExc_TypeError, "setlistdefault() got multiple values for keyword argument 'default_list'" );
                    goto error_exit;
                }

                _python_par_default_list = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "setlistdefault() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "setlistdefault() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_default_list, key ) )
            {
                if (unlikely( _python_par_default_list ))
                {
                    PyErr_Format( PyExc_TypeError, "setlistdefault() got multiple values for keyword argument 'default_list'" );
                    goto error_exit;
                }

                _python_par_default_list = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "setlistdefault() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "setlistdefault() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "setlistdefault() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "setlistdefault() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "setlistdefault() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "setlistdefault() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "setlistdefault() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "setlistdefault() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "setlistdefault() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "setlistdefault() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "setlistdefault() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "setlistdefault() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "setlistdefault() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "setlistdefault() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "setlistdefault() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_default_list != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "setlistdefault() got multiple values for keyword argument 'default_list'" );
             goto error_exit;
         }

        _python_par_default_list = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_default_list == NULL )
    {
        _python_par_default_list = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_default_list );
    }


    return impl_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self, _python_par_key, _python_par_default_list );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_default_list );

    return NULL;
}

static PyObject *dparse_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_97ed5365e0deb4b96ae0b1908e854e5a, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 347 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__assert_mutable ) ).asObject() ) );
        frame_guard.setLineNumber( 348 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            _python_var_key.assign1( ( call1.assign( _mvar_django__http__request_bytes_to_text.asObject0() ), call2.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 349 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            _python_var_value.assign1( ( call4.assign( _mvar_django__http__request_bytes_to_text.asObject0() ), call5.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 350 );
        {
            PyObjectTempKeeper0 call10;
            PyObjectTempKeeper1 call9;
            PyObjectTempKeeper0 super7;
            DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super7.assign( _mvar_django__http__request_QueryDict.asObject0() ), BUILTIN_SUPER( super7.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_appendlist ) ), call10.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), call10.asObject0(), _python_var_value.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request );
           frame_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "appendlist() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "appendlist() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "appendlist() got multiple values for keyword argument 'key'" );
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
                    PyErr_Format( PyExc_TypeError, "appendlist() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "appendlist() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "appendlist() got multiple values for keyword argument 'key'" );
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
                    PyErr_Format( PyExc_TypeError, "appendlist() got multiple values for keyword argument 'value'" );
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
                   "appendlist() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "appendlist() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "appendlist() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "appendlist() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "appendlist() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "appendlist() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "appendlist() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "appendlist() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "appendlist() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "appendlist() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "appendlist() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "appendlist() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "appendlist() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "appendlist() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "appendlist() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "appendlist() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self, _python_par_key, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_pop_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key, PyObject *_python_par_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );

    // Actual function code.
    static PyFrameObject *frame_function_12_pop_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_12_pop_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_12_pop_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_pop_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_12_pop_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_12_pop_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_61e05e3202b2d7394c6713c46beda079, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_12_pop_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_12_pop_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 353 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__assert_mutable ) ).asObject() ) );
        frame_guard.setLineNumber( 354 );
        {
            PyObjectTempKeeper1 call_tmp3;
            PyObjectTempKeeper1 call_tmp4;
            PyObjectTempKeeper0 super1;
            return ( call_tmp3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__http__request_QueryDict.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_pop ) ), call_tmp4.assign( MAKE_TUPLE1( _python_var_key.asObject() ) ), impl_function_5_complex_call_helper_pos_star_list_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_args.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_args.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_12_pop_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_12_pop_of_class_3_QueryDict_of_module_django__http__request );
           frame_function_12_pop_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_12_pop_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
    PyObject *_python_par_args = NULL;
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
                PyErr_Format( PyExc_TypeError, "pop() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "pop() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "pop() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "pop() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "pop() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "pop() got an unexpected keyword argument '%s'",
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

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "pop() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "pop() takes at least %d non-keyword arguments (%zd given)", 2, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "pop() takes at least %d arguments (%zd given)", 2, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "pop() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "pop() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
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


    return impl_function_12_pop_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self, _python_par_key, _python_par_args );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_args );

    return NULL;
}

static PyObject *dparse_function_12_pop_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_12_pop_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), MAKE_TUPLE( &args[ 2 ], size > 2 ? size-2 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_12_pop_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_popitem_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_4bc5f0fd97bd8d240cd81dba0caca0c1, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 357 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__assert_mutable ) ).asObject() ) );
        frame_guard.setLineNumber( 358 );
        {
            PyObjectTempKeeper0 super1;
            return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__http__request_QueryDict.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_popitem ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request );
           frame_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "popitem() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "popitem() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "popitem() got multiple values for keyword argument 'self'" );
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
                   "popitem() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "popitem() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "popitem() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "popitem() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "popitem() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "popitem() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "popitem() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "popitem() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "popitem() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "popitem() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "popitem() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "popitem() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "popitem() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "popitem() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_clear_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_14_clear_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_14_clear_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_14_clear_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14_clear_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_14_clear_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_14_clear_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_664708e8c6eaafda2422519e45c23159, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_14_clear_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_14_clear_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 361 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__assert_mutable ) ).asObject() ) );
        frame_guard.setLineNumber( 362 );
        {
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__http__request_QueryDict.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_clear ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_14_clear_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_14_clear_of_class_3_QueryDict_of_module_django__http__request );
           frame_function_14_clear_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_14_clear_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "clear() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "clear() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "clear() got multiple values for keyword argument 'self'" );
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
                   "clear() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "clear() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "clear() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "clear() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "clear() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "clear() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clear() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "clear() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clear() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "clear() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "clear() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "clear() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "clear() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "clear() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_14_clear_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_14_clear_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_14_clear_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_clear_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key, PyObject *_python_par_default )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_default( _python_str_plain_default, _python_par_default );

    // Actual function code.
    static PyFrameObject *frame_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_6adaa9003ac649eae77cb48e847a8d2b, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 365 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__assert_mutable ) ).asObject() ) );
        frame_guard.setLineNumber( 366 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            _python_var_key.assign1( ( call1.assign( _mvar_django__http__request_bytes_to_text.asObject0() ), call2.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 367 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            _python_var_default.assign1( ( call4.assign( _mvar_django__http__request_bytes_to_text.asObject0() ), call5.assign( _python_var_default.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 368 );
        {
            PyObjectTempKeeper0 call10;
            PyObjectTempKeeper1 call9;
            PyObjectTempKeeper0 super7;
            return ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super7.assign( _mvar_django__http__request_QueryDict.asObject0() ), BUILTIN_SUPER( super7.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_setdefault ) ), call10.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), call10.asObject0(), _python_var_default.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_default.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request );
           frame_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
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
                PyErr_Format( PyExc_TypeError, "setdefault() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "setdefault() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "setdefault() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_default == key )
            {
                if (unlikely( _python_par_default ))
                {
                    PyErr_Format( PyExc_TypeError, "setdefault() got multiple values for keyword argument 'default'" );
                    goto error_exit;
                }

                _python_par_default = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "setdefault() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "setdefault() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_default, key ) )
            {
                if (unlikely( _python_par_default ))
                {
                    PyErr_Format( PyExc_TypeError, "setdefault() got multiple values for keyword argument 'default'" );
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
                   "setdefault() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "setdefault() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "setdefault() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "setdefault() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "setdefault() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "setdefault() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "setdefault() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "setdefault() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "setdefault() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "setdefault() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "setdefault() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "setdefault() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "setdefault() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "setdefault() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "setdefault() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_default != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "setdefault() got multiple values for keyword argument 'default'" );
             goto error_exit;
         }

        _python_par_default = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_default == NULL )
    {
        _python_par_default = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_default );
    }


    return impl_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self, _python_par_key, _python_par_default );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_default );

    return NULL;
}

static PyObject *dparse_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_copy_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_16_copy_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_16_copy_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_16_copy_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16_copy_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_16_copy_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_16_copy_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_c7cd779672b44cbd097f3c9acc5a2334, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_16_copy_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_16_copy_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 372 );
        return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___deepcopy__ ) ).asObject(), PyObjectTemporary( PyDict_New() ).asObject() );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_16_copy_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_16_copy_of_class_3_QueryDict_of_module_django__http__request );
           frame_function_16_copy_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_16_copy_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "copy() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "copy() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "copy() got multiple values for keyword argument 'self'" );
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
                   "copy() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "copy() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "copy() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "copy() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "copy() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "copy() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "copy() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "copy() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "copy() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "copy() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "copy() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "copy() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "copy() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "copy() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_16_copy_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_16_copy_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_16_copy_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_copy_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_safe )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectSharedLocalVariable _python_var_safe( _python_str_plain_safe, _python_par_safe );
    PyObjectLocalVariable _python_var_output( _python_str_plain_output );
    PyObjectLocalVariable _python_var_encode( _python_str_plain_encode );
    PyObjectLocalVariable _python_var_k( _python_str_plain_k );
    PyObjectLocalVariable _python_var_list_( _python_str_plain_list_ );
    PyObjectLocalVariable _python_var_v( _python_str_plain_v );

    // Actual function code.
    _python_var_output.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_6bf7e5d75492481e41f2ee40fe3d7186, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 390 );
        if ( CHECK_IF_TRUE( _python_var_safe.asObject() ) )
        {
            frame_guard.setLineNumber( 391 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call2;
                _python_var_safe.assign1( ( call1.assign( _mvar_django__http__request_force_bytes.asObject0() ), call2.assign( _python_var_safe.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) );
            }
            _python_var_encode.assign1( MAKE_FUNCTION_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( _python_var_safe ) );
        }
        else
        {
            _python_var_encode.assign1( MAKE_FUNCTION_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request(  ) );
        }
        {
            frame_guard.setLineNumber( 395 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_lists ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 395 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 395 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_k.assign0( _python_tmp_element_1.asObject() );
                        _python_var_list_.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 396 );
                {
                    PyObjectTempKeeper0 call4;
                    PyObjectTempKeeper0 call5;
                    _python_var_k.assign1( ( call4.assign( _mvar_django__http__request_force_bytes.asObject0() ), call5.assign( _python_var_k.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 397 );
                {
                    PyObjectTempKeeper1 call7;
                    DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_output.asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( impl_listcontr_3_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( MAKE_ITERATOR( _python_var_list_.asObject() ), _python_var_encode, _python_var_k, _python_var_self, _python_var_v ) ).asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 399 );
        {
            PyObjectTempKeeper1 call9;
            return ( call9.assign( LOOKUP_ATTRIBUTE( _python_unicode_chr_38, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_output.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_safe.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_list_.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_encode.updateLocalsDict( _python_var_output.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request );
           frame_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "urlencode() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "urlencode() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

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
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "urlencode() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
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


    return impl_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_self, _python_par_safe );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_safe );

    return NULL;
}

static PyObject *dparse_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_k, PyObject *_python_par_v )
{
    // The context of the function.
    struct _context_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request_t *_python_context = (struct _context_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_k( _python_str_plain_k, _python_par_k );
    PyObjectLocalParameterVariableNoDel _python_var_v( _python_str_plain_v, _python_par_v );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_9ce84451494f07eaec2e9902d02bdb33, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 392 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper1 make_tuple7;
            return BINARY_OPERATION_REMAINDER( _python_unicode_digest_d62dfcd78b73740671df55e9f319fd85, PyObjectTemporary( ( make_tuple7.assign( ( call1.assign( _mvar_django__http__request_quote.asObject0() ), call2.assign( _python_var_k.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_context->python_closure_safe.asObject() ) ) ), MAKE_TUPLE2( make_tuple7.asObject0(), PyObjectTemporary( ( call4.assign( _mvar_django__http__request_quote.asObject0() ), call5.assign( _python_var_v.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), _python_context->python_closure_safe.asObject() ) ) ).asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_context->python_closure_safe.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request );
           frame_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_k = NULL;
    PyObject *_python_par_v = NULL;
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
            if ( found == false && _python_str_plain_v == key )
            {
                if (unlikely( _python_par_v ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'v'" );
                    goto error_exit;
                }

                _python_par_v = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_v, key ) )
            {
                if (unlikely( _python_par_v ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'v'" );
                    goto error_exit;
                }

                _python_par_v = value;

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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_k != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'k'" );
             goto error_exit;
         }

        _python_par_k = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_v != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'v'" );
             goto error_exit;
         }

        _python_par_v = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_k, _python_par_v );

error_exit:;

    Py_XDECREF( _python_par_k );
    Py_XDECREF( _python_par_v );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_k, PyObject *_python_par_v )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_k( _python_str_plain_k, _python_par_k );
    PyObjectLocalParameterVariableNoDel _python_var_v( _python_str_plain_v, _python_par_v );

    // Actual function code.
    static PyFrameObject *frame_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request ) )
    {
        if ( frame_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request" );
#endif
            Py_DECREF( frame_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request );
        }

        frame_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request = MAKE_FRAME( _codeobj_1d3e162c76be6fdcb4f882390e46e8e1, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 394 );
        {
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper0 make_dict1;
            return ( call3.assign( _mvar_django__http__request_urlencode.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( make_dict1.assign( _python_var_v.asObject() ), MAKE_DICT1( make_dict1.asObject0(), _python_var_k.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request )
        {
           Py_DECREF( frame_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request );
           frame_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_k = NULL;
    PyObject *_python_par_v = NULL;
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
            if ( found == false && _python_str_plain_v == key )
            {
                if (unlikely( _python_par_v ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'v'" );
                    goto error_exit;
                }

                _python_par_v = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_v, key ) )
            {
                if (unlikely( _python_par_v ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'v'" );
                    goto error_exit;
                }

                _python_par_v = value;

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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_k != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'k'" );
             goto error_exit;
         }

        _python_par_k = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_v != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'v'" );
             goto error_exit;
         }

        _python_par_v = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( self, _python_par_k, _python_par_v );

error_exit:;

    Py_XDECREF( _python_par_k );
    Py_XDECREF( _python_par_v );

    return NULL;
}

static PyObject *dparse_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_3_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_encode,PyObjectLocalVariable &python_closure_k,PyObjectLocalParameterVariableNoDel &python_closure_self,PyObjectLocalVariable &python_closure_v )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 397 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 397 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_v.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper0 call2;
                    PyObjectTempKeeper0 call4;
                    PyObjectTempKeeper0 call5;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call4.assign( python_closure_encode.asObject() ), call5.assign( python_closure_k.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__http__request_force_bytes.asObject0() ), call2.assign( python_closure_v.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_4_build_request_repr_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_request, PyObject *_python_par_path_override, PyObject *_python_par_GET_override, PyObject *_python_par_POST_override, PyObject *_python_par_COOKIES_override, PyObject *_python_par_META_override )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_path_override( _python_str_plain_path_override, _python_par_path_override );
    PyObjectLocalParameterVariableNoDel _python_var_GET_override( _python_str_plain_GET_override, _python_par_GET_override );
    PyObjectLocalParameterVariableNoDel _python_var_POST_override( _python_str_plain_POST_override, _python_par_POST_override );
    PyObjectLocalParameterVariableNoDel _python_var_COOKIES_override( _python_str_plain_COOKIES_override, _python_par_COOKIES_override );
    PyObjectLocalParameterVariableNoDel _python_var_META_override( _python_str_plain_META_override, _python_par_META_override );
    PyObjectLocalVariable _python_var_get( _python_str_plain_get );
    PyObjectLocalVariable _python_var_post( _python_str_plain_post );
    PyObjectLocalVariable _python_var_cookies( _python_str_plain_cookies );
    PyObjectLocalVariable _python_var_meta( _python_str_plain_meta );
    PyObjectLocalVariable _python_var_path( _python_str_plain_path );

    // Actual function code.
    static PyFrameObject *frame_function_4_build_request_repr_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_4_build_request_repr_of_module_django__http__request ) )
    {
        if ( frame_function_4_build_request_repr_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_build_request_repr_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_4_build_request_repr_of_module_django__http__request );
        }

        frame_function_4_build_request_repr_of_module_django__http__request = MAKE_FRAME( _codeobj_3d52078780efac86881dc982957db45c, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_4_build_request_repr_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_4_build_request_repr_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 411 );
        try
        {
            frame_guard.setLineNumber( 412 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _python_var_get.assign1( ( ( _python_var_GET_override.asObject() != Py_None ) ? ( call1.assign( _mvar_django__http__request_pformat.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_GET_override.asObject() ) ) : ( call3.assign( _mvar_django__http__request_pformat.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_GET ) ).asObject() ) ) ) );
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
                _python_var_get.assign0( _python_unicode_digest_ed52d76b6ac0c63634622cb133f081a0 );
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
        frame_guard.setLineNumber( 417 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain__post_parse_error ) ).asObject() ) )
        {
            _python_var_post.assign0( _python_unicode_digest_ed52d76b6ac0c63634622cb133f081a0 );
        }
        else
        {
            frame_guard.setLineNumber( 420 );
            try
            {
                frame_guard.setLineNumber( 421 );
                {
                    PyObjectTempKeeper0 call5;
                    PyObjectTempKeeper0 call7;
                    _python_var_post.assign1( ( ( _python_var_POST_override.asObject() != Py_None ) ? ( call5.assign( _mvar_django__http__request_pformat.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_POST_override.asObject() ) ) : ( call7.assign( _mvar_django__http__request_pformat.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_POST ) ).asObject() ) ) ) );
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
                    _python_var_post.assign0( _python_unicode_digest_ed52d76b6ac0c63634622cb133f081a0 );
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
        frame_guard.setLineNumber( 426 );
        try
        {
            frame_guard.setLineNumber( 427 );
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _python_var_cookies.assign1( ( ( _python_var_COOKIES_override.asObject() != Py_None ) ? ( call9.assign( _mvar_django__http__request_pformat.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_COOKIES_override.asObject() ) ) : ( call11.assign( _mvar_django__http__request_pformat.asObject0() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_COOKIES ) ).asObject() ) ) ) );
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
                _python_var_cookies.assign0( _python_unicode_digest_ed52d76b6ac0c63634622cb133f081a0 );
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
        frame_guard.setLineNumber( 432 );
        try
        {
            frame_guard.setLineNumber( 433 );
            {
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call15;
                _python_var_meta.assign1( ( ( _python_var_META_override.asObject() != Py_None ) ? ( call13.assign( _mvar_django__http__request_pformat.asObject0() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_var_META_override.asObject() ) ) : ( call15.assign( _mvar_django__http__request_pformat.asObject0() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_META ) ).asObject() ) ) ) );
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
                _python_var_meta.assign0( _python_unicode_digest_ed52d76b6ac0c63634622cb133f081a0 );
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
        frame_guard.setLineNumber( 438 );
        _python_var_path.assign1( ( ( _python_var_path_override.asObject() != Py_None ) ? _python_var_path_override.asObject1() : LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_path ) ) );
        frame_guard.setLineNumber( 439 );
        {
            PyObjectTempKeeper1 call17;
            PyObjectTempKeeper1 call19;
            PyObjectTempKeeper1 call21;
            PyObjectTempKeeper1 call23;
            PyObjectTempKeeper0 call31;
            PyObjectTempKeeper1 make_tuple25;
            PyObjectTempKeeper0 make_tuple26;
            PyObjectTempKeeper1 make_tuple27;
            PyObjectTempKeeper1 make_tuple28;
            PyObjectTempKeeper1 make_tuple29;
            return ( call31.assign( _mvar_django__http__request_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call31.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_fada3274b529d6e9b7229eb6f742a775, PyObjectTemporary( ( make_tuple25.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ), make_tuple26.assign( _python_var_path.asObject() ), make_tuple27.assign( ( call17.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_var_get.asObject() ) ) ), make_tuple28.assign( ( call19.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), _python_var_post.asObject() ) ) ), make_tuple29.assign( ( call21.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), _python_var_cookies.asObject() ) ) ), MAKE_TUPLE6( make_tuple25.asObject0(), make_tuple26.asObject0(), make_tuple27.asObject0(), make_tuple28.asObject0(), make_tuple29.asObject0(), PyObjectTemporary( ( call23.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), _python_var_meta.asObject() ) ) ).asObject() ) ) ).asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_META_override.updateLocalsDict( _python_var_COOKIES_override.updateLocalsDict( _python_var_POST_override.updateLocalsDict( _python_var_GET_override.updateLocalsDict( _python_var_path_override.updateLocalsDict( _python_var_request.updateLocalsDict( _python_var_path.updateLocalsDict( _python_var_meta.updateLocalsDict( _python_var_cookies.updateLocalsDict( _python_var_post.updateLocalsDict( _python_var_get.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_build_request_repr_of_module_django__http__request )
        {
           Py_DECREF( frame_function_4_build_request_repr_of_module_django__http__request );
           frame_function_4_build_request_repr_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_build_request_repr_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_path_override = NULL;
    PyObject *_python_par_GET_override = NULL;
    PyObject *_python_par_POST_override = NULL;
    PyObject *_python_par_COOKIES_override = NULL;
    PyObject *_python_par_META_override = NULL;
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
                PyErr_Format( PyExc_TypeError, "build_request_repr() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_path_override == key )
            {
                if (unlikely( _python_par_path_override ))
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'path_override'" );
                    goto error_exit;
                }

                _python_par_path_override = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_GET_override == key )
            {
                if (unlikely( _python_par_GET_override ))
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'GET_override'" );
                    goto error_exit;
                }

                _python_par_GET_override = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_POST_override == key )
            {
                if (unlikely( _python_par_POST_override ))
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'POST_override'" );
                    goto error_exit;
                }

                _python_par_POST_override = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_COOKIES_override == key )
            {
                if (unlikely( _python_par_COOKIES_override ))
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'COOKIES_override'" );
                    goto error_exit;
                }

                _python_par_COOKIES_override = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_META_override == key )
            {
                if (unlikely( _python_par_META_override ))
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'META_override'" );
                    goto error_exit;
                }

                _python_par_META_override = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path_override, key ) )
            {
                if (unlikely( _python_par_path_override ))
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'path_override'" );
                    goto error_exit;
                }

                _python_par_path_override = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_GET_override, key ) )
            {
                if (unlikely( _python_par_GET_override ))
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'GET_override'" );
                    goto error_exit;
                }

                _python_par_GET_override = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_POST_override, key ) )
            {
                if (unlikely( _python_par_POST_override ))
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'POST_override'" );
                    goto error_exit;
                }

                _python_par_POST_override = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_COOKIES_override, key ) )
            {
                if (unlikely( _python_par_COOKIES_override ))
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'COOKIES_override'" );
                    goto error_exit;
                }

                _python_par_COOKIES_override = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_META_override, key ) )
            {
                if (unlikely( _python_par_META_override ))
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'META_override'" );
                    goto error_exit;
                }

                _python_par_META_override = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "build_request_repr() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "build_request_repr() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "build_request_repr() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "build_request_repr() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "build_request_repr() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "build_request_repr() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "build_request_repr() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "build_request_repr() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "build_request_repr() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "build_request_repr() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "build_request_repr() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "build_request_repr() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 6 ? args_given : 6;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_path_override != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'path_override'" );
             goto error_exit;
         }

        _python_par_path_override = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_GET_override != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'GET_override'" );
             goto error_exit;
         }

        _python_par_GET_override = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_POST_override != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'POST_override'" );
             goto error_exit;
         }

        _python_par_POST_override = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_COOKIES_override != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'COOKIES_override'" );
             goto error_exit;
         }

        _python_par_COOKIES_override = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_META_override != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "build_request_repr() got multiple values for keyword argument 'META_override'" );
             goto error_exit;
         }

        _python_par_META_override = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_path_override == NULL )
    {
        _python_par_path_override = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_path_override );
    }
    if ( _python_par_GET_override == NULL )
    {
        _python_par_GET_override = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_GET_override );
    }
    if ( _python_par_POST_override == NULL )
    {
        _python_par_POST_override = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_POST_override );
    }
    if ( _python_par_COOKIES_override == NULL )
    {
        _python_par_COOKIES_override = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_COOKIES_override );
    }
    if ( _python_par_META_override == NULL )
    {
        _python_par_META_override = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 4 ) );
        assertObject( _python_par_META_override );
    }


    return impl_function_4_build_request_repr_of_module_django__http__request( self, _python_par_request, _python_par_path_override, _python_par_GET_override, _python_par_POST_override, _python_par_COOKIES_override, _python_par_META_override );

error_exit:;

    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_path_override );
    Py_XDECREF( _python_par_GET_override );
    Py_XDECREF( _python_par_POST_override );
    Py_XDECREF( _python_par_COOKIES_override );
    Py_XDECREF( _python_par_META_override );

    return NULL;
}

static PyObject *dparse_function_4_build_request_repr_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_4_build_request_repr_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_build_request_repr_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_bytes_to_text_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_s, PyObject *_python_par_encoding )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );
    PyObjectLocalParameterVariableNoDel _python_var_encoding( _python_str_plain_encoding, _python_par_encoding );

    // Actual function code.
    static PyFrameObject *frame_function_5_bytes_to_text_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_5_bytes_to_text_of_module_django__http__request ) )
    {
        if ( frame_function_5_bytes_to_text_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_bytes_to_text_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_5_bytes_to_text_of_module_django__http__request );
        }

        frame_function_5_bytes_to_text_of_module_django__http__request = MAKE_FRAME( _codeobj_66e3786c8c346e11bc42c1a8ea1b34b6, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_5_bytes_to_text_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_5_bytes_to_text_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 459 );
        if ( BUILTIN_ISINSTANCE_BOOL( _python_var_s.asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) )
        {
            frame_guard.setLineNumber( 460 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call2;
                return ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_six.asObject0(), _python_str_plain_text_type ) ), call2.assign( _python_var_s.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_encoding.asObject(), _python_unicode_plain_replace ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 462 );
            return _python_var_s.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_encoding.updateLocalsDict( _python_var_s.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5_bytes_to_text_of_module_django__http__request )
        {
           Py_DECREF( frame_function_5_bytes_to_text_of_module_django__http__request );
           frame_function_5_bytes_to_text_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_bytes_to_text_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_s = NULL;
    PyObject *_python_par_encoding = NULL;
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
                PyErr_Format( PyExc_TypeError, "bytes_to_text() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "bytes_to_text() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_encoding == key )
            {
                if (unlikely( _python_par_encoding ))
                {
                    PyErr_Format( PyExc_TypeError, "bytes_to_text() got multiple values for keyword argument 'encoding'" );
                    goto error_exit;
                }

                _python_par_encoding = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_s, key ) )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "bytes_to_text() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_encoding, key ) )
            {
                if (unlikely( _python_par_encoding ))
                {
                    PyErr_Format( PyExc_TypeError, "bytes_to_text() got multiple values for keyword argument 'encoding'" );
                    goto error_exit;
                }

                _python_par_encoding = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "bytes_to_text() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "bytes_to_text() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "bytes_to_text() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "bytes_to_text() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "bytes_to_text() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "bytes_to_text() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "bytes_to_text() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "bytes_to_text() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "bytes_to_text() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "bytes_to_text() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "bytes_to_text() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "bytes_to_text() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "bytes_to_text() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "bytes_to_text() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_encoding != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "bytes_to_text() got multiple values for keyword argument 'encoding'" );
             goto error_exit;
         }

        _python_par_encoding = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5_bytes_to_text_of_module_django__http__request( self, _python_par_s, _python_par_encoding );

error_exit:;

    Py_XDECREF( _python_par_s );
    Py_XDECREF( _python_par_encoding );

    return NULL;
}

static PyObject *dparse_function_5_bytes_to_text_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_bytes_to_text_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_bytes_to_text_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_split_domain_port_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_host )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_host( _python_str_plain_host, _python_par_host );
    PyObjectLocalVariable _python_var_bits( _python_str_plain_bits );

    // Actual function code.
    static PyFrameObject *frame_function_6_split_domain_port_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_6_split_domain_port_of_module_django__http__request ) )
    {
        if ( frame_function_6_split_domain_port_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_split_domain_port_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_6_split_domain_port_of_module_django__http__request );
        }

        frame_function_6_split_domain_port_of_module_django__http__request = MAKE_FRAME( _codeobj_aeda4508cb9f449fea5b81e45f6f5faf, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_6_split_domain_port_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_6_split_domain_port_of_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 472 );
        _python_var_host.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_host.asObject(), _python_str_plain_lower ) ).asObject() ) );
        frame_guard.setLineNumber( 474 );
        {
            PyObjectTempKeeper1 call1;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_host_validation_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_host.asObject() ) ) ).asObject() ) )) )
        {
            return INCREASE_REFCOUNT( _python_tuple_unicode_empty_unicode_empty_tuple );
        }
        }
        frame_guard.setLineNumber( 477 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_host.asObject(), _python_int_neg_1, -1 ) ).asObject(), _python_unicode_chr_93 ) )
        {
            frame_guard.setLineNumber( 479 );
            return MAKE_TUPLE2( _python_var_host.asObject(), _python_unicode_empty );
        }
        frame_guard.setLineNumber( 480 );
        _python_var_bits.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_host.asObject(), _python_str_plain_rsplit ) ).asObject(), _python_unicode_chr_58, _python_int_pos_1 ) );
        frame_guard.setLineNumber( 481 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( _python_var_bits.asObject() ) ).asObject(), _python_int_pos_2 ) )
        {
            frame_guard.setLineNumber( 482 );
            return TO_TUPLE( _python_var_bits.asObject() );
        }
        frame_guard.setLineNumber( 483 );
        return MAKE_TUPLE2( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_bits.asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_empty );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_host.updateLocalsDict( _python_var_bits.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_6_split_domain_port_of_module_django__http__request )
        {
           Py_DECREF( frame_function_6_split_domain_port_of_module_django__http__request );
           frame_function_6_split_domain_port_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_split_domain_port_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_host = NULL;
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
                PyErr_Format( PyExc_TypeError, "split_domain_port() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_host == key )
            {
                if (unlikely( _python_par_host ))
                {
                    PyErr_Format( PyExc_TypeError, "split_domain_port() got multiple values for keyword argument 'host'" );
                    goto error_exit;
                }

                _python_par_host = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_host, key ) )
            {
                if (unlikely( _python_par_host ))
                {
                    PyErr_Format( PyExc_TypeError, "split_domain_port() got multiple values for keyword argument 'host'" );
                    goto error_exit;
                }

                _python_par_host = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "split_domain_port() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "split_domain_port() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "split_domain_port() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "split_domain_port() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "split_domain_port() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "split_domain_port() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "split_domain_port() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "split_domain_port() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "split_domain_port() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "split_domain_port() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "split_domain_port() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "split_domain_port() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "split_domain_port() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_host != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "split_domain_port() got multiple values for keyword argument 'host'" );
             goto error_exit;
         }

        _python_par_host = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_split_domain_port_of_module_django__http__request( self, _python_par_host );

error_exit:;

    Py_XDECREF( _python_par_host );

    return NULL;
}

static PyObject *dparse_function_6_split_domain_port_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_split_domain_port_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_split_domain_port_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_validate_host_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject *_python_par_host, PyObject *_python_par_allowed_hosts )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_host( _python_str_plain_host, _python_par_host );
    PyObjectLocalParameterVariableNoDel _python_var_allowed_hosts( _python_str_plain_allowed_hosts, _python_par_allowed_hosts );
    PyObjectLocalVariable _python_var_pattern( _python_str_plain_pattern );
    PyObjectLocalVariable _python_var_match( _python_str_plain_match );

    // Actual function code.
    static PyFrameObject *frame_function_7_validate_host_of_module_django__http__request = NULL;

    if ( isFrameUnusable( frame_function_7_validate_host_of_module_django__http__request ) )
    {
        if ( frame_function_7_validate_host_of_module_django__http__request )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_validate_host_of_module_django__http__request" );
#endif
            Py_DECREF( frame_function_7_validate_host_of_module_django__http__request );
        }

        frame_function_7_validate_host_of_module_django__http__request = MAKE_FRAME( _codeobj_9776244b46d61bbcfc0227a6f8824e01, _module_django__http__request );
    }

    FrameGuard frame_guard( frame_function_7_validate_host_of_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_function_7_validate_host_of_module_django__http__request ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 502 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_allowed_hosts.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 502 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_pattern.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 503 );
                _python_var_pattern.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_lower ) ).asObject() ) );
                frame_guard.setLineNumber( 504 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 cmp3;
                    PyObjectTempKeeper0 cmp5;
                    PyObjectTempKeeper1 keeper_0;
                    PyObjectTempKeeper1 keeper_1;
                    PyObjectTempKeeper1 keeper_2;
                    PyObjectTempKeeper1 keeper_3;
                    _python_var_match.assign1( ( CHECK_IF_TRUE( keeper_3.assign( RICH_COMPARE_EQ( _python_var_pattern.asObject(), _python_unicode_chr_42 ) ) ) ? keeper_3.asObject() : ( CHECK_IF_TRUE( keeper_2.assign( ( CHECK_IF_TRUE( keeper_1.assign( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_pattern.asObject(), _python_str_plain_startswith ) ).asObject(), _python_unicode_dot ) ) ) ? ( CHECK_IF_TRUE( keeper_0.assign( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_host.asObject(), _python_str_plain_endswith ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_pattern.asObject() ) ) ) ) ? keeper_0.asObject() : ( cmp3.assign( _python_var_host.asObject() ), RICH_COMPARE_EQ( cmp3.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_pattern.asObject(), 1, PY_SSIZE_T_MAX ) ).asObject() ) ) ) : keeper_1.asObject() ) ) ) ? keeper_2.asObject() : ( cmp5.assign( _python_var_pattern.asObject() ), RICH_COMPARE_EQ( cmp5.asObject0(), _python_var_host.asObject() ) ) ) ) );
                }
                frame_guard.setLineNumber( 511 );
                if ( CHECK_IF_TRUE( _python_var_match.asObject() ) )
                {
                    return INCREASE_REFCOUNT( Py_True );
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
        frame_guard.getFrame0()->f_locals = _python_var_allowed_hosts.updateLocalsDict( _python_var_host.updateLocalsDict( _python_var_match.updateLocalsDict( _python_var_pattern.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_validate_host_of_module_django__http__request )
        {
           Py_DECREF( frame_function_7_validate_host_of_module_django__http__request );
           frame_function_7_validate_host_of_module_django__http__request = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_False );
}
static PyObject *fparse_function_7_validate_host_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_host = NULL;
    PyObject *_python_par_allowed_hosts = NULL;
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
                PyErr_Format( PyExc_TypeError, "validate_host() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_host == key )
            {
                if (unlikely( _python_par_host ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_host() got multiple values for keyword argument 'host'" );
                    goto error_exit;
                }

                _python_par_host = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_allowed_hosts == key )
            {
                if (unlikely( _python_par_allowed_hosts ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_host() got multiple values for keyword argument 'allowed_hosts'" );
                    goto error_exit;
                }

                _python_par_allowed_hosts = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_host, key ) )
            {
                if (unlikely( _python_par_host ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_host() got multiple values for keyword argument 'host'" );
                    goto error_exit;
                }

                _python_par_host = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_allowed_hosts, key ) )
            {
                if (unlikely( _python_par_allowed_hosts ))
                {
                    PyErr_Format( PyExc_TypeError, "validate_host() got multiple values for keyword argument 'allowed_hosts'" );
                    goto error_exit;
                }

                _python_par_allowed_hosts = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "validate_host() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "validate_host() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "validate_host() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "validate_host() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "validate_host() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "validate_host() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "validate_host() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "validate_host() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "validate_host() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "validate_host() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "validate_host() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "validate_host() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "validate_host() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_host != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "validate_host() got multiple values for keyword argument 'host'" );
             goto error_exit;
         }

        _python_par_host = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_allowed_hosts != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "validate_host() got multiple values for keyword argument 'allowed_hosts'" );
             goto error_exit;
         }

        _python_par_allowed_hosts = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_7_validate_host_of_module_django__http__request( self, _python_par_host, _python_par_allowed_hosts );

error_exit:;

    Py_XDECREF( _python_par_host );
    Py_XDECREF( _python_par_allowed_hosts );

    return NULL;
}

static PyObject *dparse_function_7_validate_host_of_module_django__http__request( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_7_validate_host_of_module_django__http__request( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_validate_host_of_module_django__http__request( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_10_encoding_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_encoding,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_05dd70e884c1c06cd3eb40705f94f6bc,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_10_setlistdefault_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain_setlistdefault,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b7bfec918428d443f3e4bbd4c2150ae4,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_11_appendlist_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain_appendlist,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_97ed5365e0deb4b96ae0b1908e854e5a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_11_encoding_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_encoding,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b1133569acca0ceb90ee57786d3eefa7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        _python_unicode_digest_5acc886d79352607d068e01960bec1b7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_12__initialize_handlers_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain__initialize_handlers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_99d61c173a35754493a96b516c18331e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_pop_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_pop_of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_12_pop_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain_pop,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_61e05e3202b2d7394c6713c46beda079,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_13_popitem_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain_popitem,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4bc5f0fd97bd8d240cd81dba0caca0c1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_13_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_upload_handlers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_16e78c765ca006e6ab32adb8b94682a8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_clear_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_clear_of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_14_clear_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain_clear,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_664708e8c6eaafda2422519e45c23159,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_14_upload_handlers_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_upload_handlers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_45cc7a422879b2e751e475bd094071f0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_15_parse_file_upload_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_parse_file_upload,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4ba5ab0f897bfa72bf5345154f7344df,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        _python_unicode_digest_4174024779ca96c10a09c35c4ce1382f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_15_setdefault_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain_setdefault,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6adaa9003ac649eae77cb48e847a8d2b,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_body_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_body_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_16_body_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_body,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d819064c59c08d866667b22236110415,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_copy_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_copy_of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_16_copy_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain_copy,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c7cd779672b44cbd097f3c9acc5a2334,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        _python_unicode_digest_373370906ac1fd990808bc5004ae8f60
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_17__mark_post_parse_error_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain__mark_post_parse_error,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9fb8812c8211198bb4428258de54c85a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain_urlencode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6bf7e5d75492481e41f2ee40fe3d7186,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        _python_unicode_digest_838c219995a6ff83072b60b924f5ecce
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_18__load_post_and_files_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain__load_post_and_files,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6349eab074c4579a2dc679d77f1686d4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        _python_unicode_digest_692c85fcd86516edc8cf7ce14c182cbe
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_19_read_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_19_read_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_19_read_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b92669ee38e8a424d32ddf998aab2ea7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_1___init___of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d0a4bfa96b923fdd20548f080e63af7c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_1___init___of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1175d912c40c0a227655917bae20dbc1,
        INCREASE_REFCOUNT( _python_tuple_false_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_20_readline_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_readline,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_458439ada6d4612d29bdf4b72d679016,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    return Nuitka_Function_New(
        fparse_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_21_xreadlines_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_xreadlines,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5723042e9304dff99672378906d812cf,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );
}



static PyObject *MAKE_FUNCTION_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_22_readlines_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_readlines,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_20636bbe7b662811b0f2e10cce6a10ef,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_2___repr___of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_192a3a87c23608a928b639925994d01d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_2_encoding_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain_encoding,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3cb0cac76058ec6ffc70128bc6fa3baa,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_3_encoding_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain_encoding,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8fbbf2b3a53df242612cb3cfde8caee5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_3_get_host_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_get_host,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d0dce22e4e865c2642af1068639baba5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        _python_unicode_digest_eed67019492211651b893ac2d6518252
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_4__assert_mutable_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain__assert_mutable,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_dd75dcaac69f13f0ebe0eed9e5deeac7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_build_request_repr_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_build_request_repr_of_module_django__http__request,
        dparse_function_4_build_request_repr_of_module_django__http__request,
        _python_str_plain_build_request_repr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3d52078780efac86881dc982957db45c,
        INCREASE_REFCOUNT( _python_tuple_none_none_none_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        _python_unicode_digest_f6992edf0f1ede5199e8e778ca862835
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_4_get_full_path_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_get_full_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e9d3ea7cb1d4f17f66993f3889e7b96b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_5___setitem___of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain___setitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0647957e378d9a2e44e200551001b4bb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_bytes_to_text_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_bytes_to_text_of_module_django__http__request,
        dparse_function_5_bytes_to_text_of_module_django__http__request,
        _python_str_plain_bytes_to_text,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_66e3786c8c346e11bc42c1a8ea1b34b6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        _python_unicode_digest_5fdbf832e25e814207e404fbeb0208a2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_5_get_signed_cookie_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_get_signed_cookie,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0817b7e06463a1c4b8de13083ce38064,
        defaults,
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        _python_unicode_digest_953a9a04719064fa1fcba7a58ab3a82a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_6___delitem___of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain___delitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_537c2fd57e763e6e2d9dbddf2e32ae12,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_6_build_absolute_uri_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_build_absolute_uri,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a076c8e386821d2c686a1eaaf9c6954c,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        _python_unicode_digest_1a1f61b123ef415a9d8dccfe1b7dc22e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_split_domain_port_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_split_domain_port_of_module_django__http__request,
        dparse_function_6_split_domain_port_of_module_django__http__request,
        _python_str_plain_split_domain_port,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_aeda4508cb9f449fea5b81e45f6f5faf,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        _python_unicode_digest_12fb9079464f59f48637b332fef69659
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7___copy___of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7___copy___of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_7___copy___of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain___copy__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1bed2f6b1feffb947ae2a1789a3622fd,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_7__is_secure_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain__is_secure,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bbe3d8e9fa6f8e3fe7be1a3c740d2503,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_validate_host_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_validate_host_of_module_django__http__request,
        dparse_function_7_validate_host_of_module_django__http__request,
        _python_str_plain_validate_host,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9776244b46d61bbcfc0227a6f8824e01,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        _python_unicode_digest_d60c830366ce33646227e472b9138d05
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_8___deepcopy___of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain___deepcopy__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ad4f850e4b32b91666c24308996b3ecb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_8_is_secure_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_is_secure,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9fc507970d08ac2413d88491532c29ed,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request,
        dparse_function_9_is_ajax_of_class_2_HttpRequest_of_module_django__http__request,
        _python_str_plain_is_ajax,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_035398c5bdcca80ff0650b51d12c39de,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request,
        dparse_function_9_setlist_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_plain_setlist,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_951fb435a3319eee937d8c95583a294d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request( PyObjectSharedLocalVariable &python_closure_safe )
{
    struct _context_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request_t *_python_context = new _context_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_safe.shareWith( python_closure_safe );

    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request,
        dparse_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9ce84451494f07eaec2e9902d02bdb33,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None,
        _python_context,
        _context_lambda_1_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request,
        dparse_lambda_2_lambda_of_function_17_urlencode_of_class_3_QueryDict_of_module_django__http__request,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1d3e162c76be6fdcb4f882390e46e8e1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__request,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.http.request",   /* m_name */
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

MOD_INIT_DECL( django__http__request )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__http__request );
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

    // puts( "in initdjango__http__request" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__http__request = Py_InitModule4(
        "django.http.request",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__http__request = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__http__request = (PyDictObject *)((PyModuleObject *)_module_django__http__request)->md_dict;

    assertObject( _module_django__http__request );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_ccb3912ba37742f334666d2e1ef8d0fd, _module_django__http__request );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__http__request );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__http__request != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_a000bc1b611369241cf4cba3e2c79baa );
    PyFrameObject *frame_module_django__http__request = MAKE_FRAME( _codeobj_6986dc101a9994c2ed96daca48e91307, _module_django__http__request );

    FrameGuard frame_guard( frame_module_django__http__request );
    try
    {
        assert( Py_REFCNT( frame_module_django__http__request ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_absolute_import, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_absolute_import_str_plain_unicode_literals_list, _python_int_0 ) ).asObject(), _python_str_plain_absolute_import ) );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_absolute_import_str_plain_unicode_literals_list, _python_int_0 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_copy, IMPORT_MODULE( _python_str_plain_copy, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, Py_None, _python_int_0 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, Py_None, _python_int_0 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_re, IMPORT_MODULE( _python_str_plain_re, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, Py_None, _python_int_0 ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, Py_None, _python_int_0 ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_BytesIO, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_io, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_BytesIO_list, _python_int_0 ) ).asObject(), _python_str_plain_BytesIO ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_pformat, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_pprint, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_pformat_list, _python_int_0 ) ).asObject(), _python_str_plain_pformat ) );
        frame_guard.setLineNumber( 9 );
        try
        {
            frame_guard.setLineNumber( 10 );
            UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_parse_qsl, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_16d628fa9b79bd53ede39389589a2bbf, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_5893fc5919252b16b29a12fa30762c7c_list, _python_int_0 ) ).asObject(), _python_str_plain_parse_qsl ) );
            UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_urlencode, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_16d628fa9b79bd53ede39389589a2bbf, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_5893fc5919252b16b29a12fa30762c7c_list, _python_int_0 ) ).asObject(), _python_str_plain_urlencode ) );
            UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_quote, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_16d628fa9b79bd53ede39389589a2bbf, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_5893fc5919252b16b29a12fa30762c7c_list, _python_int_0 ) ).asObject(), _python_str_plain_quote ) );
            UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_urljoin, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_16d628fa9b79bd53ede39389589a2bbf, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_5893fc5919252b16b29a12fa30762c7c_list, _python_int_0 ) ).asObject(), _python_str_plain_urljoin ) );
        }
        catch ( PythonException &_exception )
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
                frame_guard.setLineNumber( 12 );
                UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_urlencode, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_urllib, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_urlencode_str_plain_quote_list, _python_int_0 ) ).asObject(), _python_str_plain_urlencode ) );
                UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_quote, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_urllib, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_urlencode_str_plain_quote_list, _python_int_0 ) ).asObject(), _python_str_plain_quote ) );
                frame_guard.setLineNumber( 13 );
                UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_parse_qsl, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_urlparse, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_parse_qsl_str_plain_urljoin_list, _python_int_0 ) ).asObject(), _python_str_plain_parse_qsl ) );
                UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_urljoin, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_urlparse, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_parse_qsl_str_plain_urljoin_list, _python_int_0 ) ).asObject(), _python_str_plain_urljoin ) );
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
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_settings_list, _python_int_0 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_signing, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7fde38a6b8ad78c8ebb1bdff593c9e48, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_signing_list, _python_int_0 ) ).asObject(), _python_str_plain_signing ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_DisallowedHost, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_DisallowedHost_str_plain_ImproperlyConfigured_list, _python_int_0 ) ).asObject(), _python_str_plain_DisallowedHost ) );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_ImproperlyConfigured, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_DisallowedHost_str_plain_ImproperlyConfigured_list, _python_int_0 ) ).asObject(), _python_str_plain_ImproperlyConfigured ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_uploadhandler, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1c708a450f106db73723c5b9289df76d, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_uploadhandler_list, _python_int_0 ) ).asObject(), _python_str_plain_uploadhandler ) );
        frame_guard.setLineNumber( 19 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_MultiPartParser, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_9496dd8cdd262335d383c92a1544136a, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_MultiPartParser_list, _python_int_0 ) ).asObject(), _python_str_plain_MultiPartParser ) );
        frame_guard.setLineNumber( 20 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_six_list, _python_int_0 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 21 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_MultiValueDict, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_36fff8b06be9a51fbe6af4a1029911c0, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_MultiValueDict_str_plain_ImmutableList_list, _python_int_0 ) ).asObject(), _python_str_plain_MultiValueDict ) );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_ImmutableList, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_36fff8b06be9a51fbe6af4a1029911c0, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_str_plain_MultiValueDict_str_plain_ImmutableList_list, _python_int_0 ) ).asObject(), _python_str_plain_ImmutableList ) );
        frame_guard.setLineNumber( 22 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_force_bytes, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_67c1501112a9627a3dff78cf8e7b2ed4_list, _python_int_0 ) ).asObject(), _python_str_plain_force_bytes ) );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_67c1501112a9627a3dff78cf8e7b2ed4_list, _python_int_0 ) ).asObject(), _python_str_plain_force_text ) );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_force_str, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_67c1501112a9627a3dff78cf8e7b2ed4_list, _python_int_0 ) ).asObject(), _python_str_plain_force_str ) );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_iri_to_uri, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__http__request)->md_dict, ((PyModuleObject *)_module_django__http__request)->md_dict, _python_list_67c1501112a9627a3dff78cf8e7b2ed4_list, _python_int_0 ) ).asObject(), _python_str_plain_iri_to_uri ) );
        frame_guard.setLineNumber( 25 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_RAISE_ERROR, CALL_FUNCTION_NO_ARGS( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
        frame_guard.setLineNumber( 26 );
        {
            PyObjectTempKeeper1 call1;
            UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_absolute_http_url_re, ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__request_re.asObject0(), _python_str_plain_compile ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_unicode_digest_8f5aa0cf06af5581d858f4e86769b297, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_re.asObject0(), _python_str_plain_I ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 27 );
        UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_host_validation_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__request_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_55b43b0734b93a70f53154ea09c92e2b ) );
        {
            frame_guard.setLineNumber( 30 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_IOError ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_UnreadablePostError_of_module_django__http__request(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__http__request___metaclass__.isInitialized( false ) ? _mvar_django__http__request___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call4;
                PyObjectTempKeeper0 call6;
                _tmp_python_tmp_class = ( call4.assign( _python_tmp_metaclass.asObject() ), call6.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_str_plain_UnreadablePostError, call6.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_UnreadablePostError, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 34 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_HttpRequest_of_module_django__http__request(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__http__request___metaclass__.isInitialized( false ) ? _mvar_django__http__request___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call10;
                PyObjectTempKeeper0 call8;
                _tmp_python_tmp_class = ( call8.assign( _python_tmp_metaclass.asObject() ), call10.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_str_plain_HttpRequest, call10.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_HttpRequest, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 266 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__http__request_MultiValueDict.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_QueryDict_of_module_django__http__request(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__http__request___metaclass__.isInitialized( false ) ? _mvar_django__http__request___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call12;
                PyObjectTempKeeper0 call14;
                _tmp_python_tmp_class = ( call12.assign( _python_tmp_metaclass.asObject() ), call14.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_str_plain_QueryDict, call14.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_QueryDict, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__http__request)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_build_request_repr, MAKE_FUNCTION_function_4_build_request_repr_of_module_django__http__request(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_bytes_to_text, MAKE_FUNCTION_function_5_bytes_to_text_of_module_django__http__request(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_split_domain_port, MAKE_FUNCTION_function_6_split_domain_port_of_module_django__http__request(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__http__request, (Nuitka_StringObject *)_python_str_plain_validate_host, MAKE_FUNCTION_function_7_validate_host_of_module_django__http__request(  ) );

   return MOD_RETURN_VALUE( _module_django__http__request );
}
