// Generated code for Python source for module 'django.utils.ipv6'
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

// The _module_django__utils__ipv6 is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__ipv6;
PyDictObject *_moduledict_django__utils__ipv6;

// The module level variables.
static PyObjectGlobalVariable_django__utils__ipv6 _mvar_django__utils__ipv6_ValidationError( &_module_django__utils__ipv6, &_python_str_plain_ValidationError );
static PyObjectGlobalVariable_django__utils__ipv6 _mvar_django__utils__ipv6__explode_shorthand_ip_string( &_module_django__utils__ipv6, &_python_str_plain__explode_shorthand_ip_string );
static PyObjectGlobalVariable_django__utils__ipv6 _mvar_django__utils__ipv6__is_shorthand_ip( &_module_django__utils__ipv6, &_python_str_plain__is_shorthand_ip );
static PyObjectGlobalVariable_django__utils__ipv6 _mvar_django__utils__ipv6__sanitize_ipv4_mapping( &_module_django__utils__ipv6, &_python_str_plain__sanitize_ipv4_mapping );
static PyObjectGlobalVariable_django__utils__ipv6 _mvar_django__utils__ipv6__unpack_ipv4( &_module_django__utils__ipv6, &_python_str_plain__unpack_ipv4 );
static PyObjectGlobalVariable_django__utils__ipv6 _mvar_django__utils__ipv6_is_valid_ipv6_address( &_module_django__utils__ipv6, &_python_str_plain_is_valid_ipv6_address );
static PyObjectGlobalVariable_django__utils__ipv6 _mvar_django__utils__ipv6_xrange( &_module_django__utils__ipv6, &_python_str_plain_xrange );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6( PyObject *_python_par___iterator );


static PyObject *MAKE_FUNCTION_function_1_clean_ipv6_address_of_module_django__utils__ipv6(  );


static PyObject *MAKE_FUNCTION_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6(  );


static PyObject *MAKE_FUNCTION_function_3__unpack_ipv4_of_module_django__utils__ipv6(  );


static PyObject *MAKE_FUNCTION_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6(  );


static PyObject *MAKE_FUNCTION_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6(  );


static PyObject *MAKE_FUNCTION_function_6__is_shorthand_ip_of_module_django__utils__ipv6(  );


