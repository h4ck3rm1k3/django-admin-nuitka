// Generated code for Python source for module 'django.http.multipartparser'
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

// The _module_django__http__multipartparser is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__http__multipartparser;
PyDictObject *_moduledict_django__http__multipartparser;

// The module level variables.
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_BoundaryIter( &_module_django__http__multipartparser, &_python_str_plain_BoundaryIter );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_ChunkIter( &_module_django__http__multipartparser, &_python_str_plain_ChunkIter );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_FIELD( &_module_django__http__multipartparser, &_python_str_plain_FIELD );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_FILE( &_module_django__http__multipartparser, &_python_str_plain_FILE );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_InputStreamExhausted( &_module_django__http__multipartparser, &_python_str_plain_InputStreamExhausted );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_InterBoundaryIter( &_module_django__http__multipartparser, &_python_str_plain_InterBoundaryIter );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_LazyStream( &_module_django__http__multipartparser, &_python_str_plain_LazyStream );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_MultiPartParserError( &_module_django__http__multipartparser, &_python_str_plain_MultiPartParserError );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_MultiValueDict( &_module_django__http__multipartparser, &_python_str_plain_MultiValueDict );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_Parser( &_module_django__http__multipartparser, &_python_str_plain_Parser );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_RAW( &_module_django__http__multipartparser, &_python_str_plain_RAW );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_SkipFile( &_module_django__http__multipartparser, &_python_str_plain_SkipFile );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_StopFutureHandlers( &_module_django__http__multipartparser, &_python_str_plain_StopFutureHandlers );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_StopUpload( &_module_django__http__multipartparser, &_python_str_plain_StopUpload );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_SuspiciousMultipartForm( &_module_django__http__multipartparser, &_python_str_plain_SuspiciousMultipartForm );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser___metaclass__( &_module_django__http__multipartparser, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser__parse_header_params( &_module_django__http__multipartparser, &_python_str_plain__parse_header_params );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_base64( &_module_django__http__multipartparser, &_python_str_plain_base64 );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_cgi( &_module_django__http__multipartparser, &_python_str_plain_cgi );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_exhaust( &_module_django__http__multipartparser, &_python_str_plain_exhaust );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_force_text( &_module_django__http__multipartparser, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_parse_boundary_stream( &_module_django__http__multipartparser, &_python_str_plain_parse_boundary_stream );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_parse_header( &_module_django__http__multipartparser, &_python_str_plain_parse_header );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_settings( &_module_django__http__multipartparser, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_six( &_module_django__http__multipartparser, &_python_str_plain_six );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_sys( &_module_django__http__multipartparser, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__http__multipartparser _mvar_django__http__multipartparser_unescape_entities( &_module_django__http__multipartparser, &_python_str_plain_unescape_entities );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_MultiPartParserError_of_module_django__http__multipartparser(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_InputStreamExhausted_of_module_django__http__multipartparser(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_MultiPartParser_of_module_django__http__multipartparser(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_x );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_LazyStream_of_module_django__http__multipartparser(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_current_number, PyObjectLocalParameterVariableNoDel &python_closure_num_bytes );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_ChunkIter_of_module_django__http__multipartparser(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_InterBoundaryIter_of_module_django__http__multipartparser(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_BoundaryIter_of_module_django__http__multipartparser(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_10_Parser_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_11_parse_header_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_12__parse_header_params_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( PyObjectSharedLocalVariable &python_closure_self, PyObjectSharedLocalVariable &python_closure_size );


static PyObject *MAKE_FUNCTION_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_8_exhaust_of_module_django__http__multipartparser(  );


static PyObject *MAKE_FUNCTION_function_9_parse_boundary_stream_of_module_django__http__multipartparser(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_MultiPartParserError_of_module_django__http__multipartparser(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_multipartparser );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_InputStreamExhausted_of_module_django__http__multipartparser(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_multipartparser );
    _python_var___doc__.assign0( _python_unicode_digest_ebdb3e0d70d8ebffd977831509ca9274 );
    return _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_MultiPartParser_of_module_django__http__multipartparser(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_parse( _python_str_plain_parse );
    PyObjectLocalVariable _python_var_handle_file_complete( _python_str_plain_handle_file_complete );
    PyObjectLocalVariable _python_var_IE_sanitize( _python_str_plain_IE_sanitize );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_multipartparser );
    _python_var___doc__.assign0( _python_unicode_digest_c8b087235982e3bb5d6e1c8487d50a8a );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser(  ) );
    _python_var_parse.assign1( MAKE_FUNCTION_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser(  ) );
    _python_var_handle_file_complete.assign1( MAKE_FUNCTION_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser(  ) );
    _python_var_IE_sanitize.assign1( MAKE_FUNCTION_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser(  ) );
    return _python_var_IE_sanitize.updateLocalsDict( _python_var_handle_file_complete.updateLocalsDict( _python_var_parse.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_META, PyObject *_python_par_input_data, PyObject *_python_par_upload_handlers, PyObject *_python_par_encoding )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_META( _python_str_plain_META, _python_par_META );
    PyObjectLocalParameterVariableNoDel _python_var_input_data( _python_str_plain_input_data, _python_par_input_data );
    PyObjectLocalParameterVariableNoDel _python_var_upload_handlers( _python_str_plain_upload_handlers, _python_par_upload_handlers );
    PyObjectLocalParameterVariableNoDel _python_var_encoding( _python_str_plain_encoding, _python_par_encoding );
    PyObjectLocalVariable _python_var_content_type( _python_str_plain_content_type );
    PyObjectLocalVariable _python_var_ctypes( _python_str_plain_ctypes );
    PyObjectLocalVariable _python_var_opts( _python_str_plain_opts );
    PyObjectLocalVariable _python_var_boundary( _python_str_plain_boundary );
    PyObjectLocalVariable _python_var_content_length( _python_str_plain_content_length );
    PyObjectLocalVariable _python_var_possible_sizes( _python_str_plain_possible_sizes );
    PyObjectLocalVariable _python_var_x( _python_str_plain_x );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser );
        }

        frame_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_c9ba2ba5d2cb2878e2ffcda1f801bc9f, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 62 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_content_type.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_META.asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_unicode_plain_HTTP_CONTENT_TYPE, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_META.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_CONTENT_TYPE, _python_unicode_empty ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 63 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_content_type.asObject(), _python_str_plain_startswith ) ).asObject(), _python_unicode_digest_e0df0da434a5d14b761680b196b75dcf ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 64 );
            {
                PyObjectTempKeeper0 call4;
                {
                    PyObjectTemporary tmp_exception_type( ( call4.assign( _mvar_django__http__multipartparser_MultiPartParserError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_d9103879bebf0d2dae4c513e406af531, _python_var_content_type.asObject() ) ).asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        {
            frame_guard.setLineNumber( 67 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper0 call6;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call6.assign( _mvar_django__http__multipartparser_parse_header.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_content_type.asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_plain_ascii ) ).asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_ctypes.assign0( _python_tmp_element_1.asObject() );
            _python_var_opts.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 68 );
        _python_var_boundary.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_opts.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_boundary ) );
        frame_guard.setLineNumber( 69 );
        {
            PyObjectTempKeeper1 call10;
            if ( ( (!( CHECK_IF_TRUE( _python_var_boundary.asObject() ) )) || (!( CHECK_IF_TRUE( PyObjectTemporary( ( call10.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__multipartparser_cgi.asObject0(), _python_str_plain_valid_boundary ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_boundary.asObject() ) ) ).asObject() ) )) ) )
        {
            frame_guard.setLineNumber( 70 );
            {
                PyObjectTempKeeper0 call8;
                {
                    PyObjectTemporary tmp_exception_type( ( call8.assign( _mvar_django__http__multipartparser_MultiPartParserError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_aed2fbf00f97cadcd9a18b9838b3714d, _python_var_boundary.asObject() ) ).asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        }
        frame_guard.setLineNumber( 74 );
        try
        {
            frame_guard.setLineNumber( 75 );
            {
                PyObjectTempKeeper1 call12;
                _python_var_content_length.assign1( TO_INT( PyObjectTemporary( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_META.asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_unicode_plain_HTTP_CONTENT_LENGTH, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_META.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_CONTENT_LENGTH, _python_int_0 ) ).asObject() ) ) ).asObject() ) );
            }
        }
        catch ( PythonException &_exception )
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
                _python_var_content_length.assign0( _python_int_0 );
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
        frame_guard.setLineNumber( 79 );
        if ( RICH_COMPARE_BOOL_LT( _python_var_content_length.asObject(), _python_int_0 ) )
        {
            frame_guard.setLineNumber( 81 );
            {
                PyObjectTempKeeper0 call15;
                {
                    PyObjectTemporary tmp_exception_type( ( call15.assign( _mvar_django__http__multipartparser_MultiPartParserError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_db834d319e1f3f416d1f67997fa881f9, _python_var_content_length.asObject() ) ).asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        frame_guard.setLineNumber( 83 );
        {
            PyObjectTempKeeper0 isinstance17;
            if ( ( isinstance17.assign( _python_var_boundary.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance17.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__multipartparser_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 84 );
            _python_var_boundary.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_boundary.asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_plain_ascii ) );
        }
        }
        frame_guard.setLineNumber( 85 );
        {
                PyObject *tmp_identifier = _python_var_boundary.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__boundary );
        }
        frame_guard.setLineNumber( 86 );
        {
                PyObject *tmp_identifier = _python_var_input_data.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__input_data );
        }
        frame_guard.setLineNumber( 90 );
        _python_var_possible_sizes.assign1( impl_listcontr_1_of_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser( MAKE_ITERATOR( _python_var_upload_handlers.asObject() ), _python_var_x ) );
        frame_guard.setLineNumber( 91 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_min ), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( LIST_COPY( _python_list_int_pos_2147483644_list ) ).asObject(), _python_var_possible_sizes.asObject() ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__chunk_size );
        }
        frame_guard.setLineNumber( 93 );
        {
                PyObject *tmp_identifier = _python_var_META.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__meta );
        }
        frame_guard.setLineNumber( 94 );
        {
            PyObjectTempKeeper0 keeper_1;
            {
                PyObjectTemporary tmp_identifier( ( CHECK_IF_TRUE( keeper_1.assign( _python_var_encoding.asObject() ) ) ? INCREASE_REFCOUNT( keeper_1.asObject0() ) : LOOKUP_ATTRIBUTE( _mvar_django__http__multipartparser_settings.asObject0(), _python_str_plain_DEFAULT_CHARSET ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__encoding );
        }
        }
        frame_guard.setLineNumber( 95 );
        {
                PyObject *tmp_identifier = _python_var_content_length.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__content_length );
        }
        frame_guard.setLineNumber( 96 );
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
        frame_guard.getFrame0()->f_locals = _python_var_encoding.updateLocalsDict( _python_var_upload_handlers.updateLocalsDict( _python_var_input_data.updateLocalsDict( _python_var_META.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_x.updateLocalsDict( _python_var_possible_sizes.updateLocalsDict( _python_var_content_length.updateLocalsDict( _python_var_boundary.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_ctypes.updateLocalsDict( _python_var_content_type.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser );
           frame_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_META = NULL;
    PyObject *_python_par_input_data = NULL;
    PyObject *_python_par_upload_handlers = NULL;
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
            if ( found == false && _python_str_plain_META == key )
            {
                if (unlikely( _python_par_META ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'META'" );
                    goto error_exit;
                }

                _python_par_META = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_input_data == key )
            {
                if (unlikely( _python_par_input_data ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'input_data'" );
                    goto error_exit;
                }

                _python_par_input_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_upload_handlers == key )
            {
                if (unlikely( _python_par_upload_handlers ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'upload_handlers'" );
                    goto error_exit;
                }

                _python_par_upload_handlers = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_META, key ) )
            {
                if (unlikely( _python_par_META ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'META'" );
                    goto error_exit;
                }

                _python_par_META = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_input_data, key ) )
            {
                if (unlikely( _python_par_input_data ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'input_data'" );
                    goto error_exit;
                }

                _python_par_input_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_upload_handlers, key ) )
            {
                if (unlikely( _python_par_upload_handlers ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'upload_handlers'" );
                    goto error_exit;
                }

                _python_par_upload_handlers = value;

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
            if ( 5 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 4 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
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
                if ( 5 == 4 )
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
         if (unlikely( _python_par_META != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'META'" );
             goto error_exit;
         }

        _python_par_META = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_input_data != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'input_data'" );
             goto error_exit;
         }

        _python_par_input_data = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_upload_handlers != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'upload_handlers'" );
             goto error_exit;
         }

        _python_par_upload_handlers = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_encoding != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'encoding'" );
             goto error_exit;
         }

        _python_par_encoding = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_encoding == NULL )
    {
        _python_par_encoding = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_encoding );
    }


    return impl_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser( self, _python_par_self, _python_par_META, _python_par_input_data, _python_par_upload_handlers, _python_par_encoding );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_META );
    Py_XDECREF( _python_par_input_data );
    Py_XDECREF( _python_par_upload_handlers );
    Py_XDECREF( _python_par_encoding );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 90 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 90 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_x.assign0( _python_tmp_iter_value.asObject() );
                if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_x.asObject(), _python_str_plain_chunk_size ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 90 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_x.asObject(), _python_str_plain_chunk_size ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_QueryDict( _python_str_plain_QueryDict );
    PyObjectLocalVariable _python_var_encoding( _python_str_plain_encoding );
    PyObjectLocalVariable _python_var_handlers( _python_str_plain_handlers );
    PyObjectLocalVariable _python_var_handler( _python_str_plain_handler );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );
    PyObjectLocalVariable _python_var_stream( _python_str_plain_stream );
    PyObjectLocalVariable _python_var_old_field_name( _python_str_plain_old_field_name );
    PyObjectLocalVariable _python_var_counters( _python_str_plain_counters );
    PyObjectLocalVariable _python_var_item_type( _python_str_plain_item_type );
    PyObjectLocalVariable _python_var_meta_data( _python_str_plain_meta_data );
    PyObjectLocalVariable _python_var_field_stream( _python_str_plain_field_stream );
    PyObjectLocalVariable _python_var_disposition( _python_str_plain_disposition );
    PyObjectLocalVariable _python_var_field_name( _python_str_plain_field_name );
    PyObjectLocalVariable _python_var_transfer_encoding( _python_str_plain_transfer_encoding );
    PyObjectLocalVariable _python_var_raw_data( _python_str_plain_raw_data );
    PyObjectLocalVariable _python_var_data( _python_str_plain_data );
    PyObjectLocalVariable _python_var_file_name( _python_str_plain_file_name );
    PyObjectLocalVariable _python_var_content_type( _python_str_plain_content_type );
    PyObjectLocalVariable _python_var_charset( _python_str_plain_charset );
    PyObjectLocalVariable _python_var_content_length( _python_str_plain_content_length );
    PyObjectLocalVariable _python_var_chunk( _python_str_plain_chunk );
    PyObjectLocalVariable _python_var_over_bytes( _python_str_plain_over_bytes );
    PyObjectLocalVariable _python_var_over_chunk( _python_str_plain_over_chunk );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_msg( _python_str_plain_msg );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_chunk_length( _python_str_plain_chunk_length );
    PyObjectLocalVariable _python_var_retval( _python_str_plain_retval );

    // Actual function code.
    static PyFrameObject *frame_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser );
        }

        frame_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_d9da4e4cc72561032fe413b4666a9912, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 106 );
        _python_var_QueryDict.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_0086d976470a512ed29688abea23aec5, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, PyObjectTemporary( _python_var_self.updateLocalsDict( _python_var_retval.updateLocalsDict( _python_var_chunk_length.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_msg.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_over_chunk.updateLocalsDict( _python_var_over_bytes.updateLocalsDict( _python_var_chunk.updateLocalsDict( _python_var_content_length.updateLocalsDict( _python_var_charset.updateLocalsDict( _python_var_content_type.updateLocalsDict( _python_var_file_name.updateLocalsDict( _python_var_data.updateLocalsDict( _python_var_raw_data.updateLocalsDict( _python_var_transfer_encoding.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_disposition.updateLocalsDict( _python_var_field_stream.updateLocalsDict( _python_var_meta_data.updateLocalsDict( _python_var_item_type.updateLocalsDict( _python_var_counters.updateLocalsDict( _python_var_old_field_name.updateLocalsDict( _python_var_stream.updateLocalsDict( _python_var_result.updateLocalsDict( _python_var_handler.updateLocalsDict( _python_var_handlers.updateLocalsDict( _python_var_encoding.updateLocalsDict( _python_var_QueryDict.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_QueryDict_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_QueryDict ) );
        frame_guard.setLineNumber( 108 );
        _python_var_encoding.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__encoding ) );
        frame_guard.setLineNumber( 109 );
        _python_var_handlers.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__upload_handlers ) );
        frame_guard.setLineNumber( 113 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__content_length ) ).asObject(), _python_int_0 ) )
        {
            frame_guard.setLineNumber( 114 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper1 make_tuple4;
                return ( make_tuple4.assign( ( call1.assign( _python_var_QueryDict.asObject() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_unicode_empty_tuple, PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__encoding ) ).asObject(), _python_str_plain_encoding ) ).asObject() ) ) ), MAKE_TUPLE2( make_tuple4.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__http__multipartparser_MultiValueDict.asObject0() ) ).asObject() ) );
            }
        }
        {
            frame_guard.setLineNumber( 118 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_handlers.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 118 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_handler.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 119 );
                {
                    PyObjectTempKeeper1 call10;
                    PyObjectTempKeeper1 call6;
                    PyObjectTempKeeper1 call7;
                    PyObjectTempKeeper1 call8;
                    PyObjectTempKeeper1 call9;
                    _python_var_result.assign1( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_handler.asObject(), _python_str_plain_handle_raw_input ) ), call7.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__input_data ) ), call8.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__meta ) ), call9.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__content_length ) ), call10.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__boundary ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), call8.asObject0(), call9.asObject0(), call10.asObject0(), _python_var_encoding.asObject() ) ) );
                }
                frame_guard.setLineNumber( 125 );
                if ( ( _python_var_result.asObject() != Py_None ) )
                {
                    frame_guard.setLineNumber( 126 );
                    {
                        PyObjectTempKeeper1 make_tuple12;
                        return ( make_tuple12.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_result.asObject(), _python_int_0, 0 ) ), MAKE_TUPLE2( make_tuple12.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_result.asObject(), _python_int_pos_1, 1 ) ).asObject() ) );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 129 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION( _python_var_QueryDict.asObject(), _python_tuple_unicode_empty_tuple, PyObjectTemporary( PyDict_Copy( _python_dict_1b6bb2e0084d360bb48bd6e1e7798d05 ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__post );
        }
        frame_guard.setLineNumber( 130 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( _mvar_django__http__multipartparser_MultiValueDict.asObject0() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__files );
        }
        frame_guard.setLineNumber( 133 );
        {
            PyObjectTempKeeper0 call14;
            PyObjectTempKeeper1 call15;
            PyObjectTempKeeper0 call17;
            _python_var_stream.assign1( ( call17.assign( _mvar_django__http__multipartparser_LazyStream.asObject0() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), PyObjectTemporary( ( call14.assign( _mvar_django__http__multipartparser_ChunkIter.asObject0() ), call15.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__input_data ) ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), call15.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__chunk_size ) ).asObject() ) ) ).asObject() ) ) );
        }
        _python_var_old_field_name.assign0( Py_None );
        frame_guard.setLineNumber( 137 );
        _python_var_counters.assign1( BINARY_OPERATION_MUL( PyObjectTemporary( LIST_COPY( _python_list_int_0_list ) ).asObject(), PyObjectTemporary( BUILTIN_LEN( _python_var_handlers.asObject() ) ).asObject() ) );
        {
            PyObject *_python_tmp_unhandled_indicator = Py_True;
            frame_guard.setLineNumber( 139 );
            try
            {
                {
                    frame_guard.setLineNumber( 140 );
                    PyObject *_tmp_python_tmp_for_iterator;
                    {
                        PyObjectTempKeeper0 call21;
                        PyObjectTempKeeper0 call22;
                        _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call21.assign( _mvar_django__http__multipartparser_Parser.asObject0() ), call22.assign( _python_var_stream.asObject() ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), call22.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__boundary ) ).asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
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
                            {
                                frame_guard.setLineNumber( 140 );
                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                                _python_var_item_type.assign0( _python_tmp_element_1.asObject() );
                                _python_var_meta_data.assign0( _python_tmp_element_2.asObject() );
                                _python_var_field_stream.assign0( _python_tmp_element_3.asObject() );
                            }
                        }
                        frame_guard.setLineNumber( 141 );
                        if ( CHECK_IF_TRUE( _python_var_old_field_name.asObject() ) )
                        {
                            frame_guard.setLineNumber( 145 );
                            {
                                PyObjectTempKeeper1 call24;
                                PyObjectTempKeeper0 call25;
                                DECREASE_REFCOUNT( ( call24.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_file_complete ) ), call25.assign( _python_var_old_field_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call24.asObject0(), call25.asObject0(), _python_var_counters.asObject() ) ) );
                            }
                            _python_var_old_field_name.assign0( Py_None );
                        }
                        frame_guard.setLineNumber( 148 );
                        try
                        {
                            frame_guard.setLineNumber( 149 );
                            _python_var_disposition.assign1( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_meta_data.asObject(), _python_unicode_digest_14528cf167eaad1427a0ec8c86f0853f ) ).asObject(), _python_int_pos_1, 1 ) );
                            frame_guard.setLineNumber( 150 );
                            _python_var_field_name.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_disposition.asObject(), _python_unicode_plain_name ) ).asObject(), _python_str_plain_strip ) ).asObject() ) );
                        }
                        catch ( PythonException &_exception )
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

                            if ( _exception.matches( PyExc_KeyError ) || _exception.matches( PyExc_IndexError ) || _exception.matches( PyExc_AttributeError ) )
                            {
                                frame_guard.detachFrame();
                                frame_guard.setLineNumber( 152 );
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
                        frame_guard.setLineNumber( 154 );
                        _python_var_transfer_encoding.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_meta_data.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_digest_dca46dafc7ac7ed07beae4934534ba0f ) );
                        frame_guard.setLineNumber( 155 );
                        if ( ( _python_var_transfer_encoding.asObject() != Py_None ) )
                        {
                            frame_guard.setLineNumber( 156 );
                            _python_var_transfer_encoding.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_transfer_encoding.asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_strip ) ).asObject() ) );
                        }
                        frame_guard.setLineNumber( 157 );
                        {
                            PyObjectTempKeeper0 call29;
                            PyObjectTempKeeper0 make_tuple27;
                            _python_var_field_name.assign1( ( call29.assign( _mvar_django__http__multipartparser_force_text.asObject0() ), CALL_FUNCTION( call29.asObject0(), PyObjectTemporary( ( make_tuple27.assign( _python_var_field_name.asObject() ), MAKE_TUPLE2( make_tuple27.asObject0(), _python_var_encoding.asObject() ) ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_4593080baa302c9b17627b104a2461c2 ) ).asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 159 );
                        {
                            PyObjectTempKeeper0 cmp82;
                            if ( ( cmp82.assign( _python_var_item_type.asObject() ), RICH_COMPARE_BOOL_EQ( cmp82.asObject0(), _mvar_django__http__multipartparser_FIELD.asObject0() ) ) )
                        {
                            frame_guard.setLineNumber( 161 );
                            if ( RICH_COMPARE_BOOL_EQ( _python_var_transfer_encoding.asObject(), _python_unicode_plain_base64 ) )
                            {
                                frame_guard.setLineNumber( 162 );
                                _python_var_raw_data.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field_stream.asObject(), _python_str_plain_read ) ).asObject() ) );
                                frame_guard.setLineNumber( 163 );
                                try
                                {
                                    frame_guard.setLineNumber( 164 );
                                    _python_var_data.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( TO_STR( _python_var_raw_data.asObject() ) ).asObject(), _python_str_plain_decode ) ).asObject(), _python_unicode_plain_base64 ) );
                                }
                                catch ( PythonException &_exception )
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
                                        frame_guard.setLineNumber( 166 );
                                        _python_var_data.assign0( _python_var_raw_data.asObject() );
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
                                frame_guard.setLineNumber( 168 );
                                _python_var_data.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_field_stream.asObject(), _python_str_plain_read ) ).asObject() ) );
                            }
                            frame_guard.setLineNumber( 170 );
                            {
                                PyObjectTempKeeper0 call34;
                                PyObjectTempKeeper1 call37;
                                PyObjectTempKeeper0 call38;
                                PyObjectTempKeeper0 make_tuple32;
                                DECREASE_REFCOUNT( ( call37.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__post ) ).asObject(), _python_str_plain_appendlist ) ), call38.assign( _python_var_field_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call37.asObject0(), call38.asObject0(), PyObjectTemporary( ( call34.assign( _mvar_django__http__multipartparser_force_text.asObject0() ), CALL_FUNCTION( call34.asObject0(), PyObjectTemporary( ( make_tuple32.assign( _python_var_data.asObject() ), MAKE_TUPLE2( make_tuple32.asObject0(), _python_var_encoding.asObject() ) ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_4593080baa302c9b17627b104a2461c2 ) ).asObject() ) ) ).asObject() ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 172 );
                            {
                                PyObjectTempKeeper0 cmp80;
                                if ( ( cmp80.assign( _python_var_item_type.asObject() ), RICH_COMPARE_BOOL_EQ( cmp80.asObject0(), _mvar_django__http__multipartparser_FILE.asObject0() ) ) )
                            {
                                frame_guard.setLineNumber( 174 );
                                _python_var_file_name.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_disposition.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_filename ) );
                                frame_guard.setLineNumber( 175 );
                                if ( (!( CHECK_IF_TRUE( _python_var_file_name.asObject() ) )) )
                                {
                                    frame_guard.setLineNumber( 176 );
                                    CONSIDER_THREADING(); continue;
                                }
                                frame_guard.setLineNumber( 177 );
                                {
                                    PyObjectTempKeeper0 call42;
                                    PyObjectTempKeeper0 make_tuple40;
                                    _python_var_file_name.assign1( ( call42.assign( _mvar_django__http__multipartparser_force_text.asObject0() ), CALL_FUNCTION( call42.asObject0(), PyObjectTemporary( ( make_tuple40.assign( _python_var_file_name.asObject() ), MAKE_TUPLE2( make_tuple40.asObject0(), _python_var_encoding.asObject() ) ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_4593080baa302c9b17627b104a2461c2 ) ).asObject() ) ) );
                                }
                                frame_guard.setLineNumber( 178 );
                                {
                                    PyObjectTempKeeper0 call45;
                                    PyObjectTempKeeper1 call47;
                                    _python_var_file_name.assign1( ( call47.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_IE_sanitize ) ), CALL_FUNCTION_WITH_ARGS( call47.asObject0(), PyObjectTemporary( ( call45.assign( _mvar_django__http__multipartparser_unescape_entities.asObject0() ), CALL_FUNCTION_WITH_ARGS( call45.asObject0(), _python_var_file_name.asObject() ) ) ).asObject() ) ) );
                                }
                                frame_guard.setLineNumber( 180 );
                                _python_var_content_type.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_meta_data.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_digest_cc0af601bfd673427a8abb171f62c707, _python_tuple_unicode_empty_tuple ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_strip ) ).asObject() ) );
                                frame_guard.setLineNumber( 181 );
                                try
                                {
                                    frame_guard.setLineNumber( 182 );
                                    _python_var_charset.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_meta_data.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_digest_cc0af601bfd673427a8abb171f62c707, PyObjectTemporary( MAKE_TUPLE2( _python_int_0, PyObjectTemporary( PyDict_New() ).asObject() ) ).asObject() ) ).asObject(), _python_int_pos_1, 1 ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_charset, Py_None ) );
                                }
                                catch ( PythonException &_exception )
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
                                        _python_var_charset.assign0( Py_None );
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
                                frame_guard.setLineNumber( 186 );
                                try
                                {
                                    frame_guard.setLineNumber( 187 );
                                    _python_var_content_length.assign1( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_meta_data.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_digest_853e52661e398e5be2d726c80a7172db ) ).asObject(), _python_int_0, 0 ) ).asObject() ) );
                                }
                                catch ( PythonException &_exception )
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

                                    if ( _exception.matches( PyExc_IndexError ) || _exception.matches( PyExc_TypeError ) || _exception.matches( PyExc_ValueError ) )
                                    {
                                        frame_guard.detachFrame();
                                        _python_var_content_length.assign0( Py_None );
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
                                _python_var_counters.assign1( BINARY_OPERATION_MUL( PyObjectTemporary( LIST_COPY( _python_list_int_0_list ) ).asObject(), PyObjectTemporary( BUILTIN_LEN( _python_var_handlers.asObject() ) ).asObject() ) );
                                {
                                    PyObject *_python_tmp_unhandled_indicator = Py_True;
                                    frame_guard.setLineNumber( 192 );
                                    try
                                    {
                                        {
                                            frame_guard.setLineNumber( 193 );
                                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_handlers.asObject() ) );
                                            while( true )
                                            {
                                                {
                                                    frame_guard.setLineNumber( 193 );
                                                    PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                                    if ( _tmp_unpack_3 == NULL )
                                                    {
                                                        break;
                                                    }
                                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                                                    _python_var_handler.assign0( _python_tmp_iter_value.asObject() );
                                                }
                                                frame_guard.setLineNumber( 194 );
                                                try
                                                {
                                                    frame_guard.setLineNumber( 195 );
                                                    {
                                                        PyObjectTempKeeper1 call51;
                                                        PyObjectTempKeeper0 call52;
                                                        PyObjectTempKeeper0 call53;
                                                        PyObjectTempKeeper0 call54;
                                                        PyObjectTempKeeper0 call55;
                                                        DECREASE_REFCOUNT( ( call51.assign( LOOKUP_ATTRIBUTE( _python_var_handler.asObject(), _python_str_plain_new_file ) ), call52.assign( _python_var_field_name.asObject() ), call53.assign( _python_var_file_name.asObject() ), call54.assign( _python_var_content_type.asObject() ), call55.assign( _python_var_content_length.asObject() ), CALL_FUNCTION_WITH_ARGS( call51.asObject0(), call52.asObject0(), call53.asObject0(), call54.asObject0(), call55.asObject0(), _python_var_charset.asObject() ) ) );
                                                    }
                                                }
                                                catch ( PythonException &_exception )
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

                                                    if ( _exception.matches( _mvar_django__http__multipartparser_StopFutureHandlers.asObject0() ) )
                                                    {
                                                        frame_guard.detachFrame();
                                                        frame_guard.setLineNumber( 199 );
                                                        break;
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
                                        {
                                            frame_guard.setLineNumber( 201 );
                                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_field_stream.asObject() ) );
                                            while( true )
                                            {
                                                {
                                                    frame_guard.setLineNumber( 201 );
                                                    PyObject *_tmp_unpack_4 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                                    if ( _tmp_unpack_4 == NULL )
                                                    {
                                                        break;
                                                    }
                                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_4 );
                                                    _python_var_chunk.assign0( _python_tmp_iter_value.asObject() );
                                                }
                                                frame_guard.setLineNumber( 202 );
                                                if ( RICH_COMPARE_BOOL_EQ( _python_var_transfer_encoding.asObject(), _python_unicode_plain_base64 ) )
                                                {
                                                    frame_guard.setLineNumber( 205 );
                                                    _python_var_over_bytes.assign1( BINARY_OPERATION_REMAINDER( PyObjectTemporary( BUILTIN_LEN( _python_var_chunk.asObject() ) ).asObject(), _python_int_pos_4 ) );
                                                    frame_guard.setLineNumber( 206 );
                                                    if ( CHECK_IF_TRUE( _python_var_over_bytes.asObject() ) )
                                                    {
                                                        frame_guard.setLineNumber( 207 );
                                                        {
                                                            PyObjectTempKeeper1 call57;
                                                            _python_var_over_chunk.assign1( ( call57.assign( LOOKUP_ATTRIBUTE( _python_var_field_stream.asObject(), _python_str_plain_read ) ), CALL_FUNCTION_WITH_ARGS( call57.asObject0(), PyObjectTemporary( BINARY_OPERATION_SUB( _python_int_pos_4, _python_var_over_bytes.asObject() ) ).asObject() ) ) );
                                                        }
                                                        {
                                                            frame_guard.setLineNumber( 208 );
                                                            PyObject *_python_tmp_inplace_start = _python_var_chunk.asObject();
                                                            PyObject *_tmp_python_tmp_inplace_end;
                                                            {
                                                                PyObjectTempKeeper0 op59;
                                                                _tmp_python_tmp_inplace_end = ( op59.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op59.asObject0(), _python_var_over_chunk.asObject() ) );
                                                            }
                                                            PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                                                            if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                                                            {
                                                                _python_var_chunk.assign0( _python_tmp_inplace_end.asObject() );
                                                            }
                                                        }
                                                    }
                                                    frame_guard.setLineNumber( 210 );
                                                    try
                                                    {
                                                        frame_guard.setLineNumber( 211 );
                                                        {
                                                            PyObjectTempKeeper1 call67;
                                                            _python_var_chunk.assign1( ( call67.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__multipartparser_base64.asObject0(), _python_str_plain_b64decode ) ), CALL_FUNCTION_WITH_ARGS( call67.asObject0(), _python_var_chunk.asObject() ) ) );
                                                        }
                                                    }
                                                    catch ( PythonException &_exception )
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
                                                            frame_guard.setLineNumber( 214 );
                                                            _python_var_msg.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_508096843384ccbf0a224f40ddb36271, _python_var_e.asObject() ) );
                                                            frame_guard.setLineNumber( 215 );
                                                            {
                                                                PyObjectTempKeeper0 call61;
                                                                PyObjectTempKeeper1 call63;
                                                                PyObjectTempKeeper0 call64;
                                                                PyObjectTempKeeper1 call65;
                                                                DECREASE_REFCOUNT( ( call63.assign( LOOKUP_ATTRIBUTE( _mvar_django__http__multipartparser_six.asObject0(), _python_str_plain_reraise ) ), call64.assign( _mvar_django__http__multipartparser_MultiPartParserError.asObject0() ), call65.assign( ( call61.assign( _mvar_django__http__multipartparser_MultiPartParserError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call61.asObject0(), _python_var_msg.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call63.asObject0(), call64.asObject0(), call65.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__multipartparser_sys.asObject0(), _python_str_plain_exc_info ) ).asObject() ) ).asObject(), _python_int_pos_2, 2 ) ).asObject() ) ) );
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
                                                {
                                                    frame_guard.setLineNumber( 217 );
                                                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), _python_var_handlers.asObject() ) ).asObject() ) );
                                                    while( true )
                                                    {
                                                        {
                                                            frame_guard.setLineNumber( 217 );
                                                            PyObject *_tmp_unpack_5 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                                            if ( _tmp_unpack_5 == NULL )
                                                            {
                                                                break;
                                                            }
                                                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_5 );
                                                            {
                                                                frame_guard.setLineNumber( 217 );
                                                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                                                _python_var_i.assign0( _python_tmp_element_1.asObject() );
                                                                _python_var_handler.assign0( _python_tmp_element_2.asObject() );
                                                            }
                                                        }
                                                        frame_guard.setLineNumber( 218 );
                                                        _python_var_chunk_length.assign1( BUILTIN_LEN( _python_var_chunk.asObject() ) );
                                                        frame_guard.setLineNumber( 219 );
                                                        {
                                                            PyObjectTempKeeper1 call71;
                                                            PyObjectTempKeeper0 call72;
                                                            PyObjectTempKeeper0 subscr69;
                                                            _python_var_chunk.assign1( ( call71.assign( LOOKUP_ATTRIBUTE( _python_var_handler.asObject(), _python_str_plain_receive_data_chunk ) ), call72.assign( _python_var_chunk.asObject() ), CALL_FUNCTION_WITH_ARGS( call71.asObject0(), call72.asObject0(), PyObjectTemporary( ( subscr69.assign( _python_var_counters.asObject() ), LOOKUP_SUBSCRIPT( subscr69.asObject0(), _python_var_i.asObject() ) ) ).asObject() ) ) );
                                                        }
                                                        {
                                                            frame_guard.setLineNumber( 221 );
                                                            PyObject *_python_tmp_inplace_target = _python_var_counters.asObject();
                                                            PyObject *_python_tmp_inplace_subscript = _python_var_i.asObject();
                                                            {
                                                                PyObjectTempKeeper1 op76;
                                                                PyObjectTempKeeper0 subscr74;
                                                                {
                                                                    PyObjectTemporary tmp_identifier( ( op76.assign( ( subscr74.assign( _python_tmp_inplace_target ), LOOKUP_SUBSCRIPT( subscr74.asObject0(), _python_tmp_inplace_subscript ) ) ), BINARY_OPERATION( PyNumber_InPlaceAdd, op76.asObject0(), _python_var_chunk_length.asObject() ) ) );
                                                                    PyObject *tmp_subscribed = _python_tmp_inplace_target;
                                                                    SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_inplace_subscript );
                                                            }
                                                            }
                                                        }
                                                        frame_guard.setLineNumber( 222 );
                                                        if ( ( _python_var_chunk.asObject() == Py_None ) )
                                                        {
                                                            frame_guard.setLineNumber( 224 );
                                                            break;
                                                        }

                                                       CONSIDER_THREADING();
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

                                        frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
                                        ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
                                        _exception.toExceptionHandler();

                                        if ( _exception.matches( _mvar_django__http__multipartparser_SkipFile.asObject0() ) )
                                        {
                                            frame_guard.detachFrame();
                                            _python_tmp_unhandled_indicator = Py_False;
                                            frame_guard.setLineNumber( 228 );
                                            {
                                                PyObjectTempKeeper0 call49;
                                                DECREASE_REFCOUNT( ( call49.assign( _mvar_django__http__multipartparser_exhaust.asObject0() ), CALL_FUNCTION_WITH_ARGS( call49.asObject0(), _python_var_field_stream.asObject() ) ) );
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
                                        frame_guard.setLineNumber( 231 );
                                        _python_var_old_field_name.assign0( _python_var_field_name.asObject() );
                                    }
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 234 );
                                {
                                    PyObjectTempKeeper0 call78;
                                    DECREASE_REFCOUNT( ( call78.assign( _mvar_django__http__multipartparser_exhaust.asObject0() ), CALL_FUNCTION_WITH_ARGS( call78.asObject0(), _python_var_stream.asObject() ) ) );
                                }
                            }
                            }
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

                frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
                ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
                _exception.toExceptionHandler();

                if ( _exception.matches( _mvar_django__http__multipartparser_StopUpload.asObject0() ) )
                {
                    frame_guard.detachFrame();
                    _python_tmp_unhandled_indicator = Py_False;
                    _python_var_e.assign0( _exception.getValue() );
                    frame_guard.setLineNumber( 236 );
                    if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_connection_reset ) ).asObject() ) )) )
                    {
                        frame_guard.setLineNumber( 237 );
                        {
                            PyObjectTempKeeper0 call19;
                            DECREASE_REFCOUNT( ( call19.assign( _mvar_django__http__multipartparser_exhaust.asObject0() ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__input_data ) ).asObject() ) ) );
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
                frame_guard.setLineNumber( 240 );
                {
                    PyObjectTempKeeper0 call84;
                    DECREASE_REFCOUNT( ( call84.assign( _mvar_django__http__multipartparser_exhaust.asObject0() ), CALL_FUNCTION_WITH_ARGS( call84.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__input_data ) ).asObject() ) ) );
                }
            }
        }
        {
            frame_guard.setLineNumber( 243 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_handlers.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 243 );
                    PyObject *_tmp_unpack_6 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_6 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_6 );
                    _python_var_handler.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 244 );
                _python_var_retval.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_handler.asObject(), _python_str_plain_upload_complete ) ).asObject() ) );
                frame_guard.setLineNumber( 245 );
                if ( CHECK_IF_TRUE( _python_var_retval.asObject() ) )
                {
                    frame_guard.setLineNumber( 246 );
                    break;
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 248 );
        {
            PyObjectTempKeeper1 make_tuple86;
            return ( make_tuple86.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__post ) ), MAKE_TUPLE2( make_tuple86.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__files ) ).asObject() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_retval.updateLocalsDict( _python_var_chunk_length.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_msg.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_over_chunk.updateLocalsDict( _python_var_over_bytes.updateLocalsDict( _python_var_chunk.updateLocalsDict( _python_var_content_length.updateLocalsDict( _python_var_charset.updateLocalsDict( _python_var_content_type.updateLocalsDict( _python_var_file_name.updateLocalsDict( _python_var_data.updateLocalsDict( _python_var_raw_data.updateLocalsDict( _python_var_transfer_encoding.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_disposition.updateLocalsDict( _python_var_field_stream.updateLocalsDict( _python_var_meta_data.updateLocalsDict( _python_var_item_type.updateLocalsDict( _python_var_counters.updateLocalsDict( _python_var_old_field_name.updateLocalsDict( _python_var_stream.updateLocalsDict( _python_var_result.updateLocalsDict( _python_var_handler.updateLocalsDict( _python_var_handlers.updateLocalsDict( _python_var_encoding.updateLocalsDict( _python_var_QueryDict.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser );
           frame_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "parse() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "parse() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "parse() got multiple values for keyword argument 'self'" );
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
                   "parse() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "parse() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "parse() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "parse() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "parse() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "parse() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "parse() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "parse() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "parse() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "parse() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_old_field_name, PyObject *_python_par_counters )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_old_field_name( _python_str_plain_old_field_name, _python_par_old_field_name );
    PyObjectLocalParameterVariableNoDel _python_var_counters( _python_str_plain_counters, _python_par_counters );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_handler( _python_str_plain_handler );
    PyObjectLocalVariable _python_var_file_obj( _python_str_plain_file_obj );

    // Actual function code.
    static PyFrameObject *frame_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser );
        }

        frame_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_8dcb89227754dee950465a1bc4c97520, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 254 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__upload_handlers ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 254 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 254 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_i.assign0( _python_tmp_element_1.asObject() );
                        _python_var_handler.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 255 );
                {
                    PyObjectTempKeeper1 call3;
                    PyObjectTempKeeper0 subscr1;
                    _python_var_file_obj.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_handler.asObject(), _python_str_plain_file_complete ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( subscr1.assign( _python_var_counters.asObject() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), _python_var_i.asObject() ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 256 );
                if ( CHECK_IF_TRUE( _python_var_file_obj.asObject() ) )
                {
                    frame_guard.setLineNumber( 258 );
                    {
                        PyObjectTempKeeper1 call10;
                        PyObjectTempKeeper1 call11;
                        PyObjectTempKeeper0 call7;
                        PyObjectTempKeeper0 make_tuple5;
                        DECREASE_REFCOUNT( ( call10.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__files ) ).asObject(), _python_str_plain_appendlist ) ), call11.assign( ( call7.assign( _mvar_django__http__multipartparser_force_text.asObject0() ), CALL_FUNCTION( call7.asObject0(), PyObjectTemporary( ( make_tuple5.assign( _python_var_old_field_name.asObject() ), MAKE_TUPLE2( make_tuple5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__encoding ) ).asObject() ) ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_4593080baa302c9b17627b104a2461c2 ) ).asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), call11.asObject0(), _python_var_file_obj.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 262 );
                    break;
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
        frame_guard.getFrame0()->f_locals = _python_var_counters.updateLocalsDict( _python_var_old_field_name.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_file_obj.updateLocalsDict( _python_var_handler.updateLocalsDict( _python_var_i.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser );
           frame_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_old_field_name = NULL;
    PyObject *_python_par_counters = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "handle_file_complete() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "handle_file_complete() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_old_field_name == key )
            {
                if (unlikely( _python_par_old_field_name ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_file_complete() got multiple values for keyword argument 'old_field_name'" );
                    goto error_exit;
                }

                _python_par_old_field_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_counters == key )
            {
                if (unlikely( _python_par_counters ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_file_complete() got multiple values for keyword argument 'counters'" );
                    goto error_exit;
                }

                _python_par_counters = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_file_complete() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_old_field_name, key ) )
            {
                if (unlikely( _python_par_old_field_name ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_file_complete() got multiple values for keyword argument 'old_field_name'" );
                    goto error_exit;
                }

                _python_par_old_field_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_counters, key ) )
            {
                if (unlikely( _python_par_counters ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_file_complete() got multiple values for keyword argument 'counters'" );
                    goto error_exit;
                }

                _python_par_counters = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "handle_file_complete() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "handle_file_complete() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "handle_file_complete() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "handle_file_complete() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_file_complete() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "handle_file_complete() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_file_complete() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "handle_file_complete() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_file_complete() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "handle_file_complete() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle_file_complete() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "handle_file_complete() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "handle_file_complete() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "handle_file_complete() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_old_field_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_file_complete() got multiple values for keyword argument 'old_field_name'" );
             goto error_exit;
         }

        _python_par_old_field_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_counters != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_file_complete() got multiple values for keyword argument 'counters'" );
             goto error_exit;
         }

        _python_par_counters = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser( self, _python_par_self, _python_par_old_field_name, _python_par_counters );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_old_field_name );
    Py_XDECREF( _python_par_counters );

    return NULL;
}

static PyObject *dparse_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_filename )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_filename( _python_str_plain_filename, _python_par_filename );

    // Actual function code.
    static PyFrameObject *frame_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser );
        }

        frame_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_f2eb990950dc6d99f2d059db532a5d1f, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 266 );
        {
            PyObjectTempKeeper0 keeper_0;
            PyObjectTempKeeper0 slice1;
            return ( CHECK_IF_TRUE( keeper_0.assign( _python_var_filename.asObject() ) ) ? CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice1.assign( _python_var_filename.asObject() ), LOOKUP_SLICE( slice1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_filename.asObject(), _python_str_plain_rfind ) ).asObject(), _python_unicode_chr_92 ) ).asObject(), _python_int_pos_1 ) ).asObject(), Py_None ) ) ).asObject(), _python_str_plain_strip ) ).asObject() ) : INCREASE_REFCOUNT( keeper_0.asObject0() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_filename.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser );
           frame_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_filename = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "IE_sanitize() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "IE_sanitize() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "IE_sanitize() got multiple values for keyword argument 'filename'" );
                    goto error_exit;
                }

                _python_par_filename = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "IE_sanitize() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "IE_sanitize() got multiple values for keyword argument 'filename'" );
                    goto error_exit;
                }

                _python_par_filename = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "IE_sanitize() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "IE_sanitize() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "IE_sanitize() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "IE_sanitize() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "IE_sanitize() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "IE_sanitize() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "IE_sanitize() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "IE_sanitize() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "IE_sanitize() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "IE_sanitize() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "IE_sanitize() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "IE_sanitize() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "IE_sanitize() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "IE_sanitize() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_filename != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "IE_sanitize() got multiple values for keyword argument 'filename'" );
             goto error_exit;
         }

        _python_par_filename = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser( self, _python_par_self, _python_par_filename );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_filename );

    return NULL;
}

