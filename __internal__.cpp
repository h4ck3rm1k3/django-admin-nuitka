// Generated code for Python source for module '__internal__'
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

// The _module___internal__ is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module___internal__;
PyDictObject *_moduledict___internal__;

// The module level variables.


// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_function_2_get_callable_name_desc_of_module___internal__( PyObject *_python_par_called );


// The module function definitions.
NUITKA_CROSS_MODULE PyObject *impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( PyObject *_python_par_called,PyObject *_python_par_star_arg_list,PyObject *_python_par_star_arg_dict )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_called( _python_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_list( _python_str_plain_star_arg_list, _python_par_star_arg_list );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_dict( _python_str_plain_star_arg_dict, _python_par_star_arg_dict );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_dict.asObject(), LOOKUP_BUILTIN( _python_str_plain_dict ) ) )) )
    {
        {
            PyObjectTemporary _python_tmp_keys( INCREASE_REFCOUNT( Py_None ) );
            try
            {
                _python_tmp_keys.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_star_arg_dict.asObject(), _python_str_plain_keys ) ).asObject() ) );
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
                ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
                _exception.toExceptionHandler();

                if ( _exception.matches( PyExc_AttributeError ) )
                {
                    frame_guard.detachFrame();
                    {
                        PyObjectTempKeeper1 make_tuple1;
                        {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_6f69449e3cbe19d8aaa066664eccb812, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_dict.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
            PyObjectTemporary _python_tmp_iter( MAKE_ITERATOR( _python_tmp_keys.asObject() ) );
            PyObjectTemporary _python_tmp_dict( PyDict_New() );
            while( true )
            {
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_iter.asObject() );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_key( _tmp_unpack_1 );
                {
                    PyObjectTempKeeper0 subscr3;
                    {
                        PyObjectTemporary tmp_identifier( ( subscr3.assign( _python_var_star_arg_dict.asObject() ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_tmp_key.asObject() ) ) );
                        PyObject *tmp_subscribed = _python_tmp_dict.asObject();
                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_key.asObject() );
                }
                }

               CONSIDER_THREADING();
            }
            _python_var_star_arg_dict.assign0( _python_tmp_dict.asObject() );
        }
    }
    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_list.asObject(), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) )) )
    {
        try
        {
            _python_var_star_arg_list.assign1( TO_TUPLE( _python_var_star_arg_list.asObject() ) );
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
            ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
            _exception.toExceptionHandler();

            if ( _exception.matches( PyExc_TypeError ) )
            {
                frame_guard.detachFrame();
                {
                    PyObjectTempKeeper1 make_tuple5;
                    {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_b89edf3f5c8fe728a878687e23fe995c, PyObjectTemporary( ( make_tuple5.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_list.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
    }
    {
        PyObjectTempKeeper0 call7;
        PyObjectTempKeeper0 call8;
        return ( call7.assign( _python_var_called.asObject() ), call8.assign( _python_var_star_arg_list.asObject() ), CALL_FUNCTION( call7.asObject0(), call8.asObject0(), _python_var_star_arg_dict.asObject() ) );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_function_2_get_callable_name_desc_of_module___internal__( PyObject *_python_par_called )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_called( _python_str_plain_called, _python_par_called );

    // Actual function code.
    {
        if ( BUILTIN_ISINSTANCE_BOOL( _python_var_called.asObject(), PyObjectTemporary( MAKE_TUPLE3( (PyObject *)&PyFunction_Type, (PyObject *)&PyCFunction_Type, (PyObject *)&PyMethod_Type ) ).asObject() ) )
        {
            return BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_called.asObject(), _python_str_plain___name__ ) ).asObject(), _python_str_digest_bcd8b0c2eb1fce714eab6cef0d771acc );
        }
        else
        {
            if ( BUILTIN_ISINSTANCE_BOOL( _python_var_called.asObject(), (PyObject *)&PyClass_Type ) )
            {
                return BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_called.asObject(), _python_str_plain___name__ ) ).asObject(), _python_str_digest_3451707491a177b52280801d2b61e76a );
            }
            else
            {
                if ( BUILTIN_ISINSTANCE_BOOL( _python_var_called.asObject(), (PyObject *)&PyInstance_Type ) )
                {
                    return BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_called.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ).asObject(), _python_str_digest_04d542fe40e298e5929a23f3bb806b3d );
                }
                else
                {
                    return BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_called.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject(), _python_str_digest_268060527bc6c0022bb231d71f93eb88 );
                }
            }
        }
    }
}


