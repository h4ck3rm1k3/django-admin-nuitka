// Generated code for Python source for module 'django.utils.numberformat'
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

// The _module_django__utils__numberformat is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__numberformat;
PyDictObject *_moduledict_django__utils__numberformat;

// The module level variables.
static PyObjectGlobalVariable_django__utils__numberformat _mvar_django__utils__numberformat_mark_safe( &_module_django__utils__numberformat, &_python_str_plain_mark_safe );
static PyObjectGlobalVariable_django__utils__numberformat _mvar_django__utils__numberformat_settings( &_module_django__utils__numberformat, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__utils__numberformat _mvar_django__utils__numberformat_six( &_module_django__utils__numberformat, &_python_str_plain_six );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_format_of_module_django__utils__numberformat(  );


// The module function definitions.
static PyObject *impl_function_1_format_of_module_django__utils__numberformat( Nuitka_FunctionObject *self, PyObject *_python_par_number, PyObject *_python_par_decimal_sep, PyObject *_python_par_decimal_pos, PyObject *_python_par_grouping, PyObject *_python_par_thousand_sep, PyObject *_python_par_force_grouping )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_number( _python_str_plain_number, _python_par_number );
    PyObjectLocalParameterVariableNoDel _python_var_decimal_sep( _python_str_plain_decimal_sep, _python_par_decimal_sep );
    PyObjectLocalParameterVariableNoDel _python_var_decimal_pos( _python_str_plain_decimal_pos, _python_par_decimal_pos );
    PyObjectLocalParameterVariableNoDel _python_var_grouping( _python_str_plain_grouping, _python_par_grouping );
    PyObjectLocalParameterVariableNoDel _python_var_thousand_sep( _python_str_plain_thousand_sep, _python_par_thousand_sep );
    PyObjectLocalParameterVariableNoDel _python_var_force_grouping( _python_str_plain_force_grouping, _python_par_force_grouping );
    PyObjectLocalVariable _python_var_use_grouping( _python_str_plain_use_grouping );
    PyObjectLocalVariable _python_var_sign( _python_str_plain_sign );
    PyObjectLocalVariable _python_var_str_number( _python_str_plain_str_number );
    PyObjectLocalVariable _python_var_int_part( _python_str_plain_int_part );
    PyObjectLocalVariable _python_var_dec_part( _python_str_plain_dec_part );
    PyObjectLocalVariable _python_var_int_part_gd( _python_str_plain_int_part_gd );
    PyObjectLocalVariable _python_var_cnt( _python_str_plain_cnt );
    PyObjectLocalVariable _python_var_digit( _python_str_plain_digit );

    // Actual function code.
    static PyFrameObject *frame_function_1_format_of_module_django__utils__numberformat = NULL;

    if ( isFrameUnusable( frame_function_1_format_of_module_django__utils__numberformat ) )
    {
        if ( frame_function_1_format_of_module_django__utils__numberformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_format_of_module_django__utils__numberformat" );
#endif
            Py_DECREF( frame_function_1_format_of_module_django__utils__numberformat );
        }

        frame_function_1_format_of_module_django__utils__numberformat = MAKE_FRAME( _codeobj_9299605101d99fd919a475825bcb6c61, _module_django__utils__numberformat );
    }

    FrameGuard frame_guard( frame_function_1_format_of_module_django__utils__numberformat );
    try
    {
        assert( Py_REFCNT( frame_function_1_format_of_module_django__utils__numberformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 17 );
        {
            PyObjectTempKeeper1 keeper_0;
            _python_var_use_grouping.assign1( ( CHECK_IF_TRUE( keeper_0.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__numberformat_settings.asObject0(), _python_str_plain_USE_L10N ) ) ) ? LOOKUP_ATTRIBUTE( _mvar_django__utils__numberformat_settings.asObject0(), _python_str_plain_USE_THOUSAND_SEPARATOR ) : keeper_0.asObject() ) );
        }
        frame_guard.setLineNumber( 18 );
        {
            PyObjectTempKeeper0 keeper_1;
            _python_var_use_grouping.assign0( ( CHECK_IF_TRUE( keeper_1.assign( _python_var_use_grouping.asObject() ) ) ? keeper_1.asObject0() : _python_var_force_grouping.asObject() ) );
        }
        frame_guard.setLineNumber( 19 );
        {
            PyObjectTempKeeper0 keeper_2;
            _python_var_use_grouping.assign1( ( CHECK_IF_TRUE( keeper_2.assign( _python_var_use_grouping.asObject() ) ) ? RICH_COMPARE_GT( _python_var_grouping.asObject(), _python_int_0 ) : INCREASE_REFCOUNT( keeper_2.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 21 );
        if ( ( BUILTIN_ISINSTANCE_BOOL( _python_var_number.asObject(), LOOKUP_BUILTIN( _python_str_plain_int ) ) && ( (!( CHECK_IF_TRUE( _python_var_use_grouping.asObject() ) )) && (!( CHECK_IF_TRUE( _python_var_decimal_pos.asObject() ) )) ) ) )
        {
            frame_guard.setLineNumber( 22 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call3;
                return ( call3.assign( _mvar_django__utils__numberformat_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__numberformat_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_number.asObject() ) ) ).asObject() ) );
            }
        }
        _python_var_sign.assign0( _python_str_empty );
        frame_guard.setLineNumber( 25 );
        {
            PyObjectTempKeeper1 call5;
            _python_var_str_number.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__numberformat_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_number.asObject() ) ) );
        }
        frame_guard.setLineNumber( 26 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_str_number.asObject(), _python_int_0, 0 ) ).asObject(), _python_str_chr_45 ) )
        {
            _python_var_sign.assign0( _python_str_chr_45 );
            frame_guard.setLineNumber( 28 );
            _python_var_str_number.assign1( LOOKUP_INDEX_SLICE( _python_var_str_number.asObject(), 1, PY_SSIZE_T_MAX ) );
        }
        frame_guard.setLineNumber( 30 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_str_dot, _python_var_str_number.asObject() ) )
        {
            {
                frame_guard.setLineNumber( 31 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_str_number.asObject(), _python_str_plain_split ) ).asObject(), _python_str_dot ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_int_part.assign0( _python_tmp_element_1.asObject() );
                _python_var_dec_part.assign0( _python_tmp_element_2.asObject() );
            }
            frame_guard.setLineNumber( 32 );
            if ( ( _python_var_decimal_pos.asObject() != Py_None ) )
            {
                frame_guard.setLineNumber( 33 );
                {
                    PyObjectTempKeeper0 slice7;
                    _python_var_dec_part.assign1( ( slice7.assign( _python_var_dec_part.asObject() ), LOOKUP_SLICE( slice7.asObject0(), Py_None, _python_var_decimal_pos.asObject() ) ) );
                }
            }
        }
        else
        {
            {
                frame_guard.setLineNumber( 35 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( MAKE_TUPLE2( _python_var_str_number.asObject(), _python_str_empty ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_int_part.assign0( _python_tmp_element_1.asObject() );
                _python_var_dec_part.assign0( _python_tmp_element_2.asObject() );
            }
        }
        frame_guard.setLineNumber( 36 );
        if ( ( _python_var_decimal_pos.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 37 );
            {
                PyObjectTempKeeper0 op10;
                PyObjectTempKeeper0 op12;
                _python_var_dec_part.assign1( ( op12.assign( _python_var_dec_part.asObject() ), BINARY_OPERATION_ADD( op12.asObject0(), PyObjectTemporary( BINARY_OPERATION_MUL( _python_str_plain_0, PyObjectTemporary( ( op10.assign( _python_var_decimal_pos.asObject() ), BINARY_OPERATION_SUB( op10.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_dec_part.asObject() ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 38 );
        if ( CHECK_IF_TRUE( _python_var_dec_part.asObject() ) )
        {
            frame_guard.setLineNumber( 39 );
            {
                PyObjectTempKeeper0 op14;
                _python_var_dec_part.assign1( ( op14.assign( _python_var_decimal_sep.asObject() ), BINARY_OPERATION_ADD( op14.asObject0(), _python_var_dec_part.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 41 );
        if ( CHECK_IF_TRUE( _python_var_use_grouping.asObject() ) )
        {
            _python_var_int_part_gd.assign0( _python_str_empty );
            {
                frame_guard.setLineNumber( 43 );
                PyObject *_tmp_python_tmp_for_iterator;
                {
                    PyObjectTempKeeper0 subscr16;
                    _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), PyObjectTemporary( ( subscr16.assign( _python_var_int_part.asObject() ), LOOKUP_SUBSCRIPT( subscr16.asObject0(), PyObjectTemporary( MAKE_SLICEOBJ( Py_None, Py_None, _python_int_neg_1 ) ).asObject() ) ) ).asObject() ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 43 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

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
                            _python_var_cnt.assign0( _python_tmp_element_1.asObject() );
                            _python_var_digit.assign0( _python_tmp_element_2.asObject() );
                        }
                    }
                    frame_guard.setLineNumber( 44 );
                    {
                        PyObjectTempKeeper0 op20;
                        if ( ( CHECK_IF_TRUE( _python_var_cnt.asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( ( op20.assign( _python_var_cnt.asObject() ), BINARY_OPERATION_REMAINDER( op20.asObject0(), _python_var_grouping.asObject() ) ) ).asObject() ) )) ) )
                    {
                        {
                            frame_guard.setLineNumber( 45 );
                            PyObject *_python_tmp_inplace_start = _python_var_int_part_gd.asObject();
                            PyObject *_tmp_python_tmp_inplace_end;
                            {
                                PyObjectTempKeeper0 op18;
                                _tmp_python_tmp_inplace_end = ( op18.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op18.asObject0(), _python_var_thousand_sep.asObject() ) );
                            }
                            PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                            if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                            {
                                _python_var_int_part_gd.assign0( _python_tmp_inplace_end.asObject() );
                            }
                        }
                    }
                    }
                    {
                        frame_guard.setLineNumber( 46 );
                        PyObject *_python_tmp_inplace_start = _python_var_int_part_gd.asObject();
                        PyObject *_tmp_python_tmp_inplace_end;
                        {
                            PyObjectTempKeeper0 op22;
                            _tmp_python_tmp_inplace_end = ( op22.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op22.asObject0(), _python_var_digit.asObject() ) );
                        }
                        PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                        if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                        {
                            _python_var_int_part_gd.assign0( _python_tmp_inplace_end.asObject() );
                        }
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 47 );
            {
                PyObjectTempKeeper0 subscr24;
                _python_var_int_part.assign1( ( subscr24.assign( _python_var_int_part_gd.asObject() ), LOOKUP_SUBSCRIPT( subscr24.asObject0(), PyObjectTemporary( MAKE_SLICEOBJ( Py_None, Py_None, _python_int_neg_1 ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 48 );
        {
            PyObjectTempKeeper0 op26;
            PyObjectTempKeeper1 op28;
            return ( op28.assign( ( op26.assign( _python_var_sign.asObject() ), BINARY_OPERATION_ADD( op26.asObject0(), _python_var_int_part.asObject() ) ) ), BINARY_OPERATION_ADD( op28.asObject0(), _python_var_dec_part.asObject() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_force_grouping.updateLocalsDict( _python_var_thousand_sep.updateLocalsDict( _python_var_grouping.updateLocalsDict( _python_var_decimal_pos.updateLocalsDict( _python_var_decimal_sep.updateLocalsDict( _python_var_number.updateLocalsDict( _python_var_digit.updateLocalsDict( _python_var_cnt.updateLocalsDict( _python_var_int_part_gd.updateLocalsDict( _python_var_dec_part.updateLocalsDict( _python_var_int_part.updateLocalsDict( _python_var_str_number.updateLocalsDict( _python_var_sign.updateLocalsDict( _python_var_use_grouping.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_format_of_module_django__utils__numberformat )
        {
           Py_DECREF( frame_function_1_format_of_module_django__utils__numberformat );
           frame_function_1_format_of_module_django__utils__numberformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_format_of_module_django__utils__numberformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_number = NULL;
    PyObject *_python_par_decimal_sep = NULL;
    PyObject *_python_par_decimal_pos = NULL;
    PyObject *_python_par_grouping = NULL;
    PyObject *_python_par_thousand_sep = NULL;
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
                PyErr_Format( PyExc_TypeError, "format() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_number == key )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_decimal_sep == key )
            {
                if (unlikely( _python_par_decimal_sep ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'decimal_sep'" );
                    goto error_exit;
                }

                _python_par_decimal_sep = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_decimal_pos == key )
            {
                if (unlikely( _python_par_decimal_pos ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'decimal_pos'" );
                    goto error_exit;
                }

                _python_par_decimal_pos = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_grouping == key )
            {
                if (unlikely( _python_par_grouping ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'grouping'" );
                    goto error_exit;
                }

                _python_par_grouping = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_thousand_sep == key )
            {
                if (unlikely( _python_par_thousand_sep ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'thousand_sep'" );
                    goto error_exit;
                }

                _python_par_thousand_sep = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_force_grouping == key )
            {
                if (unlikely( _python_par_force_grouping ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'force_grouping'" );
                    goto error_exit;
                }

                _python_par_force_grouping = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_number, key ) )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_decimal_sep, key ) )
            {
                if (unlikely( _python_par_decimal_sep ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'decimal_sep'" );
                    goto error_exit;
                }

                _python_par_decimal_sep = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_decimal_pos, key ) )
            {
                if (unlikely( _python_par_decimal_pos ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'decimal_pos'" );
                    goto error_exit;
                }

                _python_par_decimal_pos = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_grouping, key ) )
            {
                if (unlikely( _python_par_grouping ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'grouping'" );
                    goto error_exit;
                }

                _python_par_grouping = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_thousand_sep, key ) )
            {
                if (unlikely( _python_par_thousand_sep ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'thousand_sep'" );
                    goto error_exit;
                }

                _python_par_thousand_sep = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_force_grouping, key ) )
            {
                if (unlikely( _python_par_force_grouping ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'force_grouping'" );
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
                   "format() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "format() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "format() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "format() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "format() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "format() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "format() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 6 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "format() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "format() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "format() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "format() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 6 ? args_given : 6;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_number != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'number'" );
             goto error_exit;
         }

        _python_par_number = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_decimal_sep != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'decimal_sep'" );
             goto error_exit;
         }

        _python_par_decimal_sep = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_decimal_pos != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'decimal_pos'" );
             goto error_exit;
         }

        _python_par_decimal_pos = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_grouping != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'grouping'" );
             goto error_exit;
         }

        _python_par_grouping = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_thousand_sep != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'thousand_sep'" );
             goto error_exit;
         }

        _python_par_thousand_sep = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_force_grouping != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'force_grouping'" );
             goto error_exit;
         }

        _python_par_force_grouping = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_decimal_pos == NULL )
    {
        _python_par_decimal_pos = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_decimal_pos );
    }
    if ( _python_par_grouping == NULL )
    {
        _python_par_grouping = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_grouping );
    }
    if ( _python_par_thousand_sep == NULL )
    {
        _python_par_thousand_sep = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_thousand_sep );
    }
    if ( _python_par_force_grouping == NULL )
    {
        _python_par_force_grouping = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_force_grouping );
    }


    return impl_function_1_format_of_module_django__utils__numberformat( self, _python_par_number, _python_par_decimal_sep, _python_par_decimal_pos, _python_par_grouping, _python_par_thousand_sep, _python_par_force_grouping );

error_exit:;

    Py_XDECREF( _python_par_number );
    Py_XDECREF( _python_par_decimal_sep );
    Py_XDECREF( _python_par_decimal_pos );
    Py_XDECREF( _python_par_grouping );
    Py_XDECREF( _python_par_thousand_sep );
    Py_XDECREF( _python_par_force_grouping );

    return NULL;
}

static PyObject *dparse_function_1_format_of_module_django__utils__numberformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_1_format_of_module_django__utils__numberformat( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_format_of_module_django__utils__numberformat( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_format_of_module_django__utils__numberformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_format_of_module_django__utils__numberformat,
        dparse_function_1_format_of_module_django__utils__numberformat,
        _python_str_plain_format,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9299605101d99fd919a475825bcb6c61,
        INCREASE_REFCOUNT( _python_tuple_none_int_0_str_empty_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__numberformat,
        _python_str_digest_cfa2169d656120d013a5575f16b9aa2b
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.numberformat",   /* m_name */
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

MOD_INIT_DECL( django__utils__numberformat )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__numberformat );
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

    // puts( "in initdjango__utils__numberformat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__numberformat = Py_InitModule4(
        "django.utils.numberformat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__numberformat = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__numberformat = (PyDictObject *)((PyModuleObject *)_module_django__utils__numberformat)->md_dict;

    assertObject( _module_django__utils__numberformat );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_5ec3fdc4604649047e26665a3ad543af, _module_django__utils__numberformat );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__numberformat );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__numberformat != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__numberformat, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__numberformat, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_5fec1003edadbd61382a013e5b2c58aa );
    PyFrameObject *frame_module_django__utils__numberformat = MAKE_FRAME( _codeobj_a4783d28e67d5156b9477df17573ba08, _module_django__utils__numberformat );

    FrameGuard frame_guard( frame_module_django__utils__numberformat );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__numberformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__numberformat, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__numberformat)->md_dict, ((PyModuleObject *)_module_django__utils__numberformat)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__numberformat, (Nuitka_StringObject *)_python_str_plain_mark_safe, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_33422e2c698707541621bf8ab31ea849, ((PyModuleObject *)_module_django__utils__numberformat)->md_dict, ((PyModuleObject *)_module_django__utils__numberformat)->md_dict, _python_list_str_plain_mark_safe_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_mark_safe ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__numberformat, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__numberformat)->md_dict, ((PyModuleObject *)_module_django__utils__numberformat)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__numberformat)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__numberformat, (Nuitka_StringObject *)_python_str_plain_format, MAKE_FUNCTION_function_1_format_of_module_django__utils__numberformat(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__numberformat );
}