static PyObject *dparse_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_LazyStream_of_module_django__http__multipartparser(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_tell( _python_str_plain_tell );
    PyObjectLocalVariable _python_var_read( _python_str_plain_read );
    PyObjectLocalVariable _python_var___next__( _python_str_plain___next__ );
    PyObjectLocalVariable _python_var_close( _python_str_plain_close );
    PyObjectLocalVariable _python_var___iter__( _python_str_plain___iter__ );
    PyObjectLocalVariable _python_var_unget( _python_str_plain_unget );
    PyObjectLocalVariable _python_var__update_unget_history( _python_str_plain__update_unget_history );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_multipartparser );
    _python_var___doc__.assign0( _python_unicode_digest_18f11845bb0eb1630793e1c0ca3c21fa );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser(  ) );
    _python_var_tell.assign1( MAKE_FUNCTION_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser(  ) );
    _python_var_read.assign1( MAKE_FUNCTION_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser(  ) );
    _python_var___next__.assign1( MAKE_FUNCTION_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser(  ) );
    _python_var_close.assign1( MAKE_FUNCTION_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser(  ) );
    _python_var___iter__.assign1( MAKE_FUNCTION_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser(  ) );
    _python_var_unget.assign1( MAKE_FUNCTION_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser(  ) );
    _python_var__update_unget_history.assign1( MAKE_FUNCTION_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser(  ) );
    return _python_var__update_unget_history.updateLocalsDict( _python_var_unget.updateLocalsDict( _python_var___iter__.updateLocalsDict( _python_var_close.updateLocalsDict( _python_var___next__.updateLocalsDict( _python_var_read.updateLocalsDict( _python_var_tell.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_producer, PyObject *_python_par_length )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_producer( _python_str_plain_producer, _python_par_producer );
    PyObjectLocalParameterVariableNoDel _python_var_length( _python_str_plain_length, _python_par_length );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser );
        }

        frame_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_99440231c8b24567c645e524df6b7bc9, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 283 );
        {
                PyObject *tmp_identifier = _python_var_producer.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__producer );
        }
        frame_guard.setLineNumber( 284 );
        SET_ATTRIBUTE( Py_False, _python_var_self.asObject(), _python_str_plain__empty );
        frame_guard.setLineNumber( 285 );
        SET_ATTRIBUTE( _python_str_empty, _python_var_self.asObject(), _python_str_plain__leftover );
        frame_guard.setLineNumber( 286 );
        {
                PyObject *tmp_identifier = _python_var_length.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_length );
        }
        frame_guard.setLineNumber( 287 );
        SET_ATTRIBUTE( _python_int_0, _python_var_self.asObject(), _python_str_plain_position );
        frame_guard.setLineNumber( 288 );
        {
                PyObject *tmp_identifier = _python_var_length.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__remaining );
        }
        frame_guard.setLineNumber( 289 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain__unget_history );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_length.updateLocalsDict( _python_var_producer.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser );
           frame_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_producer = NULL;
    PyObject *_python_par_length = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
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
            if ( found == false && _python_str_plain_producer == key )
            {
                if (unlikely( _python_par_producer ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'producer'" );
                    goto error_exit;
                }

                _python_par_producer = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_length == key )
            {
                if (unlikely( _python_par_length ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'length'" );
                    goto error_exit;
                }

                _python_par_length = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_producer, key ) )
            {
                if (unlikely( _python_par_producer ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'producer'" );
                    goto error_exit;
                }

                _python_par_producer = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_length, key ) )
            {
                if (unlikely( _python_par_length ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'length'" );
                    goto error_exit;
                }

                _python_par_length = value;

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
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
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
    args_usable_count = args_given < 3 ? args_given : 3;

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
         if (unlikely( _python_par_producer != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'producer'" );
             goto error_exit;
         }

        _python_par_producer = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_length != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'length'" );
             goto error_exit;
         }

        _python_par_length = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_length == NULL )
    {
        _python_par_length = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_length );
    }


    return impl_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser( self, _python_par_self, _python_par_producer, _python_par_length );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_producer );
    Py_XDECREF( _python_par_length );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser );
        }

        frame_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_8357fd8441826b95cb1d8f89fc7348c4, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 292 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_position );
    }
    catch ( PythonException &_exception )
    {
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

        if ( frame_guard.getFrame0() == frame_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser );
           frame_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "tell() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "tell() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "tell() got multiple values for keyword argument 'self'" );
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
                   "tell() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "tell() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "tell() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "tell() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "tell() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "tell() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "tell() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "tell() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "tell() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "tell() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "tell() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "tell() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "tell() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "tell() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_size )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectSharedLocalVariable _python_var_size( _python_str_plain_size, _python_par_size );
    PyObjectLocalVariable _python_var_parts( _python_str_plain_parts );
    PyObjectLocalVariable _python_var_out( _python_str_plain_out );

    // Actual function code.
    _python_var_parts.assign1( MAKE_FUNCTION_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( _python_var_self, _python_var_size ) );
    static PyFrameObject *frame_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser );
        }

        frame_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_900b0febd26901f9d0a0e32169af33ff, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 315 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_out.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_str_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _python_var_parts.asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 316 );
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
        frame_guard.getFrame0()->f_locals = _python_var_size.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_out.updateLocalsDict( _python_var_parts.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser );
           frame_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_size = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
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
            if ( found == false && _python_str_plain_size == key )
            {
                if (unlikely( _python_par_size ))
                {
                    PyErr_Format( PyExc_TypeError, "read() got multiple values for keyword argument 'size'" );
                    goto error_exit;
                }

                _python_par_size = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_size, key ) )
            {
                if (unlikely( _python_par_size ))
                {
                    PyErr_Format( PyExc_TypeError, "read() got multiple values for keyword argument 'size'" );
                    goto error_exit;
                }

                _python_par_size = value;

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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "read() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "read() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "read() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "read() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "read() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "read() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "read() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
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
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "read() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "read() got multiple values for keyword argument 'size'" );
             goto error_exit;
         }

        _python_par_size = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_size == NULL )
    {
        _python_par_size = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_size );
    }


    return impl_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( self, _python_par_self, _python_par_size );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_size );

    return NULL;
}

