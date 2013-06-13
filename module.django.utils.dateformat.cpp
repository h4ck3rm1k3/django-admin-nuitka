// Generated code for Python source for module 'django.utils.dateformat'
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

// The _module_django__utils__dateformat is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__dateformat;
PyDictObject *_moduledict_django__utils__dateformat;

// The module level variables.
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_DateFormat( &_module_django__utils__dateformat, &_python_str_plain_DateFormat );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_Formatter( &_module_django__utils__dateformat, &_python_str_plain_Formatter );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_LocalTimezone( &_module_django__utils__dateformat, &_python_str_plain_LocalTimezone );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_MONTHS( &_module_django__utils__dateformat, &_python_str_plain_MONTHS );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_MONTHS_3( &_module_django__utils__dateformat, &_python_str_plain_MONTHS_3 );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_MONTHS_ALT( &_module_django__utils__dateformat, &_python_str_plain_MONTHS_ALT );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_MONTHS_AP( &_module_django__utils__dateformat, &_python_str_plain_MONTHS_AP );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_TimeFormat( &_module_django__utils__dateformat, &_python_str_plain_TimeFormat );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_WEEKDAYS( &_module_django__utils__dateformat, &_python_str_plain_WEEKDAYS );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_WEEKDAYS_ABBR( &_module_django__utils__dateformat, &_python_str_plain_WEEKDAYS_ABBR );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat__( &_module_django__utils__dateformat, &_python_str_plain__ );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat___metaclass__( &_module_django__utils__dateformat, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_calendar( &_module_django__utils__dateformat, &_python_str_plain_calendar );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_datetime( &_module_django__utils__dateformat, &_python_str_plain_datetime );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_force_text( &_module_django__utils__dateformat, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_is_aware( &_module_django__utils__dateformat, &_python_str_plain_is_aware );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_is_naive( &_module_django__utils__dateformat, &_python_str_plain_is_naive );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_re( &_module_django__utils__dateformat, &_python_str_plain_re );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_re_escaped( &_module_django__utils__dateformat, &_python_str_plain_re_escaped );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_re_formatchars( &_module_django__utils__dateformat, &_python_str_plain_re_formatchars );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_six( &_module_django__utils__dateformat, &_python_str_plain_six );
static PyObjectGlobalVariable_django__utils__dateformat _mvar_django__utils__dateformat_time( &_module_django__utils__dateformat, &_python_str_plain_time );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Formatter_of_module_django__utils__dateformat(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_TimeFormat_of_module_django__utils__dateformat(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_4_format_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_5_time_format_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat(  );


static PyObject *MAKE_FUNCTION_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Formatter_of_module_django__utils__dateformat(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_format( _python_str_plain_format );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_dateformat );
    _python_var_format.assign1( MAKE_FUNCTION_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat(  ) );
    return _python_var_format.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


static PyObject *impl_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_formatstr )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_formatstr( _python_str_plain_formatstr, _python_par_formatstr );
    PyObjectLocalVariable _python_var_pieces( _python_str_plain_pieces );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_piece( _python_str_plain_piece );

    // Actual function code.
    _python_var_pieces.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat );
        }

        frame_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_2d55bc7bc0dfa12db0e7378a1db16878, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 33 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper1 call3;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_enumerate ), PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_re_formatchars.asObject0(), _python_str_plain_split ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__utils__dateformat_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_formatstr.asObject() ) ) ).asObject() ) ) ).asObject() ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 33 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 33 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_i.assign0( _python_tmp_element_1.asObject() );
                        _python_var_piece.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 34 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_var_i.asObject(), _python_int_pos_2 ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 35 );
                    {
                        PyObjectTempKeeper1 call10;
                        PyObjectTempKeeper0 call8;
                        PyObjectTempKeeper0 getattr5;
                        DECREASE_REFCOUNT( ( call10.assign( LOOKUP_ATTRIBUTE( _python_var_pieces.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( ( call8.assign( _mvar_django__utils__dateformat_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( ( getattr5.assign( _python_var_self.asObject() ), BUILTIN_GETATTR( getattr5.asObject0(), _python_var_piece.asObject(), NULL ) ) ).asObject() ) ).asObject() ) ) ).asObject() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 36 );
                    if ( CHECK_IF_TRUE( _python_var_piece.asObject() ) )
                    {
                        frame_guard.setLineNumber( 37 );
                        {
                            PyObjectTempKeeper1 call12;
                            PyObjectTempKeeper1 call15;
                            DECREASE_REFCOUNT( ( call15.assign( LOOKUP_ATTRIBUTE( _python_var_pieces.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), PyObjectTemporary( ( call12.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_re_escaped.asObject0(), _python_str_plain_sub ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_unicode_digest_b5101eb6e685091719013d1a75756a53, _python_var_piece.asObject() ) ) ).asObject() ) ) );
                        }
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 38 );
        {
            PyObjectTempKeeper1 call17;
            return ( call17.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_var_pieces.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_formatstr.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_piece.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_pieces.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat );
           frame_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_formatstr = NULL;
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
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_formatstr == key )
            {
                if (unlikely( _python_par_formatstr ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'formatstr'" );
                    goto error_exit;
                }

                _python_par_formatstr = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_formatstr, key ) )
            {
                if (unlikely( _python_par_formatstr ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'formatstr'" );
                    goto error_exit;
                }

                _python_par_formatstr = value;

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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "format() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "format() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "format() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "format() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "format() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
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
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_formatstr != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'formatstr'" );
             goto error_exit;
         }

        _python_par_formatstr = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat( self, _python_par_self, _python_par_formatstr );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_formatstr );

    return NULL;
}

