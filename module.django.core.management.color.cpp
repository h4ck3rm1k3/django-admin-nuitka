// Generated code for Python source for module 'django.core.management.color'
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

// The _module_django__core__management__color is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__management__color;
PyDictObject *_moduledict_django__core__management__color;

// The module level variables.
static PyObjectGlobalVariable_django__core__management__color _mvar_django__core__management__color___metaclass__( &_module_django__core__management__color, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__management__color _mvar_django__core__management__color_no_style( &_module_django__core__management__color, &_python_str_plain_no_style );
static PyObjectGlobalVariable_django__core__management__color _mvar_django__core__management__color_os( &_module_django__core__management__color, &_python_str_plain_os );
static PyObjectGlobalVariable_django__core__management__color _mvar_django__core__management__color_supports_color( &_module_django__core__management__color, &_python_str_plain_supports_color );
static PyObjectGlobalVariable_django__core__management__color _mvar_django__core__management__color_sys( &_module_django__core__management__color, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__core__management__color _mvar_django__core__management__color_termcolors( &_module_django__core__management__color, &_python_str_plain_termcolors );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_dummy_of_function_2_color_style_of_module_django__core__management__color(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color(  );


static PyObject *MAKE_FUNCTION_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color(  );


static PyObject *MAKE_FUNCTION_function_1_supports_color_of_module_django__core__management__color(  );


static PyObject *MAKE_FUNCTION_function_2_color_style_of_module_django__core__management__color(  );


static PyObject *MAKE_FUNCTION_function_3_no_style_of_module_django__core__management__color(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color(  );


// The module function definitions.
static PyObject *impl_function_1_supports_color_of_module_django__core__management__color( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var_unsupported_platform( _python_str_plain_unsupported_platform );
    PyObjectLocalVariable _python_var_is_a_tty( _python_str_plain_is_a_tty );

    // Actual function code.
    static PyFrameObject *frame_function_1_supports_color_of_module_django__core__management__color = NULL;

    if ( isFrameUnusable( frame_function_1_supports_color_of_module_django__core__management__color ) )
    {
        if ( frame_function_1_supports_color_of_module_django__core__management__color )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_supports_color_of_module_django__core__management__color" );
#endif
            Py_DECREF( frame_function_1_supports_color_of_module_django__core__management__color );
        }

        frame_function_1_supports_color_of_module_django__core__management__color = MAKE_FRAME( _codeobj_8d5a5cc75ddcc4fb7c700050b47ac01a, _module_django__core__management__color );
    }

    FrameGuard frame_guard( frame_function_1_supports_color_of_module_django__core__management__color );
    try
    {
        assert( Py_REFCNT( frame_function_1_supports_color_of_module_django__core__management__color ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 15 );
        _python_var_unsupported_platform.assign0( SEQUENCE_CONTAINS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__color_sys.asObject0(), _python_str_plain_platform ) ).asObject(), _python_tuple_str_plain_win32_str_digest_25d53f1cebddb86c83570a3f8ddc96be_tuple ) );
        frame_guard.setLineNumber( 17 );
        {
            PyObjectTempKeeper0 keeper_0;
            _python_var_is_a_tty.assign1( ( CHECK_IF_TRUE( keeper_0.assign( BOOL_FROM( HAS_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__color_sys.asObject0(), _python_str_plain_stdout ) ).asObject(), _python_str_plain_isatty ) ) ) ) ? CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__color_sys.asObject0(), _python_str_plain_stdout ) ).asObject(), _python_str_plain_isatty ) ).asObject() ) : INCREASE_REFCOUNT( keeper_0.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 18 );
        if ( ( CHECK_IF_TRUE( _python_var_unsupported_platform.asObject() ) || (!( CHECK_IF_TRUE( _python_var_is_a_tty.asObject() ) )) ) )
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

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_is_a_tty.updateLocalsDict( _python_var_unsupported_platform.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1_supports_color_of_module_django__core__management__color )
        {
           Py_DECREF( frame_function_1_supports_color_of_module_django__core__management__color );
           frame_function_1_supports_color_of_module_django__core__management__color = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_True );
}
static PyObject *fparse_function_1_supports_color_of_module_django__core__management__color( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "supports_color() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "supports_color() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "supports_color() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_1_supports_color_of_module_django__core__management__color( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1_supports_color_of_module_django__core__management__color( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_1_supports_color_of_module_django__core__management__color( self );
    }
    else
    {
        PyObject *result = fparse_function_1_supports_color_of_module_django__core__management__color( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_color_style_of_module_django__core__management__color( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var_style( _python_str_plain_style );
    PyObjectLocalVariable _python_var_DJANGO_COLORS( _python_str_plain_DJANGO_COLORS );
    PyObjectLocalVariable _python_var_color_settings( _python_str_plain_color_settings );
    PyObjectLocalVariable _python_var_dummy( _python_str_plain_dummy );
    PyObjectLocalVariable _python_var_role( _python_str_plain_role );
    PyObjectLocalVariable _python_var_format( _python_str_plain_format );

    // Actual function code.
    static PyFrameObject *frame_function_2_color_style_of_module_django__core__management__color = NULL;

    if ( isFrameUnusable( frame_function_2_color_style_of_module_django__core__management__color ) )
    {
        if ( frame_function_2_color_style_of_module_django__core__management__color )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_color_style_of_module_django__core__management__color" );
#endif
            Py_DECREF( frame_function_2_color_style_of_module_django__core__management__color );
        }

        frame_function_2_color_style_of_module_django__core__management__color = MAKE_FRAME( _codeobj_25dd72484b5d482883c7741983c6b4ad, _module_django__core__management__color );
    }

    FrameGuard frame_guard( frame_function_2_color_style_of_module_django__core__management__color );
    try
    {
        assert( Py_REFCNT( frame_function_2_color_style_of_module_django__core__management__color ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 24 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__core__management__color_supports_color.asObject0() ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 25 );
            _python_var_style.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__management__color_no_style.asObject0() ) );
        }
        else
        {
            frame_guard.setLineNumber( 27 );
            _python_var_DJANGO_COLORS.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__color_os.asObject0(), _python_str_plain_environ ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_str_plain_DJANGO_COLORS, _python_str_empty ) );
            frame_guard.setLineNumber( 28 );
            {
                PyObjectTempKeeper1 call1;
                _python_var_color_settings.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__management__color_termcolors.asObject0(), _python_str_plain_parse_color_setting ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_DJANGO_COLORS.asObject() ) ) );
            }
            frame_guard.setLineNumber( 29 );
            if ( CHECK_IF_TRUE( _python_var_color_settings.asObject() ) )
            {
                {
                    PyObject *_python_tmp_bases = _python_tuple_empty;
                    frame_guard.setLineNumber( 30 );
                    PyObjectTemporary _python_tmp_class_dict( impl_class_1_dummy_of_function_2_color_style_of_module_django__core__management__color(  ) );
                    PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases, ( _mvar_django__core__management__color___metaclass__.isInitialized( false ) ? _mvar_django__core__management__color___metaclass__.asObject0() : NULL ) ) ) );
                    PyObject *_tmp_python_tmp_class;
                    {
                        PyObjectTempKeeper0 call3;
                        PyObjectTempKeeper0 call5;
                        _tmp_python_tmp_class = ( call3.assign( _python_tmp_metaclass.asObject() ), call5.assign( _python_tmp_bases ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_str_plain_dummy, call5.asObject0(), _python_tmp_class_dict.asObject() ) );
                    }
                    PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
                    _python_var_dummy.assign0( _python_tmp_class.asObject() );
                }
                frame_guard.setLineNumber( 31 );
                _python_var_style.assign1( CALL_FUNCTION_NO_ARGS( _python_var_dummy.asObject() ) );
                {
                    frame_guard.setLineNumber( 35 );
                    PyObject *_tmp_python_tmp_for_iterator;
                    {
                        PyObjectTempKeeper1 subscr7;
                        _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( subscr7.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__management__color_termcolors.asObject0(), _python_str_plain_PALETTES ) ), LOOKUP_SUBSCRIPT( subscr7.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__management__color_termcolors.asObject0(), _python_str_plain_NOCOLOR_PALETTE ) ).asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 35 );
                            PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_1 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                            _python_var_role.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 36 );
                        {
                            PyObjectTempKeeper1 call9;
                            _python_var_format.assign1( ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_color_settings.asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_role.asObject(), PyObjectTemporary( PyDict_New() ).asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 37 );
                        {
                            PyObjectTempKeeper1 call_tmp12;
                            PyObjectTempKeeper0 setattr14;
                            PyObjectTempKeeper0 setattr15;
                            ( ( setattr14.assign( _python_var_style.asObject() ), setattr15.assign( _python_var_role.asObject() ), BUILTIN_SETATTR( setattr14.asObject0(), setattr15.asObject0(), PyObjectTemporary( ( call_tmp12.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__management__color_termcolors.asObject0(), _python_str_plain_make_style ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp12.asObject(), _python_var_format.asObject1() ) ) ).asObject() ) ), Py_None );
                        }

                       CONSIDER_THREADING();
                    }
                }
                frame_guard.setLineNumber( 40 );
                {
                        PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_style.asObject(), _python_str_plain_ERROR ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_style.asObject(), _python_str_plain_ERROR_OUTPUT );
                }
            }
            else
            {
                frame_guard.setLineNumber( 42 );
                _python_var_style.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__core__management__color_no_style.asObject0() ) );
            }
        }
        frame_guard.setLineNumber( 43 );
        return _python_var_style.asObject1();
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_format.updateLocalsDict( _python_var_role.updateLocalsDict( _python_var_dummy.updateLocalsDict( _python_var_color_settings.updateLocalsDict( _python_var_DJANGO_COLORS.updateLocalsDict( _python_var_style.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_color_style_of_module_django__core__management__color )
        {
           Py_DECREF( frame_function_2_color_style_of_module_django__core__management__color );
           frame_function_2_color_style_of_module_django__core__management__color = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_color_style_of_module_django__core__management__color( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "color_style() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "color_style() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "color_style() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_2_color_style_of_module_django__core__management__color( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_2_color_style_of_module_django__core__management__color( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_2_color_style_of_module_django__core__management__color( self );
    }
    else
    {
        PyObject *result = fparse_function_2_color_style_of_module_django__core__management__color( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_1_dummy_of_function_2_color_style_of_module_django__core__management__color(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_color );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


static PyObject *impl_function_3_no_style_of_module_django__core__management__color( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var_dummy( _python_str_plain_dummy );

    // Actual function code.
    static PyFrameObject *frame_function_3_no_style_of_module_django__core__management__color = NULL;

    if ( isFrameUnusable( frame_function_3_no_style_of_module_django__core__management__color ) )
    {
        if ( frame_function_3_no_style_of_module_django__core__management__color )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_no_style_of_module_django__core__management__color" );
#endif
            Py_DECREF( frame_function_3_no_style_of_module_django__core__management__color );
        }

        frame_function_3_no_style_of_module_django__core__management__color = MAKE_FRAME( _codeobj_a8ddabde38b2a616742bfd9bad42c957, _module_django__core__management__color );
    }

    FrameGuard frame_guard( frame_function_3_no_style_of_module_django__core__management__color );
    try
    {
        assert( Py_REFCNT( frame_function_3_no_style_of_module_django__core__management__color ) == 2 ); // Frame stack
        {
            PyObject *_python_tmp_bases = _python_tuple_empty;
            frame_guard.setLineNumber( 47 );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases, ( _mvar_django__core__management__color___metaclass__.isInitialized( false ) ? _mvar_django__core__management__color___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_dummy, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            _python_var_dummy.assign0( _python_tmp_class.asObject() );
        }
        frame_guard.setLineNumber( 50 );
        return CALL_FUNCTION_NO_ARGS( _python_var_dummy.asObject() );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = _python_var_dummy.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_3_no_style_of_module_django__core__management__color )
        {
           Py_DECREF( frame_function_3_no_style_of_module_django__core__management__color );
           frame_function_3_no_style_of_module_django__core__management__color = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_no_style_of_module_django__core__management__color( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "no_style() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "no_style() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "no_style() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_3_no_style_of_module_django__core__management__color( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_3_no_style_of_module_django__core__management__color( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_3_no_style_of_module_django__core__management__color( self );
    }
    else
    {
        PyObject *result = fparse_function_3_no_style_of_module_django__core__management__color( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___getattr__( _python_str_plain___getattr__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_color );
    _python_var___getattr__.assign1( MAKE_FUNCTION_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color(  ) );
    return _python_var___getattr__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


static PyObject *impl_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_attr )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_attr( _python_str_plain_attr, _python_par_attr );

    // Actual function code.
    return MAKE_FUNCTION_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color(  );
}
static PyObject *fparse_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_attr = NULL;
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
                PyErr_Format( PyExc_TypeError, "__getattr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_attr == key )
            {
                if (unlikely( _python_par_attr ))
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'attr'" );
                    goto error_exit;
                }

                _python_par_attr = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_attr, key ) )
            {
                if (unlikely( _python_par_attr ))
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'attr'" );
                    goto error_exit;
                }

                _python_par_attr = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__getattr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__getattr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_attr != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'attr'" );
             goto error_exit;
         }

        _python_par_attr = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color( self, _python_par_self, _python_par_attr );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_attr );

    return NULL;
}

static PyObject *dparse_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color ) )
    {
        if ( frame_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color );
        }

        frame_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color = MAKE_FRAME( _codeobj_ac2ea26d32183d2113cd46ba3b10b3b0, _module_django__core__management__color );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 49 );
        return _python_var_x.asObject1();
    }
    catch ( PythonException &_exception )
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

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color );
           frame_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color,
        dparse_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color,
        _python_str_plain___getattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_97b93e9f0a56f81adb5ab4d34b6647d5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__color,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_supports_color_of_module_django__core__management__color(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_supports_color_of_module_django__core__management__color,
        dparse_function_1_supports_color_of_module_django__core__management__color,
        _python_str_plain_supports_color,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8d5a5cc75ddcc4fb7c700050b47ac01a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__color,
        _python_str_digest_f7490a84c1026b48399ed04a09723ae0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_color_style_of_module_django__core__management__color(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_color_style_of_module_django__core__management__color,
        dparse_function_2_color_style_of_module_django__core__management__color,
        _python_str_plain_color_style,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_25dd72484b5d482883c7741983c6b4ad,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__color,
        _python_str_digest_698e903faeb5f99c3a80e26504e7d181
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_no_style_of_module_django__core__management__color(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_no_style_of_module_django__core__management__color,
        dparse_function_3_no_style_of_module_django__core__management__color,
        _python_str_plain_no_style,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a8ddabde38b2a616742bfd9bad42c957,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__color,
        _python_str_digest_48014fa893c12c8f757199a885d8508a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color,
        dparse_lambda_1_lambda_of_function_1___getattr___of_class_1_dummy_of_function_3_no_style_of_module_django__core__management__color,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ac2ea26d32183d2113cd46ba3b10b3b0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__management__color,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.management.color",   /* m_name */
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

MOD_INIT_DECL( django__core__management__color )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__management__color );
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

    // puts( "in initdjango__core__management__color" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__management__color = Py_InitModule4(
        "django.core.management.color",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__management__color = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__management__color = (PyDictObject *)((PyModuleObject *)_module_django__core__management__color)->md_dict;

    assertObject( _module_django__core__management__color );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_7788709b924fa7e8af007652f7c24252, _module_django__core__management__color );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__management__color );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__management__color != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__management__color, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_54a703852a18da3476f367b931ac7fb8 );
    UPDATE_STRING_DICT0( _moduledict_django__core__management__color, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_98fccce6056cae57ec128a6f7e23625f );
    PyFrameObject *frame_module_django__core__management__color = MAKE_FRAME( _codeobj_2cf1b72b8b56acd4404985ed55ddb634, _module_django__core__management__color );

    FrameGuard frame_guard( frame_module_django__core__management__color );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__management__color ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__color, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__core__management__color)->md_dict, ((PyModuleObject *)_module_django__core__management__color)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__color, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__core__management__color)->md_dict, ((PyModuleObject *)_module_django__core__management__color)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__core__management__color, (Nuitka_StringObject *)_python_str_plain_termcolors, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__core__management__color)->md_dict, ((PyModuleObject *)_module_django__core__management__color)->md_dict, _python_list_str_plain_termcolors_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_termcolors ) );
    }
    catch ( PythonException &_exception )
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__management__color)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__core__management__color, (Nuitka_StringObject *)_python_str_plain_supports_color, MAKE_FUNCTION_function_1_supports_color_of_module_django__core__management__color(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__management__color, (Nuitka_StringObject *)_python_str_plain_color_style, MAKE_FUNCTION_function_2_color_style_of_module_django__core__management__color(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__management__color, (Nuitka_StringObject *)_python_str_plain_no_style, MAKE_FUNCTION_function_3_no_style_of_module_django__core__management__color(  ) );

   return MOD_RETURN_VALUE( _module_django__core__management__color );
}