NUITKA_CROSS_MODULE PyObject *impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( PyObject *_python_par_called,PyObject *_python_par_args,PyObject *_python_par_star_arg_dict )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_called( _python_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_dict( _python_str_plain_star_arg_dict, _python_par_star_arg_dict );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_dict.asObject(), LOOKUP_BUILTIN( _python_str_plain_dict ) ) )) )
    {
        {
            PyObjectTemporary _python_tmp_keys( INCREASE_REFCOUNT( Py_None ) );
            try
            {
                _python_tmp_keys.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_star_arg_dict.asObject(), _python_str_plain_keys ) ).asObject() ) );
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
                ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
                _exception.toExceptionHandler();

                if ( _exception.matches( PyExc_AttributeError ) )
                {
                    frame_guard.detachFrame();
                    {
                        PyObjectTempKeeper1 make_tuple1;
                        {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_6f69449e3cbe19d8aaa066664eccb812, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_dict.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
            PyObjectTemporary _python_tmp_iter( MAKE_ITERATOR( _python_tmp_keys.asObject() ) );
            PyObjectTemporary _python_tmp_dict( PyDict_New() );
            while( true )
            {
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_iter.asObject() );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_key( _tmp_unpack_1 );
                {
                    PyObjectTempKeeper0 subscr3;
                    {
                        PyObjectTemporary tmp_identifier( ( subscr3.assign( _python_var_star_arg_dict.asObject() ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_tmp_key.asObject() ) ) );
                        PyObject *tmp_subscribed = _python_tmp_dict.asObject();
                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_key.asObject() );
                }
                }

               CONSIDER_THREADING();
            }
            _python_var_star_arg_dict.assign0( _python_tmp_dict.asObject() );
        }
    }
    {
        PyObjectTempKeeper0 call5;
        PyObjectTempKeeper0 call6;
        return ( call5.assign( _python_var_called.asObject() ), call6.assign( _python_var_args.asObject() ), CALL_FUNCTION( call5.asObject0(), call6.asObject0(), _python_var_star_arg_dict.asObject() ) );
    }
}


NUITKA_CROSS_MODULE PyObject *impl_function_4_complex_call_helper_star_dict_of_module___internal__( PyObject *_python_par_called,PyObject *_python_par_star_arg_dict )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_called( _python_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_dict( _python_str_plain_star_arg_dict, _python_par_star_arg_dict );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_dict.asObject(), LOOKUP_BUILTIN( _python_str_plain_dict ) ) )) )
    {
        {
            PyObjectTemporary _python_tmp_keys( INCREASE_REFCOUNT( Py_None ) );
            try
            {
                _python_tmp_keys.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_star_arg_dict.asObject(), _python_str_plain_keys ) ).asObject() ) );
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
                ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
                _exception.toExceptionHandler();

                if ( _exception.matches( PyExc_AttributeError ) )
                {
                    frame_guard.detachFrame();
                    {
                        PyObjectTempKeeper1 make_tuple1;
                        {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_6f69449e3cbe19d8aaa066664eccb812, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_dict.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
            PyObjectTemporary _python_tmp_iter( MAKE_ITERATOR( _python_tmp_keys.asObject() ) );
            PyObjectTemporary _python_tmp_dict( PyDict_New() );
            while( true )
            {
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_iter.asObject() );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_key( _tmp_unpack_1 );
                {
                    PyObjectTempKeeper0 subscr3;
                    {
                        PyObjectTemporary tmp_identifier( ( subscr3.assign( _python_var_star_arg_dict.asObject() ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_tmp_key.asObject() ) ) );
                        PyObject *tmp_subscribed = _python_tmp_dict.asObject();
                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_key.asObject() );
                }
                }

               CONSIDER_THREADING();
            }
            _python_var_star_arg_dict.assign0( _python_tmp_dict.asObject() );
        }
    }
    {
        PyObjectTempKeeper0 call5;
        return ( call5.assign( _python_var_called.asObject() ), CALL_FUNCTION( call5.asObject0(), _python_tuple_empty, _python_var_star_arg_dict.asObject() ) );
    }
}