// The module function definitions.
static PyObject *impl_function_1_clean_ipv6_address_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject *_python_par_ip_str, PyObject *_python_par_unpack_ipv4, PyObject *_python_par_error_message )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_ip_str( _python_str_plain_ip_str, _python_par_ip_str );
    PyObjectLocalParameterVariableNoDel _python_var_unpack_ipv4( _python_str_plain_unpack_ipv4, _python_par_unpack_ipv4 );
    PyObjectLocalParameterVariableNoDel _python_var_error_message( _python_str_plain_error_message, _python_par_error_message );
    PyObjectLocalVariable _python_var_best_doublecolon_start( _python_str_plain_best_doublecolon_start );
    PyObjectLocalVariable _python_var_best_doublecolon_len( _python_str_plain_best_doublecolon_len );
    PyObjectLocalVariable _python_var_doublecolon_start( _python_str_plain_doublecolon_start );
    PyObjectLocalVariable _python_var_doublecolon_len( _python_str_plain_doublecolon_len );
    PyObjectLocalVariable _python_var_ipv4_unpacked( _python_str_plain_ipv4_unpacked );
    PyObjectLocalVariable _python_var_hextets( _python_str_plain_hextets );
    PyObjectLocalVariable _python_var_index( _python_str_plain_index );
    PyObjectLocalVariable _python_var_best_doublecolon_end( _python_str_plain_best_doublecolon_end );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );

    // Actual function code.
    _python_var_best_doublecolon_start.assign0( _python_int_neg_1 );
    _python_var_best_doublecolon_len.assign0( _python_int_0 );
    _python_var_doublecolon_start.assign0( _python_int_neg_1 );
    _python_var_doublecolon_len.assign0( _python_int_0 );
    static PyFrameObject *frame_function_1_clean_ipv6_address_of_module_django__utils__ipv6 = NULL;

    if ( isFrameUnusable( frame_function_1_clean_ipv6_address_of_module_django__utils__ipv6 ) )
    {
        if ( frame_function_1_clean_ipv6_address_of_module_django__utils__ipv6 )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_clean_ipv6_address_of_module_django__utils__ipv6" );
#endif
            Py_DECREF( frame_function_1_clean_ipv6_address_of_module_django__utils__ipv6 );
        }

        frame_function_1_clean_ipv6_address_of_module_django__utils__ipv6 = MAKE_FRAME( _codeobj_3d1374c5c92e78f11a502f8d8ca34996, _module_django__utils__ipv6 );
    }

    FrameGuard frame_guard( frame_function_1_clean_ipv6_address_of_module_django__utils__ipv6 );
    try
    {
        assert( Py_REFCNT( frame_function_1_clean_ipv6_address_of_module_django__utils__ipv6 ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 33 );
        {
            PyObjectTempKeeper0 call3;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call3.assign( _mvar_django__utils__ipv6_is_valid_ipv6_address.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_ip_str.asObject() ) ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 34 );
            {
                PyObjectTempKeeper0 call1;
                {
                    PyObjectTemporary tmp_exception_type( ( call1.assign( _mvar_django__utils__ipv6_ValidationError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_error_message.asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        }
        frame_guard.setLineNumber( 38 );
        {
            PyObjectTempKeeper0 call5;
            _python_var_ip_str.assign1( ( call5.assign( _mvar_django__utils__ipv6__explode_shorthand_ip_string.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_ip_str.asObject() ) ) );
        }
        frame_guard.setLineNumber( 40 );
        {
            PyObjectTempKeeper0 call7;
            _python_var_ip_str.assign1( ( call7.assign( _mvar_django__utils__ipv6__sanitize_ipv4_mapping.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_ip_str.asObject() ) ) );
        }
        frame_guard.setLineNumber( 44 );
        if ( CHECK_IF_TRUE( _python_var_unpack_ipv4.asObject() ) )
        {
            frame_guard.setLineNumber( 45 );
            {
                PyObjectTempKeeper0 call9;
                _python_var_ipv4_unpacked.assign1( ( call9.assign( _mvar_django__utils__ipv6__unpack_ipv4.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_ip_str.asObject() ) ) );
            }
            frame_guard.setLineNumber( 47 );
            if ( CHECK_IF_TRUE( _python_var_ipv4_unpacked.asObject() ) )
            {
                frame_guard.setLineNumber( 48 );
                return _python_var_ipv4_unpacked.asObject1();
            }
        }
        frame_guard.setLineNumber( 50 );
        _python_var_hextets.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_58 ) );
        {
            frame_guard.setLineNumber( 52 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_RANGE( PyObjectTemporary( BUILTIN_LEN( _python_var_hextets.asObject() ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 52 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_index.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 54 );
                {
                    PyObjectTempKeeper0 subscr11;
                    {
                        PyObjectTemporary tmp_identifier( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( subscr11.assign( _python_var_hextets.asObject() ), LOOKUP_SUBSCRIPT( subscr11.asObject0(), _python_var_index.asObject() ) ) ).asObject(), _python_str_plain_lstrip ) ).asObject(), _python_str_plain_0 ) );
                        PyObject *tmp_subscribed = _python_var_hextets.asObject();
                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_index.asObject() );
                }
                }
                frame_guard.setLineNumber( 55 );
                {
                    PyObjectTempKeeper0 subscr13;
                    if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( subscr13.assign( _python_var_hextets.asObject() ), LOOKUP_SUBSCRIPT( subscr13.asObject0(), _python_var_index.asObject() ) ) ).asObject() ) )) )
                {
                    frame_guard.setLineNumber( 56 );
                    {
                            PyObject *tmp_subscribed = _python_var_hextets.asObject();
                            SET_SUBSCRIPT( _python_str_plain_0, tmp_subscribed, _python_var_index.asObject() );
                    }
                }
                }
                frame_guard.setLineNumber( 59 );
                {
                    PyObjectTempKeeper0 subscr17;
                    if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( ( subscr17.assign( _python_var_hextets.asObject() ), LOOKUP_SUBSCRIPT( subscr17.asObject0(), _python_var_index.asObject() ) ) ).asObject(), _python_str_plain_0 ) )
                {
                    {
                        frame_guard.setLineNumber( 60 );
                        PyObject *_python_tmp_inplace_start = _python_var_doublecolon_len.asObject();
                        PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_int_pos_1 ) );
                        if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                        {
                            _python_var_doublecolon_len.assign0( _python_tmp_inplace_end.asObject() );
                        }
                    }
                    frame_guard.setLineNumber( 61 );
                    if ( RICH_COMPARE_BOOL_EQ( _python_var_doublecolon_start.asObject(), _python_int_neg_1 ) )
                    {
                        frame_guard.setLineNumber( 63 );
                        _python_var_doublecolon_start.assign0( _python_var_index.asObject() );
                    }
                    frame_guard.setLineNumber( 64 );
                    {
                        PyObjectTempKeeper0 cmp15;
                        if ( ( cmp15.assign( _python_var_doublecolon_len.asObject() ), RICH_COMPARE_BOOL_GT( cmp15.asObject0(), _python_var_best_doublecolon_len.asObject() ) ) )
                    {
                        frame_guard.setLineNumber( 66 );
                        _python_var_best_doublecolon_len.assign0( _python_var_doublecolon_len.asObject() );
                        frame_guard.setLineNumber( 67 );
                        _python_var_best_doublecolon_start.assign0( _python_var_doublecolon_start.asObject() );
                    }
                    }
                }
                else
                {
                    _python_var_doublecolon_len.assign0( _python_int_0 );
                    _python_var_doublecolon_start.assign0( _python_int_neg_1 );
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 73 );
        if ( RICH_COMPARE_BOOL_GT( _python_var_best_doublecolon_len.asObject(), _python_int_pos_1 ) )
        {
            frame_guard.setLineNumber( 74 );
            {
                PyObjectTempKeeper0 op19;
                _python_var_best_doublecolon_end.assign1( ( op19.assign( _python_var_best_doublecolon_start.asObject() ), BINARY_OPERATION_ADD( op19.asObject0(), _python_var_best_doublecolon_len.asObject() ) ) );
            }
            frame_guard.setLineNumber( 77 );
            {
                PyObjectTempKeeper0 cmp21;
                if ( ( cmp21.assign( _python_var_best_doublecolon_end.asObject() ), RICH_COMPARE_BOOL_EQ( cmp21.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_hextets.asObject() ) ).asObject() ) ) )
            {
                {
                    frame_guard.setLineNumber( 78 );
                    PyObject *_python_tmp_inplace_start = _python_var_hextets.asObject();
                    PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, PyObjectTemporary( LIST_COPY( _python_list_str_empty_list ) ).asObject() ) );
                    if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                    {
                        _python_var_hextets.assign0( _python_tmp_inplace_end.asObject() );
                    }
                }
            }
            }
            frame_guard.setLineNumber( 79 );
            {
                    PyObject *tmp_target = _python_var_hextets.asObject();
                    PyObject *tmp_lower = _python_var_best_doublecolon_start.asObject();
                    SET_SLICE( PyObjectTemporary( LIST_COPY( _python_list_str_empty_list ) ).asObject(), tmp_target, tmp_lower, _python_var_best_doublecolon_end.asObject() );
            }
            frame_guard.setLineNumber( 81 );
            if ( RICH_COMPARE_BOOL_EQ( _python_var_best_doublecolon_start.asObject(), _python_int_0 ) )
            {
                frame_guard.setLineNumber( 82 );
                _python_var_hextets.assign1( BINARY_OPERATION_ADD( PyObjectTemporary( LIST_COPY( _python_list_str_empty_list ) ).asObject(), _python_var_hextets.asObject() ) );
            }
        }
        frame_guard.setLineNumber( 84 );
        {
            PyObjectTempKeeper1 call23;
            _python_var_result.assign1( ( call23.assign( LOOKUP_ATTRIBUTE( _python_str_chr_58, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), _python_var_hextets.asObject() ) ) );
        }
        frame_guard.setLineNumber( 86 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_lower ) ).asObject() );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_error_message.updateLocalsDict( _python_var_unpack_ipv4.updateLocalsDict( _python_var_ip_str.updateLocalsDict( _python_var_result.updateLocalsDict( _python_var_best_doublecolon_end.updateLocalsDict( _python_var_index.updateLocalsDict( _python_var_hextets.updateLocalsDict( _python_var_ipv4_unpacked.updateLocalsDict( _python_var_doublecolon_len.updateLocalsDict( _python_var_doublecolon_start.updateLocalsDict( _python_var_best_doublecolon_len.updateLocalsDict( _python_var_best_doublecolon_start.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_clean_ipv6_address_of_module_django__utils__ipv6 )
        {
           Py_DECREF( frame_function_1_clean_ipv6_address_of_module_django__utils__ipv6 );
           frame_function_1_clean_ipv6_address_of_module_django__utils__ipv6 = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_1_clean_ipv6_address_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ip_str = NULL;
    PyObject *_python_par_unpack_ipv4 = NULL;
    PyObject *_python_par_error_message = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "clean_ipv6_address() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_ip_str == key )
            {
                if (unlikely( _python_par_ip_str ))
                {
                    PyErr_Format( PyExc_TypeError, "clean_ipv6_address() got multiple values for keyword argument 'ip_str'" );
                    goto error_exit;
                }

                _python_par_ip_str = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_unpack_ipv4 == key )
            {
                if (unlikely( _python_par_unpack_ipv4 ))
                {
                    PyErr_Format( PyExc_TypeError, "clean_ipv6_address() got multiple values for keyword argument 'unpack_ipv4'" );
                    goto error_exit;
                }

                _python_par_unpack_ipv4 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_error_message == key )
            {
                if (unlikely( _python_par_error_message ))
                {
                    PyErr_Format( PyExc_TypeError, "clean_ipv6_address() got multiple values for keyword argument 'error_message'" );
                    goto error_exit;
                }

                _python_par_error_message = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ip_str, key ) )
            {
                if (unlikely( _python_par_ip_str ))
                {
                    PyErr_Format( PyExc_TypeError, "clean_ipv6_address() got multiple values for keyword argument 'ip_str'" );
                    goto error_exit;
                }

                _python_par_ip_str = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_unpack_ipv4, key ) )
            {
                if (unlikely( _python_par_unpack_ipv4 ))
                {
                    PyErr_Format( PyExc_TypeError, "clean_ipv6_address() got multiple values for keyword argument 'unpack_ipv4'" );
                    goto error_exit;
                }

                _python_par_unpack_ipv4 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_error_message, key ) )
            {
                if (unlikely( _python_par_error_message ))
                {
                    PyErr_Format( PyExc_TypeError, "clean_ipv6_address() got multiple values for keyword argument 'error_message'" );
                    goto error_exit;
                }

                _python_par_error_message = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "clean_ipv6_address() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "clean_ipv6_address() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "clean_ipv6_address() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "clean_ipv6_address() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "clean_ipv6_address() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "clean_ipv6_address() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clean_ipv6_address() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "clean_ipv6_address() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clean_ipv6_address() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "clean_ipv6_address() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "clean_ipv6_address() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "clean_ipv6_address() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "clean_ipv6_address() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_ip_str != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "clean_ipv6_address() got multiple values for keyword argument 'ip_str'" );
             goto error_exit;
         }

        _python_par_ip_str = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_unpack_ipv4 != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "clean_ipv6_address() got multiple values for keyword argument 'unpack_ipv4'" );
             goto error_exit;
         }

        _python_par_unpack_ipv4 = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_error_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "clean_ipv6_address() got multiple values for keyword argument 'error_message'" );
             goto error_exit;
         }

        _python_par_error_message = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_unpack_ipv4 == NULL )
    {
        _python_par_unpack_ipv4 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_unpack_ipv4 );
    }
    if ( _python_par_error_message == NULL )
    {
        _python_par_error_message = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_error_message );
    }


    return impl_function_1_clean_ipv6_address_of_module_django__utils__ipv6( self, _python_par_ip_str, _python_par_unpack_ipv4, _python_par_error_message );

error_exit:;

    Py_XDECREF( _python_par_ip_str );
    Py_XDECREF( _python_par_unpack_ipv4 );
    Py_XDECREF( _python_par_error_message );

    return NULL;
}

