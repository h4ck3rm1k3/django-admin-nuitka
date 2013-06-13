// Generated code for Python source for module 'django.utils.dateparse'
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

// The _module_django__utils__dateparse is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__dateparse;
PyDictObject *_moduledict_django__utils__dateparse;

// The module level variables.
static PyObjectGlobalVariable_django__utils__dateparse _mvar_django__utils__dateparse_FixedOffset( &_module_django__utils__dateparse, &_python_str_plain_FixedOffset );
static PyObjectGlobalVariable_django__utils__dateparse _mvar_django__utils__dateparse_date_re( &_module_django__utils__dateparse, &_python_str_plain_date_re );
static PyObjectGlobalVariable_django__utils__dateparse _mvar_django__utils__dateparse_datetime( &_module_django__utils__dateparse, &_python_str_plain_datetime );
static PyObjectGlobalVariable_django__utils__dateparse _mvar_django__utils__dateparse_datetime_re( &_module_django__utils__dateparse, &_python_str_plain_datetime_re );
static PyObjectGlobalVariable_django__utils__dateparse _mvar_django__utils__dateparse_re( &_module_django__utils__dateparse, &_python_str_plain_re );
static PyObjectGlobalVariable_django__utils__dateparse _mvar_django__utils__dateparse_six( &_module_django__utils__dateparse, &_python_str_plain_six );
static PyObjectGlobalVariable_django__utils__dateparse _mvar_django__utils__dateparse_time_re( &_module_django__utils__dateparse, &_python_str_plain_time_re );
static PyObjectGlobalVariable_django__utils__dateparse _mvar_django__utils__dateparse_utc( &_module_django__utils__dateparse, &_python_str_plain_utc );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse( PyObject *_python_par___iterator );


static PyObject *MAKE_FUNCTION_function_1_parse_date_of_module_django__utils__dateparse(  );


static PyObject *MAKE_FUNCTION_function_2_parse_time_of_module_django__utils__dateparse(  );


static PyObject *MAKE_FUNCTION_function_3_parse_datetime_of_module_django__utils__dateparse(  );