NUITKA_CROSS_MODULE PyObject *impl_function_5_complex_call_helper_pos_star_list_of_module___internal__( PyObject *_python_par_called,PyObject *_python_par_args,PyObject *_python_par_star_arg_list )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_called( _python_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_list( _python_str_plain_star_arg_list, _python_par_star_arg_list );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_list.asObject(), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) )) )
    {
        try
        {
            _python_var_star_arg_list.assign1( TO_TUPLE( _python_var_star_arg_list.asObject() ) );
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
            ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
            _exception.toExceptionHandler();

            if ( _exception.matches( PyExc_TypeError ) )
            {
                frame_guard.detachFrame();
                {
                    PyObjectTempKeeper1 make_tuple1;
                    {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_b89edf3f5c8fe728a878687e23fe995c, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_list.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
    }
    {
        PyObjectTempKeeper0 call5;
        PyObjectTempKeeper0 op3;
        return ( call5.assign( _python_var_called.asObject() ), CALL_FUNCTION_WITH_POSARGS( call5.asObject0(), PyObjectTemporary( ( op3.assign( _python_var_args.asObject() ), BINARY_OPERATION_ADD( op3.asObject0(), _python_var_star_arg_list.asObject() ) ) ).asObject() ) );
    }
}


NUITKA_CROSS_MODULE PyObject *impl_function_6_complex_call_helper_keywords_star_dict_of_module___internal__( PyObject *_python_par_called,PyObject *_python_par_kw,PyObject *_python_par_star_arg_dict )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_called( _python_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel _python_var_kw( _python_str_plain_kw, _python_par_kw );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_dict( _python_str_plain_star_arg_dict, _python_par_star_arg_dict );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_dict.asObject(), LOOKUP_BUILTIN( _python_str_plain_dict ) ) )) )
    {
        {
            PyObjectTemporary _python_tmp_keys( INCREASE_REFCOUNT( Py_None ) );
            try
            {
                _python_tmp_keys.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_star_arg_dict.asObject(), _python_str_plain_keys ) ).asObject() ) );
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
                ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
                _exception.toExceptionHandler();

                if ( _exception.matches( PyExc_AttributeError ) )
                {
                    frame_guard.detachFrame();
                    {
                        PyObjectTempKeeper1 make_tuple1;
                        {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_6f69449e3cbe19d8aaa066664eccb812, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_dict.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
            PyObjectTemporary _python_tmp_iter( MAKE_ITERATOR( _python_tmp_keys.asObject() ) );
            PyObjectTemporary _python_tmp_dict( PyDict_New() );
            while( true )
            {
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_iter.asObject() );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_key( _tmp_unpack_1 );
                {
                    PyObjectTempKeeper0 cmp5;
                    if ( ( cmp5.assign( _python_tmp_key.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp5.asObject0(), _python_var_kw.asObject() ) ) )
                {
                    {
                        PyObjectTempKeeper1 make_tuple3;
                        {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_5ef2562a9289f9d0e89cce8f5453574f, PyObjectTemporary( ( make_tuple3.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple3.asObject0(), _python_tmp_key.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                    }
                    }
                }
                }
                {
                    PyObjectTempKeeper0 subscr7;
                    {
                        PyObjectTemporary tmp_identifier( ( subscr7.assign( _python_var_star_arg_dict.asObject() ), LOOKUP_SUBSCRIPT( subscr7.asObject0(), _python_tmp_key.asObject() ) ) );
                        PyObject *tmp_subscribed = _python_var_kw.asObject();
                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_key.asObject() );
                }
                }

               CONSIDER_THREADING();
            }
        }
    }
    else
    {
        if ( CHECK_IF_TRUE( _python_var_star_arg_dict.asObject() ) )
        {
            {
                _python_var_kw.assign1( TO_DICT( _python_var_kw.asObject(), NULL ) );
                PyObjectTemporary _python_tmp_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_star_arg_dict.asObject(), _python_str_plain_iteritems ) ).asObject() ) ).asObject() ) );
                while( true )
                {
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_iter.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_item( _tmp_unpack_2 );
                    PyObjectTemporary _python_tmp_key( LOOKUP_SUBSCRIPT_CONST( _python_tmp_item.asObject(), _python_int_0, 0 ) );
                    {
                        PyObjectTempKeeper0 cmp11;
                        if ( ( cmp11.assign( _python_tmp_key.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp11.asObject0(), _python_var_kw.asObject() ) ) )
                    {
                        {
                            PyObjectTempKeeper1 make_tuple9;
                            {
                                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_5ef2562a9289f9d0e89cce8f5453574f, PyObjectTemporary( ( make_tuple9.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple9.asObject0(), _python_tmp_key.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                        }
                        }
                    }
                    }
                    {
                            PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( _python_tmp_item.asObject(), _python_int_pos_1, 1 ) );
                            PyObject *tmp_subscribed = _python_var_kw.asObject();
                            SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_key.asObject() );
                    }

                   CONSIDER_THREADING();
                }
            }
        }
    }
    {
        PyObjectTempKeeper0 call13;
        return ( call13.assign( _python_var_called.asObject() ), CALL_FUNCTION( call13.asObject0(), _python_tuple_empty, _python_var_kw.asObject() ) );
    }
}