static PyObject *dparse_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}





// This structure is for attachment as self of the generator function function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser and
// contains the common closure. It is allocated at the time the genexpr object is created.
struct _context_common_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t
{
    // Ref count to keep track of common context usage and release only when it's the last one
    int ref_count;

    // The generator function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_self;
    PyObjectClosureVariable python_closure_size;
};

struct _context_generator_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t
{
    _context_common_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t *common_context;

    // The generator function instance can access its parameters from creation time.
    PyObjectLocalVariable python_var_remaining;
    PyObjectLocalVariable python_var_chunk;
    PyObjectLocalVariable python_var_emitting;
};

static void _context_common_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_destructor( void *context_voidptr )
{
    _context_common_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t *_python_context = (struct _context_common_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t *)context_voidptr;

    assert( _python_context->ref_count > 0 );
    _python_context->ref_count -= 1;


    if ( _python_context->ref_count == 0 )
    {
        delete _python_context;
    }
}

static void _context_generator_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_destructor( void *context_voidptr )
{
    _context_generator_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t *_python_context = (struct _context_generator_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t *)context_voidptr;

    _context_common_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_destructor( _python_context->common_context );

    delete _python_context;
}

static void function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t *_python_context = (_context_generator_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_remaining.setVariableName( _python_str_plain_remaining );
        _python_context->python_var_chunk.setVariableName( _python_str_plain_chunk );
        _python_context->python_var_emitting.setVariableName( _python_str_plain_emitting );

        // Actual function code.
        static PyFrameObject *frame_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser ) )
        {
            if ( frame_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser" );
#endif
                Py_DECREF( frame_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser );
            }

            frame_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_7a2d3340b8a23b3a94a188f5507d9b47, _module_django__http__multipartparser );
        }

        Py_INCREF( frame_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser );
        generator->m_frame = frame_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser;

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

            frame_guard.setLineNumber( 296 );
            _python_context->python_var_remaining.assign1( ( ( _python_context->common_context->python_closure_size.asObject() == Py_None ) ? LOOKUP_ATTRIBUTE( _python_context->common_context->python_closure_self.asObject(), _python_str_plain__remaining ) : INCREASE_REFCOUNT( _python_context->common_context->python_closure_size.asObject() ) ) );
            frame_guard.setLineNumber( 298 );
            if ( ( _python_context->python_var_remaining.asObject() == Py_None ) )
            {
                frame_guard.setLineNumber( 299 );
                {
                    PyObjectTempKeeper1 call1;
                    YIELD_VALUE( generator, ( call1.assign( LOOKUP_ATTRIBUTE( _python_str_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_context->common_context->python_closure_self.asObject() ) ) );
                }
                frame_guard.setLineNumber( 300 );
                RAISE_EXCEPTION_WITH_TYPE( PyExc_StopIteration, PyObjectTemporary( MAKE_TRACEBACK( INCREASE_REFCOUNT( generator->m_frame ) ) ).asObject() );
            }
            frame_guard.setLineNumber( 305 );
            while( true )
            {
                frame_guard.setLineNumber( 305 );
                if ( (!( RICH_COMPARE_BOOL_NE( _python_context->python_var_remaining.asObject(), _python_int_0 ) )) )
                {
                    frame_guard.setLineNumber( 305 );
                    break;
                }
                frame_guard.setLineNumber( 306 );
                if ( (!( RICH_COMPARE_BOOL_GT( _python_context->python_var_remaining.asObject(), _python_int_0 ) )) )
                {
                    frame_guard.setLineNumber( 306 );
                    {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_b876dfe37ae5091d8a321bf73749260e ) ).asObject() ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( INCREASE_REFCOUNT( generator->m_frame ) ) ).asObject() );
                    }
                }
                frame_guard.setLineNumber( 308 );
                _python_context->python_var_chunk.assign1( BUILTIN_NEXT1( _python_context->common_context->python_closure_self.asObject() ) );
                frame_guard.setLineNumber( 310 );
                {
                    PyObjectTempKeeper0 slice3;
                    _python_context->python_var_emitting.assign1( ( slice3.assign( _python_context->python_var_chunk.asObject() ), LOOKUP_SLICE( slice3.asObject0(), Py_None, _python_context->python_var_remaining.asObject() ) ) );
                }
                frame_guard.setLineNumber( 311 );
                {
                    PyObjectTempKeeper1 call9;
                    PyObjectTempKeeper0 slice6;
                    DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( _python_context->common_context->python_closure_self.asObject(), _python_str_plain_unget ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( ( slice6.assign( _python_context->python_var_chunk.asObject() ), LOOKUP_SLICE( slice6.asObject0(), _python_context->python_var_remaining.asObject(), Py_None ) ) ).asObject() ) ) );
                }
                {
                    frame_guard.setLineNumber( 312 );
                    PyObject *_python_tmp_inplace_start = _python_context->python_var_remaining.asObject();
                    PyObject *_tmp_python_tmp_inplace_end;
                    {
                        PyObjectTempKeeper0 op11;
                        _tmp_python_tmp_inplace_end = ( op11.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceSubtract, op11.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_context->python_var_emitting.asObject() ) ).asObject() ) );
                    }
                    PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                    if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                    {
                        _python_context->python_var_remaining.assign0( _python_tmp_inplace_end.asObject() );
                    }
                }
                frame_guard.setLineNumber( 313 );
                YIELD_VALUE( generator, _python_context->python_var_emitting.asObject1() );

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