static PyObject *dparse_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_a( _python_str_plain_a );
    PyObjectLocalVariable _python_var_A( _python_str_plain_A );
    PyObjectLocalVariable _python_var_B( _python_str_plain_B );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );
    PyObjectLocalVariable _python_var_g( _python_str_plain_g );
    PyObjectLocalVariable _python_var_G( _python_str_plain_G );
    PyObjectLocalVariable _python_var_h( _python_str_plain_h );
    PyObjectLocalVariable _python_var_H( _python_str_plain_H );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_P( _python_str_plain_P );
    PyObjectLocalVariable _python_var_s( _python_str_plain_s );
    PyObjectLocalVariable _python_var_u( _python_str_plain_u );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_dateformat );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    _python_var_a.assign1( MAKE_FUNCTION_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    _python_var_A.assign1( MAKE_FUNCTION_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    _python_var_B.assign1( MAKE_FUNCTION_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    _python_var_f.assign1( MAKE_FUNCTION_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    _python_var_g.assign1( MAKE_FUNCTION_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    _python_var_G.assign1( MAKE_FUNCTION_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    _python_var_h.assign1( MAKE_FUNCTION_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    _python_var_H.assign1( MAKE_FUNCTION_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    _python_var_i.assign1( MAKE_FUNCTION_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    _python_var_P.assign1( MAKE_FUNCTION_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    _python_var_s.assign1( MAKE_FUNCTION_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    _python_var_u.assign1( MAKE_FUNCTION_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
    return _python_var_u.updateLocalsDict( _python_var_s.updateLocalsDict( _python_var_P.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_H.updateLocalsDict( _python_var_h.updateLocalsDict( _python_var_G.updateLocalsDict( _python_var_g.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_B.updateLocalsDict( _python_var_A.updateLocalsDict( _python_var_a.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_t )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_t( _python_str_plain_t, _python_par_t );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_d81ca1acb754e24fc00892af9c09182a, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 42 );
        {
                PyObject *tmp_identifier = _python_var_t.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_data );
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
        frame_guard.getFrame0()->f_locals = _python_var_t.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_t = NULL;
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
            if ( found == false && _python_str_plain_t == key )
            {
                if (unlikely( _python_par_t ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 't'" );
                    goto error_exit;
                }

                _python_par_t = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_t, key ) )
            {
                if (unlikely( _python_par_t ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 't'" );
                    goto error_exit;
                }

                _python_par_t = value;

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
         if (unlikely( _python_par_t != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 't'" );
             goto error_exit;
         }

        _python_par_t = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self, _python_par_t );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_t );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_2aee4993c63001eb3cab7a713fe387a9, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 46 );
        if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_hour ) ).asObject(), _python_int_pos_11 ) )
        {
            frame_guard.setLineNumber( 47 );
            return CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dateformat__.asObject0(), _python_unicode_digest_e66e8a1a8f96a080dfd0feab267cbc58 );
        }
        frame_guard.setLineNumber( 48 );
        return CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dateformat__.asObject0(), _python_unicode_digest_85a0ae0c49fe92b6718faec211d911c1 );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "a() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "a() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "a() got multiple values for keyword argument 'self'" );
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
                   "a() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "a() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "a() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "a() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "a() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "a() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "a() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "a() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "a() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "a() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "a() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "a() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "a() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "a() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_2e2ff3f51c79193702dcccfb3e8c1270, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 52 );
        if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_hour ) ).asObject(), _python_int_pos_11 ) )
        {
            frame_guard.setLineNumber( 53 );
            return CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dateformat__.asObject0(), _python_unicode_plain_PM );
        }
        frame_guard.setLineNumber( 54 );
        return CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dateformat__.asObject0(), _python_unicode_plain_AM );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "A() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "A() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "A() got multiple values for keyword argument 'self'" );
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
                   "A() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "A() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "A() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "A() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "A() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "A() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "A() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "A() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "A() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "A() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "A() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "A() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "A() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "A() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_b2889a565a6b6e8d502770c822c6ca9a, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 58 );
        RAISE_EXCEPTION_WITH_TYPE( PyExc_NotImplementedError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "B() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "B() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "B() got multiple values for keyword argument 'self'" );
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
                   "B() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "B() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "B() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "B() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "B() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "B() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "B() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "B() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "B() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "B() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "B() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "B() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "B() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "B() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_cab11054e83582d2f1964df08e540e8a, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 67 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_minute ) ).asObject(), _python_int_0 ) )
        {
            frame_guard.setLineNumber( 68 );
            return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_g ) ).asObject() );
        }
        frame_guard.setLineNumber( 69 );
        {
            PyObjectTempKeeper1 make_tuple1;
            return BINARY_OPERATION_REMAINDER( _python_unicode_digest_530ccab821bb1f0f9080f24abeeee028, PyObjectTemporary( ( make_tuple1.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_g ) ).asObject() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_i ) ).asObject() ) ).asObject() ) ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "f() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "f() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "f() got multiple values for keyword argument 'self'" );
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
                   "f() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "f() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "f() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "f() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "f() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "f() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "f() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "f() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "f() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "f() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "f() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "f() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "f() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "f() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_052dd9971f3cec56058852a6564069b4, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 73 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_hour ) ).asObject(), _python_int_0 ) )
        {
            return INCREASE_REFCOUNT( _python_int_pos_12 );
        }
        frame_guard.setLineNumber( 75 );
        if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_hour ) ).asObject(), _python_int_pos_12 ) )
        {
            frame_guard.setLineNumber( 76 );
            return BINARY_OPERATION_SUB( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_hour ) ).asObject(), _python_int_pos_12 );
        }
        frame_guard.setLineNumber( 77 );
        return LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_hour );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "g() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "g() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "g() got multiple values for keyword argument 'self'" );
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
                   "g() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "g() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "g() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "g() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "g() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "g() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "g() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "g() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "g() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "g() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "g() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "g() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "g() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "g() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_dd47b9f1d75d42b79daf2c48cb2c9b4f, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 81 );
        return LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_hour );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "G() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "G() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "G() got multiple values for keyword argument 'self'" );
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
                   "G() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "G() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "G() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "G() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "G() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "G() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "G() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "G() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "G() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "G() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "G() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "G() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "G() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "G() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_09da416b8aabcf5830e7f6fdcc2d4393, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 85 );
        return BINARY_OPERATION_REMAINDER( _python_unicode_digest_b73fbc0467b75e32fd5d37dd2781c2d4, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_g ) ).asObject() ) ).asObject() );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "h() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "h() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "h() got multiple values for keyword argument 'self'" );
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
                   "h() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "h() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "h() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "h() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "h() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "h() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "h() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "h() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "h() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "h() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "h() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "h() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "h() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "h() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_62d5679192f585abeed4263050e52bdd, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 89 );
        return BINARY_OPERATION_REMAINDER( _python_unicode_digest_b73fbc0467b75e32fd5d37dd2781c2d4, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_G ) ).asObject() ) ).asObject() );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "H() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "H() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "H() got multiple values for keyword argument 'self'" );
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
                   "H() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "H() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "H() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "H() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "H() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "H() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "H() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "H() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "H() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "H() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "H() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "H() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "H() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "H() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_71225e530b89afde4f917ced38c6d4e9, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 93 );
        return BINARY_OPERATION_REMAINDER( _python_unicode_digest_b73fbc0467b75e32fd5d37dd2781c2d4, PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_minute ) ).asObject() );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "i() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "i() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "i() got multiple values for keyword argument 'self'" );
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
                   "i() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "i() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "i() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "i() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "i() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "i() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "i() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "i() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "i() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "i() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "i() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "i() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "i() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "i() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_1d7e9278cc2a7324dcfa4ccd9324b034, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 102 );
        if ( ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_minute ) ).asObject(), _python_int_0 ) && RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_hour ) ).asObject(), _python_int_0 ) ) )
        {
            frame_guard.setLineNumber( 103 );
            return CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dateformat__.asObject0(), _python_unicode_plain_midnight );
        }
        frame_guard.setLineNumber( 104 );
        if ( ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_minute ) ).asObject(), _python_int_0 ) && RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_hour ) ).asObject(), _python_int_pos_12 ) ) )
        {
            frame_guard.setLineNumber( 105 );
            return CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dateformat__.asObject0(), _python_unicode_plain_noon );
        }
        frame_guard.setLineNumber( 106 );
        {
            PyObjectTempKeeper1 make_tuple1;
            return BINARY_OPERATION_REMAINDER( _python_unicode_digest_29bf226e186bf57b52fac1b0ba1f88ff, PyObjectTemporary( ( make_tuple1.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_f ) ).asObject() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_a ) ).asObject() ) ).asObject() ) ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "P() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "P() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "P() got multiple values for keyword argument 'self'" );
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
                   "P() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "P() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "P() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "P() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "P() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "P() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "P() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "P() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "P() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "P() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "P() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "P() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "P() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "P() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_92157b958f54d60a68557f7ee9de94ef, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 110 );
        return BINARY_OPERATION_REMAINDER( _python_unicode_digest_b73fbc0467b75e32fd5d37dd2781c2d4, PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_second ) ).asObject() );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "s() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "s() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "s() got multiple values for keyword argument 'self'" );
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
                   "s() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "s() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "s() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "s() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "s() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "s() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "s() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "s() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "s() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "s() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "s() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "s() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "s() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "s() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat );
        }

        frame_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_1f32dc8bf208536047320a97489d6879, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 114 );
        return BINARY_OPERATION_REMAINDER( _python_unicode_digest_ce6f016640cdd9aa3a5b645907b17748, PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_microsecond ) ).asObject() );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat );
           frame_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "u() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "u() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "u() got multiple values for keyword argument 'self'" );
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
                   "u() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "u() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "u() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "u() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "u() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "u() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "u() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "u() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "u() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "u() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "u() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "u() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "u() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "u() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_year_days( _python_str_plain_year_days );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_b( _python_str_plain_b );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );
    PyObjectLocalVariable _python_var_d( _python_str_plain_d );
    PyObjectLocalVariable _python_var_D( _python_str_plain_D );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_E( _python_str_plain_E );
    PyObjectLocalVariable _python_var_F( _python_str_plain_F );
    PyObjectLocalVariable _python_var_I( _python_str_plain_I );
    PyObjectLocalVariable _python_var_j( _python_str_plain_j );
    PyObjectLocalVariable _python_var_l( _python_str_plain_l );
    PyObjectLocalVariable _python_var_L( _python_str_plain_L );
    PyObjectLocalVariable _python_var_m( _python_str_plain_m );
    PyObjectLocalVariable _python_var_M( _python_str_plain_M );
    PyObjectLocalVariable _python_var_n( _python_str_plain_n );
    PyObjectLocalVariable _python_var_N( _python_str_plain_N );
    PyObjectLocalVariable _python_var_o( _python_str_plain_o );
    PyObjectLocalVariable _python_var_O( _python_str_plain_O );
    PyObjectLocalVariable _python_var_r( _python_str_plain_r );
    PyObjectLocalVariable _python_var_S( _python_str_plain_S );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_T( _python_str_plain_T );
    PyObjectLocalVariable _python_var_U( _python_str_plain_U );
    PyObjectLocalVariable _python_var_w( _python_str_plain_w );
    PyObjectLocalVariable _python_var_W( _python_str_plain_W );
    PyObjectLocalVariable _python_var_y( _python_str_plain_y );
    PyObjectLocalVariable _python_var_Y( _python_str_plain_Y );
    PyObjectLocalVariable _python_var_z( _python_str_plain_z );
    PyObjectLocalVariable _python_var_Z( _python_str_plain_Z );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_dateformat );
    _python_var_year_days.assign1( LIST_COPY( _python_list_79665f4f4689116493bdd961039dde89_list ) );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_b.assign1( MAKE_FUNCTION_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_c.assign1( MAKE_FUNCTION_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_d.assign1( MAKE_FUNCTION_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_D.assign1( MAKE_FUNCTION_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_e.assign1( MAKE_FUNCTION_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_E.assign1( MAKE_FUNCTION_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_F.assign1( MAKE_FUNCTION_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_I.assign1( MAKE_FUNCTION_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_j.assign1( MAKE_FUNCTION_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_l.assign1( MAKE_FUNCTION_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_L.assign1( MAKE_FUNCTION_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_m.assign1( MAKE_FUNCTION_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_M.assign1( MAKE_FUNCTION_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_n.assign1( MAKE_FUNCTION_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_N.assign1( MAKE_FUNCTION_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_o.assign1( MAKE_FUNCTION_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_O.assign1( MAKE_FUNCTION_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_r.assign1( MAKE_FUNCTION_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_S.assign1( MAKE_FUNCTION_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_t.assign1( MAKE_FUNCTION_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_T.assign1( MAKE_FUNCTION_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_U.assign1( MAKE_FUNCTION_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_w.assign1( MAKE_FUNCTION_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_W.assign1( MAKE_FUNCTION_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_y.assign1( MAKE_FUNCTION_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_Y.assign1( MAKE_FUNCTION_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_z.assign1( MAKE_FUNCTION_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    _python_var_Z.assign1( MAKE_FUNCTION_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
    return _python_var_Z.updateLocalsDict( _python_var_z.updateLocalsDict( _python_var_Y.updateLocalsDict( _python_var_y.updateLocalsDict( _python_var_W.updateLocalsDict( _python_var_w.updateLocalsDict( _python_var_U.updateLocalsDict( _python_var_T.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_S.updateLocalsDict( _python_var_r.updateLocalsDict( _python_var_O.updateLocalsDict( _python_var_o.updateLocalsDict( _python_var_N.updateLocalsDict( _python_var_n.updateLocalsDict( _python_var_M.updateLocalsDict( _python_var_m.updateLocalsDict( _python_var_L.updateLocalsDict( _python_var_l.updateLocalsDict( _python_var_j.updateLocalsDict( _python_var_I.updateLocalsDict( _python_var_F.updateLocalsDict( _python_var_E.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_D.updateLocalsDict( _python_var_d.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_b.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_year_days.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_9d120dc2804f648b2b67de08a59627fa, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 122 );
        {
                PyObject *tmp_identifier = _python_var_dt.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_data );
        }
        frame_guard.setLineNumber( 123 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_timezone );
        frame_guard.setLineNumber( 124 );
        {
            PyObjectTempKeeper0 isinstance5;
            if ( ( isinstance5.assign( _python_var_dt.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_datetime.asObject0(), _python_str_plain_datetime ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 125 );
            {
                PyObjectTempKeeper0 call3;
                if ( CHECK_IF_TRUE( PyObjectTemporary( ( call3.assign( _mvar_django__utils__dateformat_is_naive.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_dt.asObject() ) ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 126 );
                {
                    PyObjectTempKeeper0 call1;
                    {
                        PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__utils__dateformat_LocalTimezone.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_dt.asObject() ) ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_timezone );
                }
                }
            }
            else
            {
                frame_guard.setLineNumber( 128 );
                {
                        PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_tzinfo ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_timezone );
                }
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
        frame_guard.getFrame0()->f_locals = _python_var_dt.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_dt = NULL;
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
            if ( found == false && _python_str_plain_dt == key )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dt, key ) )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

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
         if (unlikely( _python_par_dt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'dt'" );
             goto error_exit;
         }

        _python_par_dt = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_2f39fd302a9d3d4d3b71d8a0b4414b10, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 132 );
        {
            PyObjectTempKeeper0 subscr1;
            return ( subscr1.assign( _mvar_django__utils__dateformat_MONTHS_3.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_month ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "b() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "b() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "b() got multiple values for keyword argument 'self'" );
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
                   "b() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "b() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "b() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "b() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "b() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "b() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "b() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "b() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "b() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "b() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "b() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "b() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "b() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "b() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_7809da0f8e7ea948e2f4794b8a0b333b, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 139 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_isoformat ) ).asObject() );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "c() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "c() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "c() got multiple values for keyword argument 'self'" );
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
                   "c() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "c() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "c() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "c() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "c() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "c() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "c() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "c() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "c() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "c() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "c() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "c() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "c() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "c() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_90a88cdab6e2f5a7d0ebcf0fb2976b16, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 143 );
        return BINARY_OPERATION_REMAINDER( _python_unicode_digest_b73fbc0467b75e32fd5d37dd2781c2d4, PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_day ) ).asObject() );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "d() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "d() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "d() got multiple values for keyword argument 'self'" );
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
                   "d() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "d() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "d() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "d() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "d() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "d() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "d() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "d() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "d() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "d() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "d() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "d() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "d() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "d() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_41c5b8ca31f012ef39a45a8a20ab1820, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 147 );
        {
            PyObjectTempKeeper0 subscr1;
            return ( subscr1.assign( _mvar_django__utils__dateformat_WEEKDAYS_ABBR.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_weekday ) ).asObject() ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "D() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "D() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "D() got multiple values for keyword argument 'self'" );
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
                   "D() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "D() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "D() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "D() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "D() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "D() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "D() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "D() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "D() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "D() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "D() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "D() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "D() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "D() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_3bec7a466f90108a5076fe343df2f4fb, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 151 );
        try
        {
            frame_guard.setLineNumber( 152 );
            if ( ( HAS_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_unicode_plain_tzinfo ) && CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_tzinfo ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 155 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper1 keeper_1;
                    return INCREASE_REFCOUNT( ( CHECK_IF_TRUE( keeper_1.assign( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_tzinfo ) ).asObject(), _python_str_plain_tzname ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject() ) ) ) ) ? PyObjectTemporary( keeper_1.asObject() ).asObject() : _python_unicode_empty ) );
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

            if ( _exception.matches( PyExc_NotImplementedError ) )
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

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( _python_unicode_empty );
}
static PyObject *fparse_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "e() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "e() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "e() got multiple values for keyword argument 'self'" );
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
                   "e() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "e() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "e() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "e() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "e() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "e() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "e() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "e() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "e() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "e() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "e() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "e() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "e() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "e() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_762ebdc37fcd28829c2000b44930ac71, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 162 );
        {
            PyObjectTempKeeper0 subscr1;
            return ( subscr1.assign( _mvar_django__utils__dateformat_MONTHS_ALT.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_month ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "E() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "E() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "E() got multiple values for keyword argument 'self'" );
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
                   "E() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "E() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "E() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "E() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "E() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "E() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "E() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "E() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "E() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "E() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "E() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "E() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "E() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "E() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_c17ebaaeec9b4bec3caa670b56e9aa99, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 166 );
        {
            PyObjectTempKeeper0 subscr1;
            return ( subscr1.assign( _mvar_django__utils__dateformat_MONTHS.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_month ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "F() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "F() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "F() got multiple values for keyword argument 'self'" );
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
                   "F() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "F() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "F() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "F() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "F() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "F() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "F() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "F() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "F() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "F() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "F() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "F() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "F() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "F() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_053aa09a299af5e82527db15ce7292aa, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 170 );
        {
            PyObjectTempKeeper1 call1;
            if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_timezone ) ).asObject() ) && CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_timezone ) ).asObject(), _python_str_plain_dst ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject() ) ) ).asObject() ) ) )
        {
            return INCREASE_REFCOUNT( _python_unicode_plain_1 );
        }
        else
        {
            return INCREASE_REFCOUNT( _python_unicode_plain_0 );
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

        if ( frame_guard.getFrame0() == frame_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "I() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "I() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "I() got multiple values for keyword argument 'self'" );
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
                   "I() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "I() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "I() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "I() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "I() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "I() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "I() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "I() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "I() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "I() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "I() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "I() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "I() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "I() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_ba1a57b4f4bb5740c3fc2081775982ba, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 177 );
        return LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_day );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "j() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "j() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "j() got multiple values for keyword argument 'self'" );
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
                   "j() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "j() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "j() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "j() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "j() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "j() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "j() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "j() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "j() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "j() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "j() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "j() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "j() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "j() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_add1c504a5651f3b50f240e5ac1c3376, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 181 );
        {
            PyObjectTempKeeper0 subscr1;
            return ( subscr1.assign( _mvar_django__utils__dateformat_WEEKDAYS.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_weekday ) ).asObject() ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "l() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "l() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "l() got multiple values for keyword argument 'self'" );
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
                   "l() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "l() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "l() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "l() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "l() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "l() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "l() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "l() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "l() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "l() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "l() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "l() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "l() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "l() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_17072ec1d8d9de6fe9fc3fa960c9aae3, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 185 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_calendar.asObject0(), _python_str_plain_isleap ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_year ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "L() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "L() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "L() got multiple values for keyword argument 'self'" );
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
                   "L() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "L() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "L() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "L() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "L() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "L() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "L() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "L() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "L() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "L() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "L() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "L() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "L() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "L() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_5cb4ce030c193ceaf84961fb3aa1ebf7, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 189 );
        return BINARY_OPERATION_REMAINDER( _python_unicode_digest_b73fbc0467b75e32fd5d37dd2781c2d4, PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_month ) ).asObject() );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "m() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "m() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "m() got multiple values for keyword argument 'self'" );
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
                   "m() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "m() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "m() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "m() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "m() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "m() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "m() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "m() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "m() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "m() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "m() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "m() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "m() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "m() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_8876efbb52d88f2f0d44b64ec0736265, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 193 );
        {
            PyObjectTempKeeper0 subscr1;
            return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( subscr1.assign( _mvar_django__utils__dateformat_MONTHS_3.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_month ) ).asObject() ) ) ).asObject(), _python_str_plain_title ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "M() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "M() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "M() got multiple values for keyword argument 'self'" );
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
                   "M() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "M() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "M() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "M() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "M() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "M() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "M() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "M() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "M() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "M() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "M() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "M() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "M() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "M() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_d3baa367f3014a803586859959ddfcf7, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 197 );
        return LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_month );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "n() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "n() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "n() got multiple values for keyword argument 'self'" );
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
                   "n() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "n() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "n() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "n() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "n() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "n() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "n() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "n() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "n() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "n() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "n() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "n() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "n() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "n() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_47fc36165ffba974655ccdf6b7e78b50, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 201 );
        {
            PyObjectTempKeeper0 subscr1;
            return ( subscr1.assign( _mvar_django__utils__dateformat_MONTHS_AP.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_month ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "N() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "N() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "N() got multiple values for keyword argument 'self'" );
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
                   "N() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "N() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "N() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "N() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "N() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "N() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "N() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "N() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "N() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "N() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "N() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "N() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "N() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "N() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_62f3863759ec0a3de5578a4486cfe4de, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 205 );
        return LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_isocalendar ) ).asObject() ) ).asObject(), _python_int_0, 0 );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "o() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "o() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "o() got multiple values for keyword argument 'self'" );
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
                   "o() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "o() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "o() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "o() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "o() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "o() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "o() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "o() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "o() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "o() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "o() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "o() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "o() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "o() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_seconds( _python_str_plain_seconds );
    PyObjectLocalVariable _python_var_sign( _python_str_plain_sign );

    // Actual function code.
    static PyFrameObject *frame_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_2600a2b7d3496e5f8d3db881daccac65, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 209 );
        _python_var_seconds.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_Z ) ).asObject() ) );
        frame_guard.setLineNumber( 210 );
        _python_var_sign.assign0( ( RICH_COMPARE_BOOL_LT( _python_var_seconds.asObject(), _python_int_0 ) ? _python_unicode_chr_45 : _python_unicode_chr_43 ) );
        frame_guard.setLineNumber( 211 );
        _python_var_seconds.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_abs ), _python_var_seconds.asObject() ) );
        frame_guard.setLineNumber( 212 );
        {
            PyObjectTempKeeper0 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            return BINARY_OPERATION_REMAINDER( _python_unicode_digest_75108034431801c60651e6a6a592ee65, PyObjectTemporary( ( make_tuple1.assign( _python_var_sign.asObject() ), make_tuple2.assign( BINARY_OPERATION( PyNumber_FloorDivide, _python_var_seconds.asObject(), _python_int_pos_3600 ) ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( PyObjectTemporary( BINARY_OPERATION( PyNumber_FloorDivide, _python_var_seconds.asObject(), _python_int_pos_60 ) ).asObject(), _python_int_pos_60 ) ).asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_sign.updateLocalsDict( _python_var_seconds.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "O() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "O() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "O() got multiple values for keyword argument 'self'" );
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
                   "O() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "O() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "O() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "O() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "O() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "O() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "O() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "O() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "O() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "O() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "O() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "O() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "O() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "O() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_2b642ed7203e0fadba7f03bc879db4ca, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 216 );
        return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_format ) ).asObject(), _python_unicode_digest_934fab5f9167c20168b554c5b3ca63c6 );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "r() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "r() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "r() got multiple values for keyword argument 'self'" );
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
                   "r() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "r() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "r() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "r() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "r() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "r() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "r() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "r() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "r() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "r() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "r() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "r() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "r() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "r() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_last( _python_str_plain_last );

    // Actual function code.
    static PyFrameObject *frame_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_a04a84f9ce1b124b404c1cd49983fa47, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 220 );
        if ( SEQUENCE_CONTAINS_BOOL( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_day ) ).asObject(), _python_tuple_int_pos_11_int_pos_12_int_pos_13_tuple ) )
        {
            return INCREASE_REFCOUNT( _python_unicode_plain_th );
        }
        frame_guard.setLineNumber( 222 );
        _python_var_last.assign1( BINARY_OPERATION_REMAINDER( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_day ) ).asObject(), _python_int_pos_10 ) );
        frame_guard.setLineNumber( 223 );
        if ( RICH_COMPARE_BOOL_EQ( _python_var_last.asObject(), _python_int_pos_1 ) )
        {
            return INCREASE_REFCOUNT( _python_unicode_plain_st );
        }
        frame_guard.setLineNumber( 225 );
        if ( RICH_COMPARE_BOOL_EQ( _python_var_last.asObject(), _python_int_pos_2 ) )
        {
            return INCREASE_REFCOUNT( _python_unicode_plain_nd );
        }
        frame_guard.setLineNumber( 227 );
        if ( RICH_COMPARE_BOOL_EQ( _python_var_last.asObject(), _python_int_pos_3 ) )
        {
            return INCREASE_REFCOUNT( _python_unicode_plain_rd );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_last.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( _python_unicode_plain_th );
}
static PyObject *fparse_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "S() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "S() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "S() got multiple values for keyword argument 'self'" );
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
                   "S() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "S() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "S() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "S() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "S() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "S() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "S() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "S() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "S() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "S() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "S() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "S() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "S() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "S() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_ebb65366b2d93a8b47b7c5d2b9b484d1, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 233 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call2;
            return BINARY_OPERATION_REMAINDER( _python_unicode_digest_b73fbc0467b75e32fd5d37dd2781c2d4, PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_calendar.asObject0(), _python_str_plain_monthrange ) ), call2.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_year ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_month ) ).asObject() ) ) ).asObject(), _python_int_pos_1, 1 ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "t() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "t() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "t() got multiple values for keyword argument 'self'" );
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
                   "t() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "t() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "t() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "t() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "t() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "t() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "t() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "t() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "t() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "t() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "t() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "t() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "t() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "t() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );

    // Actual function code.
    static PyFrameObject *frame_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_fd2f7029d4d6267b6ae949b4acb8fd49, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 237 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_name.assign1( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_timezone ) ).asObject() ) ? ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_timezone ) ).asObject(), _python_str_plain_tzname ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject() ) ) : INCREASE_REFCOUNT( Py_None ) ) );
        }
        frame_guard.setLineNumber( 238 );
        if ( ( _python_var_name.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 239 );
            _python_var_name.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_format ) ).asObject(), _python_unicode_plain_O ) );
        }
        frame_guard.setLineNumber( 240 );
        {
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_name.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_name.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "T() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "T() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "T() got multiple values for keyword argument 'self'" );
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
                   "T() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "T() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "T() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "T() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "T() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "T() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "T() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "T() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "T() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "T() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "T() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "T() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "T() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "T() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_ddd22459e1facc4813aa4acd968ac33c, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 244 );
        {
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper1 isinstance5;
            if ( ( ( isinstance5.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ), BUILTIN_ISINSTANCE_BOOL( isinstance5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_datetime.asObject0(), _python_str_plain_datetime ) ).asObject() ) ) && CHECK_IF_TRUE( PyObjectTemporary( ( call7.assign( _mvar_django__utils__dateformat_is_aware.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject() ) ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 245 );
            {
                PyObjectTempKeeper1 call1;
                return TO_INT( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_calendar.asObject0(), _python_str_plain_timegm ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_utctimetuple ) ).asObject() ) ).asObject() ) ) ).asObject() );
            }
        }
        else
        {
            frame_guard.setLineNumber( 247 );
            {
                PyObjectTempKeeper1 call3;
                return TO_INT( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_time.asObject0(), _python_str_plain_mktime ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_timetuple ) ).asObject() ) ).asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "U() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "U() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "U() got multiple values for keyword argument 'self'" );
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
                   "U() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "U() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "U() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "U() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "U() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "U() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "U() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "U() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "U() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "U() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "U() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "U() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "U() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "U() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_9bb16d2bef5f5af99350bc76c21a29cf, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 251 );
        return BINARY_OPERATION_REMAINDER( PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_weekday ) ).asObject() ) ).asObject(), _python_int_pos_1 ) ).asObject(), _python_int_pos_7 );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "w() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "w() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "w() got multiple values for keyword argument 'self'" );
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
                   "w() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "w() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "w() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "w() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "w() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "w() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "w() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "w() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "w() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "w() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "w() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "w() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "w() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "w() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_week_number( _python_str_plain_week_number );
    PyObjectLocalVariable _python_var_jan1_weekday( _python_str_plain_jan1_weekday );
    PyObjectLocalVariable _python_var_weekday( _python_str_plain_weekday );
    PyObjectLocalVariable _python_var_day_of_year( _python_str_plain_day_of_year );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_j( _python_str_plain_j );

    // Actual function code.
    _python_var_week_number.assign0( Py_None );
    static PyFrameObject *frame_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_bf181bf98fc909a3f4af5219dd509139, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 257 );
        _python_var_jan1_weekday.assign1( BINARY_OPERATION_ADD( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_7aee93ce36110228c6ce6c3c0747eb26 ) ).asObject() ) ).asObject(), _python_str_plain_weekday ) ).asObject() ) ).asObject(), _python_int_pos_1 ) );
        frame_guard.setLineNumber( 258 );
        _python_var_weekday.assign1( BINARY_OPERATION_ADD( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_weekday ) ).asObject() ) ).asObject(), _python_int_pos_1 ) );
        frame_guard.setLineNumber( 259 );
        _python_var_day_of_year.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_z ) ).asObject() ) );
        frame_guard.setLineNumber( 260 );
        {
            PyObjectTempKeeper0 cmp13;
            if ( ( ( cmp13.assign( _python_var_day_of_year.asObject() ), RICH_COMPARE_BOOL_LE( cmp13.asObject0(), PyObjectTemporary( BINARY_OPERATION_SUB( _python_int_pos_8, _python_var_jan1_weekday.asObject() ) ).asObject() ) ) && RICH_COMPARE_BOOL_GT( _python_var_jan1_weekday.asObject(), _python_int_pos_4 ) ) )
        {
            frame_guard.setLineNumber( 261 );
            {
                PyObjectTempKeeper1 call1;
                if ( ( RICH_COMPARE_BOOL_EQ( _python_var_jan1_weekday.asObject(), _python_int_pos_5 ) || ( RICH_COMPARE_BOOL_EQ( _python_var_jan1_weekday.asObject(), _python_int_pos_6 ) && CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_calendar.asObject0(), _python_str_plain_isleap ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_SUB( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_year ) ).asObject(), _python_int_pos_1 ) ).asObject() ) ) ).asObject() ) ) ) )
            {
                _python_var_week_number.assign0( _python_int_pos_53 );
            }
            else
            {
                _python_var_week_number.assign0( _python_int_pos_52 );
            }
            }
        }
        else
        {
            frame_guard.setLineNumber( 266 );
            {
                PyObjectTempKeeper1 call3;
                if ( CHECK_IF_TRUE( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_calendar.asObject0(), _python_str_plain_isleap ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_year ) ).asObject() ) ) ).asObject() ) )
            {
                _python_var_i.assign0( _python_int_pos_366 );
            }
            else
            {
                _python_var_i.assign0( _python_int_pos_365 );
            }
            }
            frame_guard.setLineNumber( 270 );
            {
                PyObjectTempKeeper1 cmp11;
                PyObjectTempKeeper0 op9;
                if ( ( cmp11.assign( ( op9.assign( _python_var_i.asObject() ), BINARY_OPERATION_SUB( op9.asObject0(), _python_var_day_of_year.asObject() ) ) ), RICH_COMPARE_BOOL_LT( cmp11.asObject0(), PyObjectTemporary( BINARY_OPERATION_SUB( _python_int_pos_4, _python_var_weekday.asObject() ) ).asObject() ) ) )
            {
                _python_var_week_number.assign0( _python_int_pos_1 );
            }
            else
            {
                frame_guard.setLineNumber( 273 );
                {
                    PyObjectTempKeeper0 op5;
                    PyObjectTempKeeper1 op7;
                    _python_var_j.assign1( ( op7.assign( ( op5.assign( _python_var_day_of_year.asObject() ), BINARY_OPERATION_ADD( op5.asObject0(), PyObjectTemporary( BINARY_OPERATION_SUB( _python_int_pos_7, _python_var_weekday.asObject() ) ).asObject() ) ) ), BINARY_OPERATION_ADD( op7.asObject0(), PyObjectTemporary( BINARY_OPERATION_SUB( _python_var_jan1_weekday.asObject(), _python_int_pos_1 ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 274 );
                _python_var_week_number.assign1( BINARY_OPERATION( PyNumber_FloorDivide, _python_var_j.asObject(), _python_int_pos_7 ) );
                frame_guard.setLineNumber( 275 );
                if ( RICH_COMPARE_BOOL_GT( _python_var_jan1_weekday.asObject(), _python_int_pos_4 ) )
                {
                    {
                        frame_guard.setLineNumber( 276 );
                        PyObject *_python_tmp_inplace_start = _python_var_week_number.asObject();
                        PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceSubtract, _python_tmp_inplace_start, _python_int_pos_1 ) );
                        if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                        {
                            _python_var_week_number.assign0( _python_tmp_inplace_end.asObject() );
                        }
                    }
                }
            }
            }
        }
        }
        frame_guard.setLineNumber( 277 );
        return _python_var_week_number.asObject1();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_j.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_day_of_year.updateLocalsDict( _python_var_weekday.updateLocalsDict( _python_var_jan1_weekday.updateLocalsDict( _python_var_week_number.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "W() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "W() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "W() got multiple values for keyword argument 'self'" );
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
                   "W() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "W() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "W() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "W() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "W() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "W() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "W() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "W() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "W() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "W() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "W() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "W() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "W() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "W() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_2e747131154feb4485f398e37ed8d5ce, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 281 );
        {
            PyObjectTempKeeper1 call1;
            return LOOKUP_INDEX_SLICE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_six.asObject0(), _python_str_plain_text_type ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_year ) ).asObject() ) ) ).asObject(), 2, PY_SSIZE_T_MAX );
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

        if ( frame_guard.getFrame0() == frame_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "y() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "y() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "y() got multiple values for keyword argument 'self'" );
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
                   "y() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "y() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "y() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "y() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "y() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "y() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "y() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "y() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "y() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "y() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "y() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "y() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "y() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "y() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_3fd0a1387eb8835b6480d4f56064af04, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 285 );
        return LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_year );
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "Y() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "Y() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "Y() got multiple values for keyword argument 'self'" );
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
                   "Y() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "Y() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "Y() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "Y() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "Y() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "Y() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "Y() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "Y() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "Y() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "Y() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "Y() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "Y() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "Y() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "Y() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_doy( _python_str_plain_doy );

    // Actual function code.
    static PyFrameObject *frame_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_277cb3a9351cfe925e01607ba3557909, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 289 );
        {
            PyObjectTempKeeper1 op3;
            PyObjectTempKeeper1 subscr1;
            _python_var_doy.assign1( ( op3.assign( ( subscr1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_year_days ) ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_month ) ).asObject() ) ) ), BINARY_OPERATION_ADD( op3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_day ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 290 );
        if ( ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_L ) ).asObject() ) ).asObject() ) && RICH_COMPARE_BOOL_GT( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject(), _python_str_plain_month ) ).asObject(), _python_int_pos_2 ) ) )
        {
            {
                frame_guard.setLineNumber( 291 );
                PyObject *_python_tmp_inplace_start = _python_var_doy.asObject();
                PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_int_pos_1 ) );
                if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                {
                    _python_var_doy.assign0( _python_tmp_inplace_end.asObject() );
                }
            }
        }
        frame_guard.setLineNumber( 292 );
        return _python_var_doy.asObject1();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_doy.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "z() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "z() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "z() got multiple values for keyword argument 'self'" );
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
                   "z() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "z() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "z() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "z() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "z() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "z() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "z() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "z() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "z() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "z() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "z() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "z() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "z() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "z() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_offset( _python_str_plain_offset );

    // Actual function code.
    static PyFrameObject *frame_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat );
        }

        frame_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_7b96c088764a5619ea0748a31b1017ac, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 300 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_timezone ) ).asObject() ) )) )
        {
            return INCREASE_REFCOUNT( _python_int_0 );
        }
        frame_guard.setLineNumber( 302 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_offset.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_timezone ) ).asObject(), _python_str_plain_utcoffset ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_data ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 307 );
        {
            PyObjectTempKeeper1 op3;
            return ( op3.assign( BINARY_OPERATION_MUL( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_offset.asObject(), _python_str_plain_days ) ).asObject(), _python_int_pos_86400 ) ), BINARY_OPERATION_ADD( op3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_offset.asObject(), _python_str_plain_seconds ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_offset.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat );
           frame_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "Z() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "Z() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "Z() got multiple values for keyword argument 'self'" );
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
                   "Z() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "Z() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "Z() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "Z() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "Z() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "Z() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "Z() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "Z() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "Z() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "Z() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "Z() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "Z() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "Z() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "Z() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_format_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_format_string )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_format_string( _python_str_plain_format_string, _python_par_format_string );
    PyObjectLocalVariable _python_var_df( _python_str_plain_df );

    // Actual function code.
    static PyFrameObject *frame_function_4_format_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_4_format_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_4_format_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_format_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_4_format_of_module_django__utils__dateformat );
        }

        frame_function_4_format_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_453059a06893a8fc99da534fe35d6142, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_4_format_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_4_format_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 311 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_df.assign1( ( call1.assign( _mvar_django__utils__dateformat_DateFormat.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) );
        }
        frame_guard.setLineNumber( 312 );
        {
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_df.asObject(), _python_str_plain_format ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_format_string.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_format_string.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_df.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_format_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_4_format_of_module_django__utils__dateformat );
           frame_function_4_format_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_format_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_format_string = NULL;
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
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_format_string == key )
            {
                if (unlikely( _python_par_format_string ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'format_string'" );
                    goto error_exit;
                }

                _python_par_format_string = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_format_string, key ) )
            {
                if (unlikely( _python_par_format_string ))
                {
                    PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'format_string'" );
                    goto error_exit;
                }

                _python_par_format_string = value;

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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "format() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "format() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "format() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "format() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "format() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
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
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_format_string != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format() got multiple values for keyword argument 'format_string'" );
             goto error_exit;
         }

        _python_par_format_string = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_format_of_module_django__utils__dateformat( self, _python_par_value, _python_par_format_string );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_format_string );

    return NULL;
}

