// Generated code for Python source for module 'django.utils.termcolors'
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

// The _module_django__utils__termcolors is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__termcolors;
PyDictObject *_moduledict_django__utils__termcolors;

// The module level variables.
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_DARK_PALETTE( &_module_django__utils__termcolors, &_python_str_plain_DARK_PALETTE );
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_DEFAULT_PALETTE( &_module_django__utils__termcolors, &_python_str_plain_DEFAULT_PALETTE );
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_LIGHT_PALETTE( &_module_django__utils__termcolors, &_python_str_plain_LIGHT_PALETTE );
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_NOCOLOR_PALETTE( &_module_django__utils__termcolors, &_python_str_plain_NOCOLOR_PALETTE );
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_PALETTES( &_module_django__utils__termcolors, &_python_str_plain_PALETTES );
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_RESET( &_module_django__utils__termcolors, &_python_str_plain_RESET );
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_background( &_module_django__utils__termcolors, &_python_str_plain_background );
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_color_names( &_module_django__utils__termcolors, &_python_str_plain_color_names );
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_colorize( &_module_django__utils__termcolors, &_python_str_plain_colorize );
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_foreground( &_module_django__utils__termcolors, &_python_str_plain_foreground );
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_opt_dict( &_module_django__utils__termcolors, &_python_str_plain_opt_dict );
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_six( &_module_django__utils__termcolors, &_python_str_plain_six );
static PyObjectGlobalVariable_django__utils__termcolors _mvar_django__utils__termcolors_x( &_module_django__utils__termcolors, &_python_str_plain_x );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_module_django__utils__termcolors( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_module_django__utils__termcolors( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors( PyObject *_python_par___iterator );


static PyObject *MAKE_FUNCTION_function_3_colorize_of_module_django__utils__termcolors(  );


static PyObject *MAKE_FUNCTION_function_4_make_style_of_module_django__utils__termcolors(  );


static PyObject *MAKE_FUNCTION_function_5_parse_color_setting_of_module_django__utils__termcolors(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors( PyObjectSharedLocalVariable &python_closure_kwargs, PyObjectSharedLocalVariable &python_closure_opts );


// This structure is for attachment as self of lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors.
// It is allocated at the time the function object is created.
struct _context_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_kwargs;
    PyObjectClosureVariable python_closure_opts;
};

static void _context_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors_destructor( void *context_voidptr )
{
    _context_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors_t *_python_context = (_context_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors_t *)context_voidptr;



    delete _python_context;
}


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_module_django__utils__termcolors( PyObject *_python_par___iterator )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 8 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 8 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                UPDATE_STRING_DICT0( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_x, _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 make_tuple3;
                    PyObjectTempKeeper0 subscr1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( make_tuple3.assign( ( subscr1.assign( _mvar_django__utils__termcolors_color_names.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), _mvar_django__utils__termcolors_x.asObject0() ) ) ), MAKE_TUPLE2( make_tuple3.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_c8509a3178d91ee47460a171707c0dd1, _mvar_django__utils__termcolors_x.asObject0() ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_module_django__utils__termcolors( PyObject *_python_par___iterator )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 9 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 9 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                UPDATE_STRING_DICT0( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_x, _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 make_tuple3;
                    PyObjectTempKeeper0 subscr1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( make_tuple3.assign( ( subscr1.assign( _mvar_django__utils__termcolors_color_names.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), _mvar_django__utils__termcolors_x.asObject0() ) ) ), MAKE_TUPLE2( make_tuple3.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_674fe7f1daf85ae7d2025ff585686c21, _mvar_django__utils__termcolors_x.asObject0() ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_3_colorize_of_module_django__utils__termcolors( Nuitka_FunctionObject *self, PyObject *_python_par_text, PyObject *_python_par_opts, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );
    PyObjectLocalParameterVariableNoDel _python_var_opts( _python_str_plain_opts, _python_par_opts );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_code_list( _python_str_plain_code_list );
    PyObjectLocalVariable _python_var_k( _python_str_plain_k );
    PyObjectLocalVariable _python_var_v( _python_str_plain_v );
    PyObjectLocalVariable _python_var_o( _python_str_plain_o );

    // Actual function code.
    _python_var_code_list.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_3_colorize_of_module_django__utils__termcolors = NULL;

    if ( isFrameUnusable( frame_function_3_colorize_of_module_django__utils__termcolors ) )
    {
        if ( frame_function_3_colorize_of_module_django__utils__termcolors )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_colorize_of_module_django__utils__termcolors" );
#endif
            Py_DECREF( frame_function_3_colorize_of_module_django__utils__termcolors );
        }

        frame_function_3_colorize_of_module_django__utils__termcolors = MAKE_FRAME( _codeobj_18be2f4fd57419501e7068ccfdbf6338, _module_django__utils__termcolors );
    }

    FrameGuard frame_guard( frame_function_3_colorize_of_module_django__utils__termcolors );
    try
    {
        assert( Py_REFCNT( frame_function_3_colorize_of_module_django__utils__termcolors ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 44 );
        if ( ( RICH_COMPARE_BOOL_EQ( _python_var_text.asObject(), _python_str_empty ) && ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( _python_var_opts.asObject() ) ).asObject(), _python_int_pos_1 ) && RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_opts.asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_reset ) ) ) )
        {
            frame_guard.setLineNumber( 45 );
            return BINARY_OPERATION_REMAINDER( _python_str_digest_32c486752ec9e66b735409670646b409, _mvar_django__utils__termcolors_RESET.asObject0() );
        }
        {
            frame_guard.setLineNumber( 46 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper1 call1;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__termcolors_six.asObject0(), _python_str_plain_iteritems ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_kwargs.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 46 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 46 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_k.assign0( _python_tmp_element_1.asObject() );
                        _python_var_v.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 47 );
                if ( RICH_COMPARE_BOOL_EQ( _python_var_k.asObject(), _python_str_plain_fg ) )
                {
                    frame_guard.setLineNumber( 48 );
                    {
                        PyObjectTempKeeper1 call5;
                        PyObjectTempKeeper0 subscr3;
                        DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_code_list.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( subscr3.assign( _mvar_django__utils__termcolors_foreground.asObject0() ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_var_v.asObject() ) ) ).asObject() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 49 );
                    if ( RICH_COMPARE_BOOL_EQ( _python_var_k.asObject(), _python_str_plain_bg ) )
                    {
                        frame_guard.setLineNumber( 50 );
                        {
                            PyObjectTempKeeper1 call9;
                            PyObjectTempKeeper0 subscr7;
                            DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_code_list.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( ( subscr7.assign( _mvar_django__utils__termcolors_background.asObject0() ), LOOKUP_SUBSCRIPT( subscr7.asObject0(), _python_var_v.asObject() ) ) ).asObject() ) ) );
                        }
                    }
                }

               CONSIDER_THREADING();
            }
        }
        {
            frame_guard.setLineNumber( 51 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_opts.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 51 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    _python_var_o.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 52 );
                {
                    PyObjectTempKeeper0 cmp15;
                    if ( ( cmp15.assign( _python_var_o.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp15.asObject0(), _mvar_django__utils__termcolors_opt_dict.asObject0() ) ) )
                {
                    frame_guard.setLineNumber( 53 );
                    {
                        PyObjectTempKeeper1 call13;
                        PyObjectTempKeeper0 subscr11;
                        DECREASE_REFCOUNT( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_code_list.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), PyObjectTemporary( ( subscr11.assign( _mvar_django__utils__termcolors_opt_dict.asObject0() ), LOOKUP_SUBSCRIPT( subscr11.asObject0(), _python_var_o.asObject() ) ) ).asObject() ) ) );
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 54 );
        if ( SEQUENCE_CONTAINS_NOT_BOOL( _python_str_plain_noreset, _python_var_opts.asObject() ) )
        {
            frame_guard.setLineNumber( 55 );
            {
                PyObjectTempKeeper0 keeper_2;
                PyObjectTempKeeper0 make_tuple17;
                _python_var_text.assign1( BINARY_OPERATION_REMAINDER( _python_str_digest_aa6234c2c064e246d48acfb4b533da99, PyObjectTemporary( ( make_tuple17.assign( ( CHECK_IF_TRUE( keeper_2.assign( _python_var_text.asObject() ) ) ? keeper_2.asObject0() : _python_str_empty ) ), MAKE_TUPLE2( make_tuple17.asObject0(), _mvar_django__utils__termcolors_RESET.asObject0() ) ) ).asObject() ) );
            }
        }
        frame_guard.setLineNumber( 56 );
        {
            PyObjectTempKeeper1 call19;
            PyObjectTempKeeper0 keeper_3;
            PyObjectTempKeeper1 make_tuple21;
            return BINARY_OPERATION_REMAINDER( _python_str_digest_f0275d2ae1aaf69b3b06259723647d35, PyObjectTemporary( ( make_tuple21.assign( BINARY_OPERATION_REMAINDER( _python_str_digest_32c486752ec9e66b735409670646b409, PyObjectTemporary( ( call19.assign( LOOKUP_ATTRIBUTE( _python_str_chr_59, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), _python_var_code_list.asObject() ) ) ).asObject() ) ), MAKE_TUPLE2( make_tuple21.asObject0(), ( CHECK_IF_TRUE( keeper_3.assign( _python_var_text.asObject() ) ) ? keeper_3.asObject0() : _python_str_empty ) ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_text.updateLocalsDict( _python_var_o.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_code_list.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_colorize_of_module_django__utils__termcolors )
        {
           Py_DECREF( frame_function_3_colorize_of_module_django__utils__termcolors );
           frame_function_3_colorize_of_module_django__utils__termcolors = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_3_colorize_of_module_django__utils__termcolors( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_text = NULL;
    PyObject *_python_par_opts = NULL;
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
                        PyErr_Format( PyExc_TypeError, "colorize() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "colorize() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "colorize() keywords must be strings" );
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

    // Check if argument text was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_text );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_text == NULL );

            _python_par_text = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_text );

            kw_found += 1;
        }
    }

    // Check if argument opts was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_opts );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_opts == NULL );

            _python_par_opts = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_opts );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "colorize() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "colorize() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "colorize() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "colorize() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "colorize() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "colorize() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "colorize() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "colorize() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "colorize() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "colorize() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "colorize() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "colorize() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "colorize() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_opts != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "colorize() got multiple values for keyword argument 'opts'" );
             goto error_exit;
         }

        _python_par_opts = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_text == NULL )
    {
        _python_par_text = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_text );
    }
    if ( _python_par_opts == NULL )
    {
        _python_par_opts = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_opts );
    }


    return impl_function_3_colorize_of_module_django__utils__termcolors( self, _python_par_text, _python_par_opts, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_text );
    Py_XDECREF( _python_par_opts );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_3_colorize_of_module_django__utils__termcolors( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_colorize_of_module_django__utils__termcolors( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_3_colorize_of_module_django__utils__termcolors( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_make_style_of_module_django__utils__termcolors( Nuitka_FunctionObject *self, PyObject *_python_par_opts, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_opts( _python_str_plain_opts, _python_par_opts );
    PyObjectSharedLocalVariable _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    return MAKE_FUNCTION_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors( _python_var_kwargs, _python_var_opts );
}
static PyObject *fparse_function_4_make_style_of_module_django__utils__termcolors( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_opts = NULL;
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
                        PyErr_Format( PyExc_TypeError, "make_style() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "make_style() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "make_style() keywords must be strings" );
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

    // Check if argument opts was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_opts );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_opts == NULL );

            _python_par_opts = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_opts );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "make_style() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "make_style() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "make_style() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "make_style() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_style() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_style() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_style() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_style() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "make_style() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_style() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "make_style() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "make_style() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_opts != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_style() got multiple values for keyword argument 'opts'" );
             goto error_exit;
         }

        _python_par_opts = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_opts == NULL )
    {
        _python_par_opts = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_opts );
    }


    return impl_function_4_make_style_of_module_django__utils__termcolors( self, _python_par_opts, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_opts );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_4_make_style_of_module_django__utils__termcolors( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_make_style_of_module_django__utils__termcolors( self, INCREASE_REFCOUNT( args[ 0 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_4_make_style_of_module_django__utils__termcolors( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors( Nuitka_FunctionObject *self, PyObject *_python_par_text )
{
    // The context of the function.
    struct _context_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors_t *_python_context = (struct _context_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors ) )
    {
        if ( frame_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors );
        }

        frame_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors = MAKE_FRAME( _codeobj_7367061da09e8dde5e6505f19ada1651, _module_django__utils__termcolors );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 68 );
        {
            PyObjectTempKeeper0 call_tmp3;
            PyObjectTempKeeper1 call_tmp4;
            PyObjectTempKeeper0 make_tuple1;
            return ( call_tmp3.assign( _mvar_django__utils__termcolors_colorize.asObject0() ), call_tmp4.assign( ( make_tuple1.assign( _python_var_text.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_context->python_closure_opts.asObject() ) ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), INCREASE_REFCOUNT( _python_context->python_closure_kwargs.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_text.updateLocalsDict( _python_context->python_closure_kwargs.updateLocalsDict( _python_context->python_closure_opts.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors );
           frame_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_text = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
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
            if ( found == false && _python_str_plain_text == key )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_text, key ) )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

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
         if (unlikely( _python_par_text != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors( self, _python_par_text );

error_exit:;

    Py_XDECREF( _python_par_text );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_parse_color_setting_of_module_django__utils__termcolors( Nuitka_FunctionObject *self, PyObject *_python_par_config_string )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_config_string( _python_str_plain_config_string, _python_par_config_string );
    PyObjectLocalVariable _python_var_parts( _python_str_plain_parts );
    PyObjectLocalVariable _python_var_palette( _python_str_plain_palette );
    PyObjectLocalVariable _python_var_part( _python_str_plain_part );
    PyObjectLocalVariable _python_var_definition( _python_str_plain_definition );
    PyObjectLocalVariable _python_var_role( _python_str_plain_role );
    PyObjectLocalVariable _python_var_instructions( _python_str_plain_instructions );
    PyObjectLocalVariable _python_var_styles( _python_str_plain_styles );
    PyObjectLocalVariable _python_var_colors( _python_str_plain_colors );
    PyObjectLocalVariable _python_var_fg( _python_str_plain_fg );
    PyObjectLocalVariable _python_var_opts( _python_str_plain_opts );

    // Actual function code.
    static PyFrameObject *frame_function_5_parse_color_setting_of_module_django__utils__termcolors = NULL;

    if ( isFrameUnusable( frame_function_5_parse_color_setting_of_module_django__utils__termcolors ) )
    {
        if ( frame_function_5_parse_color_setting_of_module_django__utils__termcolors )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_parse_color_setting_of_module_django__utils__termcolors" );
#endif
            Py_DECREF( frame_function_5_parse_color_setting_of_module_django__utils__termcolors );
        }

        frame_function_5_parse_color_setting_of_module_django__utils__termcolors = MAKE_FRAME( _codeobj_a90afb7d341329f7ac1d60f59476a699, _module_django__utils__termcolors );
    }

    FrameGuard frame_guard( frame_function_5_parse_color_setting_of_module_django__utils__termcolors );
    try
    {
        assert( Py_REFCNT( frame_function_5_parse_color_setting_of_module_django__utils__termcolors ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 153 );
        if ( (!( CHECK_IF_TRUE( _python_var_config_string.asObject() ) )) )
        {
            frame_guard.setLineNumber( 154 );
            {
                PyObjectTempKeeper0 subscr1;
                return ( subscr1.assign( _mvar_django__utils__termcolors_PALETTES.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), _mvar_django__utils__termcolors_DEFAULT_PALETTE.asObject0() ) );
            }
        }
        frame_guard.setLineNumber( 157 );
        _python_var_parts.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_config_string.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_59 ) );
        frame_guard.setLineNumber( 158 );
        {
            PyObjectTempKeeper0 subscr3;
            _python_var_palette.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( subscr3.assign( _mvar_django__utils__termcolors_PALETTES.asObject0() ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _mvar_django__utils__termcolors_NOCOLOR_PALETTE.asObject0() ) ) ).asObject(), _python_str_plain_copy ) ).asObject() ) );
        }
        {
            frame_guard.setLineNumber( 159 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_parts.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 159 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_part.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 160 );
                {
                    PyObjectTempKeeper0 cmp17;
                    if ( ( cmp17.assign( _python_var_part.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp17.asObject0(), _mvar_django__utils__termcolors_PALETTES.asObject0() ) ) )
                {
                    frame_guard.setLineNumber( 162 );
                    {
                        PyObjectTempKeeper1 call7;
                        PyObjectTempKeeper0 subscr5;
                        DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_palette.asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( ( subscr5.assign( _mvar_django__utils__termcolors_PALETTES.asObject0() ), LOOKUP_SUBSCRIPT( subscr5.asObject0(), _python_var_part.asObject() ) ) ).asObject() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 163 );
                    if ( SEQUENCE_CONTAINS_BOOL( _python_str_chr_61, _python_var_part.asObject() ) )
                    {
                        _python_var_definition.assign1( PyDict_New() );
                        {
                            frame_guard.setLineNumber( 170 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_part.asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_61 ) ).asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_role.assign0( _python_tmp_element_1.asObject() );
                            _python_var_instructions.assign0( _python_tmp_element_2.asObject() );
                        }
                        frame_guard.setLineNumber( 171 );
                        _python_var_role.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_role.asObject(), _python_str_plain_upper ) ).asObject() ) );
                        frame_guard.setLineNumber( 173 );
                        _python_var_styles.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_instructions.asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_44 ) );
                        frame_guard.setLineNumber( 174 );
                        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_styles.asObject(), _python_str_plain_reverse ) ).asObject() ) );
                        frame_guard.setLineNumber( 178 );
                        _python_var_colors.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_styles.asObject(), _python_str_plain_pop ) ).asObject() ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_47 ) );
                        frame_guard.setLineNumber( 179 );
                        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_colors.asObject(), _python_str_plain_reverse ) ).asObject() ) );
                        frame_guard.setLineNumber( 180 );
                        _python_var_fg.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_colors.asObject(), _python_str_plain_pop ) ).asObject() ) );
                        frame_guard.setLineNumber( 181 );
                        {
                            PyObjectTempKeeper0 cmp9;
                            if ( ( cmp9.assign( _python_var_fg.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp9.asObject0(), _mvar_django__utils__termcolors_color_names.asObject0() ) ) )
                        {
                            frame_guard.setLineNumber( 182 );
                            {
                                    PyObject *tmp_identifier = _python_var_fg.asObject();
                                    SET_SUBSCRIPT( tmp_identifier, _python_var_definition.asObject(), _python_str_plain_fg );
                            }
                        }
                        }
                        frame_guard.setLineNumber( 183 );
                        {
                            PyObjectTempKeeper1 cmp11;
                            if ( ( CHECK_IF_TRUE( _python_var_colors.asObject() ) && ( cmp11.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_colors.asObject(), _python_int_neg_1, -1 ) ), SEQUENCE_CONTAINS_BOOL( cmp11.asObject0(), _mvar_django__utils__termcolors_color_names.asObject0() ) ) ) )
                        {
                            frame_guard.setLineNumber( 184 );
                            {
                                    PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( _python_var_colors.asObject(), _python_int_neg_1, -1 ) );
                                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_definition.asObject(), _python_str_plain_bg );
                            }
                        }
                        }
                        frame_guard.setLineNumber( 187 );
                        _python_var_opts.assign1( TO_TUPLE( PyObjectTemporary( impl_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors( MAKE_ITERATOR( _python_var_styles.asObject() ) ) ).asObject() ) );
                        frame_guard.setLineNumber( 188 );
                        if ( CHECK_IF_TRUE( _python_var_opts.asObject() ) )
                        {
                            frame_guard.setLineNumber( 189 );
                            {
                                    PyObject *tmp_identifier = _python_var_opts.asObject();
                                    SET_SUBSCRIPT( tmp_identifier, _python_var_definition.asObject(), _python_str_plain_opts );
                            }
                        }
                        frame_guard.setLineNumber( 194 );
                        {
                            PyObjectTempKeeper0 cmp15;
                            PyObjectTempKeeper0 subscr13;
                            if ( ( ( cmp15.assign( _python_var_role.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp15.asObject0(), PyObjectTemporary( ( subscr13.assign( _mvar_django__utils__termcolors_PALETTES.asObject0() ), LOOKUP_SUBSCRIPT( subscr13.asObject0(), _mvar_django__utils__termcolors_NOCOLOR_PALETTE.asObject0() ) ) ).asObject() ) ) && CHECK_IF_TRUE( _python_var_definition.asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 195 );
                            {
                                    PyObject *tmp_identifier = _python_var_definition.asObject();
                                    PyObject *tmp_subscribed = _python_var_palette.asObject();
                                    SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_role.asObject() );
                            }
                        }
                        }
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 198 );
        {
            PyObjectTempKeeper0 cmp21;
            PyObjectTempKeeper0 subscr19;
            if ( ( cmp21.assign( _python_var_palette.asObject() ), RICH_COMPARE_BOOL_EQ( cmp21.asObject0(), PyObjectTemporary( ( subscr19.assign( _mvar_django__utils__termcolors_PALETTES.asObject0() ), LOOKUP_SUBSCRIPT( subscr19.asObject0(), _mvar_django__utils__termcolors_NOCOLOR_PALETTE.asObject0() ) ) ).asObject() ) ) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        }
        frame_guard.setLineNumber( 200 );
        return _python_var_palette.asObject1();
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_config_string.updateLocalsDict( _python_var_opts.updateLocalsDict( _python_var_fg.updateLocalsDict( _python_var_colors.updateLocalsDict( _python_var_styles.updateLocalsDict( _python_var_instructions.updateLocalsDict( _python_var_role.updateLocalsDict( _python_var_definition.updateLocalsDict( _python_var_part.updateLocalsDict( _python_var_palette.updateLocalsDict( _python_var_parts.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_parse_color_setting_of_module_django__utils__termcolors )
        {
           Py_DECREF( frame_function_5_parse_color_setting_of_module_django__utils__termcolors );
           frame_function_5_parse_color_setting_of_module_django__utils__termcolors = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_parse_color_setting_of_module_django__utils__termcolors( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_config_string = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "parse_color_setting() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_config_string == key )
            {
                if (unlikely( _python_par_config_string ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_color_setting() got multiple values for keyword argument 'config_string'" );
                    goto error_exit;
                }

                _python_par_config_string = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_config_string, key ) )
            {
                if (unlikely( _python_par_config_string ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_color_setting() got multiple values for keyword argument 'config_string'" );
                    goto error_exit;
                }

                _python_par_config_string = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "parse_color_setting() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

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
            PyErr_Format( PyExc_TypeError, "parse_color_setting() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "parse_color_setting() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "parse_color_setting() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "parse_color_setting() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_color_setting() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_color_setting() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_color_setting() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_color_setting() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "parse_color_setting() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "parse_color_setting() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "parse_color_setting() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "parse_color_setting() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_config_string != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_color_setting() got multiple values for keyword argument 'config_string'" );
             goto error_exit;
         }

        _python_par_config_string = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_parse_color_setting_of_module_django__utils__termcolors( self, _python_par_config_string );

error_exit:;

    Py_XDECREF( _python_par_config_string );

    return NULL;
}

static PyObject *dparse_function_5_parse_color_setting_of_module_django__utils__termcolors( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_parse_color_setting_of_module_django__utils__termcolors( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_parse_color_setting_of_module_django__utils__termcolors( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_s;
};

static void _context_generator_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors_t *_python_context = (struct _context_generator_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors_t *_python_context = (_context_generator_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_s.setVariableName( _python_str_plain_s );

        // Actual function code.
        static PyFrameObject *frame_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors ) )
        {
            if ( frame_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors" );
#endif
                Py_DECREF( frame_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors );
            }

            frame_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors = MAKE_FRAME( _codeobj_ba7f174a6e4c48acdede735c1e138b88, _module_django__utils__termcolors );
        }

        Py_INCREF( frame_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors );
        generator->m_frame = frame_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors;

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
                    frame_guard.setLineNumber( 187 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 187 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_s.assign0( _python_tmp_iter_value.asObject() );
                        {
                            PyObjectTempKeeper0 cmp1;
                            if ( ( cmp1.assign( _python_context->python_var_s.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__termcolors_opt_dict.asObject0(), _python_str_plain_keys ) ).asObject() ) ).asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 187 );
                            YIELD_VALUE( generator, _python_context->python_var_s.asObject1() );
                        }
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

static PyObject *impl_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors_t *_python_context = new _context_generator_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors_context,
            _python_str_angle_genexpr,
            _codeobj_e79947a5d636ae3e2d82699e15c2e332,
            _python_context,
            _context_generator_genexpr_1_of_function_5_parse_color_setting_of_module_django__utils__termcolors_destructor
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



static PyObject *MAKE_FUNCTION_function_3_colorize_of_module_django__utils__termcolors(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_colorize_of_module_django__utils__termcolors,
        dparse_function_3_colorize_of_module_django__utils__termcolors,
        _python_str_plain_colorize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_18be2f4fd57419501e7068ccfdbf6338,
        INCREASE_REFCOUNT( _python_tuple_str_empty_tuple_empty_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__termcolors,
        _python_str_digest_94ff3b4c2ff66af772fa3cbda137e978
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_make_style_of_module_django__utils__termcolors(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_make_style_of_module_django__utils__termcolors,
        dparse_function_4_make_style_of_module_django__utils__termcolors,
        _python_str_plain_make_style,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6eaa26be65eab8c352bcd3521afdca35,
        INCREASE_REFCOUNT( _python_tuple_tuple_empty_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__termcolors,
        _python_str_digest_8128511fd0c8d4f6e40420327fcd94de
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_parse_color_setting_of_module_django__utils__termcolors(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_parse_color_setting_of_module_django__utils__termcolors,
        dparse_function_5_parse_color_setting_of_module_django__utils__termcolors,
        _python_str_plain_parse_color_setting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a90afb7d341329f7ac1d60f59476a699,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__termcolors,
        _python_str_digest_f5150af04b5a7028387027d4e4ca0134
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors( PyObjectSharedLocalVariable &python_closure_kwargs, PyObjectSharedLocalVariable &python_closure_opts )
{
    struct _context_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors_t *_python_context = new _context_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_kwargs.shareWith( python_closure_kwargs );
    _python_context->python_closure_opts.shareWith( python_closure_opts );

    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors,
        dparse_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7367061da09e8dde5e6505f19ada1651,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__termcolors,
        Py_None,
        _python_context,
        _context_lambda_1_lambda_of_function_4_make_style_of_module_django__utils__termcolors_destructor
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.termcolors",   /* m_name */
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

MOD_INIT_DECL( django__utils__termcolors )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__termcolors );
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

    // puts( "in initdjango__utils__termcolors" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__termcolors = Py_InitModule4(
        "django.utils.termcolors",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__termcolors = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__termcolors = (PyDictObject *)((PyModuleObject *)_module_django__utils__termcolors)->md_dict;

    assertObject( _module_django__utils__termcolors );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_98322ed16da4493eb4a8b98b428cc7b6, _module_django__utils__termcolors );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__termcolors );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__termcolors != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_df957bc4b516be39cdf6d652917079f0 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_460697674febef9bce202509b644ac76 );
    PyFrameObject *frame_module_django__utils__termcolors = MAKE_FRAME( _codeobj_8e12ebba2f453c85f07cb8617850bc56, _module_django__utils__termcolors );

    FrameGuard frame_guard( frame_module_django__utils__termcolors );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__termcolors ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__termcolors)->md_dict, ((PyModuleObject *)_module_django__utils__termcolors)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        UPDATE_STRING_DICT0( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_color_names, _python_tuple_ab08d4a81ee151cf2446b444dafd799a_tuple );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_foreground, TO_DICT( PyObjectTemporary( impl_listcontr_1_of_module_django__utils__termcolors( MAKE_ITERATOR( PyObjectTemporary( LIST_COPY( _python_list_b0450016f9f3ccabca6051445ab77496_list ) ).asObject() ) ) ).asObject(), NULL ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_background, TO_DICT( PyObjectTemporary( impl_listcontr_2_of_module_django__utils__termcolors( MAKE_ITERATOR( PyObjectTemporary( LIST_COPY( _python_list_b0450016f9f3ccabca6051445ab77496_list ) ).asObject() ) ) ).asObject(), NULL ) );
        UPDATE_STRING_DICT0( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_RESET, _python_str_plain_0 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_opt_dict, PyDict_Copy( _python_dict_84b009830c66b9303370d713fb8ec0fd ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_colorize, MAKE_FUNCTION_function_3_colorize_of_module_django__utils__termcolors(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_make_style, MAKE_FUNCTION_function_4_make_style_of_module_django__utils__termcolors(  ) );
        UPDATE_STRING_DICT0( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_NOCOLOR_PALETTE, _python_str_plain_nocolor );
        UPDATE_STRING_DICT0( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_DARK_PALETTE, _python_str_plain_dark );
        UPDATE_STRING_DICT0( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_LIGHT_PALETTE, _python_str_plain_light );
        frame_guard.setLineNumber( 74 );
        {
            PyObjectTempKeeper0 make_dict2;
            PyObjectTempKeeper0 make_dict4;
            UPDATE_STRING_DICT1( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_PALETTES, ( make_dict2.assign( _mvar_django__utils__termcolors_NOCOLOR_PALETTE.asObject0() ), make_dict4.assign( _mvar_django__utils__termcolors_DARK_PALETTE.asObject0() ), MAKE_DICT3( PyObjectTemporary( PyDict_Copy( _python_dict_36bc39245df1609536f97f8f972a245a ) ).asObject(), make_dict2.asObject0(), PyObjectTemporary( MAKE_DICT13( PyObjectTemporary( PyDict_Copy( _python_dict_982c9ec3a63e9b38418095abba8d72c7 ) ).asObject(), _python_str_plain_ERROR, PyObjectTemporary( PyDict_Copy( _python_dict_550d84ae1634aaa2fc90507cd9b0b847 ) ).asObject(), _python_str_plain_NOTICE, PyObjectTemporary( PyDict_Copy( _python_dict_dfb9677d7d9f7f84e137daa47785ffb2 ) ).asObject(), _python_str_plain_SQL_FIELD, PyObjectTemporary( PyDict_Copy( _python_dict_ce96efd536a77c2cbe466a6d97789821 ) ).asObject(), _python_str_plain_SQL_COLTYPE, PyObjectTemporary( PyDict_Copy( _python_dict_f8a4c8b752035a43d79ec0b9a85f2efd ) ).asObject(), _python_str_plain_SQL_KEYWORD, PyObjectTemporary( PyDict_Copy( _python_dict_e55d8fb7384c09c413cd53c9a725684f ) ).asObject(), _python_str_plain_SQL_TABLE, PyObjectTemporary( PyDict_Copy( _python_dict_e55d8fb7384c09c413cd53c9a725684f ) ).asObject(), _python_str_plain_HTTP_INFO, PyObjectTemporary( PyDict_New() ).asObject(), _python_str_plain_HTTP_SUCCESS, PyObjectTemporary( PyDict_Copy( _python_dict_ce96efd536a77c2cbe466a6d97789821 ) ).asObject(), _python_str_plain_HTTP_REDIRECT, PyObjectTemporary( PyDict_Copy( _python_dict_a9fb54f8ef115e83f08a9d71aa8dec05 ) ).asObject(), _python_str_plain_HTTP_NOT_MODIFIED, PyObjectTemporary( PyDict_Copy( _python_dict_982c9ec3a63e9b38418095abba8d72c7 ) ).asObject(), _python_str_plain_HTTP_BAD_REQUEST, PyObjectTemporary( PyDict_Copy( _python_dict_f8a4c8b752035a43d79ec0b9a85f2efd ) ).asObject(), _python_str_plain_HTTP_NOT_FOUND, PyObjectTemporary( PyDict_Copy( _python_dict_fb3707f84928092e55f04233227031b4 ) ).asObject(), _python_str_plain_HTTP_SERVER_ERROR ) ).asObject(), make_dict4.asObject0(), PyObjectTemporary( MAKE_DICT13( PyObjectTemporary( PyDict_Copy( _python_dict_982c9ec3a63e9b38418095abba8d72c7 ) ).asObject(), _python_str_plain_ERROR, PyObjectTemporary( PyDict_Copy( _python_dict_550d84ae1634aaa2fc90507cd9b0b847 ) ).asObject(), _python_str_plain_NOTICE, PyObjectTemporary( PyDict_Copy( _python_dict_dfb9677d7d9f7f84e137daa47785ffb2 ) ).asObject(), _python_str_plain_SQL_FIELD, PyObjectTemporary( PyDict_Copy( _python_dict_ce96efd536a77c2cbe466a6d97789821 ) ).asObject(), _python_str_plain_SQL_COLTYPE, PyObjectTemporary( PyDict_Copy( _python_dict_23dc343b607e46463cc73c59c9d9db1f ) ).asObject(), _python_str_plain_SQL_KEYWORD, PyObjectTemporary( PyDict_Copy( _python_dict_e55d8fb7384c09c413cd53c9a725684f ) ).asObject(), _python_str_plain_SQL_TABLE, PyObjectTemporary( PyDict_Copy( _python_dict_e55d8fb7384c09c413cd53c9a725684f ) ).asObject(), _python_str_plain_HTTP_INFO, PyObjectTemporary( PyDict_New() ).asObject(), _python_str_plain_HTTP_SUCCESS, PyObjectTemporary( PyDict_Copy( _python_dict_dfb9677d7d9f7f84e137daa47785ffb2 ) ).asObject(), _python_str_plain_HTTP_REDIRECT, PyObjectTemporary( PyDict_Copy( _python_dict_ce96efd536a77c2cbe466a6d97789821 ) ).asObject(), _python_str_plain_HTTP_NOT_MODIFIED, PyObjectTemporary( PyDict_Copy( _python_dict_982c9ec3a63e9b38418095abba8d72c7 ) ).asObject(), _python_str_plain_HTTP_BAD_REQUEST, PyObjectTemporary( PyDict_Copy( _python_dict_550d84ae1634aaa2fc90507cd9b0b847 ) ).asObject(), _python_str_plain_HTTP_NOT_FOUND, PyObjectTemporary( PyDict_Copy( _python_dict_fb3707f84928092e55f04233227031b4 ) ).asObject(), _python_str_plain_HTTP_SERVER_ERROR ) ).asObject(), _mvar_django__utils__termcolors_LIGHT_PALETTE.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 121 );
        UPDATE_STRING_DICT0( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_DEFAULT_PALETTE, _mvar_django__utils__termcolors_DARK_PALETTE.asObject0() );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__termcolors)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__termcolors, (Nuitka_StringObject *)_python_str_plain_parse_color_setting, MAKE_FUNCTION_function_5_parse_color_setting_of_module_django__utils__termcolors(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__termcolors );
}