static PyObject *impl_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self )
{
    // Create context if any
    struct _context_common_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t *_python_common_context = (struct _context_common_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t *)self->m_context;
    struct _context_generator_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t *_python_context = new _context_generator_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t;

    _python_context->common_context = _python_common_context;
    _python_common_context->ref_count += 1;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_context,
            _python_str_plain_parts,
            _codeobj_7a2d3340b8a23b3a94a188f5507d9b47,
            _python_context,
            _context_generator_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function parts" );
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
static PyObject *fparse_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "parts() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "parts() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "parts() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( self );
    }
    else
    {
        PyObject *result = fparse_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_output( _python_str_plain_output );

    // Actual function code.
    static PyFrameObject *frame_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser );
        }

        frame_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_722025ca043c3754794f80d31a9d18b4, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 326 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__leftover ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 327 );
            _python_var_output.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__leftover ) );
            frame_guard.setLineNumber( 328 );
            SET_ATTRIBUTE( _python_str_empty, _python_var_self.asObject(), _python_str_plain__leftover );
        }
        else
        {
            frame_guard.setLineNumber( 330 );
            _python_var_output.assign1( BUILTIN_NEXT1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__producer ) ).asObject() ) );
            frame_guard.setLineNumber( 331 );
            SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain__unget_history );
        }
        {
            frame_guard.setLineNumber( 332 );
            PyObjectTemporary _python_tmp_inplace_start( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_position ) );
            PyObject *_tmp_python_tmp_inplace_end;
            {
                PyObjectTempKeeper0 op1;
                _tmp_python_tmp_inplace_end = ( op1.assign( _python_tmp_inplace_start.asObject() ), BINARY_OPERATION( PyNumber_InPlaceAdd, op1.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_output.asObject() ) ).asObject() ) );
            }
            PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
            if ( ( _python_tmp_inplace_start.asObject() != _python_tmp_inplace_end.asObject() ) )
            {
                frame_guard.setLineNumber( 332 );
                {
                        PyObject *tmp_identifier = _python_tmp_inplace_end.asObject();
                        SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_position );
                }
            }
        }
        frame_guard.setLineNumber( 333 );
        return _python_var_output.asObject1();
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_output.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser );
           frame_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__next__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__next__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__next__() got multiple values for keyword argument 'self'" );
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
                   "__next__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__next__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__next__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__next__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser );
        }

        frame_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_62159141f6d4553f6d8fcf51d86bf75b, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 342 );
        SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain__producer );
    }
    catch ( PythonException &_exception )
    {
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

        if ( frame_guard.getFrame0() == frame_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser );
           frame_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser );
        }

        frame_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_9abd230fe924fbcba8ddbf32daade4ae, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 345 );
        return _python_var_self.asObject1();
    }
    catch ( PythonException &_exception )
    {
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

        if ( frame_guard.getFrame0() == frame_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser );
           frame_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__iter__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                   "__iter__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__iter__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_bytes )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_bytes( _python_str_plain_bytes, _python_par_bytes );

    // Actual function code.
    static PyFrameObject *frame_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser );
        }

        frame_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_66eefe4bf78b4ba0fce1a2e6e87667f5, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 354 );
        if ( (!( CHECK_IF_TRUE( _python_var_bytes.asObject() ) )) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 356 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__update_unget_history ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_bytes.asObject() ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 357 );
            PyObjectTemporary _python_tmp_inplace_start( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_position ) );
            PyObject *_tmp_python_tmp_inplace_end;
            {
                PyObjectTempKeeper0 op3;
                _tmp_python_tmp_inplace_end = ( op3.assign( _python_tmp_inplace_start.asObject() ), BINARY_OPERATION( PyNumber_InPlaceSubtract, op3.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_bytes.asObject() ) ).asObject() ) );
            }
            PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
            if ( ( _python_tmp_inplace_start.asObject() != _python_tmp_inplace_end.asObject() ) )
            {
                frame_guard.setLineNumber( 357 );
                {
                        PyObject *tmp_identifier = _python_tmp_inplace_end.asObject();
                        SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_position );
                }
            }
        }
        frame_guard.setLineNumber( 358 );
        {
            PyObjectTempKeeper1 call7;
            PyObjectTempKeeper0 make_list5;
            {
                PyObjectTemporary tmp_identifier( ( call7.assign( LOOKUP_ATTRIBUTE( _python_str_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( ( make_list5.assign( _python_var_bytes.asObject() ), MAKE_LIST2( make_list5.asObject(), LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__leftover ) ) ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__leftover );
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
        frame_guard.getFrame0()->f_locals = _python_var_bytes.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser );
           frame_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "unget() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "unget() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_bytes == key )
            {
                if (unlikely( _python_par_bytes ))
                {
                    PyErr_Format( PyExc_TypeError, "unget() got multiple values for keyword argument 'bytes'" );
                    goto error_exit;
                }

                _python_par_bytes = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "unget() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_bytes, key ) )
            {
                if (unlikely( _python_par_bytes ))
                {
                    PyErr_Format( PyExc_TypeError, "unget() got multiple values for keyword argument 'bytes'" );
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
                   "unget() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "unget() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "unget() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "unget() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "unget() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "unget() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unget() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "unget() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unget() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "unget() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "unget() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "unget() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "unget() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "unget() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_bytes != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unget() got multiple values for keyword argument 'bytes'" );
             goto error_exit;
         }

        _python_par_bytes = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser( self, _python_par_self, _python_par_bytes );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_bytes );

    return NULL;
}

static PyObject *dparse_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_num_bytes )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_num_bytes( _python_str_plain_num_bytes, _python_par_num_bytes );
    PyObjectLocalVariable _python_var_number_equal( _python_str_plain_number_equal );
    PyObjectLocalVariable _python_var_current_number( _python_str_plain_current_number );

    // Actual function code.
    static PyFrameObject *frame_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser );
        }

        frame_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_0068fb05c655fe08a222525fbf3fea26, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 368 );
        {
            PyObjectTempKeeper1 op1;
            {
                PyObjectTemporary tmp_identifier( ( op1.assign( MAKE_LIST1( _python_var_num_bytes.asObject1() ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__unget_history ) ).asObject(), 0, 49 ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__unget_history );
        }
        }
        frame_guard.setLineNumber( 369 );
        _python_var_number_equal.assign1( BUILTIN_LEN( PyObjectTemporary( impl_listcontr_1_of_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__unget_history ) ).asObject() ), _python_var_current_number, _python_var_num_bytes ) ).asObject() ) );
        frame_guard.setLineNumber( 372 );
        if ( RICH_COMPARE_BOOL_GT( _python_var_number_equal.asObject(), _python_int_pos_40 ) )
        {
            frame_guard.setLineNumber( 373 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__http__multipartparser_SuspiciousMultipartForm.asObject0(), _python_unicode_digest_9f498fa016ccfb0fd8ae83bcd786e31b ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_num_bytes.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_current_number.updateLocalsDict( _python_var_number_equal.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser );
           frame_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_num_bytes = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_update_unget_history() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_update_unget_history() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_num_bytes == key )
            {
                if (unlikely( _python_par_num_bytes ))
                {
                    PyErr_Format( PyExc_TypeError, "_update_unget_history() got multiple values for keyword argument 'num_bytes'" );
                    goto error_exit;
                }

                _python_par_num_bytes = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_update_unget_history() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_num_bytes, key ) )
            {
                if (unlikely( _python_par_num_bytes ))
                {
                    PyErr_Format( PyExc_TypeError, "_update_unget_history() got multiple values for keyword argument 'num_bytes'" );
                    goto error_exit;
                }

                _python_par_num_bytes = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_update_unget_history() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "_update_unget_history() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_update_unget_history() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_update_unget_history() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_update_unget_history() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_update_unget_history() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_update_unget_history() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_update_unget_history() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_update_unget_history() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_update_unget_history() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_update_unget_history() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_update_unget_history() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_update_unget_history() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_update_unget_history() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_num_bytes != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_update_unget_history() got multiple values for keyword argument 'num_bytes'" );
             goto error_exit;
         }

        _python_par_num_bytes = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser( self, _python_par_self, _python_par_num_bytes );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_num_bytes );

    return NULL;
}