static PyObject *dparse_function_1_clean_ipv6_address_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_clean_ipv6_address_of_module_django__utils__ipv6( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_clean_ipv6_address_of_module_django__utils__ipv6( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject *_python_par_ip_str )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_ip_str( _python_str_plain_ip_str, _python_par_ip_str );
    PyObjectLocalVariable _python_var_hextets( _python_str_plain_hextets );
    PyObjectLocalVariable _python_var_ipv4_address( _python_str_plain_ipv4_address );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );

    // Actual function code.
    static PyFrameObject *frame_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6 = NULL;

    if ( isFrameUnusable( frame_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6 ) )
    {
        if ( frame_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6 )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6" );
#endif
            Py_DECREF( frame_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6 );
        }

        frame_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6 = MAKE_FRAME( _codeobj_8c1a5875f60b36a098114a5779c26b35, _module_django__utils__ipv6 );
    }

    FrameGuard frame_guard( frame_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6 );
    try
    {
        assert( Py_REFCNT( frame_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6 ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 103 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_str_plain_startswith ) ).asObject(), _python_str_digest_0875df3a6ac46c2651ac4eb79efe5a39 ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 105 );
            return _python_var_ip_str.asObject1();
        }
        frame_guard.setLineNumber( 107 );
        _python_var_hextets.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_58 ) );
        frame_guard.setLineNumber( 109 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_str_dot, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_hextets.asObject(), _python_int_neg_1, -1 ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 111 );
            return _python_var_ip_str.asObject1();
        }
        frame_guard.setLineNumber( 113 );
        {
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            PyObjectTempKeeper1 make_tuple3;
            _python_var_ipv4_address.assign1( BINARY_OPERATION_REMAINDER( _python_str_digest_de7f8f067aeac2171618bb7cecf7a957, PyObjectTemporary( ( make_tuple1.assign( TO_INT2( PyObjectTemporary( LOOKUP_INDEX_SLICE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_hextets.asObject(), _python_int_pos_6, 6 ) ).asObject(), 0, 2 ) ).asObject(), _python_int_pos_16 ) ), make_tuple2.assign( TO_INT2( PyObjectTemporary( LOOKUP_INDEX_SLICE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_hextets.asObject(), _python_int_pos_6, 6 ) ).asObject(), 2, 4 ) ).asObject(), _python_int_pos_16 ) ), make_tuple3.assign( TO_INT2( PyObjectTemporary( LOOKUP_INDEX_SLICE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_hextets.asObject(), _python_int_pos_7, 7 ) ).asObject(), 0, 2 ) ).asObject(), _python_int_pos_16 ) ), MAKE_TUPLE4( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), PyObjectTemporary( TO_INT2( PyObjectTemporary( LOOKUP_INDEX_SLICE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_hextets.asObject(), _python_int_pos_7, 7 ) ).asObject(), 2, 4 ) ).asObject(), _python_int_pos_16 ) ).asObject() ) ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 120 );
        {
            PyObjectTempKeeper1 call5;
            _python_var_result.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( _python_str_chr_58, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_hextets.asObject(), 0, 6 ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 121 );
            PyObject *_python_tmp_inplace_start = _python_var_result.asObject();
            PyObject *_tmp_python_tmp_inplace_end;
            {
                PyObjectTempKeeper0 op7;
                _tmp_python_tmp_inplace_end = ( op7.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op7.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_str_chr_58, _python_var_ipv4_address.asObject() ) ).asObject() ) );
            }
            PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
            if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
            {
                _python_var_result.assign0( _python_tmp_inplace_end.asObject() );
            }
        }
        frame_guard.setLineNumber( 123 );
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
        frame_guard.getFrame0()->f_locals = _python_var_ip_str.updateLocalsDict( _python_var_result.updateLocalsDict( _python_var_ipv4_address.updateLocalsDict( _python_var_hextets.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6 )
        {
           Py_DECREF( frame_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6 );
           frame_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6 = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ip_str = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_ip_str == key )
            {
                if (unlikely( _python_par_ip_str ))
                {
                    PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() got multiple values for keyword argument 'ip_str'" );
                    goto error_exit;
                }

                _python_par_ip_str = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ip_str, key ) )
            {
                if (unlikely( _python_par_ip_str ))
                {
                    PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() got multiple values for keyword argument 'ip_str'" );
                    goto error_exit;
                }

                _python_par_ip_str = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_sanitize_ipv4_mapping() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_ip_str != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_sanitize_ipv4_mapping() got multiple values for keyword argument 'ip_str'" );
             goto error_exit;
         }

        _python_par_ip_str = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6( self, _python_par_ip_str );

error_exit:;

    Py_XDECREF( _python_par_ip_str );

    return NULL;
}