static PyObject *dparse_function_4_format_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_format_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_format_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_time_format_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_format_string )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_format_string( _python_str_plain_format_string, _python_par_format_string );
    PyObjectLocalVariable _python_var_tf( _python_str_plain_tf );

    // Actual function code.
    static PyFrameObject *frame_function_5_time_format_of_module_django__utils__dateformat = NULL;

    if ( isFrameUnusable( frame_function_5_time_format_of_module_django__utils__dateformat ) )
    {
        if ( frame_function_5_time_format_of_module_django__utils__dateformat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_time_format_of_module_django__utils__dateformat" );
#endif
            Py_DECREF( frame_function_5_time_format_of_module_django__utils__dateformat );
        }

        frame_function_5_time_format_of_module_django__utils__dateformat = MAKE_FRAME( _codeobj_8ba14f9414be593b21e8cceecfc92fd0, _module_django__utils__dateformat );
    }

    FrameGuard frame_guard( frame_function_5_time_format_of_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_function_5_time_format_of_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 316 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_tf.assign1( ( call1.assign( _mvar_django__utils__dateformat_TimeFormat.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) );
        }
        frame_guard.setLineNumber( 317 );
        {
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_tf.asObject(), _python_str_plain_format ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_format_string.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_format_string.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_tf.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_time_format_of_module_django__utils__dateformat )
        {
           Py_DECREF( frame_function_5_time_format_of_module_django__utils__dateformat );
           frame_function_5_time_format_of_module_django__utils__dateformat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_time_format_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_format_string = NULL;
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
                PyErr_Format( PyExc_TypeError, "time_format() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_format_string == key )
            {
                if (unlikely( _python_par_format_string ))
                {
                    PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'format_string'" );
                    goto error_exit;
                }

                _python_par_format_string = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_format_string, key ) )
            {
                if (unlikely( _python_par_format_string ))
                {
                    PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'format_string'" );
                    goto error_exit;
                }

                _python_par_format_string = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "time_format() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "time_format() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "time_format() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "time_format() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "time_format() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "time_format() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "time_format() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "time_format() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "time_format() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "time_format() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "time_format() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "time_format() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "time_format() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_format_string != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "time_format() got multiple values for keyword argument 'format_string'" );
             goto error_exit;
         }

        _python_par_format_string = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5_time_format_of_module_django__utils__dateformat( self, _python_par_value, _python_par_format_string );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_format_string );

    return NULL;
}