static PyObject *dparse_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_current_number,PyObjectLocalParameterVariableNoDel &python_closure_num_bytes )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 369 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 369 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_current_number.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 cmp1;
                    if ( ( cmp1.assign( python_closure_current_number.asObject() ), RICH_COMPARE_BOOL_EQ( cmp1.asObject0(), python_closure_num_bytes.asObject() ) ) )
                {
                    frame_guard.setLineNumber( 369 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), python_closure_current_number.asObject() ), Py_None;
                }
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_class_5_ChunkIter_of_module_django__http__multipartparser(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___next__( _python_str_plain___next__ );
    PyObjectLocalVariable _python_var___iter__( _python_str_plain___iter__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_multipartparser );
    _python_var___doc__.assign0( _python_unicode_digest_c339669ee02065317caeef90c4af6976 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser(  ) );
    _python_var___next__.assign1( MAKE_FUNCTION_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser(  ) );
    _python_var___iter__.assign1( MAKE_FUNCTION_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser(  ) );
    return _python_var___iter__.updateLocalsDict( _python_var___next__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_flo, PyObject *_python_par_chunk_size )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_flo( _python_str_plain_flo, _python_par_flo );
    PyObjectLocalParameterVariableNoDel _python_var_chunk_size( _python_str_plain_chunk_size, _python_par_chunk_size );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser );
        }

        frame_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_b595561f71077db799b7cf08c7c609dc, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 386 );
        {
                PyObject *tmp_identifier = _python_var_flo.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_flo );
        }
        frame_guard.setLineNumber( 387 );
        {
                PyObject *tmp_identifier = _python_var_chunk_size.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_chunk_size );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_chunk_size.updateLocalsDict( _python_var_flo.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser );
           frame_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_flo = NULL;
    PyObject *_python_par_chunk_size = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
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
            if ( found == false && _python_str_plain_flo == key )
            {
                if (unlikely( _python_par_flo ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'flo'" );
                    goto error_exit;
                }

                _python_par_flo = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_chunk_size == key )
            {
                if (unlikely( _python_par_chunk_size ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'chunk_size'" );
                    goto error_exit;
                }

                _python_par_chunk_size = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_flo, key ) )
            {
                if (unlikely( _python_par_flo ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'flo'" );
                    goto error_exit;
                }

                _python_par_flo = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_chunk_size, key ) )
            {
                if (unlikely( _python_par_chunk_size ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'chunk_size'" );
                    goto error_exit;
                }

                _python_par_chunk_size = value;

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
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
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
    args_usable_count = args_given < 3 ? args_given : 3;

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
         if (unlikely( _python_par_flo != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'flo'" );
             goto error_exit;
         }

        _python_par_flo = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_chunk_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'chunk_size'" );
             goto error_exit;
         }

        _python_par_chunk_size = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_chunk_size == NULL )
    {
        _python_par_chunk_size = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_chunk_size );
    }


    return impl_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser( self, _python_par_self, _python_par_flo, _python_par_chunk_size );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_flo );
    Py_XDECREF( _python_par_chunk_size );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_data( _python_str_plain_data );

    // Actual function code.
    static PyFrameObject *frame_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser );
        }

        frame_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_9ada90c76478f9faf4cac12fc40ee84a, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 390 );
        try
        {
            frame_guard.setLineNumber( 391 );
            {
                PyObjectTempKeeper1 call1;
                _python_var_data.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_flo ) ).asObject(), _python_str_plain_read ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_chunk_size ) ).asObject() ) ) );
            }
        }
        catch ( PythonException &_exception )
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

            if ( _exception.matches( _mvar_django__http__multipartparser_InputStreamExhausted.asObject0() ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 393 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_StopIteration, _python_tuple_empty ) );
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
        frame_guard.setLineNumber( 394 );
        if ( CHECK_IF_TRUE( _python_var_data.asObject() ) )
        {
            frame_guard.setLineNumber( 395 );
            return _python_var_data.asObject1();
        }
        else
        {
            frame_guard.setLineNumber( 397 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_StopIteration, _python_tuple_empty ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_data.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser );
           frame_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__next__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__next__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__next__() got multiple values for keyword argument 'self'" );
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
                   "__next__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__next__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__next__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__next__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser );
        }

        frame_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_b4dc972a7fffc899f6e4b31748629257, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 400 );
        return _python_var_self.asObject1();
    }
    catch ( PythonException &_exception )
    {
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

        if ( frame_guard.getFrame0() == frame_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser );
           frame_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__iter__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                   "__iter__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__iter__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_6_InterBoundaryIter_of_module_django__http__multipartparser(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___iter__( _python_str_plain___iter__ );
    PyObjectLocalVariable _python_var___next__( _python_str_plain___next__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_multipartparser );
    _python_var___doc__.assign0( _python_unicode_digest_869befa870a119a9f9e8c6f0995f0ba4 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser(  ) );
    _python_var___iter__.assign1( MAKE_FUNCTION_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser(  ) );
    _python_var___next__.assign1( MAKE_FUNCTION_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser(  ) );
    return _python_var___next__.updateLocalsDict( _python_var___iter__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_stream, PyObject *_python_par_boundary )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_stream( _python_str_plain_stream, _python_par_stream );
    PyObjectLocalParameterVariableNoDel _python_var_boundary( _python_str_plain_boundary, _python_par_boundary );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser );
        }

        frame_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_dab84cf5ea675bcf656ea1b127b8fd13, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 407 );
        {
                PyObject *tmp_identifier = _python_var_stream.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__stream );
        }
        frame_guard.setLineNumber( 408 );
        {
                PyObject *tmp_identifier = _python_var_boundary.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__boundary );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_boundary.updateLocalsDict( _python_var_stream.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser );
           frame_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_boundary = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
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
            if ( found == false && _python_str_plain_stream == key )
            {
                if (unlikely( _python_par_stream ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'stream'" );
                    goto error_exit;
                }

                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_boundary == key )
            {
                if (unlikely( _python_par_boundary ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'boundary'" );
                    goto error_exit;
                }

                _python_par_boundary = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_stream, key ) )
            {
                if (unlikely( _python_par_stream ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'stream'" );
                    goto error_exit;
                }

                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_boundary, key ) )
            {
                if (unlikely( _python_par_boundary ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'boundary'" );
                    goto error_exit;
                }

                _python_par_boundary = value;

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
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
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
    args_usable_count = args_given < 3 ? args_given : 3;

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
         if (unlikely( _python_par_stream != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'stream'" );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_boundary != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'boundary'" );
             goto error_exit;
         }

        _python_par_boundary = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( self, _python_par_self, _python_par_stream, _python_par_boundary );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_boundary );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser );
        }

        frame_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_44ee99b1070e050a8f9e06de2731cec1, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 411 );
        return _python_var_self.asObject1();
    }
    catch ( PythonException &_exception )
    {
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

        if ( frame_guard.getFrame0() == frame_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser );
           frame_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__iter__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                   "__iter__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__iter__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser );
        }

        frame_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_1a1f7aaa3c87953e5c66494d1f4521dd, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 414 );
        try
        {
            frame_guard.setLineNumber( 415 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper1 call2;
                PyObjectTempKeeper0 call4;
                return ( call4.assign( _mvar_django__http__multipartparser_LazyStream.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__http__multipartparser_BoundaryIter.asObject0() ), call2.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__stream ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__boundary ) ).asObject() ) ) ).asObject() ) );
            }
        }
        catch ( PythonException &_exception )
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

            if ( _exception.matches( _mvar_django__http__multipartparser_InputStreamExhausted.asObject0() ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 417 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_StopIteration, _python_tuple_empty ) );
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
    }
    catch ( PythonException &_exception )
    {
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

        if ( frame_guard.getFrame0() == frame_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser );
           frame_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__next__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__next__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__next__() got multiple values for keyword argument 'self'" );
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
                   "__next__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__next__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__next__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__next__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_7_BoundaryIter_of_module_django__http__multipartparser(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___iter__( _python_str_plain___iter__ );
    PyObjectLocalVariable _python_var___next__( _python_str_plain___next__ );
    PyObjectLocalVariable _python_var__find_boundary( _python_str_plain__find_boundary );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_multipartparser );
    _python_var___doc__.assign0( _python_unicode_digest_eb652ca03ada57abb43c183a397cfee5 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser(  ) );
    _python_var___iter__.assign1( MAKE_FUNCTION_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser(  ) );
    _python_var___next__.assign1( MAKE_FUNCTION_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser(  ) );
    _python_var__find_boundary.assign1( MAKE_FUNCTION_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser(  ) );
    return _python_var__find_boundary.updateLocalsDict( _python_var___next__.updateLocalsDict( _python_var___iter__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_stream, PyObject *_python_par_boundary )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_stream( _python_str_plain_stream, _python_par_stream );
    PyObjectLocalParameterVariableNoDel _python_var_boundary( _python_str_plain_boundary, _python_par_boundary );
    PyObjectLocalVariable _python_var_unused_char( _python_str_plain_unused_char );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser );
        }

        frame_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_d16afbf8ed6c00455e035b1a7a4f3011, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 432 );
        {
                PyObject *tmp_identifier = _python_var_stream.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__stream );
        }
        frame_guard.setLineNumber( 433 );
        {
                PyObject *tmp_identifier = _python_var_boundary.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__boundary );
        }
        frame_guard.setLineNumber( 434 );
        SET_ATTRIBUTE( Py_False, _python_var_self.asObject(), _python_str_plain__done );
        frame_guard.setLineNumber( 437 );
        {
                PyObjectTemporary tmp_identifier( BINARY_OPERATION_ADD( PyObjectTemporary( BUILTIN_LEN( _python_var_boundary.asObject() ) ).asObject(), _python_int_pos_6 ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__rollback );
        }
        frame_guard.setLineNumber( 441 );
        _python_var_unused_char.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__stream ) ).asObject(), _python_str_plain_read ) ).asObject(), _python_int_pos_1 ) );
        frame_guard.setLineNumber( 442 );
        if ( (!( CHECK_IF_TRUE( _python_var_unused_char.asObject() ) )) )
        {
            frame_guard.setLineNumber( 443 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_NO_ARGS( _mvar_django__http__multipartparser_InputStreamExhausted.asObject0() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 444 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__stream ) ).asObject(), _python_str_plain_unget ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_unused_char.asObject() ) ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_boundary.updateLocalsDict( _python_var_stream.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_unused_char.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser );
           frame_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_boundary = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
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
            if ( found == false && _python_str_plain_stream == key )
            {
                if (unlikely( _python_par_stream ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'stream'" );
                    goto error_exit;
                }

                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_boundary == key )
            {
                if (unlikely( _python_par_boundary ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'boundary'" );
                    goto error_exit;
                }

                _python_par_boundary = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_stream, key ) )
            {
                if (unlikely( _python_par_stream ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'stream'" );
                    goto error_exit;
                }

                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_boundary, key ) )
            {
                if (unlikely( _python_par_boundary ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'boundary'" );
                    goto error_exit;
                }

                _python_par_boundary = value;

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
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
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
    args_usable_count = args_given < 3 ? args_given : 3;

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
         if (unlikely( _python_par_stream != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'stream'" );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_boundary != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'boundary'" );
             goto error_exit;
         }

        _python_par_boundary = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser( self, _python_par_self, _python_par_stream, _python_par_boundary );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_boundary );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser );
        }

        frame_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_758fe4db0cdab321c6ea6ab0155a5b96, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 447 );
        return _python_var_self.asObject1();
    }
    catch ( PythonException &_exception )
    {
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

        if ( frame_guard.getFrame0() == frame_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser );
           frame_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__iter__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                   "__iter__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__iter__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_stream( _python_str_plain_stream );
    PyObjectLocalVariable _python_var_rollback( _python_str_plain_rollback );
    PyObjectLocalVariable _python_var_bytes_read( _python_str_plain_bytes_read );
    PyObjectLocalVariable _python_var_chunks( _python_str_plain_chunks );
    PyObjectLocalVariable _python_var_bytes( _python_str_plain_bytes );
    PyObjectLocalVariable _python_var_chunk( _python_str_plain_chunk );
    PyObjectLocalVariable _python_var_boundary( _python_str_plain_boundary );
    PyObjectLocalVariable _python_var_end( _python_str_plain_end );
    PyObjectLocalVariable _python_var_next( _python_str_plain_next );

    // Actual function code.
    static PyFrameObject *frame_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser );
        }

        frame_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_f023f78322b7f7302ab5aefe6584837b, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 450 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__done ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 451 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_StopIteration, _python_tuple_empty ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 453 );
        _python_var_stream.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__stream ) );
        frame_guard.setLineNumber( 454 );
        _python_var_rollback.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__rollback ) );
        _python_var_bytes_read.assign0( _python_int_0 );
        _python_var_chunks.assign1( PyList_New( 0 ) );
        {
            PyObject *_python_tmp_break_indicator = Py_False;
            frame_guard.setLineNumber( 458 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_stream.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 458 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        _python_tmp_break_indicator = Py_True;
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_bytes.assign0( _python_tmp_iter_value.asObject() );
                }
                {
                    frame_guard.setLineNumber( 459 );
                    PyObject *_python_tmp_inplace_start = _python_var_bytes_read.asObject();
                    PyObject *_tmp_python_tmp_inplace_end;
                    {
                        PyObjectTempKeeper0 op1;
                        _tmp_python_tmp_inplace_end = ( op1.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op1.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_bytes.asObject() ) ).asObject() ) );
                    }
                    PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                    if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                    {
                        _python_var_bytes_read.assign0( _python_tmp_inplace_end.asObject() );
                    }
                }
                frame_guard.setLineNumber( 460 );
                {
                    PyObjectTempKeeper1 call3;
                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_chunks.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_bytes.asObject() ) ) );
                }
                frame_guard.setLineNumber( 461 );
                {
                    PyObjectTempKeeper0 cmp5;
                    if ( ( cmp5.assign( _python_var_bytes_read.asObject() ), RICH_COMPARE_BOOL_GT( cmp5.asObject0(), _python_var_rollback.asObject() ) ) )
                {
                    frame_guard.setLineNumber( 462 );
                    break;
                }
                }
                frame_guard.setLineNumber( 463 );
                if ( (!( CHECK_IF_TRUE( _python_var_bytes.asObject() ) )) )
                {
                    frame_guard.setLineNumber( 464 );
                    break;
                }

               CONSIDER_THREADING();
            }
            if ( ( _python_tmp_break_indicator == Py_True ) )
            {
                frame_guard.setLineNumber( 466 );
                SET_ATTRIBUTE( Py_True, _python_var_self.asObject(), _python_str_plain__done );
            }
        }
        frame_guard.setLineNumber( 468 );
        if ( (!( CHECK_IF_TRUE( _python_var_chunks.asObject() ) )) )
        {
            frame_guard.setLineNumber( 469 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_StopIteration, _python_tuple_empty ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 471 );
        {
            PyObjectTempKeeper1 call7;
            _python_var_chunk.assign1( ( call7.assign( LOOKUP_ATTRIBUTE( _python_str_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_chunks.asObject() ) ) );
        }
        frame_guard.setLineNumber( 472 );
        {
            PyObjectTempKeeper1 call11;
            PyObjectTempKeeper0 call12;
            PyObjectTempKeeper1 cmp9;
            _python_var_boundary.assign1( ( call11.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__find_boundary ) ), call12.assign( _python_var_chunk.asObject() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), call12.asObject0(), PyObjectTemporary( ( cmp9.assign( BUILTIN_LEN( _python_var_chunk.asObject() ) ), RICH_COMPARE_LT( cmp9.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__rollback ) ).asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 474 );
        if ( CHECK_IF_TRUE( _python_var_boundary.asObject() ) )
        {
            {
                frame_guard.setLineNumber( 475 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_var_boundary.asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_end.assign0( _python_tmp_element_1.asObject() );
                _python_var_next.assign0( _python_tmp_element_2.asObject() );
            }
            frame_guard.setLineNumber( 476 );
            {
                PyObjectTempKeeper1 call17;
                PyObjectTempKeeper0 slice14;
                DECREASE_REFCOUNT( ( call17.assign( LOOKUP_ATTRIBUTE( _python_var_stream.asObject(), _python_str_plain_unget ) ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), PyObjectTemporary( ( slice14.assign( _python_var_chunk.asObject() ), LOOKUP_SLICE( slice14.asObject0(), _python_var_next.asObject(), Py_None ) ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 477 );
            SET_ATTRIBUTE( Py_True, _python_var_self.asObject(), _python_str_plain__done );
            frame_guard.setLineNumber( 478 );
            {
                PyObjectTempKeeper0 slice19;
                return ( slice19.assign( _python_var_chunk.asObject() ), LOOKUP_SLICE( slice19.asObject0(), Py_None, _python_var_end.asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 482 );
            {
                PyObjectTempKeeper0 slice30;
                if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( slice30.assign( _python_var_chunk.asObject() ), LOOKUP_SLICE( slice30.asObject0(), Py_None, PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, _python_var_rollback.asObject() ) ).asObject() ) ) ).asObject() ) )) )
            {
                frame_guard.setLineNumber( 484 );
                SET_ATTRIBUTE( Py_True, _python_var_self.asObject(), _python_str_plain__done );
                frame_guard.setLineNumber( 485 );
                return _python_var_chunk.asObject1();
            }
            else
            {
                frame_guard.setLineNumber( 487 );
                {
                    PyObjectTempKeeper1 call25;
                    PyObjectTempKeeper0 slice22;
                    DECREASE_REFCOUNT( ( call25.assign( LOOKUP_ATTRIBUTE( _python_var_stream.asObject(), _python_str_plain_unget ) ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), PyObjectTemporary( ( slice22.assign( _python_var_chunk.asObject() ), LOOKUP_SLICE( slice22.asObject0(), PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, _python_var_rollback.asObject() ) ).asObject(), Py_None ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 488 );
                {
                    PyObjectTempKeeper0 slice27;
                    return ( slice27.assign( _python_var_chunk.asObject() ), LOOKUP_SLICE( slice27.asObject0(), Py_None, PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, _python_var_rollback.asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_next.updateLocalsDict( _python_var_end.updateLocalsDict( _python_var_boundary.updateLocalsDict( _python_var_chunk.updateLocalsDict( _python_var_bytes.updateLocalsDict( _python_var_chunks.updateLocalsDict( _python_var_bytes_read.updateLocalsDict( _python_var_rollback.updateLocalsDict( _python_var_stream.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser );
           frame_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__next__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__next__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__next__() got multiple values for keyword argument 'self'" );
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
                   "__next__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__next__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__next__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__next__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__next__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__next__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_data, PyObject *_python_par_eof )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_data( _python_str_plain_data, _python_par_data );
    PyObjectLocalParameterVariableNoDel _python_var_eof( _python_str_plain_eof, _python_par_eof );
    PyObjectLocalVariable _python_var_index( _python_str_plain_index );
    PyObjectLocalVariable _python_var_end( _python_str_plain_end );
    PyObjectLocalVariable _python_var_next( _python_str_plain_next );
    PyObjectLocalVariable _python_var_last( _python_str_plain_last );

    // Actual function code.
    static PyFrameObject *frame_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser );
        }

        frame_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_c97218bf4b5eda14be42683d31677341, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 500 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_index.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_data.asObject(), _python_str_plain_find ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__boundary ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 501 );
        if ( RICH_COMPARE_BOOL_LT( _python_var_index.asObject(), _python_int_0 ) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        else
        {
            frame_guard.setLineNumber( 504 );
            _python_var_end.assign0( _python_var_index.asObject() );
            frame_guard.setLineNumber( 505 );
            {
                PyObjectTempKeeper0 op3;
                _python_var_next.assign1( ( op3.assign( _python_var_index.asObject() ), BINARY_OPERATION_ADD( op3.asObject0(), PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__boundary ) ).asObject() ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 507 );
            _python_var_last.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_max ), _python_int_0, PyObjectTemporary( BINARY_OPERATION_SUB( _python_var_end.asObject(), _python_int_pos_1 ) ).asObject() ) );
            frame_guard.setLineNumber( 508 );
            {
                PyObjectTempKeeper0 slice5;
                PyObjectTempKeeper0 slice6;
                if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( ( slice5.assign( _python_var_data.asObject() ), slice6.assign( _python_var_last.asObject() ), LOOKUP_SLICE( slice5.asObject0(), slice6.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_last.asObject(), _python_int_pos_1 ) ).asObject() ) ) ).asObject(), _python_str_chr_10 ) )
            {
                {
                    frame_guard.setLineNumber( 509 );
                    PyObject *_python_tmp_inplace_start = _python_var_end.asObject();
                    PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceSubtract, _python_tmp_inplace_start, _python_int_pos_1 ) );
                    if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                    {
                        _python_var_end.assign0( _python_tmp_inplace_end.asObject() );
                    }
                }
            }
            }
            frame_guard.setLineNumber( 510 );
            _python_var_last.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_max ), _python_int_0, PyObjectTemporary( BINARY_OPERATION_SUB( _python_var_end.asObject(), _python_int_pos_1 ) ).asObject() ) );
            frame_guard.setLineNumber( 511 );
            {
                PyObjectTempKeeper0 slice8;
                PyObjectTempKeeper0 slice9;
                if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( ( slice8.assign( _python_var_data.asObject() ), slice9.assign( _python_var_last.asObject() ), LOOKUP_SLICE( slice8.asObject0(), slice9.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_last.asObject(), _python_int_pos_1 ) ).asObject() ) ) ).asObject(), _python_str_chr_13 ) )
            {
                {
                    frame_guard.setLineNumber( 512 );
                    PyObject *_python_tmp_inplace_start = _python_var_end.asObject();
                    PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceSubtract, _python_tmp_inplace_start, _python_int_pos_1 ) );
                    if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                    {
                        _python_var_end.assign0( _python_tmp_inplace_end.asObject() );
                    }
                }
            }
            }
            frame_guard.setLineNumber( 513 );
            {
                PyObjectTempKeeper0 make_tuple11;
                return ( make_tuple11.assign( _python_var_end.asObject() ), MAKE_TUPLE2( make_tuple11.asObject0(), _python_var_next.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_eof.updateLocalsDict( _python_var_data.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_last.updateLocalsDict( _python_var_next.updateLocalsDict( _python_var_end.updateLocalsDict( _python_var_index.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser );
           frame_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_data = NULL;
    PyObject *_python_par_eof = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_find_boundary() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_find_boundary() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_data == key )
            {
                if (unlikely( _python_par_data ))
                {
                    PyErr_Format( PyExc_TypeError, "_find_boundary() got multiple values for keyword argument 'data'" );
                    goto error_exit;
                }

                _python_par_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_eof == key )
            {
                if (unlikely( _python_par_eof ))
                {
                    PyErr_Format( PyExc_TypeError, "_find_boundary() got multiple values for keyword argument 'eof'" );
                    goto error_exit;
                }

                _python_par_eof = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_find_boundary() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_data, key ) )
            {
                if (unlikely( _python_par_data ))
                {
                    PyErr_Format( PyExc_TypeError, "_find_boundary() got multiple values for keyword argument 'data'" );
                    goto error_exit;
                }

                _python_par_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_eof, key ) )
            {
                if (unlikely( _python_par_eof ))
                {
                    PyErr_Format( PyExc_TypeError, "_find_boundary() got multiple values for keyword argument 'eof'" );
                    goto error_exit;
                }

                _python_par_eof = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_find_boundary() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "_find_boundary() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_find_boundary() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_find_boundary() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_find_boundary() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_find_boundary() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_find_boundary() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_find_boundary() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_find_boundary() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_find_boundary() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_find_boundary() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_find_boundary() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_find_boundary() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_find_boundary() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_data != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_find_boundary() got multiple values for keyword argument 'data'" );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_eof != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_find_boundary() got multiple values for keyword argument 'eof'" );
             goto error_exit;
         }

        _python_par_eof = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_eof == NULL )
    {
        _python_par_eof = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_eof );
    }


    return impl_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser( self, _python_par_self, _python_par_data, _python_par_eof );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_data );
    Py_XDECREF( _python_par_eof );

    return NULL;
}