static PyObject *dparse_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__unpack_ipv4_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject *_python_par_ip_str )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_ip_str( _python_str_plain_ip_str, _python_par_ip_str );

    // Actual function code.
    static PyFrameObject *frame_function_3__unpack_ipv4_of_module_django__utils__ipv6 = NULL;

    if ( isFrameUnusable( frame_function_3__unpack_ipv4_of_module_django__utils__ipv6 ) )
    {
        if ( frame_function_3__unpack_ipv4_of_module_django__utils__ipv6 )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3__unpack_ipv4_of_module_django__utils__ipv6" );
#endif
            Py_DECREF( frame_function_3__unpack_ipv4_of_module_django__utils__ipv6 );
        }

        frame_function_3__unpack_ipv4_of_module_django__utils__ipv6 = MAKE_FRAME( _codeobj_cc02f2d6b196a9b2072398d20d60c293, _module_django__utils__ipv6 );
    }

    FrameGuard frame_guard( frame_function_3__unpack_ipv4_of_module_django__utils__ipv6 );
    try
    {
        assert( Py_REFCNT( frame_function_3__unpack_ipv4_of_module_django__utils__ipv6 ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 138 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_str_plain_startswith ) ).asObject(), _python_str_digest_0875df3a6ac46c2651ac4eb79efe5a39 ) ).asObject() ) )) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 141 );
        return LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_rsplit ) ).asObject(), _python_str_chr_58, _python_int_pos_1 ) ).asObject(), _python_int_pos_1, 1 );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_ip_str.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_3__unpack_ipv4_of_module_django__utils__ipv6 )
        {
           Py_DECREF( frame_function_3__unpack_ipv4_of_module_django__utils__ipv6 );
           frame_function_3__unpack_ipv4_of_module_django__utils__ipv6 = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3__unpack_ipv4_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ip_str = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_unpack_ipv4() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_ip_str == key )
            {
                if (unlikely( _python_par_ip_str ))
                {
                    PyErr_Format( PyExc_TypeError, "_unpack_ipv4() got multiple values for keyword argument 'ip_str'" );
                    goto error_exit;
                }

                _python_par_ip_str = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ip_str, key ) )
            {
                if (unlikely( _python_par_ip_str ))
                {
                    PyErr_Format( PyExc_TypeError, "_unpack_ipv4() got multiple values for keyword argument 'ip_str'" );
                    goto error_exit;
                }

                _python_par_ip_str = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_unpack_ipv4() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "_unpack_ipv4() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_unpack_ipv4() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_unpack_ipv4() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_unpack_ipv4() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_unpack_ipv4() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_unpack_ipv4() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_unpack_ipv4() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_unpack_ipv4() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_unpack_ipv4() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_unpack_ipv4() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_unpack_ipv4() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_unpack_ipv4() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_ip_str != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_unpack_ipv4() got multiple values for keyword argument 'ip_str'" );
             goto error_exit;
         }

        _python_par_ip_str = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3__unpack_ipv4_of_module_django__utils__ipv6( self, _python_par_ip_str );

