// Generated code for Python source for module 'django.utils.timesince'
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

// The _module_django__utils__timesince is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__timesince;
PyDictObject *_moduledict_django__utils__timesince;

// The module level variables.
static PyObjectGlobalVariable_django__utils__timesince _mvar_django__utils__timesince_avoid_wrapping( &_module_django__utils__timesince, &_python_str_plain_avoid_wrapping );
static PyObjectGlobalVariable_django__utils__timesince _mvar_django__utils__timesince_datetime( &_module_django__utils__timesince, &_python_str_plain_datetime );
static PyObjectGlobalVariable_django__utils__timesince _mvar_django__utils__timesince_is_aware( &_module_django__utils__timesince, &_python_str_plain_is_aware );
static PyObjectGlobalVariable_django__utils__timesince _mvar_django__utils__timesince_timesince( &_module_django__utils__timesince, &_python_str_plain_timesince );
static PyObjectGlobalVariable_django__utils__timesince _mvar_django__utils__timesince_ugettext( &_module_django__utils__timesince, &_python_str_plain_ugettext );
static PyObjectGlobalVariable_django__utils__timesince _mvar_django__utils__timesince_ungettext_lazy( &_module_django__utils__timesince, &_python_str_plain_ungettext_lazy );
static PyObjectGlobalVariable_django__utils__timesince _mvar_django__utils__timesince_utc( &_module_django__utils__timesince, &_python_str_plain_utc );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_timesince_of_module_django__utils__timesince(  );


static PyObject *MAKE_FUNCTION_function_2_timeuntil_of_module_django__utils__timesince(  );