static PyObject *dparse_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_exhaust_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_stream_or_iterable )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_stream_or_iterable( _python_str_plain_stream_or_iterable, _python_par_stream_or_iterable );
    PyObjectLocalVariable _python_var_iterator( _python_str_plain_iterator );
    PyObjectLocalVariable _python_var___( _python_str_plain___ );

    // Actual function code.
    _python_var_iterator.assign0( Py_None );
    static PyFrameObject *frame_function_8_exhaust_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_8_exhaust_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_8_exhaust_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_exhaust_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_8_exhaust_of_module_django__http__multipartparser );
        }

        frame_function_8_exhaust_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_f07b2e334453f20d92f2db1b04b7e706, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_8_exhaust_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_8_exhaust_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 522 );
        try
        {
            frame_guard.setLineNumber( 523 );
            _python_var_iterator.assign1( MAKE_ITERATOR( _python_var_stream_or_iterable.asObject() ) );
        }
        catch ( PythonException &_exception )
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
                frame_guard.setLineNumber( 525 );
                {
                    PyObjectTempKeeper0 call1;
                    _python_var_iterator.assign1( ( call1.assign( _mvar_django__http__multipartparser_ChunkIter.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_stream_or_iterable.asObject(), _python_int_pos_16384 ) ) );
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
        frame_guard.setLineNumber( 527 );
        if ( ( _python_var_iterator.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 528 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__http__multipartparser_MultiPartParserError.asObject0(), _python_unicode_digest_8a3718a700fc91bc1412ed7f06701470 ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        {
            frame_guard.setLineNumber( 530 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_iterator.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 530 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var___.assign0( _python_tmp_iter_value.asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_stream_or_iterable.updateLocalsDict( _python_var___.updateLocalsDict( _python_var_iterator.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_exhaust_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_8_exhaust_of_module_django__http__multipartparser );
           frame_function_8_exhaust_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_8_exhaust_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_stream_or_iterable = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "exhaust() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_stream_or_iterable == key )
            {
                if (unlikely( _python_par_stream_or_iterable ))
                {
                    PyErr_Format( PyExc_TypeError, "exhaust() got multiple values for keyword argument 'stream_or_iterable'" );
                    goto error_exit;
                }

                _python_par_stream_or_iterable = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_stream_or_iterable, key ) )
            {
                if (unlikely( _python_par_stream_or_iterable ))
                {
                    PyErr_Format( PyExc_TypeError, "exhaust() got multiple values for keyword argument 'stream_or_iterable'" );
                    goto error_exit;
                }

                _python_par_stream_or_iterable = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "exhaust() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "exhaust() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "exhaust() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "exhaust() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "exhaust() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "exhaust() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exhaust() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "exhaust() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exhaust() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "exhaust() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "exhaust() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "exhaust() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "exhaust() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_stream_or_iterable != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exhaust() got multiple values for keyword argument 'stream_or_iterable'" );
             goto error_exit;
         }

        _python_par_stream_or_iterable = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_8_exhaust_of_module_django__http__multipartparser( self, _python_par_stream_or_iterable );

error_exit:;

    Py_XDECREF( _python_par_stream_or_iterable );

    return NULL;
}

static PyObject *dparse_function_8_exhaust_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_exhaust_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_exhaust_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_parse_boundary_stream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_stream, PyObject *_python_par_max_header_size )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_stream( _python_str_plain_stream, _python_par_stream );
    PyObjectLocalParameterVariableNoDel _python_var_max_header_size( _python_str_plain_max_header_size, _python_par_max_header_size );
    PyObjectLocalVariable _python_var_chunk( _python_str_plain_chunk );
    PyObjectLocalVariable _python_var_header_end( _python_str_plain_header_end );
    PyObjectLocalVariable _python_var__parse_header( _python_str_plain__parse_header );
    PyObjectLocalVariable _python_var_header( _python_str_plain_header );
    PyObjectLocalVariable _python_var_TYPE( _python_str_plain_TYPE );
    PyObjectLocalVariable _python_var_outdict( _python_str_plain_outdict );
    PyObjectLocalVariable _python_var_line( _python_str_plain_line );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );
    PyObjectLocalVariable _python_var_params( _python_str_plain_params );

    // Actual function code.
    static PyFrameObject *frame_function_9_parse_boundary_stream_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_9_parse_boundary_stream_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_9_parse_boundary_stream_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_parse_boundary_stream_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_9_parse_boundary_stream_of_module_django__http__multipartparser );
        }

        frame_function_9_parse_boundary_stream_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_f81b1eaaa65c05d230fe95ab099ccdc2, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_9_parse_boundary_stream_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_9_parse_boundary_stream_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 540 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_chunk.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_stream.asObject(), _python_str_plain_read ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_max_header_size.asObject() ) ) );
        }
        frame_guard.setLineNumber( 545 );
        _python_var_header_end.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_chunk.asObject(), _python_str_plain_find ) ).asObject(), _python_str_digest_cb492b7df9b5c170d7c87527940eff3b ) );
        _python_var__parse_header.assign1( MAKE_FUNCTION_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser(  ) );
        frame_guard.setLineNumber( 555 );
        if ( RICH_COMPARE_BOOL_EQ( _python_var_header_end.asObject(), _python_int_neg_1 ) )
        {
            frame_guard.setLineNumber( 558 );
            {
                PyObjectTempKeeper1 call3;
                DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_stream.asObject(), _python_str_plain_unget ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_chunk.asObject() ) ) );
            }
            frame_guard.setLineNumber( 559 );
            {
                PyObjectTempKeeper0 make_tuple5;
                return ( make_tuple5.assign( _mvar_django__http__multipartparser_RAW.asObject0() ), MAKE_TUPLE3( make_tuple5.asObject0(), PyObjectTemporary( PyDict_New() ).asObject(), _python_var_stream.asObject() ) );
            }
        }
        frame_guard.setLineNumber( 561 );
        {
            PyObjectTempKeeper0 slice8;
            _python_var_header.assign1( ( slice8.assign( _python_var_chunk.asObject() ), LOOKUP_SLICE( slice8.asObject0(), Py_None, _python_var_header_end.asObject() ) ) );
        }
        frame_guard.setLineNumber( 565 );
        {
            PyObjectTempKeeper1 call14;
            PyObjectTempKeeper0 slice11;
            DECREASE_REFCOUNT( ( call14.assign( LOOKUP_ATTRIBUTE( _python_var_stream.asObject(), _python_str_plain_unget ) ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), PyObjectTemporary( ( slice11.assign( _python_var_chunk.asObject() ), LOOKUP_SLICE( slice11.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_header_end.asObject(), _python_int_pos_4 ) ).asObject(), Py_None ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 567 );
        _python_var_TYPE.assign0( _mvar_django__http__multipartparser_RAW.asObject0() );
        _python_var_outdict.assign1( PyDict_New() );
        {
            frame_guard.setLineNumber( 571 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_header.asObject(), _python_str_plain_split ) ).asObject(), _python_str_digest_81051bcc2cf1bedf378224b0a93e2877 ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 571 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_line.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 574 );
                try
                {
                    {
                        frame_guard.setLineNumber( 575 );
                        PyObject *_tmp_python_tmp_source_iter;
                        {
                            PyObjectTempKeeper0 call16;
                            _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call16.assign( _python_var__parse_header.asObject() ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), _python_var_line.asObject() ) ) ).asObject() );
                        }
                        PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_name.assign0( _python_tmp_element_1.asObject() );
                        {
                            frame_guard.setLineNumber( 575 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_element_2.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_value.assign0( _python_tmp_element_1.asObject() );
                            _python_var_params.assign0( _python_tmp_element_2.asObject() );
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
                        frame_guard.setLineNumber( 577 );
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
                frame_guard.setLineNumber( 579 );
                if ( RICH_COMPARE_BOOL_EQ( _python_var_name.asObject(), _python_unicode_digest_14528cf167eaad1427a0ec8c86f0853f ) )
                {
                    frame_guard.setLineNumber( 580 );
                    _python_var_TYPE.assign0( _mvar_django__http__multipartparser_FIELD.asObject0() );
                    frame_guard.setLineNumber( 581 );
                    if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_params.asObject(), _python_str_plain_get ) ).asObject(), _python_unicode_plain_filename ) ).asObject() ) )
                    {
                        frame_guard.setLineNumber( 582 );
                        _python_var_TYPE.assign0( _mvar_django__http__multipartparser_FILE.asObject0() );
                    }
                }
                frame_guard.setLineNumber( 584 );
                {
                    PyObjectTempKeeper0 make_tuple18;
                    {
                        PyObjectTemporary tmp_identifier( ( make_tuple18.assign( _python_var_value.asObject() ), MAKE_TUPLE2( make_tuple18.asObject0(), _python_var_params.asObject() ) ) );
                        PyObject *tmp_subscribed = _python_var_outdict.asObject();
                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_name.asObject() );
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 586 );
        {
            PyObjectTempKeeper0 cmp22;
            if ( ( cmp22.assign( _python_var_TYPE.asObject() ), RICH_COMPARE_BOOL_EQ( cmp22.asObject0(), _mvar_django__http__multipartparser_RAW.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 587 );
            {
                PyObjectTempKeeper1 call20;
                DECREASE_REFCOUNT( ( call20.assign( LOOKUP_ATTRIBUTE( _python_var_stream.asObject(), _python_str_plain_unget ) ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), _python_var_chunk.asObject() ) ) );
            }
        }
        }
        frame_guard.setLineNumber( 589 );
        {
            PyObjectTempKeeper0 make_tuple24;
            PyObjectTempKeeper0 make_tuple25;
            return ( make_tuple24.assign( _python_var_TYPE.asObject() ), make_tuple25.assign( _python_var_outdict.asObject() ), MAKE_TUPLE3( make_tuple24.asObject0(), make_tuple25.asObject0(), _python_var_stream.asObject() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_max_header_size.updateLocalsDict( _python_var_stream.updateLocalsDict( _python_var_params.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_line.updateLocalsDict( _python_var_outdict.updateLocalsDict( _python_var_TYPE.updateLocalsDict( _python_var_header.updateLocalsDict( _python_var__parse_header.updateLocalsDict( _python_var_header_end.updateLocalsDict( _python_var_chunk.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_parse_boundary_stream_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_9_parse_boundary_stream_of_module_django__http__multipartparser );
           frame_function_9_parse_boundary_stream_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_parse_boundary_stream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_max_header_size = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "parse_boundary_stream() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_stream == key )
            {
                if (unlikely( _python_par_stream ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_boundary_stream() got multiple values for keyword argument 'stream'" );
                    goto error_exit;
                }

                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_max_header_size == key )
            {
                if (unlikely( _python_par_max_header_size ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_boundary_stream() got multiple values for keyword argument 'max_header_size'" );
                    goto error_exit;
                }

                _python_par_max_header_size = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_stream, key ) )
            {
                if (unlikely( _python_par_stream ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_boundary_stream() got multiple values for keyword argument 'stream'" );
                    goto error_exit;
                }

                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_max_header_size, key ) )
            {
                if (unlikely( _python_par_max_header_size ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_boundary_stream() got multiple values for keyword argument 'max_header_size'" );
                    goto error_exit;
                }

                _python_par_max_header_size = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "parse_boundary_stream() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "parse_boundary_stream() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "parse_boundary_stream() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "parse_boundary_stream() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "parse_boundary_stream() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "parse_boundary_stream() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_boundary_stream() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "parse_boundary_stream() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_boundary_stream() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "parse_boundary_stream() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "parse_boundary_stream() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "parse_boundary_stream() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "parse_boundary_stream() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_stream != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_boundary_stream() got multiple values for keyword argument 'stream'" );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_max_header_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_boundary_stream() got multiple values for keyword argument 'max_header_size'" );
             goto error_exit;
         }

        _python_par_max_header_size = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_9_parse_boundary_stream_of_module_django__http__multipartparser( self, _python_par_stream, _python_par_max_header_size );

error_exit:;

    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_max_header_size );

    return NULL;
}

static PyObject *dparse_function_9_parse_boundary_stream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_9_parse_boundary_stream_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_parse_boundary_stream_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_line )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_line( _python_str_plain_line, _python_par_line );
    PyObjectLocalVariable _python_var_main_value_pair( _python_str_plain_main_value_pair );
    PyObjectLocalVariable _python_var_params( _python_str_plain_params );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser );
        }

        frame_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_b09fd63d1ace3003131c61499f073695, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 548 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper0 call1;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( _mvar_django__http__multipartparser_parse_header.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_line.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_main_value_pair.assign0( _python_tmp_element_1.asObject() );
            _python_var_params.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 549 );
        try
        {
            {
                frame_guard.setLineNumber( 550 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_main_value_pair.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_58, _python_int_pos_1 ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_name.assign0( _python_tmp_element_1.asObject() );
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

            if (true)
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 552 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_3a15d7dfc6a782045eb2c321de900c7a, _python_var_line.asObject() ) ).asObject() ) ).asObject() ) );
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
        frame_guard.setLineNumber( 553 );
        {
            PyObjectTempKeeper0 make_tuple3;
            PyObjectTempKeeper0 make_tuple5;
            return ( make_tuple5.assign( _python_var_name.asObject() ), MAKE_TUPLE2( make_tuple5.asObject0(), PyObjectTemporary( ( make_tuple3.assign( _python_var_value.asObject() ), MAKE_TUPLE2( make_tuple3.asObject0(), _python_var_params.asObject() ) ) ).asObject() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_line.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_params.updateLocalsDict( _python_var_main_value_pair.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser );
           frame_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_line = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_parse_header() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_line == key )
            {
                if (unlikely( _python_par_line ))
                {
                    PyErr_Format( PyExc_TypeError, "_parse_header() got multiple values for keyword argument 'line'" );
                    goto error_exit;
                }

                _python_par_line = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_line, key ) )
            {
                if (unlikely( _python_par_line ))
                {
                    PyErr_Format( PyExc_TypeError, "_parse_header() got multiple values for keyword argument 'line'" );
                    goto error_exit;
                }

                _python_par_line = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_parse_header() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "_parse_header() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_parse_header() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_parse_header() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_parse_header() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_parse_header() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_parse_header() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_parse_header() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_parse_header() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_parse_header() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_parse_header() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_parse_header() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_parse_header() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_line != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_parse_header() got multiple values for keyword argument 'line'" );
             goto error_exit;
         }

        _python_par_line = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser( self, _python_par_line );

error_exit:;

    Py_XDECREF( _python_par_line );

    return NULL;
}

static PyObject *dparse_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_10_Parser_of_module_django__http__multipartparser(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___iter__( _python_str_plain___iter__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_multipartparser );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser(  ) );
    _python_var___iter__.assign1( MAKE_FUNCTION_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser(  ) );
    return _python_var___iter__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_stream, PyObject *_python_par_boundary )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_stream( _python_str_plain_stream, _python_par_stream );
    PyObjectLocalParameterVariableNoDel _python_var_boundary( _python_str_plain_boundary, _python_par_boundary );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_10_Parser_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser );
        }

        frame_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_458217ce0a00c39363914ac6b87f8f73, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 593 );
        {
                PyObject *tmp_identifier = _python_var_stream.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__stream );
        }
        frame_guard.setLineNumber( 594 );
        {
                PyObjectTemporary tmp_identifier( BINARY_OPERATION_ADD( _python_str_digest_cfab1ba8c67c7c838db98d666f02a132, _python_var_boundary.asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__separator );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_boundary.updateLocalsDict( _python_var_stream.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser );
           frame_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_stream = NULL;
    PyObject *_python_par_boundary = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
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
            if ( found == false && _python_str_plain_stream == key )
            {
                if (unlikely( _python_par_stream ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'stream'" );
                    goto error_exit;
                }

                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_boundary == key )
            {
                if (unlikely( _python_par_boundary ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'boundary'" );
                    goto error_exit;
                }

                _python_par_boundary = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_stream, key ) )
            {
                if (unlikely( _python_par_stream ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'stream'" );
                    goto error_exit;
                }

                _python_par_stream = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_boundary, key ) )
            {
                if (unlikely( _python_par_boundary ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'boundary'" );
                    goto error_exit;
                }

                _python_par_boundary = value;

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
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
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
    args_usable_count = args_given < 3 ? args_given : 3;

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
         if (unlikely( _python_par_stream != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'stream'" );
             goto error_exit;
         }

        _python_par_stream = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_boundary != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'boundary'" );
             goto error_exit;
         }

        _python_par_boundary = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser( self, _python_par_self, _python_par_stream, _python_par_boundary );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_stream );
    Py_XDECREF( _python_par_boundary );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var_self;
    PyObjectLocalVariable python_var_boundarystream;
    PyObjectLocalVariable python_var_sub_stream;
};

static void _context_generator_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser_destructor( void *context_voidptr )
{
    _context_generator_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser_t *_python_context = (struct _context_generator_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser_t *)context_voidptr;

    delete _python_context;
}

static void function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser_t *_python_context = (_context_generator_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_boundarystream.setVariableName( _python_str_plain_boundarystream );
        _python_context->python_var_sub_stream.setVariableName( _python_str_plain_sub_stream );

        // Actual function code.
        static PyFrameObject *frame_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser ) )
        {
            if ( frame_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser" );
#endif
                Py_DECREF( frame_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser );
            }

            frame_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_7ea9254eee6f5eb57715f78a0240d05e, _module_django__http__multipartparser );
        }

        Py_INCREF( frame_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser );
        generator->m_frame = frame_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser;

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

            frame_guard.setLineNumber( 597 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper1 call2;
                _python_context->python_var_boundarystream.assign1( ( call1.assign( _mvar_django__http__multipartparser_InterBoundaryIter.asObject0() ), call2.assign( LOOKUP_ATTRIBUTE( _python_context->python_var_self.asObject(), _python_str_plain__stream ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_context->python_var_self.asObject(), _python_str_plain__separator ) ).asObject() ) ) );
            }
            {
                frame_guard.setLineNumber( 598 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_context->python_var_boundarystream.asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 598 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_sub_stream.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 600 );
                    {
                        PyObjectTempKeeper0 call4;
                        YIELD_VALUE( generator, ( call4.assign( _mvar_django__http__multipartparser_parse_boundary_stream.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_context->python_var_sub_stream.asObject(), _python_int_pos_1024 ) ) );
                    }

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

static PyObject *impl_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // Create context if any
    struct _context_generator_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser_t *_python_context = new _context_generator_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser_context,
            _python_str_plain___iter__,
            _codeobj_7ea9254eee6f5eb57715f78a0240d05e,
            _python_context,
            _context_generator_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function __iter__" );
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
static PyObject *fparse_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__iter__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                   "__iter__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__iter__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_parse_header_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_line )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_line( _python_str_plain_line, _python_par_line );
    PyObjectLocalVariable _python_var_plist( _python_str_plain_plist );
    PyObjectLocalVariable _python_var_key( _python_str_plain_key );
    PyObjectLocalVariable _python_var_pdict( _python_str_plain_pdict );
    PyObjectLocalVariable _python_var_p( _python_str_plain_p );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_11_parse_header_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_11_parse_header_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_11_parse_header_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_parse_header_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_11_parse_header_of_module_django__http__multipartparser );
        }

        frame_function_11_parse_header_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_eb6480a67904596312b994e77850ef46, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_11_parse_header_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_11_parse_header_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 607 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_plist.assign1( ( call1.assign( _mvar_django__http__multipartparser__parse_header_params.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_str_chr_59, _python_var_line.asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 608 );
        _python_var_key.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_plist.asObject(), _python_str_plain_pop ) ).asObject(), _python_int_0 ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_str_plain_decode ) ).asObject(), _python_unicode_plain_ascii ) );
        _python_var_pdict.assign1( PyDict_New() );
        {
            frame_guard.setLineNumber( 610 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_plist.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 610 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_p.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 611 );
                _python_var_i.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_p.asObject(), _python_str_plain_find ) ).asObject(), _python_str_chr_61 ) );
                frame_guard.setLineNumber( 612 );
                if ( RICH_COMPARE_BOOL_GE( _python_var_i.asObject(), _python_int_0 ) )
                {
                    frame_guard.setLineNumber( 613 );
                    {
                        PyObjectTempKeeper0 slice3;
                        _python_var_name.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice3.assign( _python_var_p.asObject() ), LOOKUP_SLICE( slice3.asObject0(), Py_None, _python_var_i.asObject() ) ) ).asObject(), _python_str_plain_strip ) ).asObject() ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_str_plain_decode ) ).asObject(), _python_unicode_plain_ascii ) );
                    }
                    frame_guard.setLineNumber( 614 );
                    {
                        PyObjectTempKeeper0 slice6;
                        _python_var_value.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice6.assign( _python_var_p.asObject() ), LOOKUP_SLICE( slice6.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_i.asObject(), _python_int_pos_1 ) ).asObject(), Py_None ) ) ).asObject(), _python_str_plain_strip ) ).asObject() ) );
                    }
                    frame_guard.setLineNumber( 615 );
                    {
                        PyObjectTempKeeper1 cmp9;
                        PyObjectTempKeeper1 keeper_0;
                        if ( ( RICH_COMPARE_BOOL_GE( PyObjectTemporary( BUILTIN_LEN( _python_var_value.asObject() ) ).asObject(), _python_int_pos_2 ) && ( ( cmp9.assign( LOOKUP_INDEX_SLICE( _python_var_value.asObject(), 0, 1 ) ), RICH_COMPARE_BOOL_EQ( cmp9.asObject0(), keeper_0.assign( LOOKUP_INDEX_SLICE( _python_var_value.asObject(), -1, PY_SSIZE_T_MAX ) ) ) ) && RICH_COMPARE_BOOL_EQ( PyObjectTemporary( keeper_0.asObject() ).asObject(), _python_str_chr_34 ) ) ) )
                    {
                        frame_guard.setLineNumber( 616 );
                        _python_var_value.assign1( LOOKUP_INDEX_SLICE( _python_var_value.asObject(), 1, -1 ) );
                        frame_guard.setLineNumber( 617 );
                        _python_var_value.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_replace ) ).asObject(), _python_str_digest_7f8137798425a7fed2b8c5703b70d078, _python_str_chr_92 ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_str_digest_3bd864034f446da13581129bb17f9191, _python_str_chr_34 ) );
                    }
                    }
                    frame_guard.setLineNumber( 618 );
                    {
                            PyObject *tmp_identifier = _python_var_value.asObject();
                            PyObject *tmp_subscribed = _python_var_pdict.asObject();
                            SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_name.asObject() );
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 619 );
        {
            PyObjectTempKeeper0 make_tuple11;
            return ( make_tuple11.assign( _python_var_key.asObject() ), MAKE_TUPLE2( make_tuple11.asObject0(), _python_var_pdict.asObject() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_line.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_pdict.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_plist.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_11_parse_header_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_11_parse_header_of_module_django__http__multipartparser );
           frame_function_11_parse_header_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_parse_header_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_line = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "parse_header() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_line == key )
            {
                if (unlikely( _python_par_line ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_header() got multiple values for keyword argument 'line'" );
                    goto error_exit;
                }

                _python_par_line = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_line, key ) )
            {
                if (unlikely( _python_par_line ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_header() got multiple values for keyword argument 'line'" );
                    goto error_exit;
                }

                _python_par_line = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "parse_header() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "parse_header() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "parse_header() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "parse_header() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "parse_header() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_header() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_header() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_header() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_header() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "parse_header() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "parse_header() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "parse_header() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "parse_header() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_line != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_header() got multiple values for keyword argument 'line'" );
             goto error_exit;
         }

        _python_par_line = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_11_parse_header_of_module_django__http__multipartparser( self, _python_par_line );

error_exit:;

    Py_XDECREF( _python_par_line );

    return NULL;
}

static PyObject *dparse_function_11_parse_header_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_11_parse_header_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_parse_header_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12__parse_header_params_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );
    PyObjectLocalVariable _python_var_plist( _python_str_plain_plist );
    PyObjectLocalVariable _python_var_end( _python_str_plain_end );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );

    // Actual function code.
    _python_var_plist.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_12__parse_header_params_of_module_django__http__multipartparser = NULL;

    if ( isFrameUnusable( frame_function_12__parse_header_params_of_module_django__http__multipartparser ) )
    {
        if ( frame_function_12__parse_header_params_of_module_django__http__multipartparser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12__parse_header_params_of_module_django__http__multipartparser" );
#endif
            Py_DECREF( frame_function_12__parse_header_params_of_module_django__http__multipartparser );
        }

        frame_function_12__parse_header_params_of_module_django__http__multipartparser = MAKE_FRAME( _codeobj_1fa1ca40f16dd5c4aac3a57d49d54d8f, _module_django__http__multipartparser );
    }

    FrameGuard frame_guard( frame_function_12__parse_header_params_of_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_function_12__parse_header_params_of_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 623 );
        while( true )
        {
            frame_guard.setLineNumber( 623 );
            if ( (!( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_s.asObject(), 0, 1 ) ).asObject(), _python_str_chr_59 ) )) )
            {
                frame_guard.setLineNumber( 623 );
                break;
            }
            frame_guard.setLineNumber( 624 );
            _python_var_s.assign1( LOOKUP_INDEX_SLICE( _python_var_s.asObject(), 1, PY_SSIZE_T_MAX ) );
            frame_guard.setLineNumber( 625 );
            _python_var_end.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_find ) ).asObject(), _python_str_chr_59 ) );
            frame_guard.setLineNumber( 626 );
            while( true )
            {
                frame_guard.setLineNumber( 626 );
                {
                    PyObjectTempKeeper1 call1;
                    if ( (!( ( RICH_COMPARE_BOOL_GT( _python_var_end.asObject(), _python_int_0 ) && CHECK_IF_TRUE( PyObjectTemporary( BINARY_OPERATION_REMAINDER( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_count ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_chr_34, _python_int_0, _python_var_end.asObject() ) ) ).asObject(), _python_int_pos_2 ) ).asObject() ) ) )) )
                {
                    frame_guard.setLineNumber( 626 );
                    break;
                }
                }
                frame_guard.setLineNumber( 627 );
                {
                    PyObjectTempKeeper1 call5;
                    _python_var_end.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_find ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_chr_59, PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_end.asObject(), _python_int_pos_1 ) ).asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
            frame_guard.setLineNumber( 628 );
            if ( RICH_COMPARE_BOOL_LT( _python_var_end.asObject(), _python_int_0 ) )
            {
                frame_guard.setLineNumber( 629 );
                _python_var_end.assign1( BUILTIN_LEN( _python_var_s.asObject() ) );
            }
            frame_guard.setLineNumber( 630 );
            {
                PyObjectTempKeeper0 slice8;
                _python_var_f.assign1( ( slice8.assign( _python_var_s.asObject() ), LOOKUP_SLICE( slice8.asObject0(), Py_None, _python_var_end.asObject() ) ) );
            }
            frame_guard.setLineNumber( 631 );
            {
                PyObjectTempKeeper1 call11;
                DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( _python_var_plist.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_strip ) ).asObject() ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 632 );
            {
                PyObjectTempKeeper0 slice13;
                _python_var_s.assign1( ( slice13.assign( _python_var_s.asObject() ), LOOKUP_SLICE( slice13.asObject0(), _python_var_end.asObject(), Py_None ) ) );
            }

           CONSIDER_THREADING();
        }
        frame_guard.setLineNumber( 633 );
        return _python_var_plist.asObject1();
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_s.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_end.updateLocalsDict( _python_var_plist.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_12__parse_header_params_of_module_django__http__multipartparser )
        {
           Py_DECREF( frame_function_12__parse_header_params_of_module_django__http__multipartparser );
           frame_function_12__parse_header_params_of_module_django__http__multipartparser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_12__parse_header_params_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_parse_header_params() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_parse_header_params() got multiple values for keyword argument 's'" );
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
                    PyErr_Format( PyExc_TypeError, "_parse_header_params() got multiple values for keyword argument 's'" );
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
                   "_parse_header_params() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "_parse_header_params() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_parse_header_params() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_parse_header_params() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_parse_header_params() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_parse_header_params() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_parse_header_params() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_parse_header_params() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_parse_header_params() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_parse_header_params() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_parse_header_params() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_parse_header_params() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_parse_header_params() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_parse_header_params() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_12__parse_header_params_of_module_django__http__multipartparser( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_12__parse_header_params_of_module_django__http__multipartparser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_12__parse_header_params_of_module_django__http__multipartparser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12__parse_header_params_of_module_django__http__multipartparser( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_11_parse_header_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_parse_header_of_module_django__http__multipartparser,
        dparse_function_11_parse_header_of_module_django__http__multipartparser,
        _python_str_plain_parse_header,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_eb6480a67904596312b994e77850ef46,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_777c34760398518ee99df7cbc0144690
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12__parse_header_params_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12__parse_header_params_of_module_django__http__multipartparser,
        dparse_function_12__parse_header_params_of_module_django__http__multipartparser,
        _python_str_plain__parse_header_params,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1fa1ca40f16dd5c4aac3a57d49d54d8f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser,
        dparse_function_1___init___of_class_10_Parser_of_module_django__http__multipartparser,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_458217ce0a00c39363914ac6b87f8f73,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser,
        dparse_function_1___init___of_class_3_MultiPartParser_of_module_django__http__multipartparser,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c9ba2ba5d2cb2878e2ffcda1f801bc9f,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_2ed95a743cd1e149b941c169580e067d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser,
        dparse_function_1___init___of_class_4_LazyStream_of_module_django__http__multipartparser,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_99440231c8b24567c645e524df6b7bc9,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_9b7d85e43301dde3fa8a34eb035cc138
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser,
        dparse_function_1___init___of_class_5_ChunkIter_of_module_django__http__multipartparser,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b595561f71077db799b7cf08c7c609dc,
        INCREASE_REFCOUNT( _python_tuple_int_pos_65536_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser,
        dparse_function_1___init___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_dab84cf5ea675bcf656ea1b127b8fd13,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser,
        dparse_function_1___init___of_class_7_BoundaryIter_of_module_django__http__multipartparser,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d16afbf8ed6c00455e035b1a7a4f3011,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser,
        dparse_function_1__parse_header_of_function_9_parse_boundary_stream_of_module_django__http__multipartparser,
        _python_str_plain__parse_header,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b09fd63d1ace3003131c61499f073695,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser( PyObjectSharedLocalVariable &python_closure_self, PyObjectSharedLocalVariable &python_closure_size )
{
    struct _context_common_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t *_python_context = new _context_common_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_t;
    _python_context->ref_count = 1;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_self.shareWith( python_closure_self );
    _python_context->python_closure_size.shareWith( python_closure_size );

    return Nuitka_Function_New(
        fparse_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser,
        dparse_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser,
        _python_str_plain_parts,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7a2d3340b8a23b3a94a188f5507d9b47,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None,
        _python_context,
        _context_common_function_1_parts_of_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser_destructor
    );
}



static PyObject *MAKE_FUNCTION_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser(  )
{
    return Nuitka_Function_New(
        fparse_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser,
        dparse_function_2___iter___of_class_10_Parser_of_module_django__http__multipartparser,
        _python_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7ea9254eee6f5eb57715f78a0240d05e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );
}



static PyObject *MAKE_FUNCTION_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser,
        dparse_function_2___iter___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser,
        _python_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_44ee99b1070e050a8f9e06de2731cec1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser,
        dparse_function_2___iter___of_class_7_BoundaryIter_of_module_django__http__multipartparser,
        _python_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_758fe4db0cdab321c6ea6ab0155a5b96,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser,
        dparse_function_2___next___of_class_5_ChunkIter_of_module_django__http__multipartparser,
        _python_str_plain___next__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9ada90c76478f9faf4cac12fc40ee84a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser,
        dparse_function_2_parse_of_class_3_MultiPartParser_of_module_django__http__multipartparser,
        _python_str_plain_parse,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d9da4e4cc72561032fe413b4666a9912,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_27bda43f0fb6e1a64aafddbbf4cc5627
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser,
        dparse_function_2_tell_of_class_4_LazyStream_of_module_django__http__multipartparser,
        _python_str_plain_tell,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8357fd8441826b95cb1d8f89fc7348c4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser,
        dparse_function_3___iter___of_class_5_ChunkIter_of_module_django__http__multipartparser,
        _python_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b4dc972a7fffc899f6e4b31748629257,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser,
        dparse_function_3___next___of_class_6_InterBoundaryIter_of_module_django__http__multipartparser,
        _python_str_plain___next__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1a1f7aaa3c87953e5c66494d1f4521dd,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser,
        dparse_function_3___next___of_class_7_BoundaryIter_of_module_django__http__multipartparser,
        _python_str_plain___next__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f023f78322b7f7302ab5aefe6584837b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser,
        dparse_function_3_handle_file_complete_of_class_3_MultiPartParser_of_module_django__http__multipartparser,
        _python_str_plain_handle_file_complete,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8dcb89227754dee950465a1bc4c97520,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_c6886d784338e201908efe5afc7b4563
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser,
        dparse_function_3_read_of_class_4_LazyStream_of_module_django__http__multipartparser,
        _python_str_plain_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_900b0febd26901f9d0a0e32169af33ff,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser,
        dparse_function_4_IE_sanitize_of_class_3_MultiPartParser_of_module_django__http__multipartparser,
        _python_str_plain_IE_sanitize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f2eb990950dc6d99f2d059db532a5d1f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_5d843b275da6563a78069693ff7f0cb6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser,
        dparse_function_4___next___of_class_4_LazyStream_of_module_django__http__multipartparser,
        _python_str_plain___next__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_722025ca043c3754794f80d31a9d18b4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_8d3b565c4ee6c0113a42229694d2fdb7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser,
        dparse_function_4__find_boundary_of_class_7_BoundaryIter_of_module_django__http__multipartparser,
        _python_str_plain__find_boundary,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c97218bf4b5eda14be42683d31677341,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_5bd2e96938f5c0294b9b9ff4d2774641
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser,
        dparse_function_5_close_of_class_4_LazyStream_of_module_django__http__multipartparser,
        _python_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_62159141f6d4553f6d8fcf51d86bf75b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_108b64fdf3732996b5eac4ddc08276f6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser,
        dparse_function_6___iter___of_class_4_LazyStream_of_module_django__http__multipartparser,
        _python_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9abd230fe924fbcba8ddbf32daade4ae,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser,
        dparse_function_7_unget_of_class_4_LazyStream_of_module_django__http__multipartparser,
        _python_str_plain_unget,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_66eefe4bf78b4ba0fce1a2e6e87667f5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_17a8c8e34282c90ad6e900bf06b8ab27
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser,
        dparse_function_8__update_unget_history_of_class_4_LazyStream_of_module_django__http__multipartparser,
        _python_str_plain__update_unget_history,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0068fb05c655fe08a222525fbf3fea26,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_29db6796d07def2df2f6a78e0f6d8a69
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_exhaust_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_exhaust_of_module_django__http__multipartparser,
        dparse_function_8_exhaust_of_module_django__http__multipartparser,
        _python_str_plain_exhaust,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f07b2e334453f20d92f2db1b04b7e706,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_93afb0fedd8067e219444eae7715ebac
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_parse_boundary_stream_of_module_django__http__multipartparser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_parse_boundary_stream_of_module_django__http__multipartparser,
        dparse_function_9_parse_boundary_stream_of_module_django__http__multipartparser,
        _python_str_plain_parse_boundary_stream,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f81b1eaaa65c05d230fe95ab099ccdc2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__multipartparser,
        _python_unicode_digest_b055809241c4622fb195cffc326c76df
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.http.multipartparser",   /* m_name */
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

MOD_INIT_DECL( django__http__multipartparser )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__http__multipartparser );
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

    // puts( "in initdjango__http__multipartparser" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__http__multipartparser = Py_InitModule4(
        "django.http.multipartparser",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__http__multipartparser = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__http__multipartparser = (PyDictObject *)((PyModuleObject *)_module_django__http__multipartparser)->md_dict;

    assertObject( _module_django__http__multipartparser );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_9496dd8cdd262335d383c92a1544136a, _module_django__http__multipartparser );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__http__multipartparser );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__http__multipartparser != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_c47ee3289517747a90e27b0694099738 );
    UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_4c1cb4916c207db56f3dc41ddcc4440d );
    PyFrameObject *frame_module_django__http__multipartparser = MAKE_FRAME( _codeobj_3d2934f99a8643a4ed92b931b212c715, _module_django__http__multipartparser );

    FrameGuard frame_guard( frame_module_django__http__multipartparser );
    try
    {
        assert( Py_REFCNT( frame_module_django__http__multipartparser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_base64, IMPORT_MODULE( _python_str_plain_base64, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_cgi, IMPORT_MODULE( _python_str_plain_cgi, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_SuspiciousMultipartForm, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, _python_list_str_plain_SuspiciousMultipartForm_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SuspiciousMultipartForm ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_MultiValueDict, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_36fff8b06be9a51fbe6af4a1029911c0, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, _python_list_str_plain_MultiValueDict_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_MultiValueDict ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, _python_list_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_unescape_entities, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1863593e728059f3c0ba0d01334514dd, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, _python_list_str_plain_unescape_entities_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unescape_entities ) );
        frame_guard.setLineNumber( 19 );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_StopUpload, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5990aaa6131f7182dcb5ddd3561af330, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, _python_list_ece4b6f737fb05dc6ffc7a1e29d07e03_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_StopUpload ) );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_SkipFile, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5990aaa6131f7182dcb5ddd3561af330, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, _python_list_ece4b6f737fb05dc6ffc7a1e29d07e03_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SkipFile ) );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_StopFutureHandlers, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5990aaa6131f7182dcb5ddd3561af330, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, ((PyModuleObject *)_module_django__http__multipartparser)->md_dict, _python_list_ece4b6f737fb05dc6ffc7a1e29d07e03_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_StopFutureHandlers ) );
        UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain___all__, _python_tuple_874787c5a6aaf0e36201bb70274732d0_tuple );
        {
            frame_guard.setLineNumber( 23 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_Exception ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_MultiPartParserError_of_module_django__http__multipartparser(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__http__multipartparser___metaclass__.isInitialized( false ) ? _mvar_django__http__multipartparser___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_MultiPartParserError, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_MultiPartParserError, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 26 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_Exception ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_InputStreamExhausted_of_module_django__http__multipartparser(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__http__multipartparser___metaclass__.isInitialized( false ) ? _mvar_django__http__multipartparser___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_InputStreamExhausted, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_InputStreamExhausted, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_RAW, _python_unicode_plain_raw );
        UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_FILE, _python_unicode_plain_file );
        UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_FIELD, _python_unicode_plain_field );
        {
            frame_guard.setLineNumber( 36 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_MultiPartParser_of_module_django__http__multipartparser(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__http__multipartparser___metaclass__.isInitialized( false ) ? _mvar_django__http__multipartparser___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_MultiPartParser, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_MultiPartParser, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 268 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__multipartparser_six.asObject0(), _python_str_plain_Iterator ) ).asObject() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_LazyStream_of_module_django__http__multipartparser(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__http__multipartparser___metaclass__.isInitialized( false ) ? _mvar_django__http__multipartparser___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call15;
                _tmp_python_tmp_class = ( call13.assign( _python_tmp_metaclass.asObject() ), call15.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_str_plain_LazyStream, call15.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_LazyStream, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 379 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__multipartparser_six.asObject0(), _python_str_plain_Iterator ) ).asObject() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_5_ChunkIter_of_module_django__http__multipartparser(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__http__multipartparser___metaclass__.isInitialized( false ) ? _mvar_django__http__multipartparser___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call17;
                PyObjectTempKeeper0 call19;
                _tmp_python_tmp_class = ( call17.assign( _python_tmp_metaclass.asObject() ), call19.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_str_plain_ChunkIter, call19.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_ChunkIter, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 402 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__multipartparser_six.asObject0(), _python_str_plain_Iterator ) ).asObject() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_6_InterBoundaryIter_of_module_django__http__multipartparser(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__http__multipartparser___metaclass__.isInitialized( false ) ? _mvar_django__http__multipartparser___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call21;
                PyObjectTempKeeper0 call23;
                _tmp_python_tmp_class = ( call21.assign( _python_tmp_metaclass.asObject() ), call23.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), _python_str_plain_InterBoundaryIter, call23.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_InterBoundaryIter, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 419 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__multipartparser_six.asObject0(), _python_str_plain_Iterator ) ).asObject() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_7_BoundaryIter_of_module_django__http__multipartparser(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__http__multipartparser___metaclass__.isInitialized( false ) ? _mvar_django__http__multipartparser___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call25;
                PyObjectTempKeeper0 call27;
                _tmp_python_tmp_class = ( call25.assign( _python_tmp_metaclass.asObject() ), call27.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), _python_str_plain_BoundaryIter, call27.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_BoundaryIter, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_exhaust, MAKE_FUNCTION_function_8_exhaust_of_module_django__http__multipartparser(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_parse_boundary_stream, MAKE_FUNCTION_function_9_parse_boundary_stream_of_module_django__http__multipartparser(  ) );
        {
            frame_guard.setLineNumber( 591 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_10_Parser_of_module_django__http__multipartparser(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__http__multipartparser___metaclass__.isInitialized( false ) ? _mvar_django__http__multipartparser___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call29;
                PyObjectTempKeeper0 call31;
                _tmp_python_tmp_class = ( call29.assign( _python_tmp_metaclass.asObject() ), call31.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), _python_str_plain_Parser, call31.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_Parser, _python_tmp_class.asObject() );
        }
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__http__multipartparser)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain_parse_header, MAKE_FUNCTION_function_11_parse_header_of_module_django__http__multipartparser(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__http__multipartparser, (Nuitka_StringObject *)_python_str_plain__parse_header_params, MAKE_FUNCTION_function_12__parse_header_params_of_module_django__http__multipartparser(  ) );

   return MOD_RETURN_VALUE( _module_django__http__multipartparser );
}