error_exit:;

    Py_XDECREF( _python_par_ip_str );

    return NULL;
}

static PyObject *dparse_function_3__unpack_ipv4_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3__unpack_ipv4_of_module_django__utils__ipv6( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__unpack_ipv4_of_module_django__utils__ipv6( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject *_python_par_ip_str )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_ip_str( _python_str_plain_ip_str, _python_par_ip_str );
    PyObjectLocalVariable _python_var_validate_ipv4_address( _python_str_plain_validate_ipv4_address );
    PyObjectLocalVariable _python_var_hextet( _python_str_plain_hextet );

    // Actual function code.
    static PyFrameObject *frame_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6 = NULL;

    if ( isFrameUnusable( frame_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6 ) )
    {
        if ( frame_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6 )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_is_valid_ipv6_address_of_module_django__utils__ipv6" );
#endif
            Py_DECREF( frame_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6 );
        }

        frame_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6 = MAKE_FRAME( _codeobj_7ba825335275cf123292c8fa10b06c12, _module_django__utils__ipv6 );
    }

    FrameGuard frame_guard( frame_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6 );
    try
    {
        assert( Py_REFCNT( frame_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6 ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 154 );
        _python_var_validate_ipv4_address.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_317f7529d7732659ef74f324fd6716af, ((PyModuleObject *)_module_django__utils__ipv6)->md_dict, PyObjectTemporary( _python_var_ip_str.updateLocalsDict( _python_var_hextet.updateLocalsDict( _python_var_validate_ipv4_address.updateLocalsDict( PyDict_New() ) ) ) ).asObject(), _python_list_str_plain_validate_ipv4_address_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_validate_ipv4_address ) );
        frame_guard.setLineNumber( 157 );
        if ( SEQUENCE_CONTAINS_NOT_BOOL( _python_str_chr_58, _python_var_ip_str.asObject() ) )
        {
            return INCREASE_REFCOUNT( Py_False );
        }
        frame_guard.setLineNumber( 161 );
        if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_count ) ).asObject(), _python_str_digest_4501c091b0366d76ea3218b6cfdd8097 ) ).asObject(), _python_int_pos_1 ) )
        {
            return INCREASE_REFCOUNT( Py_False );
        }
        frame_guard.setLineNumber( 165 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_str_digest_e441fcf4a7686817fe868bf38a5c2c07, _python_var_ip_str.asObject() ) )
        {
            return INCREASE_REFCOUNT( Py_False );
        }
        frame_guard.setLineNumber( 169 );
        if ( ( ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_startswith ) ).asObject(), _python_str_chr_58 ) ).asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_startswith ) ).asObject(), _python_str_digest_4501c091b0366d76ea3218b6cfdd8097 ) ).asObject() ) )) ) || ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_endswith ) ).asObject(), _python_str_chr_58 ) ).asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_endswith ) ).asObject(), _python_str_digest_4501c091b0366d76ea3218b6cfdd8097 ) ).asObject() ) )) ) ) )
        {
            return INCREASE_REFCOUNT( Py_False );
        }
        frame_guard.setLineNumber( 174 );
        if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_count ) ).asObject(), _python_str_chr_58 ) ).asObject(), _python_int_pos_7 ) )
        {
            return INCREASE_REFCOUNT( Py_False );
        }
        frame_guard.setLineNumber( 178 );
        if ( ( SEQUENCE_CONTAINS_NOT_BOOL( _python_str_digest_4501c091b0366d76ea3218b6cfdd8097, _python_var_ip_str.asObject() ) && RICH_COMPARE_BOOL_NE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_count ) ).asObject(), _python_str_chr_58 ) ).asObject(), _python_int_pos_7 ) ) )
        {
            frame_guard.setLineNumber( 180 );
            if ( RICH_COMPARE_BOOL_NE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_count ) ).asObject(), _python_str_dot ) ).asObject(), _python_int_pos_3 ) )
            {
                return INCREASE_REFCOUNT( Py_False );
            }
        }
        frame_guard.setLineNumber( 183 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_ip_str.assign1( ( call1.assign( _mvar_django__utils__ipv6__explode_shorthand_ip_string.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_ip_str.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 187 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_58 ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 187 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_hextet.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 188 );
                if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_hextet.asObject(), _python_str_plain_count ) ).asObject(), _python_str_dot ) ).asObject(), _python_int_pos_3 ) )
                {
                    frame_guard.setLineNumber( 191 );
                    {
                        PyObjectTempKeeper1 cmp3;
                        if ( (!( ( cmp3.assign( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_58 ) ).asObject(), _python_int_neg_1, -1 ) ), RICH_COMPARE_BOOL_EQ( cmp3.asObject0(), _python_var_hextet.asObject() ) ) )) )
                    {
                        return INCREASE_REFCOUNT( Py_False );
                    }
                    }
                    frame_guard.setLineNumber( 193 );
                    try
                    {
                        frame_guard.setLineNumber( 194 );
                        {
                            PyObjectTempKeeper0 call5;
                            DECREASE_REFCOUNT( ( call5.assign( _python_var_validate_ipv4_address.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_hextet.asObject() ) ) );
                        }
                    }
                    catch ( PythonException &_exception )
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

                        if ( _exception.matches( _mvar_django__utils__ipv6_ValidationError.asObject0() ) )
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
                else
                {
                    frame_guard.setLineNumber( 198 );
                    try
                    {
                        frame_guard.setLineNumber( 201 );
                        if ( ( RICH_COMPARE_BOOL_LT( PyObjectTemporary( TO_INT2( _python_var_hextet.asObject(), _python_int_pos_16 ) ).asObject(), _python_int_0 ) || RICH_COMPARE_BOOL_GT( PyObjectTemporary( TO_INT2( _python_var_hextet.asObject(), _python_int_pos_16 ) ).asObject(), _python_int_pos_65535 ) ) )
                        {
                            return INCREASE_REFCOUNT( Py_False );
                        }
                    }
                    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_ip_str.updateLocalsDict( _python_var_hextet.updateLocalsDict( _python_var_validate_ipv4_address.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6 )
        {
           Py_DECREF( frame_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6 );
           frame_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6 = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_True );
}
static PyObject *fparse_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ip_str = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_ip_str == key )
            {
                if (unlikely( _python_par_ip_str ))
                {
                    PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() got multiple values for keyword argument 'ip_str'" );
                    goto error_exit;
                }

                _python_par_ip_str = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ip_str, key ) )
            {
                if (unlikely( _python_par_ip_str ))
                {
                    PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() got multiple values for keyword argument 'ip_str'" );
                    goto error_exit;
                }

                _python_par_ip_str = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "is_valid_ipv6_address() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_ip_str != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "is_valid_ipv6_address() got multiple values for keyword argument 'ip_str'" );
             goto error_exit;
         }

        _python_par_ip_str = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6( self, _python_par_ip_str );

