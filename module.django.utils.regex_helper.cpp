// Generated code for Python source for module 'django.utils.regex_helper'
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

// The _module_django__utils__regex_helper is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__regex_helper;
PyDictObject *_moduledict_django__utils__regex_helper;

// The module level variables.
static PyObjectGlobalVariable_django__utils__regex_helper _mvar_django__utils__regex_helper_Choice( &_module_django__utils__regex_helper, &_python_str_plain_Choice );
static PyObjectGlobalVariable_django__utils__regex_helper _mvar_django__utils__regex_helper_ESCAPE_MAPPINGS( &_module_django__utils__regex_helper, &_python_str_plain_ESCAPE_MAPPINGS );
static PyObjectGlobalVariable_django__utils__regex_helper _mvar_django__utils__regex_helper_Group( &_module_django__utils__regex_helper, &_python_str_plain_Group );
static PyObjectGlobalVariable_django__utils__regex_helper _mvar_django__utils__regex_helper_NonCapture( &_module_django__utils__regex_helper, &_python_str_plain_NonCapture );
static PyObjectGlobalVariable_django__utils__regex_helper _mvar_django__utils__regex_helper___metaclass__( &_module_django__utils__regex_helper, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__regex_helper _mvar_django__utils__regex_helper_contains( &_module_django__utils__regex_helper, &_python_str_plain_contains );
static PyObjectGlobalVariable_django__utils__regex_helper _mvar_django__utils__regex_helper_flatten_result( &_module_django__utils__regex_helper, &_python_str_plain_flatten_result );
static PyObjectGlobalVariable_django__utils__regex_helper _mvar_django__utils__regex_helper_get_quantifier( &_module_django__utils__regex_helper, &_python_str_plain_get_quantifier );
static PyObjectGlobalVariable_django__utils__regex_helper _mvar_django__utils__regex_helper_next_char( &_module_django__utils__regex_helper, &_python_str_plain_next_char );
static PyObjectGlobalVariable_django__utils__regex_helper _mvar_django__utils__regex_helper_six( &_module_django__utils__regex_helper, &_python_str_plain_six );
static PyObjectGlobalVariable_django__utils__regex_helper _mvar_django__utils__regex_helper_walk_to_end( &_module_django__utils__regex_helper, &_python_str_plain_walk_to_end );
static PyObjectGlobalVariable_django__utils__regex_helper _mvar_django__utils__regex_helper_zip( &_module_django__utils__regex_helper, &_python_str_plain_zip );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Choice_of_module_django__utils__regex_helper(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_Group_of_module_django__utils__regex_helper(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_NonCapture_of_module_django__utils__regex_helper(  );


static PyObject *MAKE_FUNCTION_function_4_normalize_of_module_django__utils__regex_helper(  );


static PyObject *MAKE_FUNCTION_function_5_next_char_of_module_django__utils__regex_helper(  );


static PyObject *MAKE_FUNCTION_function_6_walk_to_end_of_module_django__utils__regex_helper(  );


static PyObject *MAKE_FUNCTION_function_7_get_quantifier_of_module_django__utils__regex_helper(  );


static PyObject *MAKE_FUNCTION_function_8_contains_of_module_django__utils__regex_helper(  );


static PyObject *MAKE_FUNCTION_function_9_flatten_result_of_module_django__utils__regex_helper(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Choice_of_module_django__utils__regex_helper(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_regex_helper );
    _python_var___doc__.assign0( _python_unicode_digest_4ce0caae86200cf590042fe2f9708dda );
    return _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_Group_of_module_django__utils__regex_helper(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_regex_helper );
    _python_var___doc__.assign0( _python_unicode_digest_f8fa37e8e744e1a9a821c6357bdbef34 );
    return _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_NonCapture_of_module_django__utils__regex_helper(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_regex_helper );
    _python_var___doc__.assign0( _python_unicode_digest_156ef3b5cc2ff99075fbc5a6c188a328 );
    return _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


static PyObject *impl_function_4_normalize_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject *_python_par_pattern )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_pattern( _python_str_plain_pattern, _python_par_pattern );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );
    PyObjectLocalVariable _python_var_non_capturing_groups( _python_str_plain_non_capturing_groups );
    PyObjectLocalVariable _python_var_consume_next( _python_str_plain_consume_next );
    PyObjectLocalVariable _python_var_pattern_iter( _python_str_plain_pattern_iter );
    PyObjectLocalVariable _python_var_num_args( _python_str_plain_num_args );
    PyObjectLocalVariable _python_var_ch( _python_str_plain_ch );
    PyObjectLocalVariable _python_var_escaped( _python_str_plain_escaped );
    PyObjectLocalVariable _python_var_start( _python_str_plain_start );
    PyObjectLocalVariable _python_var_inner( _python_str_plain_inner );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );
    PyObjectLocalVariable _python_var_terminal_char( _python_str_plain_terminal_char );
    PyObjectLocalVariable _python_var_param( _python_str_plain_param );
    PyObjectLocalVariable _python_var_count( _python_str_plain_count );

    // Actual function code.
    _python_var_result.assign1( PyList_New( 0 ) );
    _python_var_non_capturing_groups.assign1( PyList_New( 0 ) );
    _python_var_consume_next.assign0( Py_True );
    static PyFrameObject *frame_function_4_normalize_of_module_django__utils__regex_helper = NULL;

    if ( isFrameUnusable( frame_function_4_normalize_of_module_django__utils__regex_helper ) )
    {
        if ( frame_function_4_normalize_of_module_django__utils__regex_helper )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_normalize_of_module_django__utils__regex_helper" );
#endif
            Py_DECREF( frame_function_4_normalize_of_module_django__utils__regex_helper );
        }

        frame_function_4_normalize_of_module_django__utils__regex_helper = MAKE_FRAME( _codeobj_923c28ff2ac4105cfafcd5c04671ac07, _module_django__utils__regex_helper );
    }

    FrameGuard frame_guard( frame_function_4_normalize_of_module_django__utils__regex_helper );
    try
    {
        assert( Py_REFCNT( frame_function_4_normalize_of_module_django__utils__regex_helper ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 75 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_pattern_iter.assign1( ( call1.assign( _mvar_django__utils__regex_helper_next_char.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( MAKE_ITERATOR( _python_var_pattern.asObject() ) ).asObject() ) ) );
        }
        _python_var_num_args.assign0( _python_int_0 );
        frame_guard.setLineNumber( 81 );
        try
        {
            {
                frame_guard.setLineNumber( 82 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_pattern_iter.asObject() ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
            }
        }
        catch ( PythonException &_exception )
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

            if ( _exception.matches( PyExc_StopIteration ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 84 );
                return MAKE_LIST1( MAKE_TUPLE2( _python_unicode_empty, PyObjectTemporary( PyList_New( 0 ) ).asObject() ) );
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
        frame_guard.setLineNumber( 86 );
        try
        {
            frame_guard.setLineNumber( 87 );
            while( true )
            {
                frame_guard.setLineNumber( 88 );
                if ( CHECK_IF_TRUE( _python_var_escaped.asObject() ) )
                {
                    frame_guard.setLineNumber( 89 );
                    {
                        PyObjectTempKeeper1 call3;
                        DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_ch.asObject() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 90 );
                    if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_dot ) )
                    {
                        frame_guard.setLineNumber( 92 );
                        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_append ) ).asObject(), _python_unicode_dot ) );
                    }
                    else
                    {
                        frame_guard.setLineNumber( 93 );
                        if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_124 ) )
                        {
                            frame_guard.setLineNumber( 95 );
                            RAISE_EXCEPTION_WITH_TYPE( PyExc_NotImplementedError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                        }
                        else
                        {
                            frame_guard.setLineNumber( 96 );
                            if ( (!( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_94 ) )) )
                            {
                                frame_guard.setLineNumber( 98 );
                                if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_36 ) )
                                {
                                    frame_guard.setLineNumber( 99 );
                                    break;
                                }
                                else
                                {
                                    frame_guard.setLineNumber( 100 );
                                    if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_41 ) )
                                    {
                                        frame_guard.setLineNumber( 107 );
                                        _python_var_start.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_non_capturing_groups.asObject(), _python_str_plain_pop ) ).asObject() ) );
                                        frame_guard.setLineNumber( 108 );
                                        {
                                            PyObjectTempKeeper0 call8;
                                            PyObjectTempKeeper0 slice5;
                                            _python_var_inner.assign1( ( call8.assign( _mvar_django__utils__regex_helper_NonCapture.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( ( slice5.assign( _python_var_result.asObject() ), LOOKUP_SLICE( slice5.asObject0(), _python_var_start.asObject(), Py_None ) ) ).asObject() ) ) );
                                        }
                                        frame_guard.setLineNumber( 109 );
                                        {
                                            PyObjectTempKeeper1 op13;
                                            PyObjectTempKeeper0 slice10;
                                            _python_var_result.assign1( ( op13.assign( ( slice10.assign( _python_var_result.asObject() ), LOOKUP_SLICE( slice10.asObject0(), Py_None, _python_var_start.asObject() ) ) ), BINARY_OPERATION_ADD( op13.asObject0(), PyObjectTemporary( MAKE_LIST1( _python_var_inner.asObject1() ) ).asObject() ) ) );
                                        }
                                    }
                                    else
                                    {
                                        frame_guard.setLineNumber( 110 );
                                        if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_91 ) )
                                        {
                                            {
                                                frame_guard.setLineNumber( 112 );
                                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_pattern_iter.asObject() ) ).asObject() ) );
                                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                                _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                                                _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
                                            }
                                            frame_guard.setLineNumber( 113 );
                                            {
                                                PyObjectTempKeeper1 call15;
                                                DECREASE_REFCOUNT( ( call15.assign( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_var_ch.asObject() ) ) );
                                            }
                                            {
                                                frame_guard.setLineNumber( 114 );
                                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_pattern_iter.asObject() ) ).asObject() ) );
                                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                                _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                                                _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
                                            }
                                            frame_guard.setLineNumber( 115 );
                                            while( true )
                                            {
                                                frame_guard.setLineNumber( 115 );
                                                if ( (!( ( CHECK_IF_TRUE( _python_var_escaped.asObject() ) || RICH_COMPARE_BOOL_NE( _python_var_ch.asObject(), _python_unicode_chr_93 ) ) )) )
                                                {
                                                    frame_guard.setLineNumber( 115 );
                                                    break;
                                                }
                                                {
                                                    frame_guard.setLineNumber( 116 );
                                                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_pattern_iter.asObject() ) ).asObject() ) );
                                                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                                    _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                                                    _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
                                                }

                                               CONSIDER_THREADING();
                                            }
                                        }
                                        else
                                        {
                                            frame_guard.setLineNumber( 117 );
                                            if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_40 ) )
                                            {
                                                {
                                                    frame_guard.setLineNumber( 119 );
                                                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_pattern_iter.asObject() ) ).asObject() ) );
                                                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                                    _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                                                    _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
                                                }
                                                frame_guard.setLineNumber( 120 );
                                                if ( ( RICH_COMPARE_BOOL_NE( _python_var_ch.asObject(), _python_unicode_chr_63 ) || CHECK_IF_TRUE( _python_var_escaped.asObject() ) ) )
                                                {
                                                    frame_guard.setLineNumber( 122 );
                                                    _python_var_name.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_5c182c9a6d97fa129a23c136b3a60a12, _python_var_num_args.asObject() ) );
                                                    {
                                                        frame_guard.setLineNumber( 123 );
                                                        PyObject *_python_tmp_inplace_start = _python_var_num_args.asObject();
                                                        PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_int_pos_1 ) );
                                                        if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                                                        {
                                                            _python_var_num_args.assign0( _python_tmp_inplace_end.asObject() );
                                                        }
                                                    }
                                                    frame_guard.setLineNumber( 124 );
                                                    {
                                                        PyObjectTempKeeper0 call19;
                                                        PyObjectTempKeeper1 call21;
                                                        PyObjectTempKeeper1 make_tuple17;
                                                        DECREASE_REFCOUNT( ( call21.assign( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), PyObjectTemporary( ( call19.assign( _mvar_django__utils__regex_helper_Group.asObject0() ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), PyObjectTemporary( ( make_tuple17.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_d1c54d665b7e45f024341d31b65467b9, _python_var_name.asObject() ) ), MAKE_TUPLE2( make_tuple17.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
                                                    }
                                                    frame_guard.setLineNumber( 125 );
                                                    {
                                                        PyObjectTempKeeper0 call23;
                                                        PyObjectTempKeeper0 call24;
                                                        DECREASE_REFCOUNT( ( call23.assign( _mvar_django__utils__regex_helper_walk_to_end.asObject0() ), call24.assign( _python_var_ch.asObject() ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), call24.asObject0(), _python_var_pattern_iter.asObject() ) ) );
                                                    }
                                                }
                                                else
                                                {
                                                    {
                                                        frame_guard.setLineNumber( 127 );
                                                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_pattern_iter.asObject() ) ).asObject() ) );
                                                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                                        _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                                                        _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
                                                    }
                                                    frame_guard.setLineNumber( 128 );
                                                    if ( SEQUENCE_CONTAINS_BOOL( _python_var_ch.asObject(), _python_unicode_digest_1c40a094146bf6b5a97b58eb0cf3277d ) )
                                                    {
                                                        frame_guard.setLineNumber( 131 );
                                                        {
                                                            PyObjectTempKeeper0 call26;
                                                            PyObjectTempKeeper0 call27;
                                                            DECREASE_REFCOUNT( ( call26.assign( _mvar_django__utils__regex_helper_walk_to_end.asObject0() ), call27.assign( _python_var_ch.asObject() ), CALL_FUNCTION_WITH_ARGS( call26.asObject0(), call27.asObject0(), _python_var_pattern_iter.asObject() ) ) );
                                                        }
                                                    }
                                                    else
                                                    {
                                                        frame_guard.setLineNumber( 132 );
                                                        if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_58 ) )
                                                        {
                                                            frame_guard.setLineNumber( 134 );
                                                            {
                                                                PyObjectTempKeeper1 call29;
                                                                DECREASE_REFCOUNT( ( call29.assign( LOOKUP_ATTRIBUTE( _python_var_non_capturing_groups.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_result.asObject() ) ).asObject() ) ) );
                                                            }
                                                        }
                                                        else
                                                        {
                                                            frame_guard.setLineNumber( 135 );
                                                            if ( RICH_COMPARE_BOOL_NE( _python_var_ch.asObject(), _python_unicode_plain_P ) )
                                                            {
                                                                frame_guard.setLineNumber( 138 );
                                                                {
                                                                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_ebc488692364c67ab73bb4a0605a0a77, _python_var_ch.asObject() ) ).asObject() ) ).asObject() ) );
                                                                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                                                                }
                                                            }
                                                            else
                                                            {
                                                                {
                                                                    frame_guard.setLineNumber( 140 );
                                                                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_pattern_iter.asObject() ) ).asObject() ) );
                                                                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                                                    _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                                                                    _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
                                                                }
                                                                frame_guard.setLineNumber( 141 );
                                                                if ( SEQUENCE_CONTAINS_NOT_BOOL( _python_var_ch.asObject(), _python_tuple_unicode_chr_60_unicode_chr_61_tuple ) )
                                                                {
                                                                    frame_guard.setLineNumber( 142 );
                                                                    {
                                                                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_d64e7552e7df81ed430090867dd4d36b, _python_var_ch.asObject() ) ).asObject() ) ).asObject() ) );
                                                                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                                                                    }
                                                                }
                                                                frame_guard.setLineNumber( 145 );
                                                                if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_60 ) )
                                                                {
                                                                    _python_var_terminal_char.assign0( _python_unicode_chr_62 );
                                                                }
                                                                else
                                                                {
                                                                    _python_var_terminal_char.assign0( _python_unicode_chr_41 );
                                                                }
                                                                _python_var_name.assign1( PyList_New( 0 ) );
                                                                {
                                                                    frame_guard.setLineNumber( 151 );
                                                                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_pattern_iter.asObject() ) ).asObject() ) );
                                                                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                                                    _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                                                                    _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
                                                                }
                                                                frame_guard.setLineNumber( 152 );
                                                                while( true )
                                                                {
                                                                    frame_guard.setLineNumber( 152 );
                                                                    {
                                                                        PyObjectTempKeeper0 cmp31;
                                                                        if ( (!( ( cmp31.assign( _python_var_ch.asObject() ), RICH_COMPARE_BOOL_NE( cmp31.asObject0(), _python_var_terminal_char.asObject() ) ) )) )
                                                                    {
                                                                        frame_guard.setLineNumber( 152 );
                                                                        break;
                                                                    }
                                                                    }
                                                                    frame_guard.setLineNumber( 153 );
                                                                    {
                                                                        PyObjectTempKeeper1 call33;
                                                                        DECREASE_REFCOUNT( ( call33.assign( LOOKUP_ATTRIBUTE( _python_var_name.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call33.asObject0(), _python_var_ch.asObject() ) ) );
                                                                    }
                                                                    {
                                                                        frame_guard.setLineNumber( 154 );
                                                                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_pattern_iter.asObject() ) ).asObject() ) );
                                                                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                                                        _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                                                                        _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
                                                                    }

                                                                   CONSIDER_THREADING();
                                                                }
                                                                frame_guard.setLineNumber( 155 );
                                                                {
                                                                    PyObjectTempKeeper1 call35;
                                                                    _python_var_param.assign1( ( call35.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call35.asObject0(), _python_var_name.asObject() ) ) );
                                                                }
                                                                frame_guard.setLineNumber( 158 );
                                                                if ( RICH_COMPARE_BOOL_NE( _python_var_terminal_char.asObject(), _python_unicode_chr_41 ) )
                                                                {
                                                                    frame_guard.setLineNumber( 159 );
                                                                    {
                                                                        PyObjectTempKeeper0 call39;
                                                                        PyObjectTempKeeper1 call41;
                                                                        PyObjectTempKeeper1 make_tuple37;
                                                                        DECREASE_REFCOUNT( ( call41.assign( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call41.asObject0(), PyObjectTemporary( ( call39.assign( _mvar_django__utils__regex_helper_Group.asObject0() ), CALL_FUNCTION_WITH_ARGS( call39.asObject0(), PyObjectTemporary( ( make_tuple37.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_d1c54d665b7e45f024341d31b65467b9, _python_var_param.asObject() ) ), MAKE_TUPLE2( make_tuple37.asObject0(), _python_var_param.asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
                                                                    }
                                                                    frame_guard.setLineNumber( 160 );
                                                                    {
                                                                        PyObjectTempKeeper0 call43;
                                                                        PyObjectTempKeeper0 call44;
                                                                        DECREASE_REFCOUNT( ( call43.assign( _mvar_django__utils__regex_helper_walk_to_end.asObject0() ), call44.assign( _python_var_ch.asObject() ), CALL_FUNCTION_WITH_ARGS( call43.asObject0(), call44.asObject0(), _python_var_pattern_iter.asObject() ) ) );
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    frame_guard.setLineNumber( 162 );
                                                                    {
                                                                        PyObjectTempKeeper0 call46;
                                                                        PyObjectTempKeeper1 call48;
                                                                        DECREASE_REFCOUNT( ( call48.assign( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call48.asObject0(), PyObjectTemporary( ( call46.assign( _mvar_django__utils__regex_helper_Group.asObject0() ), CALL_FUNCTION_WITH_ARGS( call46.asObject0(), PyObjectTemporary( MAKE_TUPLE2( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_d1c54d665b7e45f024341d31b65467b9, _python_var_param.asObject() ) ).asObject(), Py_None ) ).asObject() ) ) ).asObject() ) ) );
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                frame_guard.setLineNumber( 163 );
                                                if ( SEQUENCE_CONTAINS_BOOL( _python_var_ch.asObject(), _python_unicode_digest_36bc302a9910d646486bb2706a65f8f2 ) )
                                                {
                                                    {
                                                        frame_guard.setLineNumber( 165 );
                                                        PyObject *_tmp_python_tmp_source_iter;
                                                        {
                                                            PyObjectTempKeeper0 call50;
                                                            PyObjectTempKeeper0 call51;
                                                            _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call50.assign( _mvar_django__utils__regex_helper_get_quantifier.asObject0() ), call51.assign( _python_var_ch.asObject() ), CALL_FUNCTION_WITH_ARGS( call50.asObject0(), call51.asObject0(), _python_var_pattern_iter.asObject() ) ) ).asObject() );
                                                        }
                                                        PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                                                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                                        _python_var_count.assign0( _python_tmp_element_1.asObject() );
                                                        _python_var_ch.assign0( _python_tmp_element_2.asObject() );
                                                    }
                                                    frame_guard.setLineNumber( 166 );
                                                    if ( CHECK_IF_TRUE( _python_var_ch.asObject() ) )
                                                    {
                                                        _python_var_consume_next.assign0( Py_False );
                                                    }
                                                    frame_guard.setLineNumber( 172 );
                                                    if ( RICH_COMPARE_BOOL_EQ( _python_var_count.asObject(), _python_int_0 ) )
                                                    {
                                                        frame_guard.setLineNumber( 173 );
                                                        {
                                                            PyObjectTempKeeper0 call55;
                                                            PyObjectTempKeeper1 call56;
                                                            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call55.assign( _mvar_django__utils__regex_helper_contains.asObject0() ), call56.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_result.asObject(), _python_int_neg_1, -1 ) ), CALL_FUNCTION_WITH_ARGS( call55.asObject0(), call56.asObject0(), _mvar_django__utils__regex_helper_Group.asObject0() ) ) ).asObject() ) )
                                                        {
                                                            frame_guard.setLineNumber( 180 );
                                                            {
                                                                PyObjectTempKeeper0 call53;
                                                                {
                                                                    PyObjectTemporary tmp_identifier( ( call53.assign( _mvar_django__utils__regex_helper_Choice.asObject0() ), CALL_FUNCTION_WITH_ARGS( call53.asObject0(), PyObjectTemporary( MAKE_LIST2( INCREASE_REFCOUNT( Py_None ), LOOKUP_SUBSCRIPT_CONST( _python_var_result.asObject(), _python_int_neg_1, -1 ) ) ).asObject() ) ) );
                                                                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_result.asObject(), _python_int_neg_1 );
                                                            }
                                                            }
                                                        }
                                                        else
                                                        {
                                                            frame_guard.setLineNumber( 182 );
                                                            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_pop ) ).asObject() ) );
                                                        }
                                                        }
                                                    }
                                                    else
                                                    {
                                                        frame_guard.setLineNumber( 183 );
                                                        if ( RICH_COMPARE_BOOL_GT( _python_var_count.asObject(), _python_int_pos_1 ) )
                                                        {
                                                            frame_guard.setLineNumber( 184 );
                                                            {
                                                                PyObjectTempKeeper1 call60;
                                                                PyObjectTempKeeper1 op58;
                                                                DECREASE_REFCOUNT( ( call60.assign( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call60.asObject0(), PyObjectTemporary( ( op58.assign( MAKE_LIST1( LOOKUP_SUBSCRIPT_CONST( _python_var_result.asObject(), _python_int_neg_1, -1 ) ) ), BINARY_OPERATION_MUL( op58.asObject0(), PyObjectTemporary( BINARY_OPERATION_SUB( _python_var_count.asObject(), _python_int_pos_1 ) ).asObject() ) ) ).asObject() ) ) );
                                                            }
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    frame_guard.setLineNumber( 187 );
                                                    {
                                                        PyObjectTempKeeper1 call62;
                                                        DECREASE_REFCOUNT( ( call62.assign( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call62.asObject0(), _python_var_ch.asObject() ) ) );
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
                frame_guard.setLineNumber( 189 );
                if ( CHECK_IF_TRUE( _python_var_consume_next.asObject() ) )
                {
                    {
                        frame_guard.setLineNumber( 190 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_pattern_iter.asObject() ) ).asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                        _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                else
                {
                    _python_var_consume_next.assign0( Py_True );
                }

               CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
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

            if ( _exception.matches( PyExc_StopIteration ) )
            {

            }
            else if ( _exception.matches( PyExc_NotImplementedError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 197 );
                return MAKE_LIST1( MAKE_TUPLE2( _python_unicode_empty, PyObjectTemporary( PyList_New( 0 ) ).asObject() ) );
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
        frame_guard.setLineNumber( 199 );
        {
            PyObjectTempKeeper0 call64;
            PyObjectTempKeeper0 call_tmp66;
            return TO_LIST( PyObjectTemporary( ( call_tmp66.assign( _mvar_django__utils__regex_helper_zip.asObject0() ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp66.asObject(), ( call64.assign( _mvar_django__utils__regex_helper_flatten_result.asObject0() ), CALL_FUNCTION_WITH_ARGS( call64.asObject0(), _python_var_result.asObject() ) ) ) ) ).asObject() );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_pattern.updateLocalsDict( _python_var_count.updateLocalsDict( _python_var_param.updateLocalsDict( _python_var_terminal_char.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_inner.updateLocalsDict( _python_var_start.updateLocalsDict( _python_var_escaped.updateLocalsDict( _python_var_ch.updateLocalsDict( _python_var_num_args.updateLocalsDict( _python_var_pattern_iter.updateLocalsDict( _python_var_consume_next.updateLocalsDict( _python_var_non_capturing_groups.updateLocalsDict( _python_var_result.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_normalize_of_module_django__utils__regex_helper )
        {
           Py_DECREF( frame_function_4_normalize_of_module_django__utils__regex_helper );
           frame_function_4_normalize_of_module_django__utils__regex_helper = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_4_normalize_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_pattern = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "normalize() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_pattern == key )
            {
                if (unlikely( _python_par_pattern ))
                {
                    PyErr_Format( PyExc_TypeError, "normalize() got multiple values for keyword argument 'pattern'" );
                    goto error_exit;
                }

                _python_par_pattern = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_pattern, key ) )
            {
                if (unlikely( _python_par_pattern ))
                {
                    PyErr_Format( PyExc_TypeError, "normalize() got multiple values for keyword argument 'pattern'" );
                    goto error_exit;
                }

                _python_par_pattern = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "normalize() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "normalize() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "normalize() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "normalize() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "normalize() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "normalize() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "normalize() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "normalize() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "normalize() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "normalize() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "normalize() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "normalize() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "normalize() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_pattern != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "normalize() got multiple values for keyword argument 'pattern'" );
             goto error_exit;
         }

        _python_par_pattern = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_normalize_of_module_django__utils__regex_helper( self, _python_par_pattern );

error_exit:;

    Py_XDECREF( _python_par_pattern );

    return NULL;
}

static PyObject *dparse_function_4_normalize_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_normalize_of_module_django__utils__regex_helper( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_normalize_of_module_django__utils__regex_helper( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_5_next_char_of_module_django__utils__regex_helper_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var_input_iter;
    PyObjectLocalVariable python_var_ch;
    PyObjectLocalVariable python_var_representative;
};

static void _context_generator_function_5_next_char_of_module_django__utils__regex_helper_destructor( void *context_voidptr )
{
    _context_generator_function_5_next_char_of_module_django__utils__regex_helper_t *_python_context = (struct _context_generator_function_5_next_char_of_module_django__utils__regex_helper_t *)context_voidptr;

    delete _python_context;
}

static void function_5_next_char_of_module_django__utils__regex_helper_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_5_next_char_of_module_django__utils__regex_helper_t *_python_context = (_context_generator_function_5_next_char_of_module_django__utils__regex_helper_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_ch.setVariableName( _python_str_plain_ch );
        _python_context->python_var_representative.setVariableName( _python_str_plain_representative );

        // Actual function code.
        static PyFrameObject *frame_function_5_next_char_of_module_django__utils__regex_helper = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_5_next_char_of_module_django__utils__regex_helper ) )
        {
            if ( frame_function_5_next_char_of_module_django__utils__regex_helper )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_5_next_char_of_module_django__utils__regex_helper" );
#endif
                Py_DECREF( frame_function_5_next_char_of_module_django__utils__regex_helper );
            }

            frame_function_5_next_char_of_module_django__utils__regex_helper = MAKE_FRAME( _codeobj_419962dd17d4a04a9c2d8b457362560b, _module_django__utils__regex_helper );
        }

        Py_INCREF( frame_function_5_next_char_of_module_django__utils__regex_helper );
        generator->m_frame = frame_function_5_next_char_of_module_django__utils__regex_helper;

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
                frame_guard.setLineNumber( 211 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_context->python_var_input_iter.asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 211 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_ch.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 212 );
                    if ( RICH_COMPARE_BOOL_NE( _python_context->python_var_ch.asObject(), _python_unicode_chr_92 ) )
                    {
                        frame_guard.setLineNumber( 213 );
                        YIELD_VALUE( generator, MAKE_TUPLE2( _python_context->python_var_ch.asObject(), Py_False ) );
                        frame_guard.setLineNumber( 214 );
                        CONSIDER_THREADING(); continue;
                    }
                    frame_guard.setLineNumber( 215 );
                    _python_context->python_var_ch.assign1( BUILTIN_NEXT1( _python_context->python_var_input_iter.asObject() ) );
                    frame_guard.setLineNumber( 216 );
                    {
                        PyObjectTempKeeper1 call1;
                        PyObjectTempKeeper0 call2;
                        _python_context->python_var_representative.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__regex_helper_ESCAPE_MAPPINGS.asObject0(), _python_str_plain_get ) ), call2.assign( _python_context->python_var_ch.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_context->python_var_ch.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 217 );
                    if ( ( _python_context->python_var_representative.asObject() == Py_None ) )
                    {
                        frame_guard.setLineNumber( 218 );
                        CONSIDER_THREADING(); continue;
                    }
                    frame_guard.setLineNumber( 219 );
                    YIELD_VALUE( generator, MAKE_TUPLE2( _python_context->python_var_representative.asObject(), Py_True ) );

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

static PyObject *impl_function_5_next_char_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject *_python_par_input_iter )
{
    // Create context if any
    struct _context_generator_function_5_next_char_of_module_django__utils__regex_helper_t *_python_context = new _context_generator_function_5_next_char_of_module_django__utils__regex_helper_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_5_next_char_of_module_django__utils__regex_helper_context,
            _python_str_plain_next_char,
            _codeobj_419962dd17d4a04a9c2d8b457362560b,
            _python_context,
            _context_generator_function_5_next_char_of_module_django__utils__regex_helper_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function next_char" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.
        _python_context->python_var_input_iter.setVariableNameAndValue( _python_str_plain_input_iter, _python_par_input_iter );

        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}
static PyObject *fparse_function_5_next_char_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_input_iter = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "next_char() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_input_iter == key )
            {
                if (unlikely( _python_par_input_iter ))
                {
                    PyErr_Format( PyExc_TypeError, "next_char() got multiple values for keyword argument 'input_iter'" );
                    goto error_exit;
                }

                _python_par_input_iter = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_input_iter, key ) )
            {
                if (unlikely( _python_par_input_iter ))
                {
                    PyErr_Format( PyExc_TypeError, "next_char() got multiple values for keyword argument 'input_iter'" );
                    goto error_exit;
                }

                _python_par_input_iter = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "next_char() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "next_char() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "next_char() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "next_char() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "next_char() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "next_char() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "next_char() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "next_char() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "next_char() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "next_char() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "next_char() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "next_char() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "next_char() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_input_iter != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "next_char() got multiple values for keyword argument 'input_iter'" );
             goto error_exit;
         }

        _python_par_input_iter = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_next_char_of_module_django__utils__regex_helper( self, _python_par_input_iter );

error_exit:;

    Py_XDECREF( _python_par_input_iter );

    return NULL;
}

static PyObject *dparse_function_5_next_char_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_next_char_of_module_django__utils__regex_helper( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_next_char_of_module_django__utils__regex_helper( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_walk_to_end_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject *_python_par_ch, PyObject *_python_par_input_iter )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_ch( _python_str_plain_ch, _python_par_ch );
    PyObjectLocalParameterVariableNoDel _python_var_input_iter( _python_str_plain_input_iter, _python_par_input_iter );
    PyObjectLocalVariable _python_var_nesting( _python_str_plain_nesting );
    PyObjectLocalVariable _python_var_escaped( _python_str_plain_escaped );

    // Actual function code.
    static PyFrameObject *frame_function_6_walk_to_end_of_module_django__utils__regex_helper = NULL;

    if ( isFrameUnusable( frame_function_6_walk_to_end_of_module_django__utils__regex_helper ) )
    {
        if ( frame_function_6_walk_to_end_of_module_django__utils__regex_helper )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_walk_to_end_of_module_django__utils__regex_helper" );
#endif
            Py_DECREF( frame_function_6_walk_to_end_of_module_django__utils__regex_helper );
        }

        frame_function_6_walk_to_end_of_module_django__utils__regex_helper = MAKE_FRAME( _codeobj_c3021ec2ae548b601335e7b28bf33129, _module_django__utils__regex_helper );
    }

    FrameGuard frame_guard( frame_function_6_walk_to_end_of_module_django__utils__regex_helper );
    try
    {
        assert( Py_REFCNT( frame_function_6_walk_to_end_of_module_django__utils__regex_helper ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 227 );
        if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_40 ) )
        {
            _python_var_nesting.assign0( _python_int_pos_1 );
        }
        else
        {
            _python_var_nesting.assign0( _python_int_0 );
        }
        {
            frame_guard.setLineNumber( 231 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_input_iter.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 231 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 231 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                        _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 232 );
                if ( CHECK_IF_TRUE( _python_var_escaped.asObject() ) )
                {
                    frame_guard.setLineNumber( 233 );
                    CONSIDER_THREADING(); continue;
                }
                else
                {
                    frame_guard.setLineNumber( 234 );
                    if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_40 ) )
                    {
                        {
                            frame_guard.setLineNumber( 235 );
                            PyObject *_python_tmp_inplace_start = _python_var_nesting.asObject();
                            PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_int_pos_1 ) );
                            if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                            {
                                _python_var_nesting.assign0( _python_tmp_inplace_end.asObject() );
                            }
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 236 );
                        if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_41 ) )
                        {
                            frame_guard.setLineNumber( 237 );
                            if ( (!( CHECK_IF_TRUE( _python_var_nesting.asObject() ) )) )
                            {
                                return INCREASE_REFCOUNT( Py_None );
                            }
                            {
                                frame_guard.setLineNumber( 239 );
                                PyObject *_python_tmp_inplace_start = _python_var_nesting.asObject();
                                PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceSubtract, _python_tmp_inplace_start, _python_int_pos_1 ) );
                                if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                                {
                                    _python_var_nesting.assign0( _python_tmp_inplace_end.asObject() );
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

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_input_iter.updateLocalsDict( _python_var_ch.updateLocalsDict( _python_var_escaped.updateLocalsDict( _python_var_nesting.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_walk_to_end_of_module_django__utils__regex_helper )
        {
           Py_DECREF( frame_function_6_walk_to_end_of_module_django__utils__regex_helper );
           frame_function_6_walk_to_end_of_module_django__utils__regex_helper = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_walk_to_end_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ch = NULL;
    PyObject *_python_par_input_iter = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "walk_to_end() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_ch == key )
            {
                if (unlikely( _python_par_ch ))
                {
                    PyErr_Format( PyExc_TypeError, "walk_to_end() got multiple values for keyword argument 'ch'" );
                    goto error_exit;
                }

                _python_par_ch = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_input_iter == key )
            {
                if (unlikely( _python_par_input_iter ))
                {
                    PyErr_Format( PyExc_TypeError, "walk_to_end() got multiple values for keyword argument 'input_iter'" );
                    goto error_exit;
                }

                _python_par_input_iter = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ch, key ) )
            {
                if (unlikely( _python_par_ch ))
                {
                    PyErr_Format( PyExc_TypeError, "walk_to_end() got multiple values for keyword argument 'ch'" );
                    goto error_exit;
                }

                _python_par_ch = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_input_iter, key ) )
            {
                if (unlikely( _python_par_input_iter ))
                {
                    PyErr_Format( PyExc_TypeError, "walk_to_end() got multiple values for keyword argument 'input_iter'" );
                    goto error_exit;
                }

                _python_par_input_iter = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "walk_to_end() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "walk_to_end() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "walk_to_end() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "walk_to_end() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "walk_to_end() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "walk_to_end() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "walk_to_end() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "walk_to_end() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "walk_to_end() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "walk_to_end() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "walk_to_end() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "walk_to_end() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "walk_to_end() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_ch != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "walk_to_end() got multiple values for keyword argument 'ch'" );
             goto error_exit;
         }

        _python_par_ch = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_input_iter != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "walk_to_end() got multiple values for keyword argument 'input_iter'" );
             goto error_exit;
         }

        _python_par_input_iter = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6_walk_to_end_of_module_django__utils__regex_helper( self, _python_par_ch, _python_par_input_iter );

error_exit:;

    Py_XDECREF( _python_par_ch );
    Py_XDECREF( _python_par_input_iter );

    return NULL;
}

static PyObject *dparse_function_6_walk_to_end_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6_walk_to_end_of_module_django__utils__regex_helper( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_walk_to_end_of_module_django__utils__regex_helper( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_get_quantifier_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject *_python_par_ch, PyObject *_python_par_input_iter )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_ch( _python_str_plain_ch, _python_par_ch );
    PyObjectLocalParameterVariableNoDel _python_var_input_iter( _python_str_plain_input_iter, _python_par_input_iter );
    PyObjectLocalVariable _python_var_ch2( _python_str_plain_ch2 );
    PyObjectLocalVariable _python_var_escaped( _python_str_plain_escaped );
    PyObjectLocalVariable _python_var_quant( _python_str_plain_quant );
    PyObjectLocalVariable _python_var_values( _python_str_plain_values );

    // Actual function code.
    static PyFrameObject *frame_function_7_get_quantifier_of_module_django__utils__regex_helper = NULL;

    if ( isFrameUnusable( frame_function_7_get_quantifier_of_module_django__utils__regex_helper ) )
    {
        if ( frame_function_7_get_quantifier_of_module_django__utils__regex_helper )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_get_quantifier_of_module_django__utils__regex_helper" );
#endif
            Py_DECREF( frame_function_7_get_quantifier_of_module_django__utils__regex_helper );
        }

        frame_function_7_get_quantifier_of_module_django__utils__regex_helper = MAKE_FRAME( _codeobj_523fc70e37d35f151650bb5c61ff9def, _module_django__utils__regex_helper );
    }

    FrameGuard frame_guard( frame_function_7_get_quantifier_of_module_django__utils__regex_helper );
    try
    {
        assert( Py_REFCNT( frame_function_7_get_quantifier_of_module_django__utils__regex_helper ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 250 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_var_ch.asObject(), _python_unicode_digest_7e5a6fd5eb474cad4dfe291a52443bbf ) )
        {
            frame_guard.setLineNumber( 251 );
            try
            {
                {
                    frame_guard.setLineNumber( 252 );
                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_input_iter.asObject() ) ).asObject() ) );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    _python_var_ch2.assign0( _python_tmp_element_1.asObject() );
                    _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
                }
            }
            catch ( PythonException &_exception )
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

                if ( _exception.matches( PyExc_StopIteration ) )
                {
                    frame_guard.detachFrame();
                    _python_var_ch2.assign0( Py_None );
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
            frame_guard.setLineNumber( 255 );
            if ( RICH_COMPARE_BOOL_EQ( _python_var_ch2.asObject(), _python_unicode_chr_63 ) )
            {
                _python_var_ch2.assign0( Py_None );
            }
            frame_guard.setLineNumber( 257 );
            if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_43 ) )
            {
                frame_guard.setLineNumber( 258 );
                return MAKE_TUPLE2( _python_int_pos_1, _python_var_ch2.asObject() );
            }
            frame_guard.setLineNumber( 259 );
            return MAKE_TUPLE2( _python_int_0, _python_var_ch2.asObject() );
        }
        _python_var_quant.assign1( PyList_New( 0 ) );
        frame_guard.setLineNumber( 262 );
        while( true )
        {
            frame_guard.setLineNumber( 262 );
            if ( (!( RICH_COMPARE_BOOL_NE( _python_var_ch.asObject(), _python_unicode_chr_125 ) )) )
            {
                frame_guard.setLineNumber( 262 );
                break;
            }
            {
                frame_guard.setLineNumber( 263 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_input_iter.asObject() ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
            }
            frame_guard.setLineNumber( 264 );
            {
                PyObjectTempKeeper1 call1;
                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_quant.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_ch.asObject() ) ) );
            }

           CONSIDER_THREADING();
        }
        frame_guard.setLineNumber( 265 );
        _python_var_quant.assign1( LOOKUP_INDEX_SLICE( _python_var_quant.asObject(), 0, -1 ) );
        frame_guard.setLineNumber( 266 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_values.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_quant.asObject() ) ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_44 ) );
        }
        frame_guard.setLineNumber( 269 );
        try
        {
            {
                frame_guard.setLineNumber( 270 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_NEXT1( _python_var_input_iter.asObject() ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_ch.assign0( _python_tmp_element_1.asObject() );
                _python_var_escaped.assign0( _python_tmp_element_2.asObject() );
            }
        }
        catch ( PythonException &_exception )
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

            if ( _exception.matches( PyExc_StopIteration ) )
            {
                frame_guard.detachFrame();
                _python_var_ch.assign0( Py_None );
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
        frame_guard.setLineNumber( 273 );
        if ( RICH_COMPARE_BOOL_EQ( _python_var_ch.asObject(), _python_unicode_chr_63 ) )
        {
            _python_var_ch.assign0( Py_None );
        }
        frame_guard.setLineNumber( 275 );
        {
            PyObjectTempKeeper1 make_tuple5;
            return ( make_tuple5.assign( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_values.asObject(), _python_int_0, 0 ) ).asObject() ) ), MAKE_TUPLE2( make_tuple5.asObject0(), _python_var_ch.asObject() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_input_iter.updateLocalsDict( _python_var_ch.updateLocalsDict( _python_var_values.updateLocalsDict( _python_var_quant.updateLocalsDict( _python_var_escaped.updateLocalsDict( _python_var_ch2.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_get_quantifier_of_module_django__utils__regex_helper )
        {
           Py_DECREF( frame_function_7_get_quantifier_of_module_django__utils__regex_helper );
           frame_function_7_get_quantifier_of_module_django__utils__regex_helper = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_get_quantifier_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ch = NULL;
    PyObject *_python_par_input_iter = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "get_quantifier() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_ch == key )
            {
                if (unlikely( _python_par_ch ))
                {
                    PyErr_Format( PyExc_TypeError, "get_quantifier() got multiple values for keyword argument 'ch'" );
                    goto error_exit;
                }

                _python_par_ch = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_input_iter == key )
            {
                if (unlikely( _python_par_input_iter ))
                {
                    PyErr_Format( PyExc_TypeError, "get_quantifier() got multiple values for keyword argument 'input_iter'" );
                    goto error_exit;
                }

                _python_par_input_iter = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ch, key ) )
            {
                if (unlikely( _python_par_ch ))
                {
                    PyErr_Format( PyExc_TypeError, "get_quantifier() got multiple values for keyword argument 'ch'" );
                    goto error_exit;
                }

                _python_par_ch = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_input_iter, key ) )
            {
                if (unlikely( _python_par_input_iter ))
                {
                    PyErr_Format( PyExc_TypeError, "get_quantifier() got multiple values for keyword argument 'input_iter'" );
                    goto error_exit;
                }

                _python_par_input_iter = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_quantifier() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "get_quantifier() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_quantifier() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_quantifier() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_quantifier() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_quantifier() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_quantifier() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_quantifier() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_quantifier() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_quantifier() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_quantifier() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "get_quantifier() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_quantifier() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_ch != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_quantifier() got multiple values for keyword argument 'ch'" );
             goto error_exit;
         }

        _python_par_ch = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_input_iter != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_quantifier() got multiple values for keyword argument 'input_iter'" );
             goto error_exit;
         }

        _python_par_input_iter = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_7_get_quantifier_of_module_django__utils__regex_helper( self, _python_par_ch, _python_par_input_iter );

error_exit:;

    Py_XDECREF( _python_par_ch );
    Py_XDECREF( _python_par_input_iter );

    return NULL;
}

static PyObject *dparse_function_7_get_quantifier_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_7_get_quantifier_of_module_django__utils__regex_helper( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_get_quantifier_of_module_django__utils__regex_helper( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_contains_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject *_python_par_source, PyObject *_python_par_inst )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_source( _python_str_plain_source, _python_par_source );
    PyObjectLocalParameterVariableNoDel _python_var_inst( _python_str_plain_inst, _python_par_inst );
    PyObjectLocalVariable _python_var_elt( _python_str_plain_elt );

    // Actual function code.
    static PyFrameObject *frame_function_8_contains_of_module_django__utils__regex_helper = NULL;

    if ( isFrameUnusable( frame_function_8_contains_of_module_django__utils__regex_helper ) )
    {
        if ( frame_function_8_contains_of_module_django__utils__regex_helper )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_contains_of_module_django__utils__regex_helper" );
#endif
            Py_DECREF( frame_function_8_contains_of_module_django__utils__regex_helper );
        }

        frame_function_8_contains_of_module_django__utils__regex_helper = MAKE_FRAME( _codeobj_6d82179a71640faa423a14246a65f7de, _module_django__utils__regex_helper );
    }

    FrameGuard frame_guard( frame_function_8_contains_of_module_django__utils__regex_helper );
    try
    {
        assert( Py_REFCNT( frame_function_8_contains_of_module_django__utils__regex_helper ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 282 );
        {
            PyObjectTempKeeper0 isinstance1;
            if ( ( isinstance1.assign( _python_var_source.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), _python_var_inst.asObject() ) ) )
        {
            return INCREASE_REFCOUNT( Py_True );
        }
        }
        frame_guard.setLineNumber( 284 );
        {
            PyObjectTempKeeper0 isinstance6;
            if ( ( isinstance6.assign( _python_var_source.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance6.asObject0(), _mvar_django__utils__regex_helper_NonCapture.asObject0() ) ) )
        {
            {
                frame_guard.setLineNumber( 285 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_source.asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 285 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_elt.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 286 );
                    {
                        PyObjectTempKeeper0 call3;
                        PyObjectTempKeeper0 call4;
                        if ( CHECK_IF_TRUE( PyObjectTemporary( ( call3.assign( _mvar_django__utils__regex_helper_contains.asObject0() ), call4.assign( _python_var_elt.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_inst.asObject() ) ) ).asObject() ) )
                    {
                        return INCREASE_REFCOUNT( Py_True );
                    }
                    }

                   CONSIDER_THREADING();
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
        frame_guard.getFrame0()->f_locals = _python_var_inst.updateLocalsDict( _python_var_source.updateLocalsDict( _python_var_elt.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_contains_of_module_django__utils__regex_helper )
        {
           Py_DECREF( frame_function_8_contains_of_module_django__utils__regex_helper );
           frame_function_8_contains_of_module_django__utils__regex_helper = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_False );
}
static PyObject *fparse_function_8_contains_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_source = NULL;
    PyObject *_python_par_inst = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "contains() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_source == key )
            {
                if (unlikely( _python_par_source ))
                {
                    PyErr_Format( PyExc_TypeError, "contains() got multiple values for keyword argument 'source'" );
                    goto error_exit;
                }

                _python_par_source = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_inst == key )
            {
                if (unlikely( _python_par_inst ))
                {
                    PyErr_Format( PyExc_TypeError, "contains() got multiple values for keyword argument 'inst'" );
                    goto error_exit;
                }

                _python_par_inst = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_source, key ) )
            {
                if (unlikely( _python_par_source ))
                {
                    PyErr_Format( PyExc_TypeError, "contains() got multiple values for keyword argument 'source'" );
                    goto error_exit;
                }

                _python_par_source = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_inst, key ) )
            {
                if (unlikely( _python_par_inst ))
                {
                    PyErr_Format( PyExc_TypeError, "contains() got multiple values for keyword argument 'inst'" );
                    goto error_exit;
                }

                _python_par_inst = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "contains() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "contains() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "contains() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "contains() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "contains() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "contains() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "contains() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "contains() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "contains() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "contains() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "contains() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "contains() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "contains() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_source != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "contains() got multiple values for keyword argument 'source'" );
             goto error_exit;
         }

        _python_par_source = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_inst != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "contains() got multiple values for keyword argument 'inst'" );
             goto error_exit;
         }

        _python_par_inst = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_8_contains_of_module_django__utils__regex_helper( self, _python_par_source, _python_par_inst );

error_exit:;

    Py_XDECREF( _python_par_source );
    Py_XDECREF( _python_par_inst );

    return NULL;
}

static PyObject *dparse_function_8_contains_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8_contains_of_module_django__utils__regex_helper( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_contains_of_module_django__utils__regex_helper( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_flatten_result_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject *_python_par_source )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_source( _python_str_plain_source, _python_par_source );
    PyObjectLocalVariable _python_var_params( _python_str_plain_params );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );
    PyObjectLocalVariable _python_var_result_args( _python_str_plain_result_args );
    PyObjectLocalVariable _python_var_pos( _python_str_plain_pos );
    PyObjectLocalVariable _python_var_last( _python_str_plain_last );
    PyObjectLocalVariable _python_var_elt( _python_str_plain_elt );
    PyObjectLocalVariable _python_var_piece( _python_str_plain_piece );
    PyObjectLocalVariable _python_var_param( _python_str_plain_param );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_inner_result( _python_str_plain_inner_result );
    PyObjectLocalVariable _python_var_inner_args( _python_str_plain_inner_args );
    PyObjectLocalVariable _python_var_item( _python_str_plain_item );
    PyObjectLocalVariable _python_var_res( _python_str_plain_res );
    PyObjectLocalVariable _python_var_args( _python_str_plain_args );
    PyObjectLocalVariable _python_var_new_result( _python_str_plain_new_result );
    PyObjectLocalVariable _python_var_new_args( _python_str_plain_new_args );
    PyObjectLocalVariable _python_var_i_item( _python_str_plain_i_item );
    PyObjectLocalVariable _python_var_i_args( _python_str_plain_i_args );

    // Actual function code.
    static PyFrameObject *frame_function_9_flatten_result_of_module_django__utils__regex_helper = NULL;

    if ( isFrameUnusable( frame_function_9_flatten_result_of_module_django__utils__regex_helper ) )
    {
        if ( frame_function_9_flatten_result_of_module_django__utils__regex_helper )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_flatten_result_of_module_django__utils__regex_helper" );
#endif
            Py_DECREF( frame_function_9_flatten_result_of_module_django__utils__regex_helper );
        }

        frame_function_9_flatten_result_of_module_django__utils__regex_helper = MAKE_FRAME( _codeobj_19ae3a48c3c258ea1072191acaa63d70, _module_django__utils__regex_helper );
    }

    FrameGuard frame_guard( frame_function_9_flatten_result_of_module_django__utils__regex_helper );
    try
    {
        assert( Py_REFCNT( frame_function_9_flatten_result_of_module_django__utils__regex_helper ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 296 );
        if ( ( _python_var_source.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 297 );
            return MAKE_TUPLE2( PyObjectTemporary( LIST_COPY( _python_list_unicode_empty_list ) ).asObject(), PyObjectTemporary( MAKE_LIST1( PyList_New( 0 ) ) ).asObject() );
        }
        frame_guard.setLineNumber( 298 );
        {
            PyObjectTempKeeper0 isinstance3;
            if ( ( isinstance3.assign( _python_var_source.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), _mvar_django__utils__regex_helper_Group.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 299 );
            if ( ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_source.asObject(), _python_int_pos_1, 1 ) ).asObject() == Py_None ) )
            {
                _python_var_params.assign1( PyList_New( 0 ) );
            }
            else
            {
                frame_guard.setLineNumber( 302 );
                _python_var_params.assign1( MAKE_LIST1( LOOKUP_SUBSCRIPT_CONST( _python_var_source.asObject(), _python_int_pos_1, 1 ) ) );
            }
            frame_guard.setLineNumber( 303 );
            {
                PyObjectTempKeeper1 make_tuple1;
                return ( make_tuple1.assign( MAKE_LIST1( LOOKUP_SUBSCRIPT_CONST( _python_var_source.asObject(), _python_int_0, 0 ) ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( MAKE_LIST1( _python_var_params.asObject1() ) ).asObject() ) );
            }
        }
        }
        _python_var_result.assign1( LIST_COPY( _python_list_unicode_empty_list ) );
        frame_guard.setLineNumber( 305 );
        _python_var_result_args.assign1( MAKE_LIST1( PyList_New( 0 ) ) );
        {
            PyObject *_python_tmp_assign_source = _python_int_0;
            _python_var_pos.assign0( _python_tmp_assign_source );
            _python_var_last.assign0( _python_tmp_assign_source );
        }
        {
            frame_guard.setLineNumber( 307 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), _python_var_source.asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 307 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 307 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_pos.assign0( _python_tmp_element_1.asObject() );
                        _python_var_elt.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 308 );
                {
                    PyObjectTempKeeper0 isinstance5;
                    if ( ( isinstance5.assign( _python_var_elt.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__regex_helper_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 309 );
                    CONSIDER_THREADING(); continue;
                }
                }
                frame_guard.setLineNumber( 310 );
                {
                    PyObjectTempKeeper1 call10;
                    PyObjectTempKeeper0 slice7;
                    PyObjectTempKeeper0 slice8;
                    _python_var_piece.assign1( ( call10.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( ( slice7.assign( _python_var_source.asObject() ), slice8.assign( _python_var_last.asObject() ), LOOKUP_SLICE( slice7.asObject0(), slice8.asObject0(), _python_var_pos.asObject() ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 311 );
                {
                    PyObjectTempKeeper0 isinstance14;
                    if ( ( isinstance14.assign( _python_var_elt.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance14.asObject0(), _mvar_django__utils__regex_helper_Group.asObject0() ) ) )
                {
                    {
                        frame_guard.setLineNumber( 312 );
                        PyObject *_python_tmp_inplace_start = _python_var_piece.asObject();
                        PyObject *_tmp_python_tmp_inplace_end;
                        {
                            PyObjectTempKeeper0 op12;
                            _tmp_python_tmp_inplace_end = ( op12.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op12.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_elt.asObject(), _python_int_0, 0 ) ).asObject() ) );
                        }
                        PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                        if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                        {
                            _python_var_piece.assign0( _python_tmp_inplace_end.asObject() );
                        }
                    }
                    frame_guard.setLineNumber( 313 );
                    _python_var_param.assign1( LOOKUP_SUBSCRIPT_CONST( _python_var_elt.asObject(), _python_int_pos_1, 1 ) );
                }
                else
                {
                    _python_var_param.assign0( Py_None );
                }
                }
                frame_guard.setLineNumber( 316 );
                _python_var_last.assign1( BINARY_OPERATION_ADD( _python_var_pos.asObject(), _python_int_pos_1 ) );
                {
                    frame_guard.setLineNumber( 317 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_RANGE( PyObjectTemporary( BUILTIN_LEN( _python_var_result.asObject() ) ).asObject() ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 317 );
                            PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_2 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                            _python_var_i.assign0( _python_tmp_iter_value.asObject() );
                        }
                        {
                            frame_guard.setLineNumber( 318 );
                            PyObject *_python_tmp_inplace_target = _python_var_result.asObject();
                            PyObject *_python_tmp_inplace_subscript = _python_var_i.asObject();
                            {
                                PyObjectTempKeeper1 op18;
                                PyObjectTempKeeper0 subscr16;
                                {
                                    PyObjectTemporary tmp_identifier( ( op18.assign( ( subscr16.assign( _python_tmp_inplace_target ), LOOKUP_SUBSCRIPT( subscr16.asObject0(), _python_tmp_inplace_subscript ) ) ), BINARY_OPERATION( PyNumber_InPlaceAdd, op18.asObject0(), _python_var_piece.asObject() ) ) );
                                    PyObject *tmp_subscribed = _python_tmp_inplace_target;
                                    SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_inplace_subscript );
                            }
                            }
                        }
                        frame_guard.setLineNumber( 319 );
                        if ( CHECK_IF_TRUE( _python_var_param.asObject() ) )
                        {
                            frame_guard.setLineNumber( 320 );
                            {
                                PyObjectTempKeeper1 call22;
                                PyObjectTempKeeper0 subscr20;
                                DECREASE_REFCOUNT( ( call22.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( subscr20.assign( _python_var_result_args.asObject() ), LOOKUP_SUBSCRIPT( subscr20.asObject0(), _python_var_i.asObject() ) ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call22.asObject0(), _python_var_param.asObject() ) ) );
                            }
                        }

                       CONSIDER_THREADING();
                    }
                }
                frame_guard.setLineNumber( 321 );
                {
                    PyObjectTempKeeper0 isinstance48;
                    PyObjectTempKeeper0 make_tuple46;
                    if ( ( isinstance48.assign( _python_var_elt.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance48.asObject0(), PyObjectTemporary( ( make_tuple46.assign( _mvar_django__utils__regex_helper_Choice.asObject0() ), MAKE_TUPLE2( make_tuple46.asObject0(), _mvar_django__utils__regex_helper_NonCapture.asObject0() ) ) ).asObject() ) ) )
                {
                    frame_guard.setLineNumber( 322 );
                    {
                        PyObjectTempKeeper0 isinstance24;
                        if ( ( isinstance24.assign( _python_var_elt.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance24.asObject0(), _mvar_django__utils__regex_helper_NonCapture.asObject0() ) ) )
                    {
                        frame_guard.setLineNumber( 323 );
                        _python_var_elt.assign1( MAKE_LIST1( _python_var_elt.asObject1() ) );
                    }
                    }
                    {
                        frame_guard.setLineNumber( 324 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( MAKE_TUPLE2( PyObjectTemporary( PyList_New( 0 ) ).asObject(), PyObjectTemporary( PyList_New( 0 ) ).asObject() ) ).asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_inner_result.assign0( _python_tmp_element_1.asObject() );
                        _python_var_inner_args.assign0( _python_tmp_element_2.asObject() );
                    }
                    {
                        frame_guard.setLineNumber( 325 );
                        PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_elt.asObject() ) );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 325 );
                                PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_3 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                                _python_var_item.assign0( _python_tmp_iter_value.asObject() );
                            }
                            {
                                frame_guard.setLineNumber( 326 );
                                PyObject *_tmp_python_tmp_source_iter;
                                {
                                    PyObjectTempKeeper0 call26;
                                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call26.assign( _mvar_django__utils__regex_helper_flatten_result.asObject0() ), CALL_FUNCTION_WITH_ARGS( call26.asObject0(), _python_var_item.asObject() ) ) ).asObject() );
                                }
                                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                _python_var_res.assign0( _python_tmp_element_1.asObject() );
                                _python_var_args.assign0( _python_tmp_element_2.asObject() );
                            }
                            frame_guard.setLineNumber( 327 );
                            {
                                PyObjectTempKeeper1 call28;
                                DECREASE_REFCOUNT( ( call28.assign( LOOKUP_ATTRIBUTE( _python_var_inner_result.asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call28.asObject0(), _python_var_res.asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 328 );
                            {
                                PyObjectTempKeeper1 call30;
                                DECREASE_REFCOUNT( ( call30.assign( LOOKUP_ATTRIBUTE( _python_var_inner_args.asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call30.asObject0(), _python_var_args.asObject() ) ) );
                            }

                           CONSIDER_THREADING();
                        }
                    }
                    _python_var_new_result.assign1( PyList_New( 0 ) );
                    _python_var_new_args.assign1( PyList_New( 0 ) );
                    {
                        frame_guard.setLineNumber( 331 );
                        PyObject *_tmp_python_tmp_for_iterator;
                        {
                            PyObjectTempKeeper0 call32;
                            PyObjectTempKeeper0 call33;
                            _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call32.assign( _mvar_django__utils__regex_helper_zip.asObject0() ), call33.assign( _python_var_result.asObject() ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), call33.asObject0(), _python_var_result_args.asObject() ) ) ).asObject() );
                        }
                        PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                        while( true )
                        {
                            {
                                frame_guard.setLineNumber( 331 );
                                PyObject *_tmp_unpack_4 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                if ( _tmp_unpack_4 == NULL )
                                {
                                    break;
                                }
                                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_4 );
                                {
                                    frame_guard.setLineNumber( 331 );
                                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                    _python_var_item.assign0( _python_tmp_element_1.asObject() );
                                    _python_var_args.assign0( _python_tmp_element_2.asObject() );
                                }
                            }
                            {
                                frame_guard.setLineNumber( 332 );
                                PyObject *_tmp_python_tmp_for_iterator;
                                {
                                    PyObjectTempKeeper0 call35;
                                    PyObjectTempKeeper0 call36;
                                    _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call35.assign( _mvar_django__utils__regex_helper_zip.asObject0() ), call36.assign( _python_var_inner_result.asObject() ), CALL_FUNCTION_WITH_ARGS( call35.asObject0(), call36.asObject0(), _python_var_inner_args.asObject() ) ) ).asObject() );
                                }
                                PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                                while( true )
                                {
                                    {
                                        frame_guard.setLineNumber( 332 );
                                        PyObject *_tmp_unpack_5 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                        if ( _tmp_unpack_5 == NULL )
                                        {
                                            break;
                                        }
                                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_5 );
                                        {
                                            frame_guard.setLineNumber( 332 );
                                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                            _python_var_i_item.assign0( _python_tmp_element_1.asObject() );
                                            _python_var_i_args.assign0( _python_tmp_element_2.asObject() );
                                        }
                                    }
                                    frame_guard.setLineNumber( 333 );
                                    {
                                        PyObjectTempKeeper1 call40;
                                        PyObjectTempKeeper0 op38;
                                        DECREASE_REFCOUNT( ( call40.assign( LOOKUP_ATTRIBUTE( _python_var_new_result.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call40.asObject0(), PyObjectTemporary( ( op38.assign( _python_var_item.asObject() ), BINARY_OPERATION_ADD( op38.asObject0(), _python_var_i_item.asObject() ) ) ).asObject() ) ) );
                                    }
                                    frame_guard.setLineNumber( 334 );
                                    {
                                        PyObjectTempKeeper1 call44;
                                        PyObjectTempKeeper1 op42;
                                        DECREASE_REFCOUNT( ( call44.assign( LOOKUP_ATTRIBUTE( _python_var_new_args.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call44.asObject0(), PyObjectTemporary( ( op42.assign( LOOKUP_INDEX_SLICE( _python_var_args.asObject(), 0, PY_SSIZE_T_MAX ) ), BINARY_OPERATION_ADD( op42.asObject0(), _python_var_i_args.asObject() ) ) ).asObject() ) ) );
                                    }

                                   CONSIDER_THREADING();
                                }
                            }

                           CONSIDER_THREADING();
                        }
                    }
                    frame_guard.setLineNumber( 335 );
                    _python_var_result.assign0( _python_var_new_result.asObject() );
                    frame_guard.setLineNumber( 336 );
                    _python_var_result_args.assign0( _python_var_new_args.asObject() );
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 337 );
        {
            PyObjectTempKeeper0 cmp59;
            if ( ( cmp59.assign( _python_var_pos.asObject() ), RICH_COMPARE_BOOL_GE( cmp59.asObject0(), _python_var_last.asObject() ) ) )
        {
            frame_guard.setLineNumber( 338 );
            {
                PyObjectTempKeeper1 call53;
                PyObjectTempKeeper0 slice50;
                _python_var_piece.assign1( ( call53.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call53.asObject0(), PyObjectTemporary( ( slice50.assign( _python_var_source.asObject() ), LOOKUP_SLICE( slice50.asObject0(), _python_var_last.asObject(), Py_None ) ) ).asObject() ) ) );
            }
            {
                frame_guard.setLineNumber( 339 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_RANGE( PyObjectTemporary( BUILTIN_LEN( _python_var_result.asObject() ) ).asObject() ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 339 );
                        PyObject *_tmp_unpack_6 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_6 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_6 );
                        _python_var_i.assign0( _python_tmp_iter_value.asObject() );
                    }
                    {
                        frame_guard.setLineNumber( 340 );
                        PyObject *_python_tmp_inplace_target = _python_var_result.asObject();
                        PyObject *_python_tmp_inplace_subscript = _python_var_i.asObject();
                        {
                            PyObjectTempKeeper1 op57;
                            PyObjectTempKeeper0 subscr55;
                            {
                                PyObjectTemporary tmp_identifier( ( op57.assign( ( subscr55.assign( _python_tmp_inplace_target ), LOOKUP_SUBSCRIPT( subscr55.asObject0(), _python_tmp_inplace_subscript ) ) ), BINARY_OPERATION( PyNumber_InPlaceAdd, op57.asObject0(), _python_var_piece.asObject() ) ) );
                                PyObject *tmp_subscribed = _python_tmp_inplace_target;
                                SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_inplace_subscript );
                        }
                        }
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        }
        frame_guard.setLineNumber( 341 );
        {
            PyObjectTempKeeper0 make_tuple61;
            return ( make_tuple61.assign( _python_var_result.asObject() ), MAKE_TUPLE2( make_tuple61.asObject0(), _python_var_result_args.asObject() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_source.updateLocalsDict( _python_var_i_args.updateLocalsDict( _python_var_i_item.updateLocalsDict( _python_var_new_args.updateLocalsDict( _python_var_new_result.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_res.updateLocalsDict( _python_var_item.updateLocalsDict( _python_var_inner_args.updateLocalsDict( _python_var_inner_result.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_param.updateLocalsDict( _python_var_piece.updateLocalsDict( _python_var_elt.updateLocalsDict( _python_var_last.updateLocalsDict( _python_var_pos.updateLocalsDict( _python_var_result_args.updateLocalsDict( _python_var_result.updateLocalsDict( _python_var_params.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_flatten_result_of_module_django__utils__regex_helper )
        {
           Py_DECREF( frame_function_9_flatten_result_of_module_django__utils__regex_helper );
           frame_function_9_flatten_result_of_module_django__utils__regex_helper = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_flatten_result_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_source = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "flatten_result() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_source == key )
            {
                if (unlikely( _python_par_source ))
                {
                    PyErr_Format( PyExc_TypeError, "flatten_result() got multiple values for keyword argument 'source'" );
                    goto error_exit;
                }

                _python_par_source = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_source, key ) )
            {
                if (unlikely( _python_par_source ))
                {
                    PyErr_Format( PyExc_TypeError, "flatten_result() got multiple values for keyword argument 'source'" );
                    goto error_exit;
                }

                _python_par_source = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "flatten_result() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "flatten_result() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "flatten_result() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "flatten_result() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "flatten_result() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "flatten_result() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "flatten_result() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "flatten_result() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "flatten_result() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "flatten_result() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "flatten_result() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "flatten_result() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "flatten_result() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_source != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "flatten_result() got multiple values for keyword argument 'source'" );
             goto error_exit;
         }

        _python_par_source = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9_flatten_result_of_module_django__utils__regex_helper( self, _python_par_source );

error_exit:;

    Py_XDECREF( _python_par_source );

    return NULL;
}

static PyObject *dparse_function_9_flatten_result_of_module_django__utils__regex_helper( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9_flatten_result_of_module_django__utils__regex_helper( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_flatten_result_of_module_django__utils__regex_helper( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_4_normalize_of_module_django__utils__regex_helper(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_normalize_of_module_django__utils__regex_helper,
        dparse_function_4_normalize_of_module_django__utils__regex_helper,
        _python_str_plain_normalize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_923c28ff2ac4105cfafcd5c04671ac07,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__regex_helper,
        _python_unicode_digest_1747aafd2f3292eb17ee1381977ed223
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_next_char_of_module_django__utils__regex_helper(  )
{
    return Nuitka_Function_New(
        fparse_function_5_next_char_of_module_django__utils__regex_helper,
        dparse_function_5_next_char_of_module_django__utils__regex_helper,
        _python_str_plain_next_char,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_419962dd17d4a04a9c2d8b457362560b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__regex_helper,
        _python_unicode_digest_ce38d1231ce55cf4c55b6d9631640503
    );
}



static PyObject *MAKE_FUNCTION_function_6_walk_to_end_of_module_django__utils__regex_helper(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_walk_to_end_of_module_django__utils__regex_helper,
        dparse_function_6_walk_to_end_of_module_django__utils__regex_helper,
        _python_str_plain_walk_to_end,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c3021ec2ae548b601335e7b28bf33129,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__regex_helper,
        _python_unicode_digest_7922d013ad694f5b6054745b54ba860e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_get_quantifier_of_module_django__utils__regex_helper(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_get_quantifier_of_module_django__utils__regex_helper,
        dparse_function_7_get_quantifier_of_module_django__utils__regex_helper,
        _python_str_plain_get_quantifier,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_523fc70e37d35f151650bb5c61ff9def,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__regex_helper,
        _python_unicode_digest_10e94f3e223dbad9252c6e4b01f5e3ae
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_contains_of_module_django__utils__regex_helper(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_contains_of_module_django__utils__regex_helper,
        dparse_function_8_contains_of_module_django__utils__regex_helper,
        _python_str_plain_contains,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6d82179a71640faa423a14246a65f7de,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__regex_helper,
        _python_unicode_digest_d865d131f2facacc85e9e8ffc4a9f8b8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_flatten_result_of_module_django__utils__regex_helper(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_flatten_result_of_module_django__utils__regex_helper,
        dparse_function_9_flatten_result_of_module_django__utils__regex_helper,
        _python_str_plain_flatten_result,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_19ae3a48c3c258ea1072191acaa63d70,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__regex_helper,
        _python_unicode_digest_0c09fdb24900ad723c398d7d16eb61a1
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.regex_helper",   /* m_name */
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

MOD_INIT_DECL( django__utils__regex_helper )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__regex_helper );
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

    // puts( "in initdjango__utils__regex_helper" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__regex_helper = Py_InitModule4(
        "django.utils.regex_helper",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__regex_helper = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__regex_helper = (PyDictObject *)((PyModuleObject *)_module_django__utils__regex_helper)->md_dict;

    assertObject( _module_django__utils__regex_helper );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_7b7eabebde19226a9b3f810dd8408c48, _module_django__utils__regex_helper );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__regex_helper );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__regex_helper != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_c62501f919a11198738a2a63f2bdb681 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_6940f6e9b5225e518ba1ad0c8888f704 );
    PyFrameObject *frame_module_django__utils__regex_helper = MAKE_FRAME( _codeobj_ffdc1ae8d27bf563d41107f238a8b2dc, _module_django__utils__regex_helper );

    FrameGuard frame_guard( frame_module_django__utils__regex_helper );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__regex_helper ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__utils__regex_helper)->md_dict, ((PyModuleObject *)_module_django__utils__regex_helper)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__regex_helper)->md_dict, ((PyModuleObject *)_module_django__utils__regex_helper)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_zip, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_91ddc8f1df73e2bf4268fd2741c1c593, ((PyModuleObject *)_module_django__utils__regex_helper)->md_dict, ((PyModuleObject *)_module_django__utils__regex_helper)->md_dict, _python_list_str_plain_zip_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_zip ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_ESCAPE_MAPPINGS, PyDict_Copy( _python_dict_136e5f2317c5a14f3e08451023471fe7 ) );
        {
            frame_guard.setLineNumber( 29 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_list ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_Choice_of_module_django__utils__regex_helper(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__regex_helper___metaclass__.isInitialized( false ) ? _mvar_django__utils__regex_helper___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_Choice, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_Choice, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 36 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_list ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_Group_of_module_django__utils__regex_helper(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__regex_helper___metaclass__.isInitialized( false ) ? _mvar_django__utils__regex_helper___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_Group, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_Group, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 41 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_list ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_NonCapture_of_module_django__utils__regex_helper(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__regex_helper___metaclass__.isInitialized( false ) ? _mvar_django__utils__regex_helper___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_NonCapture, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_NonCapture, _python_tmp_class.asObject() );
        }
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__regex_helper)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_normalize, MAKE_FUNCTION_function_4_normalize_of_module_django__utils__regex_helper(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_next_char, MAKE_FUNCTION_function_5_next_char_of_module_django__utils__regex_helper(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_walk_to_end, MAKE_FUNCTION_function_6_walk_to_end_of_module_django__utils__regex_helper(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_get_quantifier, MAKE_FUNCTION_function_7_get_quantifier_of_module_django__utils__regex_helper(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_contains, MAKE_FUNCTION_function_8_contains_of_module_django__utils__regex_helper(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__regex_helper, (Nuitka_StringObject *)_python_str_plain_flatten_result, MAKE_FUNCTION_function_9_flatten_result_of_module_django__utils__regex_helper(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__regex_helper );
}