// The module function definitions.
static PyObject *impl_function_1_timesince_of_module_django__utils__timesince( Nuitka_FunctionObject *self, PyObject *_python_par_d, PyObject *_python_par_now, PyObject *_python_par_reversed )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_d( _python_str_plain_d, _python_par_d );
    PyObjectLocalParameterVariableNoDel _python_var_now( _python_str_plain_now, _python_par_now );
    PyObjectLocalParameterVariableNoDel _python_var_reversed( _python_str_plain_reversed, _python_par_reversed );
    PyObjectLocalVariable _python_var_chunks( _python_str_plain_chunks );
    PyObjectLocalVariable _python_var_delta( _python_str_plain_delta );
    PyObjectLocalVariable _python_var_since( _python_str_plain_since );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_seconds( _python_str_plain_seconds );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );
    PyObjectLocalVariable _python_var_count( _python_str_plain_count );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );
    PyObjectLocalVariable _python_var_seconds2( _python_str_plain_seconds2 );
    PyObjectLocalVariable _python_var_name2( _python_str_plain_name2 );
    PyObjectLocalVariable _python_var_count2( _python_str_plain_count2 );

    // Actual function code.
    static PyFrameObject *frame_function_1_timesince_of_module_django__utils__timesince = NULL;

    if ( isFrameUnusable( frame_function_1_timesince_of_module_django__utils__timesince ) )
    {
        if ( frame_function_1_timesince_of_module_django__utils__timesince )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_timesince_of_module_django__utils__timesince" );
#endif
            Py_DECREF( frame_function_1_timesince_of_module_django__utils__timesince );
        }

        frame_function_1_timesince_of_module_django__utils__timesince = MAKE_FRAME( _codeobj_1f43036cca45e99773789b0249c6b172, _module_django__utils__timesince );
    }

    FrameGuard frame_guard( frame_function_1_timesince_of_module_django__utils__timesince );
    try
    {
        assert( Py_REFCNT( frame_function_1_timesince_of_module_django__utils__timesince ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 22 );
        {
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            PyObjectTempKeeper1 make_tuple3;
            PyObjectTempKeeper1 make_tuple4;
            PyObjectTempKeeper1 make_tuple5;
            _python_var_chunks.assign1( ( make_tuple1.assign( MAKE_TUPLE2( _python_int_pos_31536000, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__timesince_ungettext_lazy.asObject0(), _python_unicode_digest_2daa0d539a32aaac767aabaca91adba0, _python_unicode_digest_86730d7947a117f6c049cfe444cff01f ) ).asObject() ) ), make_tuple2.assign( MAKE_TUPLE2( _python_int_pos_2592000, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__timesince_ungettext_lazy.asObject0(), _python_unicode_digest_6dfa843c00e1e5bf2ccb0682726c21ac, _python_unicode_digest_eb5314edf3b6fa21af6b10bb96db27e5 ) ).asObject() ) ), make_tuple3.assign( MAKE_TUPLE2( _python_int_pos_604800, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__timesince_ungettext_lazy.asObject0(), _python_unicode_digest_b91408993adb3b777c688e2beca57620, _python_unicode_digest_a9af734d421d321ca93d5f651c9e6722 ) ).asObject() ) ), make_tuple4.assign( MAKE_TUPLE2( _python_int_pos_86400, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__timesince_ungettext_lazy.asObject0(), _python_unicode_digest_fdb916cf48513ee9884330392f49349b, _python_unicode_digest_cdca48ec5dde79b84b395c0c557bb290 ) ).asObject() ) ), make_tuple5.assign( MAKE_TUPLE2( _python_int_pos_3600, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__timesince_ungettext_lazy.asObject0(), _python_unicode_digest_b428788686db0cf50ef6d322ee51f084, _python_unicode_digest_4e8d5e5492c42a5058d220efcac00228 ) ).asObject() ) ), MAKE_TUPLE6( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_int_pos_60, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__timesince_ungettext_lazy.asObject0(), _python_unicode_digest_14ad767ffe5ff379afdec345baf7411a, _python_unicode_digest_79ae6e308dcdcc5e31935d5d24cabb81 ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 31 );
        {
            PyObjectTempKeeper0 isinstance11;
            if ( (!( ( isinstance11.assign( _python_var_d.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance11.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__timesince_datetime.asObject0(), _python_str_plain_datetime ) ).asObject() ) ) )) )
        {
            frame_guard.setLineNumber( 32 );
            {
                PyObjectTempKeeper1 call7;
                PyObjectTempKeeper1 call8;
                PyObjectTempKeeper1 call9;
                _python_var_d.assign1( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__timesince_datetime.asObject0(), _python_str_plain_datetime ) ), call8.assign( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_year ) ), call9.assign( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_month ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), call8.asObject0(), call9.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_day ) ).asObject() ) ) );
            }
        }
        }
        frame_guard.setLineNumber( 33 );
        {
            PyObjectTempKeeper0 isinstance17;
            if ( ( CHECK_IF_TRUE( _python_var_now.asObject() ) && (!( ( isinstance17.assign( _python_var_now.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance17.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__timesince_datetime.asObject0(), _python_str_plain_datetime ) ).asObject() ) ) )) ) )
        {
            frame_guard.setLineNumber( 34 );
            {
                PyObjectTempKeeper1 call13;
                PyObjectTempKeeper1 call14;
                PyObjectTempKeeper1 call15;
                _python_var_now.assign1( ( call13.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__timesince_datetime.asObject0(), _python_str_plain_datetime ) ), call14.assign( LOOKUP_ATTRIBUTE( _python_var_now.asObject(), _python_str_plain_year ) ), call15.assign( LOOKUP_ATTRIBUTE( _python_var_now.asObject(), _python_str_plain_month ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), call14.asObject0(), call15.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_now.asObject(), _python_str_plain_day ) ).asObject() ) ) );
            }
        }
        }
        frame_guard.setLineNumber( 36 );
        if ( (!( CHECK_IF_TRUE( _python_var_now.asObject() ) )) )
        {
            frame_guard.setLineNumber( 37 );
            {
                PyObjectTempKeeper0 call19;
                PyObjectTempKeeper1 call21;
                _python_var_now.assign1( ( call21.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__timesince_datetime.asObject0(), _python_str_plain_datetime ) ).asObject(), _python_str_plain_now ) ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), ( CHECK_IF_TRUE( PyObjectTemporary( ( call19.assign( _mvar_django__utils__timesince_is_aware.asObject0() ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), _python_var_d.asObject() ) ) ).asObject() ) ? _mvar_django__utils__timesince_utc.asObject0() : Py_None ) ) ) );
            }
        }
        frame_guard.setLineNumber( 39 );
        {
            PyObjectTempKeeper0 op23;
            PyObjectTempKeeper0 op25;
            _python_var_delta.assign1( ( CHECK_IF_TRUE( _python_var_reversed.asObject() ) ? ( op23.assign( _python_var_d.asObject() ), BINARY_OPERATION_SUB( op23.asObject0(), _python_var_now.asObject() ) ) : ( op25.assign( _python_var_now.asObject() ), BINARY_OPERATION_SUB( op25.asObject0(), _python_var_d.asObject() ) ) ) );
        }
        frame_guard.setLineNumber( 41 );
        {
            PyObjectTempKeeper1 op27;
            _python_var_since.assign1( ( op27.assign( BINARY_OPERATION_MUL( PyObjectTemporary( BINARY_OPERATION_MUL( PyObjectTemporary( BINARY_OPERATION_MUL( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_delta.asObject(), _python_str_plain_days ) ).asObject(), _python_int_pos_24 ) ).asObject(), _python_int_pos_60 ) ).asObject(), _python_int_pos_60 ) ), BINARY_OPERATION_ADD( op27.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_delta.asObject(), _python_str_plain_seconds ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 42 );
        if ( RICH_COMPARE_BOOL_LE( _python_var_since.asObject(), _python_int_0 ) )
        {
            frame_guard.setLineNumber( 44 );
            {
                PyObjectTempKeeper0 call29;
                return ( call29.assign( _mvar_django__utils__timesince_avoid_wrapping.asObject0() ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__timesince_ugettext.asObject0(), _python_unicode_digest_331f2eeb81c67c1e3b39f3ab88137003 ) ).asObject() ) );
            }
        }
        {
            frame_guard.setLineNumber( 45 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), _python_var_chunks.asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 45 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 45 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_i.assign0( _python_tmp_element_1.asObject() );
                        {
                            frame_guard.setLineNumber( 45 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_element_2.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_seconds.assign0( _python_tmp_element_1.asObject() );
                            _python_var_name.assign0( _python_tmp_element_2.asObject() );
                        }
                    }
                }
                frame_guard.setLineNumber( 46 );
                {
                    PyObjectTempKeeper0 op31;
                    _python_var_count.assign1( ( op31.assign( _python_var_since.asObject() ), BINARY_OPERATION( PyNumber_FloorDivide, op31.asObject0(), _python_var_seconds.asObject() ) ) );
                }
                frame_guard.setLineNumber( 47 );
                if ( RICH_COMPARE_BOOL_NE( _python_var_count.asObject(), _python_int_0 ) )
                {
                    frame_guard.setLineNumber( 48 );
                    break;
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 49 );
        {
            PyObjectTempKeeper0 call35;
            PyObjectTempKeeper0 op33;
            _python_var_result.assign1( ( call35.assign( _mvar_django__utils__timesince_avoid_wrapping.asObject0() ), CALL_FUNCTION_WITH_ARGS( call35.asObject0(), PyObjectTemporary( ( op33.assign( _python_var_name.asObject() ), BINARY_OPERATION_REMAINDER( op33.asObject0(), _python_var_count.asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 50 );
        {
            PyObjectTempKeeper1 cmp53;
            if ( ( cmp53.assign( BINARY_OPERATION_ADD( _python_var_i.asObject(), _python_int_pos_1 ) ), RICH_COMPARE_BOOL_LT( cmp53.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_chunks.asObject() ) ).asObject() ) ) )
        {
            {
                frame_guard.setLineNumber( 52 );
                PyObject *_tmp_python_tmp_source_iter;
                {
                    PyObjectTempKeeper0 subscr37;
                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( subscr37.assign( _python_var_chunks.asObject() ), LOOKUP_SUBSCRIPT( subscr37.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_i.asObject(), _python_int_pos_1 ) ).asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_seconds2.assign0( _python_tmp_element_1.asObject() );
                _python_var_name2.assign0( _python_tmp_element_2.asObject() );
            }
            frame_guard.setLineNumber( 53 );
            {
                PyObjectTempKeeper0 op39;
                PyObjectTempKeeper0 op41;
                PyObjectTempKeeper1 op43;
                _python_var_count2.assign1( ( op43.assign( ( op41.assign( _python_var_since.asObject() ), BINARY_OPERATION_SUB( op41.asObject0(), PyObjectTemporary( ( op39.assign( _python_var_seconds.asObject() ), BINARY_OPERATION_MUL( op39.asObject0(), _python_var_count.asObject() ) ) ).asObject() ) ) ), BINARY_OPERATION( PyNumber_FloorDivide, op43.asObject0(), _python_var_seconds2.asObject() ) ) );
            }
            frame_guard.setLineNumber( 54 );
            if ( RICH_COMPARE_BOOL_NE( _python_var_count2.asObject(), _python_int_0 ) )
            {
                {
                    frame_guard.setLineNumber( 55 );
                    PyObject *_python_tmp_inplace_start = _python_var_result.asObject();
                    PyObject *_tmp_python_tmp_inplace_end;
                    {
                        PyObjectTempKeeper0 call47;
                        PyObjectTempKeeper0 op45;
                        PyObjectTempKeeper1 op49;
                        PyObjectTempKeeper0 op51;
                        _tmp_python_tmp_inplace_end = ( op51.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op51.asObject0(), PyObjectTemporary( ( op49.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__timesince_ugettext.asObject0(), _python_unicode_digest_fc763cb31e9938f37737394681228f83 ) ), BINARY_OPERATION_ADD( op49.asObject0(), PyObjectTemporary( ( call47.assign( _mvar_django__utils__timesince_avoid_wrapping.asObject0() ), CALL_FUNCTION_WITH_ARGS( call47.asObject0(), PyObjectTemporary( ( op45.assign( _python_var_name2.asObject() ), BINARY_OPERATION_REMAINDER( op45.asObject0(), _python_var_count2.asObject() ) ) ).asObject() ) ) ).asObject() ) ) ).asObject() ) );
                    }
                    PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                    if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                    {
                        _python_var_result.assign0( _python_tmp_inplace_end.asObject() );
                    }
                }
            }
        }
        }
        frame_guard.setLineNumber( 56 );
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
        frame_guard.getFrame0()->f_locals = _python_var_reversed.updateLocalsDict( _python_var_now.updateLocalsDict( _python_var_d.updateLocalsDict( _python_var_count2.updateLocalsDict( _python_var_name2.updateLocalsDict( _python_var_seconds2.updateLocalsDict( _python_var_result.updateLocalsDict( _python_var_count.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_seconds.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_since.updateLocalsDict( _python_var_delta.updateLocalsDict( _python_var_chunks.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_timesince_of_module_django__utils__timesince )
        {
           Py_DECREF( frame_function_1_timesince_of_module_django__utils__timesince );
           frame_function_1_timesince_of_module_django__utils__timesince = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_timesince_of_module_django__utils__timesince( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_d = NULL;
    PyObject *_python_par_now = NULL;
    PyObject *_python_par_reversed = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "timesince() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_d == key )
            {
                if (unlikely( _python_par_d ))
                {
                    PyErr_Format( PyExc_TypeError, "timesince() got multiple values for keyword argument 'd'" );
                    goto error_exit;
                }

                _python_par_d = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_now == key )
            {
                if (unlikely( _python_par_now ))
                {
                    PyErr_Format( PyExc_TypeError, "timesince() got multiple values for keyword argument 'now'" );
                    goto error_exit;
                }

                _python_par_now = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_reversed == key )
            {
                if (unlikely( _python_par_reversed ))
                {
                    PyErr_Format( PyExc_TypeError, "timesince() got multiple values for keyword argument 'reversed'" );
                    goto error_exit;
                }

                _python_par_reversed = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_d, key ) )
            {
                if (unlikely( _python_par_d ))
                {
                    PyErr_Format( PyExc_TypeError, "timesince() got multiple values for keyword argument 'd'" );
                    goto error_exit;
                }

                _python_par_d = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_now, key ) )
            {
                if (unlikely( _python_par_now ))
                {
                    PyErr_Format( PyExc_TypeError, "timesince() got multiple values for keyword argument 'now'" );
                    goto error_exit;
                }

                _python_par_now = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_reversed, key ) )
            {
                if (unlikely( _python_par_reversed ))
                {
                    PyErr_Format( PyExc_TypeError, "timesince() got multiple values for keyword argument 'reversed'" );
                    goto error_exit;
                }

                _python_par_reversed = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "timesince() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "timesince() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "timesince() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "timesince() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "timesince() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "timesince() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "timesince() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "timesince() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "timesince() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "timesince() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "timesince() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "timesince() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "timesince() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_d != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "timesince() got multiple values for keyword argument 'd'" );
             goto error_exit;
         }

        _python_par_d = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_now != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "timesince() got multiple values for keyword argument 'now'" );
             goto error_exit;
         }

        _python_par_now = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_reversed != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "timesince() got multiple values for keyword argument 'reversed'" );
             goto error_exit;
         }

        _python_par_reversed = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_now == NULL )
    {
        _python_par_now = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_now );
    }
    if ( _python_par_reversed == NULL )
    {
        _python_par_reversed = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_reversed );
    }


    return impl_function_1_timesince_of_module_django__utils__timesince( self, _python_par_d, _python_par_now, _python_par_reversed );

error_exit:;

    Py_XDECREF( _python_par_d );
    Py_XDECREF( _python_par_now );
    Py_XDECREF( _python_par_reversed );

    return NULL;
}

static PyObject *dparse_function_1_timesince_of_module_django__utils__timesince( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_timesince_of_module_django__utils__timesince( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_timesince_of_module_django__utils__timesince( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_timeuntil_of_module_django__utils__timesince( Nuitka_FunctionObject *self, PyObject *_python_par_d, PyObject *_python_par_now )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_d( _python_str_plain_d, _python_par_d );
    PyObjectLocalParameterVariableNoDel _python_var_now( _python_str_plain_now, _python_par_now );

    // Actual function code.
    static PyFrameObject *frame_function_2_timeuntil_of_module_django__utils__timesince = NULL;

    if ( isFrameUnusable( frame_function_2_timeuntil_of_module_django__utils__timesince ) )
    {
        if ( frame_function_2_timeuntil_of_module_django__utils__timesince )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_timeuntil_of_module_django__utils__timesince" );
#endif
            Py_DECREF( frame_function_2_timeuntil_of_module_django__utils__timesince );
        }

        frame_function_2_timeuntil_of_module_django__utils__timesince = MAKE_FRAME( _codeobj_e50db62f3fd0ff11477cca13005b4774, _module_django__utils__timesince );
    }

    FrameGuard frame_guard( frame_function_2_timeuntil_of_module_django__utils__timesince );
    try
    {
        assert( Py_REFCNT( frame_function_2_timeuntil_of_module_django__utils__timesince ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 63 );
        {
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper0 make_tuple1;
            return ( call3.assign( _mvar_django__utils__timesince_timesince.asObject0() ), CALL_FUNCTION( call3.asObject0(), PyObjectTemporary( ( make_tuple1.assign( _python_var_d.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_var_now.asObject() ) ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_fcedb05115cab4770aef40ac2c4d93cc ) ).asObject() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_now.updateLocalsDict( _python_var_d.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_timeuntil_of_module_django__utils__timesince )
        {
           Py_DECREF( frame_function_2_timeuntil_of_module_django__utils__timesince );
           frame_function_2_timeuntil_of_module_django__utils__timesince = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_timeuntil_of_module_django__utils__timesince( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_d = NULL;
    PyObject *_python_par_now = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "timeuntil() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_d == key )
            {
                if (unlikely( _python_par_d ))
                {
                    PyErr_Format( PyExc_TypeError, "timeuntil() got multiple values for keyword argument 'd'" );
                    goto error_exit;
                }

                _python_par_d = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_now == key )
            {
                if (unlikely( _python_par_now ))
                {
                    PyErr_Format( PyExc_TypeError, "timeuntil() got multiple values for keyword argument 'now'" );
                    goto error_exit;
                }

                _python_par_now = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_d, key ) )
            {
                if (unlikely( _python_par_d ))
                {
                    PyErr_Format( PyExc_TypeError, "timeuntil() got multiple values for keyword argument 'd'" );
                    goto error_exit;
                }

                _python_par_d = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_now, key ) )
            {
                if (unlikely( _python_par_now ))
                {
                    PyErr_Format( PyExc_TypeError, "timeuntil() got multiple values for keyword argument 'now'" );
                    goto error_exit;
                }

                _python_par_now = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "timeuntil() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "timeuntil() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "timeuntil() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "timeuntil() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "timeuntil() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "timeuntil() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "timeuntil() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "timeuntil() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "timeuntil() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "timeuntil() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "timeuntil() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "timeuntil() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "timeuntil() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_d != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "timeuntil() got multiple values for keyword argument 'd'" );
             goto error_exit;
         }

        _python_par_d = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_now != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "timeuntil() got multiple values for keyword argument 'now'" );
             goto error_exit;
         }

        _python_par_now = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_now == NULL )
    {
        _python_par_now = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_now );
    }


    return impl_function_2_timeuntil_of_module_django__utils__timesince( self, _python_par_d, _python_par_now );

error_exit:;

    Py_XDECREF( _python_par_d );
    Py_XDECREF( _python_par_now );

    return NULL;
}

static PyObject *dparse_function_2_timeuntil_of_module_django__utils__timesince( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_timeuntil_of_module_django__utils__timesince( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_timeuntil_of_module_django__utils__timesince( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_timesince_of_module_django__utils__timesince(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_timesince_of_module_django__utils__timesince,
        dparse_function_1_timesince_of_module_django__utils__timesince,
        _python_str_plain_timesince,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1f43036cca45e99773789b0249c6b172,
        INCREASE_REFCOUNT( _python_tuple_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timesince,
        _python_unicode_digest_a3885b49ff339a4b95cdc34e1fddd288
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_timeuntil_of_module_django__utils__timesince(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_timeuntil_of_module_django__utils__timesince,
        dparse_function_2_timeuntil_of_module_django__utils__timesince,
        _python_str_plain_timeuntil,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e50db62f3fd0ff11477cca13005b4774,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timesince,
        _python_unicode_digest_74f88e0f77df3e556f4c33ef795352b9
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.timesince",   /* m_name */
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

MOD_INIT_DECL( django__utils__timesince )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__timesince );
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

    // puts( "in initdjango__utils__timesince" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__timesince = Py_InitModule4(
        "django.utils.timesince",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__timesince = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__timesince = (PyDictObject *)((PyModuleObject *)_module_django__utils__timesince)->md_dict;

    assertObject( _module_django__utils__timesince );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_f4a3c090f82e51f7a95131780175d112, _module_django__utils__timesince );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__timesince );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__timesince != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__timesince, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__timesince, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_3e7f6b63e426d6c62ce246887677af65 );
    PyFrameObject *frame_module_django__utils__timesince = MAKE_FRAME( _codeobj_c64f8915a32f28cfee620730740be703, _module_django__utils__timesince );

    FrameGuard frame_guard( frame_module_django__utils__timesince );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__timesince ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timesince, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timesince, (Nuitka_StringObject *)_python_str_plain_datetime, IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timesince, (Nuitka_StringObject *)_python_str_plain_avoid_wrapping, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d3a0db97fb5d78c487963bfc1490797d, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, _python_list_str_plain_avoid_wrapping_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_avoid_wrapping ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timesince, (Nuitka_StringObject *)_python_str_plain_is_aware, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_73d3e50847215b8dcd97fb275615b5ea, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, _python_list_str_plain_is_aware_str_plain_utc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_is_aware ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timesince, (Nuitka_StringObject *)_python_str_plain_utc, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_73d3e50847215b8dcd97fb275615b5ea, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, _python_list_str_plain_is_aware_str_plain_utc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_utc ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timesince, (Nuitka_StringObject *)_python_str_plain_ugettext, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, _python_list_str_plain_ugettext_str_plain_ungettext_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ugettext ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timesince, (Nuitka_StringObject *)_python_str_plain_ungettext_lazy, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, ((PyModuleObject *)_module_django__utils__timesince)->md_dict, _python_list_str_plain_ugettext_str_plain_ungettext_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ungettext_lazy ) );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__timesince)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__timesince, (Nuitka_StringObject *)_python_str_plain_timesince, MAKE_FUNCTION_function_1_timesince_of_module_django__utils__timesince(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__timesince, (Nuitka_StringObject *)_python_str_plain_timeuntil, MAKE_FUNCTION_function_2_timeuntil_of_module_django__utils__timesince(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__timesince );
}