error_exit:;

    Py_XDECREF( _python_par_ip_str );

    return NULL;
}

static PyObject *dparse_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject *_python_par_ip_str )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_ip_str( _python_str_plain_ip_str, _python_par_ip_str );
    PyObjectLocalVariable _python_var_new_ip( _python_str_plain_new_ip );
    PyObjectLocalVariable _python_var_hextet( _python_str_plain_hextet );
    PyObjectLocalVariable _python_var_fill_to( _python_str_plain_fill_to );
    PyObjectLocalVariable _python_var_sep( _python_str_plain_sep );
    PyObjectLocalVariable _python_var__( _python_str_plain__ );
    PyObjectLocalVariable _python_var_ret_ip( _python_str_plain_ret_ip );

    // Actual function code.
    static PyFrameObject *frame_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6 = NULL;

    if ( isFrameUnusable( frame_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6 ) )
    {
        if ( frame_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6 )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6" );
#endif
            Py_DECREF( frame_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6 );
        }

        frame_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6 = MAKE_FRAME( _codeobj_c4e017068ae3afe7782f6064eed96ba8, _module_django__utils__ipv6 );
    }

    FrameGuard frame_guard( frame_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6 );
    try
    {
        assert( Py_REFCNT( frame_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6 ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 219 );
        {
            PyObjectTempKeeper0 call1;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( _mvar_django__utils__ipv6__is_shorthand_ip.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_ip_str.asObject() ) ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 221 );
            return _python_var_ip_str.asObject1();
        }
        }
        _python_var_new_ip.assign1( PyList_New( 0 ) );
        frame_guard.setLineNumber( 224 );
        _python_var_hextet.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_split ) ).asObject(), _python_str_digest_4501c091b0366d76ea3218b6cfdd8097 ) );
        frame_guard.setLineNumber( 229 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_str_dot, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_58 ) ).asObject(), _python_int_neg_1, -1 ) ).asObject() ) )
        {
            _python_var_fill_to.assign0( _python_int_pos_7 );
        }
        else
        {
            _python_var_fill_to.assign0( _python_int_pos_8 );
        }
        frame_guard.setLineNumber( 234 );
        if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( BUILTIN_LEN( _python_var_hextet.asObject() ) ).asObject(), _python_int_pos_1 ) )
        {
            frame_guard.setLineNumber( 235 );
            {
                PyObjectTempKeeper1 op3;
                _python_var_sep.assign1( ( op3.assign( BUILTIN_LEN( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_hextet.asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_58 ) ).asObject() ) ), BINARY_OPERATION_ADD( op3.asObject0(), PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_hextet.asObject(), _python_int_pos_1, 1 ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_58 ) ).asObject() ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 236 );
            _python_var_new_ip.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_hextet.asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_58 ) );
            {
                frame_guard.setLineNumber( 238 );
                PyObject *_tmp_python_tmp_for_iterator;
                {
                    PyObjectTempKeeper0 call7;
                    PyObjectTempKeeper0 op5;
                    _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call7.assign( _mvar_django__utils__ipv6_xrange.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( ( op5.assign( _python_var_fill_to.asObject() ), BINARY_OPERATION_SUB( op5.asObject0(), _python_var_sep.asObject() ) ) ).asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 238 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var__.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 239 );
                    DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_new_ip.asObject(), _python_str_plain_append ) ).asObject(), _python_str_plain_0000 ) );

                   CONSIDER_THREADING();
                }
            }
            {
                frame_guard.setLineNumber( 240 );
                PyObject *_python_tmp_inplace_start = _python_var_new_ip.asObject();
                PyObject *_tmp_python_tmp_inplace_end;
                {
                    PyObjectTempKeeper0 op9;
                    _tmp_python_tmp_inplace_end = ( op9.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op9.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_hextet.asObject(), _python_int_pos_1, 1 ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_58 ) ).asObject() ) );
                }
                PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                {
                    _python_var_new_ip.assign0( _python_tmp_inplace_end.asObject() );
                }
            }
        }
        else
        {
            frame_guard.setLineNumber( 243 );
            _python_var_new_ip.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_58 ) );
        }
        _python_var_ret_ip.assign1( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 248 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_new_ip.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 248 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    _python_var_hextet.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 249 );
                {
                    PyObjectTempKeeper1 call13;
                    PyObjectTempKeeper1 op11;
                    DECREASE_REFCOUNT( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_ret_ip.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( op11.assign( BINARY_OPERATION_MUL( _python_str_plain_0, PyObjectTemporary( BINARY_OPERATION_SUB( _python_int_pos_4, PyObjectTemporary( BUILTIN_LEN( _python_var_hextet.asObject() ) ).asObject() ) ).asObject() ) ), BINARY_OPERATION_ADD( op11.asObject0(), _python_var_hextet.asObject() ) ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 250 );
        {
            PyObjectTempKeeper1 call15;
            return ( call15.assign( LOOKUP_ATTRIBUTE( _python_str_chr_58, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_var_ret_ip.asObject() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_ip_str.updateLocalsDict( _python_var_ret_ip.updateLocalsDict( _python_var__.updateLocalsDict( _python_var_sep.updateLocalsDict( _python_var_fill_to.updateLocalsDict( _python_var_hextet.updateLocalsDict( _python_var_new_ip.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6 )
        {
           Py_DECREF( frame_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6 );
           frame_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6 = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ip_str = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_ip_str == key )
            {
                if (unlikely( _python_par_ip_str ))
                {
                    PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() got multiple values for keyword argument 'ip_str'" );
                    goto error_exit;
                }

                _python_par_ip_str = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ip_str, key ) )
            {
                if (unlikely( _python_par_ip_str ))
                {
                    PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() got multiple values for keyword argument 'ip_str'" );
                    goto error_exit;
                }

                _python_par_ip_str = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_explode_shorthand_ip_string() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_ip_str != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_explode_shorthand_ip_string() got multiple values for keyword argument 'ip_str'" );
             goto error_exit;
         }

        _python_par_ip_str = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6( self, _python_par_ip_str );

error_exit:;

    Py_XDECREF( _python_par_ip_str );

    return NULL;
}

static PyObject *dparse_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6__is_shorthand_ip_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject *_python_par_ip_str )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_ip_str( _python_str_plain_ip_str, _python_par_ip_str );

    // Actual function code.
    static PyFrameObject *frame_function_6__is_shorthand_ip_of_module_django__utils__ipv6 = NULL;

    if ( isFrameUnusable( frame_function_6__is_shorthand_ip_of_module_django__utils__ipv6 ) )
    {
        if ( frame_function_6__is_shorthand_ip_of_module_django__utils__ipv6 )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6__is_shorthand_ip_of_module_django__utils__ipv6" );
#endif
            Py_DECREF( frame_function_6__is_shorthand_ip_of_module_django__utils__ipv6 );
        }

        frame_function_6__is_shorthand_ip_of_module_django__utils__ipv6 = MAKE_FRAME( _codeobj_0e5605cd2d37b9a9e32829aef7e01a85, _module_django__utils__ipv6 );
    }

    FrameGuard frame_guard( frame_function_6__is_shorthand_ip_of_module_django__utils__ipv6 );
    try
    {
        assert( Py_REFCNT( frame_function_6__is_shorthand_ip_of_module_django__utils__ipv6 ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 263 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_count ) ).asObject(), _python_str_digest_4501c091b0366d76ea3218b6cfdd8097 ) ).asObject(), _python_int_pos_1 ) )
        {
            return INCREASE_REFCOUNT( Py_True );
        }
        frame_guard.setLineNumber( 265 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_any ), PyObjectTemporary( impl_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_ip_str.asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_58 ) ).asObject() ) ) ).asObject() ) ).asObject() ) )
        {
            return INCREASE_REFCOUNT( Py_True );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_ip_str.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_6__is_shorthand_ip_of_module_django__utils__ipv6 )
        {
           Py_DECREF( frame_function_6__is_shorthand_ip_of_module_django__utils__ipv6 );
           frame_function_6__is_shorthand_ip_of_module_django__utils__ipv6 = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_False );
}
static PyObject *fparse_function_6__is_shorthand_ip_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ip_str = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_ip_str == key )
            {
                if (unlikely( _python_par_ip_str ))
                {
                    PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() got multiple values for keyword argument 'ip_str'" );
                    goto error_exit;
                }

                _python_par_ip_str = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ip_str, key ) )
            {
                if (unlikely( _python_par_ip_str ))
                {
                    PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() got multiple values for keyword argument 'ip_str'" );
                    goto error_exit;
                }

                _python_par_ip_str = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_is_shorthand_ip() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_ip_str != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_is_shorthand_ip() got multiple values for keyword argument 'ip_str'" );
             goto error_exit;
         }

        _python_par_ip_str = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6__is_shorthand_ip_of_module_django__utils__ipv6( self, _python_par_ip_str );