NUITKA_CROSS_MODULE PyObject *impl_function_7_complex_call_helper_star_list_of_module___internal__( PyObject *_python_par_called,PyObject *_python_par_star_arg_list )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_called( _python_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_list( _python_str_plain_star_arg_list, _python_par_star_arg_list );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_list.asObject(), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) )) )
    {
        try
        {
            _python_var_star_arg_list.assign1( TO_TUPLE( _python_var_star_arg_list.asObject() ) );
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
            ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
            _exception.toExceptionHandler();

            if ( _exception.matches( PyExc_TypeError ) )
            {
                frame_guard.detachFrame();
                {
                    PyObjectTempKeeper1 make_tuple1;
                    {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_b89edf3f5c8fe728a878687e23fe995c, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_list.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
    }
    {
        PyObjectTempKeeper0 call3;
        return ( call3.assign( _python_var_called.asObject() ), CALL_FUNCTION_WITH_POSARGS( call3.asObject0(), _python_var_star_arg_list.asObject() ) );
    }
}


NUITKA_CROSS_MODULE PyObject *impl_function_8_complex_call_helper_pos_star_list_star_dict_of_module___internal__( PyObject *_python_par_called,PyObject *_python_par_args,PyObject *_python_par_star_arg_list,PyObject *_python_par_star_arg_dict )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_called( _python_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_list( _python_str_plain_star_arg_list, _python_par_star_arg_list );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_dict( _python_str_plain_star_arg_dict, _python_par_star_arg_dict );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_dict.asObject(), LOOKUP_BUILTIN( _python_str_plain_dict ) ) )) )
    {
        {
            PyObjectTemporary _python_tmp_keys( INCREASE_REFCOUNT( Py_None ) );
            try
            {
                _python_tmp_keys.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_star_arg_dict.asObject(), _python_str_plain_keys ) ).asObject() ) );
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
                ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
                _exception.toExceptionHandler();

                if ( _exception.matches( PyExc_AttributeError ) )
                {
                    frame_guard.detachFrame();
                    {
                        PyObjectTempKeeper1 make_tuple1;
                        {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_6f69449e3cbe19d8aaa066664eccb812, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_dict.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
            PyObjectTemporary _python_tmp_iter( MAKE_ITERATOR( _python_tmp_keys.asObject() ) );
            PyObjectTemporary _python_tmp_dict( PyDict_New() );
            while( true )
            {
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_iter.asObject() );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_key( _tmp_unpack_1 );
                {
                    PyObjectTempKeeper0 subscr3;
                    {
                        PyObjectTemporary tmp_identifier( ( subscr3.assign( _python_var_star_arg_dict.asObject() ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_tmp_key.asObject() ) ) );
                        PyObject *tmp_subscribed = _python_tmp_dict.asObject();
                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_key.asObject() );
                }
                }

               CONSIDER_THREADING();
            }
            _python_var_star_arg_dict.assign0( _python_tmp_dict.asObject() );
        }
    }
    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_list.asObject(), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) )) )
    {
        try
        {
            _python_var_star_arg_list.assign1( TO_TUPLE( _python_var_star_arg_list.asObject() ) );
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
            ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
            _exception.toExceptionHandler();

            if ( _exception.matches( PyExc_TypeError ) )
            {
                frame_guard.detachFrame();
                {
                    PyObjectTempKeeper1 make_tuple5;
                    {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_b89edf3f5c8fe728a878687e23fe995c, PyObjectTemporary( ( make_tuple5.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_list.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
    }
    {
        PyObjectTempKeeper1 call10;
        PyObjectTempKeeper0 call9;
        PyObjectTempKeeper0 op7;
        return ( call9.assign( _python_var_called.asObject() ), call10.assign( ( op7.assign( _python_var_args.asObject() ), BINARY_OPERATION_ADD( op7.asObject0(), _python_var_star_arg_list.asObject() ) ) ), CALL_FUNCTION( call9.asObject0(), call10.asObject0(), _python_var_star_arg_dict.asObject() ) );
    }
}


NUITKA_CROSS_MODULE PyObject *impl_function_9_complex_call_helper_pos_keywords_star_list_of_module___internal__( PyObject *_python_par_called,PyObject *_python_par_args,PyObject *_python_par_kw,PyObject *_python_par_star_arg_list )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_called( _python_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kw( _python_str_plain_kw, _python_par_kw );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_list( _python_str_plain_star_arg_list, _python_par_star_arg_list );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_list.asObject(), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) )) )
    {
        try
        {
            _python_var_star_arg_list.assign1( TO_TUPLE( _python_var_star_arg_list.asObject() ) );
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
            ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
            _exception.toExceptionHandler();

            if ( _exception.matches( PyExc_TypeError ) )
            {
                frame_guard.detachFrame();
                {
                    PyObjectTempKeeper1 make_tuple1;
                    {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_b89edf3f5c8fe728a878687e23fe995c, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_list.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
    }
    {
        PyObjectTempKeeper0 call5;
        PyObjectTempKeeper1 call6;
        PyObjectTempKeeper0 op3;
        return ( call5.assign( _python_var_called.asObject() ), call6.assign( ( op3.assign( _python_var_args.asObject() ), BINARY_OPERATION_ADD( op3.asObject0(), _python_var_star_arg_list.asObject() ) ) ), CALL_FUNCTION( call5.asObject0(), call6.asObject0(), _python_var_kw.asObject() ) );
    }
}


NUITKA_CROSS_MODULE PyObject *impl_function_10_complex_call_helper_keywords_star_list_star_dict_of_module___internal__( PyObject *_python_par_called,PyObject *_python_par_kw,PyObject *_python_par_star_arg_list,PyObject *_python_par_star_arg_dict )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_called( _python_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel _python_var_kw( _python_str_plain_kw, _python_par_kw );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_list( _python_str_plain_star_arg_list, _python_par_star_arg_list );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_dict( _python_str_plain_star_arg_dict, _python_par_star_arg_dict );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_dict.asObject(), LOOKUP_BUILTIN( _python_str_plain_dict ) ) )) )
    {
        {
            PyObjectTemporary _python_tmp_keys( INCREASE_REFCOUNT( Py_None ) );
            try
            {
                _python_tmp_keys.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_star_arg_dict.asObject(), _python_str_plain_keys ) ).asObject() ) );
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
                ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
                _exception.toExceptionHandler();

                if ( _exception.matches( PyExc_AttributeError ) )
                {
                    frame_guard.detachFrame();
                    {
                        PyObjectTempKeeper1 make_tuple1;
                        {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_6f69449e3cbe19d8aaa066664eccb812, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_dict.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
            PyObjectTemporary _python_tmp_iter( MAKE_ITERATOR( _python_tmp_keys.asObject() ) );
            PyObjectTemporary _python_tmp_dict( PyDict_New() );
            while( true )
            {
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_iter.asObject() );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_key( _tmp_unpack_1 );
                {
                    PyObjectTempKeeper0 cmp5;
                    if ( ( cmp5.assign( _python_tmp_key.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp5.asObject0(), _python_var_kw.asObject() ) ) )
                {
                    {
                        PyObjectTempKeeper1 make_tuple3;
                        {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_5ef2562a9289f9d0e89cce8f5453574f, PyObjectTemporary( ( make_tuple3.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple3.asObject0(), _python_tmp_key.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                    }
                    }
                }
                }
                {
                    PyObjectTempKeeper0 subscr7;
                    {
                        PyObjectTemporary tmp_identifier( ( subscr7.assign( _python_var_star_arg_dict.asObject() ), LOOKUP_SUBSCRIPT( subscr7.asObject0(), _python_tmp_key.asObject() ) ) );
                        PyObject *tmp_subscribed = _python_var_kw.asObject();
                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_key.asObject() );
                }
                }

               CONSIDER_THREADING();
            }
        }
    }
    else
    {
        if ( CHECK_IF_TRUE( _python_var_star_arg_dict.asObject() ) )
        {
            {
                _python_var_kw.assign1( TO_DICT( _python_var_kw.asObject(), NULL ) );
                PyObjectTemporary _python_tmp_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_star_arg_dict.asObject(), _python_str_plain_iteritems ) ).asObject() ) ).asObject() ) );
                while( true )
                {
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_iter.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_item( _tmp_unpack_2 );
                    PyObjectTemporary _python_tmp_key( LOOKUP_SUBSCRIPT_CONST( _python_tmp_item.asObject(), _python_int_0, 0 ) );
                    {
                        PyObjectTempKeeper0 cmp11;
                        if ( ( cmp11.assign( _python_tmp_key.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp11.asObject0(), _python_var_kw.asObject() ) ) )
                    {
                        {
                            PyObjectTempKeeper1 make_tuple9;
                            {
                                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_5ef2562a9289f9d0e89cce8f5453574f, PyObjectTemporary( ( make_tuple9.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple9.asObject0(), _python_tmp_key.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                        }
                        }
                    }
                    }
                    {
                            PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( _python_tmp_item.asObject(), _python_int_pos_1, 1 ) );
                            PyObject *tmp_subscribed = _python_var_kw.asObject();
                            SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_key.asObject() );
                    }

                   CONSIDER_THREADING();
                }
            }
        }
    }
    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_list.asObject(), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) )) )
    {
        try
        {
            _python_var_star_arg_list.assign1( TO_TUPLE( _python_var_star_arg_list.asObject() ) );
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
            ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
            _exception.toExceptionHandler();

            if ( _exception.matches( PyExc_TypeError ) )
            {
                frame_guard.detachFrame();
                {
                    PyObjectTempKeeper1 make_tuple13;
                    {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_b89edf3f5c8fe728a878687e23fe995c, PyObjectTemporary( ( make_tuple13.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple13.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_list.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
    }
    {
        PyObjectTempKeeper0 call15;
        PyObjectTempKeeper0 call16;
        return ( call15.assign( _python_var_called.asObject() ), call16.assign( _python_var_star_arg_list.asObject() ), CALL_FUNCTION( call15.asObject0(), call16.asObject0(), _python_var_kw.asObject() ) );
    }
}


NUITKA_CROSS_MODULE PyObject *impl_function_11_complex_call_helper_pos_keywords_star_dict_of_module___internal__( PyObject *_python_par_called,PyObject *_python_par_args,PyObject *_python_par_kw,PyObject *_python_par_star_arg_dict )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_called( _python_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kw( _python_str_plain_kw, _python_par_kw );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_dict( _python_str_plain_star_arg_dict, _python_par_star_arg_dict );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_dict.asObject(), LOOKUP_BUILTIN( _python_str_plain_dict ) ) )) )
    {
        {
            PyObjectTemporary _python_tmp_keys( INCREASE_REFCOUNT( Py_None ) );
            try
            {
                _python_tmp_keys.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_star_arg_dict.asObject(), _python_str_plain_keys ) ).asObject() ) );
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
                ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
                _exception.toExceptionHandler();

                if ( _exception.matches( PyExc_AttributeError ) )
                {
                    frame_guard.detachFrame();
                    {
                        PyObjectTempKeeper1 make_tuple1;
                        {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_6f69449e3cbe19d8aaa066664eccb812, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_dict.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
            PyObjectTemporary _python_tmp_iter( MAKE_ITERATOR( _python_tmp_keys.asObject() ) );
            PyObjectTemporary _python_tmp_dict( PyDict_New() );
            while( true )
            {
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_iter.asObject() );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_key( _tmp_unpack_1 );
                {
                    PyObjectTempKeeper0 cmp5;
                    if ( ( cmp5.assign( _python_tmp_key.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp5.asObject0(), _python_var_kw.asObject() ) ) )
                {
                    {
                        PyObjectTempKeeper1 make_tuple3;
                        {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_5ef2562a9289f9d0e89cce8f5453574f, PyObjectTemporary( ( make_tuple3.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple3.asObject0(), _python_tmp_key.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                    }
                    }
                }
                }
                {
                    PyObjectTempKeeper0 subscr7;
                    {
                        PyObjectTemporary tmp_identifier( ( subscr7.assign( _python_var_star_arg_dict.asObject() ), LOOKUP_SUBSCRIPT( subscr7.asObject0(), _python_tmp_key.asObject() ) ) );
                        PyObject *tmp_subscribed = _python_var_kw.asObject();
                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_key.asObject() );
                }
                }

               CONSIDER_THREADING();
            }
        }
    }
    else
    {
        if ( CHECK_IF_TRUE( _python_var_star_arg_dict.asObject() ) )
        {
            {
                _python_var_kw.assign1( TO_DICT( _python_var_kw.asObject(), NULL ) );
                PyObjectTemporary _python_tmp_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_star_arg_dict.asObject(), _python_str_plain_iteritems ) ).asObject() ) ).asObject() ) );
                while( true )
                {
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_iter.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_item( _tmp_unpack_2 );
                    PyObjectTemporary _python_tmp_key( LOOKUP_SUBSCRIPT_CONST( _python_tmp_item.asObject(), _python_int_0, 0 ) );
                    {
                        PyObjectTempKeeper0 cmp11;
                        if ( ( cmp11.assign( _python_tmp_key.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp11.asObject0(), _python_var_kw.asObject() ) ) )
                    {
                        {
                            PyObjectTempKeeper1 make_tuple9;
                            {
                                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_5ef2562a9289f9d0e89cce8f5453574f, PyObjectTemporary( ( make_tuple9.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple9.asObject0(), _python_tmp_key.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                        }
                        }
                    }
                    }
                    {
                            PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( _python_tmp_item.asObject(), _python_int_pos_1, 1 ) );
                            PyObject *tmp_subscribed = _python_var_kw.asObject();
                            SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_tmp_key.asObject() );
                    }

                   CONSIDER_THREADING();
                }
            }
        }
    }
    {
        PyObjectTempKeeper0 call13;
        PyObjectTempKeeper0 call14;
        return ( call13.assign( _python_var_called.asObject() ), call14.assign( _python_var_args.asObject() ), CALL_FUNCTION( call13.asObject0(), call14.asObject0(), _python_var_kw.asObject() ) );
    }
}