// The module function definitions.
static PyObject *impl_function_1_parse_date_of_module_django__utils__dateparse( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalVariable _python_var_match( _python_str_plain_match );
    PyObjectLocalVariable _python_var_kw( _python_str_plain_kw );

    // Actual function code.
    static PyFrameObject *frame_function_1_parse_date_of_module_django__utils__dateparse = NULL;

    if ( isFrameUnusable( frame_function_1_parse_date_of_module_django__utils__dateparse ) )
    {
        if ( frame_function_1_parse_date_of_module_django__utils__dateparse )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_parse_date_of_module_django__utils__dateparse" );
#endif
            Py_DECREF( frame_function_1_parse_date_of_module_django__utils__dateparse );
        }

        frame_function_1_parse_date_of_module_django__utils__dateparse = MAKE_FRAME( _codeobj_187451cf936e5c49d90584387dd435d3, _module_django__utils__dateparse );
    }

    FrameGuard frame_guard( frame_function_1_parse_date_of_module_django__utils__dateparse );
    try
    {
        assert( Py_REFCNT( frame_function_1_parse_date_of_module_django__utils__dateparse ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 36 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_match.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateparse_date_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) );
        }
        frame_guard.setLineNumber( 37 );
        if ( CHECK_IF_TRUE( _python_var_match.asObject() ) )
        {
            frame_guard.setLineNumber( 38 );
            {
                PyObjectTempKeeper1 call3;
                _python_var_kw.assign1( TO_DICT( PyObjectTemporary( impl_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse( MAKE_ITERATOR( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateparse_six.asObject0(), _python_str_plain_iteritems ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_groupdict ) ).asObject() ) ).asObject() ) ) ).asObject() ) ) ).asObject(), NULL ) );
            }
            frame_guard.setLineNumber( 39 );
            {
                PyObjectTempKeeper1 call_tmp5;
                return ( call_tmp5.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateparse_datetime.asObject0(), _python_str_plain_date ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp5.asObject(), _python_var_kw.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_kw.updateLocalsDict( _python_var_match.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_parse_date_of_module_django__utils__dateparse )
        {
           Py_DECREF( frame_function_1_parse_date_of_module_django__utils__dateparse );
           frame_function_1_parse_date_of_module_django__utils__dateparse = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_parse_date_of_module_django__utils__dateparse( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "parse_date() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "parse_date() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_date() got multiple values for keyword argument 'value'" );
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
                   "parse_date() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "parse_date() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "parse_date() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "parse_date() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "parse_date() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_date() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_date() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_date() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_date() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "parse_date() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "parse_date() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "parse_date() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "parse_date() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_date() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_parse_date_of_module_django__utils__dateparse( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_1_parse_date_of_module_django__utils__dateparse( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_parse_date_of_module_django__utils__dateparse( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_parse_date_of_module_django__utils__dateparse( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_k;
    PyObjectLocalVariable python_var_v;
};

static void _context_generator_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse_t *_python_context = (struct _context_generator_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse_t *_python_context = (_context_generator_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_k.setVariableName( _python_str_plain_k );
        _python_context->python_var_v.setVariableName( _python_str_plain_v );

        // Actual function code.
        static PyFrameObject *frame_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse ) )
        {
            if ( frame_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse" );
#endif
                Py_DECREF( frame_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse );
            }

            frame_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse = MAKE_FRAME( _codeobj_dc75b266f64e01c65df82d2133f3e164, _module_django__utils__dateparse );
        }

        Py_INCREF( frame_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse );
        generator->m_frame = frame_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse;

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
                    frame_guard.setLineNumber( 38 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 38 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        {
                            frame_guard.setLineNumber( 38 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_context->python_var_k.assign0( _python_tmp_element_1.asObject() );
                            _python_context->python_var_v.assign0( _python_tmp_element_2.asObject() );
                        }
                        {
                            PyObjectTempKeeper0 make_tuple1;
                            YIELD_VALUE( generator, ( make_tuple1.assign( _python_context->python_var_k.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( TO_INT( _python_context->python_var_v.asObject() ) ).asObject() ) ) );
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

static PyObject *impl_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse_t *_python_context = new _context_generator_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse_context,
            _python_str_angle_genexpr,
            _codeobj_a37929a33cd4519a60feee93837b928e,
            _python_context,
            _context_generator_genexpr_1_of_function_1_parse_date_of_module_django__utils__dateparse_destructor
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


static PyObject *impl_function_2_parse_time_of_module_django__utils__dateparse( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalVariable _python_var_match( _python_str_plain_match );
    PyObjectLocalVariable _python_var_kw( _python_str_plain_kw );

    // Actual function code.
    static PyFrameObject *frame_function_2_parse_time_of_module_django__utils__dateparse = NULL;

    if ( isFrameUnusable( frame_function_2_parse_time_of_module_django__utils__dateparse ) )
    {
        if ( frame_function_2_parse_time_of_module_django__utils__dateparse )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_parse_time_of_module_django__utils__dateparse" );
#endif
            Py_DECREF( frame_function_2_parse_time_of_module_django__utils__dateparse );
        }

        frame_function_2_parse_time_of_module_django__utils__dateparse = MAKE_FRAME( _codeobj_22f0d6c1db1e9a483e6a181f3b266db5, _module_django__utils__dateparse );
    }

    FrameGuard frame_guard( frame_function_2_parse_time_of_module_django__utils__dateparse );
    try
    {
        assert( Py_REFCNT( frame_function_2_parse_time_of_module_django__utils__dateparse ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 50 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_match.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateparse_time_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) );
        }
        frame_guard.setLineNumber( 51 );
        if ( CHECK_IF_TRUE( _python_var_match.asObject() ) )
        {
            frame_guard.setLineNumber( 52 );
            _python_var_kw.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_groupdict ) ).asObject() ) );
            frame_guard.setLineNumber( 53 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_kw.asObject(), _python_str_plain_microsecond ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 54 );
                {
                        PyObjectTemporary tmp_identifier( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_kw.asObject(), _python_str_plain_microsecond ) ).asObject(), _python_str_plain_ljust ) ).asObject(), _python_int_pos_6, _python_str_plain_0 ) );
                        SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_kw.asObject(), _python_str_plain_microsecond );
                }
            }
            frame_guard.setLineNumber( 55 );
            {
                PyObjectTempKeeper1 call3;
                _python_var_kw.assign1( TO_DICT( PyObjectTemporary( impl_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse( MAKE_ITERATOR( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateparse_six.asObject0(), _python_str_plain_iteritems ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_kw.asObject() ) ) ).asObject() ) ) ).asObject(), NULL ) );
            }
            frame_guard.setLineNumber( 56 );
            {
                PyObjectTempKeeper1 call_tmp5;
                return ( call_tmp5.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateparse_datetime.asObject0(), _python_str_plain_time ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp5.asObject(), _python_var_kw.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_kw.updateLocalsDict( _python_var_match.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_parse_time_of_module_django__utils__dateparse )
        {
           Py_DECREF( frame_function_2_parse_time_of_module_django__utils__dateparse );
           frame_function_2_parse_time_of_module_django__utils__dateparse = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_parse_time_of_module_django__utils__dateparse( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "parse_time() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "parse_time() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_time() got multiple values for keyword argument 'value'" );
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
                   "parse_time() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "parse_time() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "parse_time() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "parse_time() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "parse_time() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_time() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_time() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_time() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_time() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "parse_time() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "parse_time() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "parse_time() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "parse_time() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_time() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_parse_time_of_module_django__utils__dateparse( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_2_parse_time_of_module_django__utils__dateparse( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_parse_time_of_module_django__utils__dateparse( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_parse_time_of_module_django__utils__dateparse( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_k;
    PyObjectLocalVariable python_var_v;
};

static void _context_generator_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse_t *_python_context = (struct _context_generator_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse_t *_python_context = (_context_generator_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_k.setVariableName( _python_str_plain_k );
        _python_context->python_var_v.setVariableName( _python_str_plain_v );

        // Actual function code.
        static PyFrameObject *frame_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse ) )
        {
            if ( frame_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse" );
#endif
                Py_DECREF( frame_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse );
            }

            frame_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse = MAKE_FRAME( _codeobj_61f3fdd0da0822f200048bd26e202bfb, _module_django__utils__dateparse );
        }

        Py_INCREF( frame_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse );
        generator->m_frame = frame_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse;

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
                    frame_guard.setLineNumber( 55 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 55 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        {
                            frame_guard.setLineNumber( 55 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_context->python_var_k.assign0( _python_tmp_element_1.asObject() );
                            _python_context->python_var_v.assign0( _python_tmp_element_2.asObject() );
                        }
                        if ( ( _python_context->python_var_v.asObject() != Py_None ) )
                        {
                            frame_guard.setLineNumber( 55 );
                            {
                                PyObjectTempKeeper0 make_tuple1;
                                YIELD_VALUE( generator, ( make_tuple1.assign( _python_context->python_var_k.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( TO_INT( _python_context->python_var_v.asObject() ) ).asObject() ) ) );
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

static PyObject *impl_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse_t *_python_context = new _context_generator_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse_context,
            _python_str_angle_genexpr,
            _codeobj_7f7f7735f9d703a645f4ba389ea3f13b,
            _python_context,
            _context_generator_genexpr_1_of_function_2_parse_time_of_module_django__utils__dateparse_destructor
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


static PyObject *impl_function_3_parse_datetime_of_module_django__utils__dateparse( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalVariable _python_var_match( _python_str_plain_match );
    PyObjectLocalVariable _python_var_kw( _python_str_plain_kw );
    PyObjectLocalVariable _python_var_tzinfo( _python_str_plain_tzinfo );
    PyObjectLocalVariable _python_var_offset( _python_str_plain_offset );

    // Actual function code.
    static PyFrameObject *frame_function_3_parse_datetime_of_module_django__utils__dateparse = NULL;

    if ( isFrameUnusable( frame_function_3_parse_datetime_of_module_django__utils__dateparse ) )
    {
        if ( frame_function_3_parse_datetime_of_module_django__utils__dateparse )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_parse_datetime_of_module_django__utils__dateparse" );
#endif
            Py_DECREF( frame_function_3_parse_datetime_of_module_django__utils__dateparse );
        }

        frame_function_3_parse_datetime_of_module_django__utils__dateparse = MAKE_FRAME( _codeobj_3aa648df135218755a3cc493982fb26e, _module_django__utils__dateparse );
    }

    FrameGuard frame_guard( frame_function_3_parse_datetime_of_module_django__utils__dateparse );
    try
    {
        assert( Py_REFCNT( frame_function_3_parse_datetime_of_module_django__utils__dateparse ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 67 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_match.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateparse_datetime_re.asObject0(), _python_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) );
        }
        frame_guard.setLineNumber( 68 );
        if ( CHECK_IF_TRUE( _python_var_match.asObject() ) )
        {
            frame_guard.setLineNumber( 69 );
            _python_var_kw.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_groupdict ) ).asObject() ) );
            frame_guard.setLineNumber( 70 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_kw.asObject(), _python_str_plain_microsecond ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 71 );
                {
                        PyObjectTemporary tmp_identifier( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_kw.asObject(), _python_str_plain_microsecond ) ).asObject(), _python_str_plain_ljust ) ).asObject(), _python_int_pos_6, _python_str_plain_0 ) );
                        SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_kw.asObject(), _python_str_plain_microsecond );
                }
            }
            frame_guard.setLineNumber( 72 );
            _python_var_tzinfo.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_kw.asObject(), _python_str_plain_pop ) ).asObject(), _python_str_plain_tzinfo ) );
            frame_guard.setLineNumber( 73 );
            if ( RICH_COMPARE_BOOL_EQ( _python_var_tzinfo.asObject(), _python_str_plain_Z ) )
            {
                frame_guard.setLineNumber( 74 );
                _python_var_tzinfo.assign0( _mvar_django__utils__dateparse_utc.asObject0() );
            }
            else
            {
                frame_guard.setLineNumber( 75 );
                if ( ( _python_var_tzinfo.asObject() != Py_None ) )
                {
                    frame_guard.setLineNumber( 76 );
                    {
                        PyObjectTempKeeper1 op3;
                        _python_var_offset.assign1( ( op3.assign( BINARY_OPERATION_MUL( _python_int_pos_60, PyObjectTemporary( TO_INT( PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_tzinfo.asObject(), 1, 3 ) ).asObject() ) ).asObject() ) ), BINARY_OPERATION_ADD( op3.asObject0(), PyObjectTemporary( TO_INT( PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_tzinfo.asObject(), -2, PY_SSIZE_T_MAX ) ).asObject() ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 77 );
                    if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_tzinfo.asObject(), _python_int_0, 0 ) ).asObject(), _python_str_chr_45 ) )
                    {
                        frame_guard.setLineNumber( 78 );
                        _python_var_offset.assign1( UNARY_OPERATION( PyNumber_Negative, _python_var_offset.asObject() ) );
                    }
                    frame_guard.setLineNumber( 79 );
                    {
                        PyObjectTempKeeper0 call5;
                        _python_var_tzinfo.assign1( ( call5.assign( _mvar_django__utils__dateparse_FixedOffset.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_offset.asObject() ) ) );
                    }
                }
            }
            frame_guard.setLineNumber( 80 );
            {
                PyObjectTempKeeper1 call7;
                _python_var_kw.assign1( TO_DICT( PyObjectTemporary( impl_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse( MAKE_ITERATOR( PyObjectTemporary( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateparse_six.asObject0(), _python_str_plain_iteritems ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_kw.asObject() ) ) ).asObject() ) ) ).asObject(), NULL ) );
            }
            frame_guard.setLineNumber( 81 );
            {
                    PyObject *tmp_identifier = _python_var_tzinfo.asObject();
                    SET_SUBSCRIPT( tmp_identifier, _python_var_kw.asObject(), _python_str_plain_tzinfo );
            }
            frame_guard.setLineNumber( 82 );
            {
                PyObjectTempKeeper1 call_tmp9;
                return ( call_tmp9.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateparse_datetime.asObject0(), _python_str_plain_datetime ) ), impl_function_4_complex_call_helper_star_dict_of_module___internal__( call_tmp9.asObject(), _python_var_kw.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_offset.updateLocalsDict( _python_var_tzinfo.updateLocalsDict( _python_var_kw.updateLocalsDict( _python_var_match.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_parse_datetime_of_module_django__utils__dateparse )
        {
           Py_DECREF( frame_function_3_parse_datetime_of_module_django__utils__dateparse );
           frame_function_3_parse_datetime_of_module_django__utils__dateparse = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_parse_datetime_of_module_django__utils__dateparse( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "parse_datetime() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "parse_datetime() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_datetime() got multiple values for keyword argument 'value'" );
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
                   "parse_datetime() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "parse_datetime() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "parse_datetime() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "parse_datetime() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "parse_datetime() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_datetime() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_datetime() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_datetime() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_datetime() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "parse_datetime() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "parse_datetime() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "parse_datetime() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "parse_datetime() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_datetime() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_parse_datetime_of_module_django__utils__dateparse( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_3_parse_datetime_of_module_django__utils__dateparse( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_parse_datetime_of_module_django__utils__dateparse( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_parse_datetime_of_module_django__utils__dateparse( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_k;
    PyObjectLocalVariable python_var_v;
};

static void _context_generator_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse_t *_python_context = (struct _context_generator_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse_t *_python_context = (_context_generator_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_k.setVariableName( _python_str_plain_k );
        _python_context->python_var_v.setVariableName( _python_str_plain_v );

        // Actual function code.
        static PyFrameObject *frame_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse ) )
        {
            if ( frame_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse" );
#endif
                Py_DECREF( frame_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse );
            }

            frame_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse = MAKE_FRAME( _codeobj_2cc66672aed1282eadd02ad144720859, _module_django__utils__dateparse );
        }

        Py_INCREF( frame_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse );
        generator->m_frame = frame_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse;

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
                    frame_guard.setLineNumber( 80 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 80 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        {
                            frame_guard.setLineNumber( 80 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_context->python_var_k.assign0( _python_tmp_element_1.asObject() );
                            _python_context->python_var_v.assign0( _python_tmp_element_2.asObject() );
                        }
                        if ( ( _python_context->python_var_v.asObject() != Py_None ) )
                        {
                            frame_guard.setLineNumber( 80 );
                            {
                                PyObjectTempKeeper0 make_tuple1;
                                YIELD_VALUE( generator, ( make_tuple1.assign( _python_context->python_var_k.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( TO_INT( _python_context->python_var_v.asObject() ) ).asObject() ) ) );
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

static PyObject *impl_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse_t *_python_context = new _context_generator_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse_context,
            _python_str_angle_genexpr,
            _codeobj_8c12c8f22c9889698ed6886f3a8b1f10,
            _python_context,
            _context_generator_genexpr_1_of_function_3_parse_datetime_of_module_django__utils__dateparse_destructor
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



static PyObject *MAKE_FUNCTION_function_1_parse_date_of_module_django__utils__dateparse(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_parse_date_of_module_django__utils__dateparse,
        dparse_function_1_parse_date_of_module_django__utils__dateparse,
        _python_str_plain_parse_date,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_187451cf936e5c49d90584387dd435d3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateparse,
        _python_str_digest_4dcc8768dd95716d2c26f23d1bff0fad
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_parse_time_of_module_django__utils__dateparse(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_parse_time_of_module_django__utils__dateparse,
        dparse_function_2_parse_time_of_module_django__utils__dateparse,
        _python_str_plain_parse_time,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_22f0d6c1db1e9a483e6a181f3b266db5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateparse,
        _python_str_digest_cb049e86cef493cb9382e01a2e9048e5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_parse_datetime_of_module_django__utils__dateparse(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_parse_datetime_of_module_django__utils__dateparse,
        dparse_function_3_parse_datetime_of_module_django__utils__dateparse,
        _python_str_plain_parse_datetime,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3aa648df135218755a3cc493982fb26e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__dateparse,
        _python_str_digest_40a4226ef2d68b149aeaf9eb7c23ba7c
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.dateparse",   /* m_name */
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

MOD_INIT_DECL( django__utils__dateparse )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__dateparse );
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

    // puts( "in initdjango__utils__dateparse" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__dateparse = Py_InitModule4(
        "django.utils.dateparse",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__dateparse = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__dateparse = (PyDictObject *)((PyModuleObject *)_module_django__utils__dateparse)->md_dict;

    assertObject( _module_django__utils__dateparse );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_60d5d3fc4a262f72f77f8cb7b0382bbe, _module_django__utils__dateparse );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__dateparse );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__dateparse != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_5b3e7c6b0b9af94284f3e810b6e309b9 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_01df4d6dfabc1e3b6b6d7c4e0e4be3c0 );
    PyFrameObject *frame_module_django__utils__dateparse = MAKE_FRAME( _codeobj_73b2af9b75015cc34b44c3a64f5d0fda, _module_django__utils__dateparse );

    FrameGuard frame_guard( frame_module_django__utils__dateparse );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__dateparse ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain_datetime, IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__utils__dateparse)->md_dict, ((PyModuleObject *)_module_django__utils__dateparse)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain_re, IMPORT_MODULE( _python_str_plain_re, ((PyModuleObject *)_module_django__utils__dateparse)->md_dict, ((PyModuleObject *)_module_django__utils__dateparse)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__dateparse)->md_dict, ((PyModuleObject *)_module_django__utils__dateparse)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain_utc, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_73d3e50847215b8dcd97fb275615b5ea, ((PyModuleObject *)_module_django__utils__dateparse)->md_dict, ((PyModuleObject *)_module_django__utils__dateparse)->md_dict, _python_list_str_plain_utc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_utc ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain_FixedOffset, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_503679903f504364ca4ae3d636dd72d9, ((PyModuleObject *)_module_django__utils__dateparse)->md_dict, ((PyModuleObject *)_module_django__utils__dateparse)->md_dict, _python_list_str_plain_FixedOffset_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FixedOffset ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain_date_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateparse_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_str_digest_a71d97c429311c706a04f2e934cd29e2 ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain_time_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateparse_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_str_digest_2f479f3324281e768feb6f490b2ee473 ) );
        frame_guard.setLineNumber( 23 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain_datetime_re, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__dateparse_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_str_digest_33d21c14dc181da5ed3786efb4f20304 ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__dateparse)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain_parse_date, MAKE_FUNCTION_function_1_parse_date_of_module_django__utils__dateparse(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain_parse_time, MAKE_FUNCTION_function_2_parse_time_of_module_django__utils__dateparse(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__dateparse, (Nuitka_StringObject *)_python_str_plain_parse_datetime, MAKE_FUNCTION_function_3_parse_datetime_of_module_django__utils__dateparse(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__dateparse );
}