error_exit:;

    Py_XDECREF( _python_par_ip_str );

    return NULL;
}

static PyObject *dparse_function_6__is_shorthand_ip_of_module_django__utils__ipv6( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6__is_shorthand_ip_of_module_django__utils__ipv6( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6__is_shorthand_ip_of_module_django__utils__ipv6( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_x;
};

static void _context_generator_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6_t *_python_context = (struct _context_generator_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6_t *_python_context = (_context_generator_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_x.setVariableName( _python_str_plain_x );

        // Actual function code.
        static PyFrameObject *frame_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6 = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6 ) )
        {
            if ( frame_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6 )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6" );
#endif
                Py_DECREF( frame_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6 );
            }

            frame_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6 = MAKE_FRAME( _codeobj_7f75133c2c7412936a62003ce03a55a4, _module_django__utils__ipv6 );
        }

        Py_INCREF( frame_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6 );
        generator->m_frame = frame_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6;

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
                        _python_context->python_var_x.assign0( _python_tmp_iter_value.asObject() );
                        YIELD_VALUE( generator, RICH_COMPARE_LT( PyObjectTemporary( BUILTIN_LEN( _python_context->python_var_x.asObject() ) ).asObject(), _python_int_pos_4 ) );

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

static PyObject *impl_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6_t *_python_context = new _context_generator_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6_context,
            _python_str_angle_genexpr,
            _codeobj_d853442f62a74fc6bc64266bf9470bc9,
            _python_context,
            _context_generator_genexpr_1_of_function_6__is_shorthand_ip_of_module_django__utils__ipv6_destructor
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



static PyObject *MAKE_FUNCTION_function_1_clean_ipv6_address_of_module_django__utils__ipv6(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_clean_ipv6_address_of_module_django__utils__ipv6,
        dparse_function_1_clean_ipv6_address_of_module_django__utils__ipv6,
        _python_str_plain_clean_ipv6_address,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3d1374c5c92e78f11a502f8d8ca34996,
        INCREASE_REFCOUNT( _python_tuple_false_str_digest_9a393f1f5f979062da5a1ba131a0a73c_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__ipv6,
        _python_str_digest_2245fcb73ec2952128d7093f2426a1e9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6,
        dparse_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6,
        _python_str_plain__sanitize_ipv4_mapping,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8c1a5875f60b36a098114a5779c26b35,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__ipv6,
        _python_str_digest_113bce75f75fb7c190ed0a96740d0c39
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__unpack_ipv4_of_module_django__utils__ipv6(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__unpack_ipv4_of_module_django__utils__ipv6,
        dparse_function_3__unpack_ipv4_of_module_django__utils__ipv6,
        _python_str_plain__unpack_ipv4,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cc02f2d6b196a9b2072398d20d60c293,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__ipv6,
        _python_str_digest_c5ba7afd80361b7452c2f35f4a064afc
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6,
        dparse_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6,
        _python_str_plain_is_valid_ipv6_address,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7ba825335275cf123292c8fa10b06c12,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__ipv6,
        _python_str_digest_48bb923137357ce910f5189321335b30
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6,
        dparse_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6,
        _python_str_plain__explode_shorthand_ip_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c4e017068ae3afe7782f6064eed96ba8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__ipv6,
        _python_str_digest_8b7800c582f5e9f7d158c630e1ca5b0a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__is_shorthand_ip_of_module_django__utils__ipv6(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6__is_shorthand_ip_of_module_django__utils__ipv6,
        dparse_function_6__is_shorthand_ip_of_module_django__utils__ipv6,
        _python_str_plain__is_shorthand_ip,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0e5605cd2d37b9a9e32829aef7e01a85,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__ipv6,
        _python_str_digest_2e547681a13d7124830c5b3fb5ab7f9f
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.ipv6",   /* m_name */
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

MOD_INIT_DECL( django__utils__ipv6 )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__ipv6 );
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

    // puts( "in initdjango__utils__ipv6" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__ipv6 = Py_InitModule4(
        "django.utils.ipv6",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__ipv6 = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__ipv6 = (PyDictObject *)((PyModuleObject *)_module_django__utils__ipv6)->md_dict;

    assertObject( _module_django__utils__ipv6 );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_90cf4892b45b061f358c9921c88e39d3, _module_django__utils__ipv6 );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__ipv6 );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__ipv6 != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__ipv6, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__ipv6, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_115ce527184a2a4309fe1311d9a7670e );
    PyFrameObject *frame_module_django__utils__ipv6 = MAKE_FRAME( _codeobj_18c87797967ab104d3c6765a895d006c, _module_django__utils__ipv6 );

    FrameGuard frame_guard( frame_module_django__utils__ipv6 );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__ipv6 ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__ipv6, (Nuitka_StringObject *)_python_str_plain_ValidationError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__utils__ipv6)->md_dict, ((PyModuleObject *)_module_django__utils__ipv6)->md_dict, _python_list_str_plain_ValidationError_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ValidationError ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__ipv6, (Nuitka_StringObject *)_python_str_plain_xrange, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_91ddc8f1df73e2bf4268fd2741c1c593, ((PyModuleObject *)_module_django__utils__ipv6)->md_dict, ((PyModuleObject *)_module_django__utils__ipv6)->md_dict, _python_list_str_plain_xrange_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_xrange ) );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__ipv6)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__ipv6, (Nuitka_StringObject *)_python_str_plain_clean_ipv6_address, MAKE_FUNCTION_function_1_clean_ipv6_address_of_module_django__utils__ipv6(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__ipv6, (Nuitka_StringObject *)_python_str_plain__sanitize_ipv4_mapping, MAKE_FUNCTION_function_2__sanitize_ipv4_mapping_of_module_django__utils__ipv6(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__ipv6, (Nuitka_StringObject *)_python_str_plain__unpack_ipv4, MAKE_FUNCTION_function_3__unpack_ipv4_of_module_django__utils__ipv6(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__ipv6, (Nuitka_StringObject *)_python_str_plain_is_valid_ipv6_address, MAKE_FUNCTION_function_4_is_valid_ipv6_address_of_module_django__utils__ipv6(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__ipv6, (Nuitka_StringObject *)_python_str_plain__explode_shorthand_ip_string, MAKE_FUNCTION_function_5__explode_shorthand_ip_string_of_module_django__utils__ipv6(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__ipv6, (Nuitka_StringObject *)_python_str_plain__is_shorthand_ip, MAKE_FUNCTION_function_6__is_shorthand_ip_of_module_django__utils__ipv6(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__ipv6 );
}