static PyObject *dparse_function_5_time_format_of_module_django__utils__dateformat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_time_format_of_module_django__utils__dateformat( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_time_format_of_module_django__utils__dateformat( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_10_i_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain_i,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_71225e530b89afde4f917ced38c6d4e9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_70a307a6025fc8fccf873cb79a88435f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_10_j_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_j,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ba1a57b4f4bb5740c3fc2081775982ba,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_190b19955495d9dec0af6021ce49815b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_11_P_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain_P,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1d7e9278cc2a7324dcfa4ccd9324b034,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_bab523bc4c745284d582b2d59b1d7263
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_11_l_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_l,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_add1c504a5651f3b50f240e5ac1c3376,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_cd9b6e48fe35f3752f5ae7d63bc81e88
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_12_L_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_L,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_17072ec1d8d9de6fe9fc3fa960c9aae3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_f65290f937e89d1ec05010291c17e243
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_12_s_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain_s,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_92157b958f54d60a68557f7ee9de94ef,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_d5b729ea759134e4e3892617e0627ca5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_13_m_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_m,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5cb4ce030c193ceaf84961fb3aa1ebf7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_1ea903c8bf083ee41a91ab14b4eadfd9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_13_u_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain_u,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1f32dc8bf208536047320a97489d6879,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_6bc4f2c726bc93830a7e5d4d62273432
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_14_M_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_M,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8876efbb52d88f2f0d44b64ec0736265,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_8f9600ff934eff632f06efa959a7a670
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_15_n_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_n,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d3baa367f3014a803586859959ddfcf7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_bbe1027a5bb269dc8ecc28a948f2311a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_16_N_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_N,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_47fc36165ffba974655ccdf6b7e78b50,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_3ef6e9da920d16de372041a669d93dfa
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_17_o_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_o,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_62f3863759ec0a3de5578a4486cfe4de,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_b8b0a2b7062fcb057ed1246b14ef7fb2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_18_O_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_O,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2600a2b7d3496e5f8d3db881daccac65,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_ccb284354298ce95762399473326e788
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_19_r_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_r,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2b642ed7203e0fadba7f03bc879db4ca,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_bdc92e37b03ead32bcb536d03adf21d1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_1___init___of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d81ca1acb754e24fc00892af9c09182a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_1___init___of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9d120dc2804f648b2b67de08a59627fa,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat,
        dparse_function_1_format_of_class_1_Formatter_of_module_django__utils__dateformat,
        _python_str_plain_format,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2d55bc7bc0dfa12db0e7378a1db16878,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_20_S_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_S,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a04a84f9ce1b124b404c1cd49983fa47,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_c83771c735af4b2e67eeb94322248c55
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_21_t_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_t,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ebb65366b2d93a8b47b7c5d2b9b484d1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_cc1cfd13120e0df7f2daf1875a2b33fa
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_22_T_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_T,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fd2f7029d4d6267b6ae949b4acb8fd49,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_eba78743ead06552ae52f6473ecf4252
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_23_U_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_U,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ddd22459e1facc4813aa4acd968ac33c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_451cbc6e8b0578ea6b05068c6db2c34e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_24_w_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_w,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9bb16d2bef5f5af99350bc76c21a29cf,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_8fdfad2495fc484646c0ead23a1b464f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_25_W_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_W,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bf181bf98fc909a3f4af5219dd509139,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_59fedf021e0fa1a38e32d03eb5e82160
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_26_y_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_y,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2e747131154feb4485f398e37ed8d5ce,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_9f316a0c14067e3bcab24f6f7b840ed9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_27_Y_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_Y,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3fd0a1387eb8835b6480d4f56064af04,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_ff1d4988701140d8617761a162ec0e4f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_28_z_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_z,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_277cb3a9351cfe925e01607ba3557909,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_c516c12231f80588d4c84922402fea34
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_29_Z_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_Z,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7b96c088764a5619ea0748a31b1017ac,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_e9c19353acade42c92b85a13ede1afd6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_2_a_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain_a,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2aee4993c63001eb3cab7a713fe387a9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_48c2e8fb6ddc778853c3fda5664e067a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_2_b_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_b,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2f39fd302a9d3d4d3b71d8a0b4414b10,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_8232abbacb6a16f9e1780bc8153560b6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_3_A_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain_A,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2e2ff3f51c79193702dcccfb3e8c1270,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_02b0480b7a7f451e2be29af392d33bec
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_3_c_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_c,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7809da0f8e7ea948e2f4794b8a0b333b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_a06f3dca9c8057d6f18ad965dcf73288
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_4_B_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain_B,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b2889a565a6b6e8d502770c822c6ca9a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_01e224215e7e4f36d409bbccd0cceffa
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_4_d_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_90a88cdab6e2f5a7d0ebcf0fb2976b16,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_55371defd29eb7185d3bf4794389059f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_format_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_format_of_module_django__utils__dateformat,
        dparse_function_4_format_of_module_django__utils__dateformat,
        _python_str_plain_format,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_453059a06893a8fc99da534fe35d6142,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_90fed1df07cad61fdbdb840aa6f840c0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_5_D_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_D,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_41c5b8ca31f012ef39a45a8a20ab1820,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_2bba47497599dc95c8b331cf0a52e903
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_5_f_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain_f,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cab11054e83582d2f1964df08e540e8a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_ee7c5185b44ae59638f096bbcd533e2d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_time_format_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_time_format_of_module_django__utils__dateformat,
        dparse_function_5_time_format_of_module_django__utils__dateformat,
        _python_str_plain_time_format,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8ba14f9414be593b21e8cceecfc92fd0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_90fed1df07cad61fdbdb840aa6f840c0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_6_e_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_e,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3bec7a466f90108a5076fe343df2f4fb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_d8ba34c0e20c14257822dd65b78f85ac
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_6_g_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain_g,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_052dd9971f3cec56058852a6564069b4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_32b0f8272aec028b4cae5f795ea91acc
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_7_E_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_E,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_762ebdc37fcd28829c2000b44930ac71,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_0a36deebb0e2c228974f6f5025d5b003
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_7_G_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain_G,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_dd47b9f1d75d42b79daf2c48cb2c9b4f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_cf0ca96eaf3b51881469b7ff8e9f9cb1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_8_F_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_F,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c17ebaaeec9b4bec3caa670b56e9aa99,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_3bc69caaa556c298622712d45879d006
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_8_h_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain_h,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_09da416b8aabcf5830e7f6fdcc2d4393,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_2433e2844b5e9fb7b4d5741b807e14ba
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        dparse_function_9_H_of_class_2_TimeFormat_of_module_django__utils__dateformat,
        _python_str_plain_H,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_62d5679192f585abeed4263050e52bdd,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_222fe527d8b31f520f6b45788aaa4a9d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat,
        dparse_function_9_I_of_class_3_DateFormat_of_module_django__utils__dateformat,
        _python_str_plain_I,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_053aa09a299af5e82527db15ce7292aa,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateformat,
        _python_unicode_digest_f90370c522d009f9e96f0881670ee8e3
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.dateformat",   /* m_name */
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

MOD_INIT_DECL( django__utils__dateformat )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__dateformat );
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

    // puts( "in initdjango__utils__dateformat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__dateformat = Py_InitModule4(
        "django.utils.dateformat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__dateformat = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__dateformat = (PyDictObject *)((PyModuleObject *)_module_django__utils__dateformat)->md_dict;

    assertObject( _module_django__utils__dateformat );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_e8984d4841fe1188adf1d3f1f0940da0, _module_django__utils__dateformat );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__dateformat );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__dateformat != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_1e1ad55da8e6d3d61eb69b156c1f22c0 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_b1f289a25dd02a7ada5343651dfa517a );
    PyFrameObject *frame_module_django__utils__dateformat = MAKE_FRAME( _codeobj_2b25c6c08f3a062c96b05150b0d6d459, _module_django__utils__dateformat );

    FrameGuard frame_guard( frame_module_django__utils__dateformat );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__dateformat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_re, IMPORT_MODULE( _python_str_plain_re, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_time, IMPORT_MODULE( _python_str_plain_time, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_calendar, IMPORT_MODULE( _python_str_plain_calendar, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_datetime, IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 20 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_MONTHS, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c7d05b98c56e242e094a795944a34863, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_f14f94b9e0674ac715bcd6b993cec006_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_MONTHS ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_MONTHS_3, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c7d05b98c56e242e094a795944a34863, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_f14f94b9e0674ac715bcd6b993cec006_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_MONTHS_3 ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_MONTHS_ALT, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c7d05b98c56e242e094a795944a34863, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_f14f94b9e0674ac715bcd6b993cec006_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_MONTHS_ALT ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_MONTHS_AP, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c7d05b98c56e242e094a795944a34863, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_f14f94b9e0674ac715bcd6b993cec006_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_MONTHS_AP ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_WEEKDAYS, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c7d05b98c56e242e094a795944a34863, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_f14f94b9e0674ac715bcd6b993cec006_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_WEEKDAYS ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_WEEKDAYS_ABBR, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c7d05b98c56e242e094a795944a34863, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_f14f94b9e0674ac715bcd6b993cec006_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_WEEKDAYS_ABBR ) );
        frame_guard.setLineNumber( 21 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_LocalTimezone, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_503679903f504364ca4ae3d636dd72d9, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_str_plain_LocalTimezone_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_LocalTimezone ) );
        frame_guard.setLineNumber( 22 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain__, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_str_plain_ugettext_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ugettext ) );
        frame_guard.setLineNumber( 23 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        frame_guard.setLineNumber( 24 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 25 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_is_aware, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_73d3e50847215b8dcd97fb275615b5ea, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_str_plain_is_aware_str_plain_is_naive_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_is_aware ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_is_naive, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_73d3e50847215b8dcd97fb275615b5ea, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, ((PyModuleObject *)_module_django__utils__dateformat)->md_dict, _python_list_str_plain_is_aware_str_plain_is_naive_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_is_naive ) );
        frame_guard.setLineNumber( 27 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_re_formatchars, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_2cb76fdff0c27d3f1b4c863a5e7f6f40 ) );
        frame_guard.setLineNumber( 28 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_re_escaped, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateformat_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_unicode_digest_a9f023df57f4e69ea601dfe8e6b924da ) );
        {
            frame_guard.setLineNumber( 30 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_Formatter_of_module_django__utils__dateformat(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__dateformat___metaclass__.isInitialized( false ) ? _mvar_django__utils__dateformat___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_Formatter, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_Formatter, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 40 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__utils__dateformat_Formatter.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_TimeFormat_of_module_django__utils__dateformat(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__dateformat___metaclass__.isInitialized( false ) ? _mvar_django__utils__dateformat___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_TimeFormat, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_TimeFormat, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 117 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__utils__dateformat_TimeFormat.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_DateFormat_of_module_django__utils__dateformat(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__dateformat___metaclass__.isInitialized( false ) ? _mvar_django__utils__dateformat___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_DateFormat, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_DateFormat, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__dateformat)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_format, MAKE_FUNCTION_function_4_format_of_module_django__utils__dateformat(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__dateformat, (Nuitka_StringObject *)_python_str_plain_time_format, MAKE_FUNCTION_function_5_time_format_of_module_django__utils__dateformat(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__dateformat );
}