NUITKA_CROSS_MODULE PyObject *impl_function_12_complex_call_helper_keywords_star_list_of_module___internal__( PyObject *_python_par_called,PyObject *_python_par_kw,PyObject *_python_par_star_arg_list )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_called( _python_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel _python_var_kw( _python_str_plain_kw, _python_par_kw );
    PyObjectLocalParameterVariableNoDel _python_var_star_arg_list( _python_str_plain_star_arg_list, _python_par_star_arg_list );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_star_arg_list.asObject(), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) )) )
    {
        try
        {
            _python_var_star_arg_list.assign1( TO_TUPLE( _python_var_star_arg_list.asObject() ) );
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
            ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
            _exception.toExceptionHandler();

            if ( _exception.matches( PyExc_TypeError ) )
            {
                frame_guard.detachFrame();
                {
                    PyObjectTempKeeper1 make_tuple1;
                    {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_b89edf3f5c8fe728a878687e23fe995c, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( _python_var_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( _python_var_star_arg_list.asObject() ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
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
    }
    {
        PyObjectTempKeeper0 call3;
        PyObjectTempKeeper0 call4;
        return ( call3.assign( _python_var_called.asObject() ), call4.assign( _python_var_star_arg_list.asObject() ), CALL_FUNCTION( call3.asObject0(), call4.asObject0(), _python_var_kw.asObject() ) );
    }
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "__internal__",   /* m_name */
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

MOD_INIT_DECL( __internal__ )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module___internal__ );
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

    // puts( "in init__internal__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module___internal__ = Py_InitModule4(
        "__internal__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module___internal__ = PyModule_Create( &_moduledef );
#endif

    _moduledict___internal__ = (PyDictObject *)((PyModuleObject *)_module___internal__)->md_dict;

    assertObject( _module___internal__ );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_plain___internal__, _module___internal__ );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module___internal__ );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module___internal__ != _module___main__ )
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


   return MOD_RETURN_VALUE( _module___internal__ );
}
