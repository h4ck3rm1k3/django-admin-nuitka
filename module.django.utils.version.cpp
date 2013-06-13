// Generated code for Python source for module 'django.utils.version'
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

// The _module_django__utils__version is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__version;
PyDictObject *_moduledict_django__utils__version;

// The module level variables.
static PyObjectGlobalVariable_django__utils__version _mvar_django__utils__version___file__( &_module_django__utils__version, &_python_str_plain___file__ );
static PyObjectGlobalVariable_django__utils__version _mvar_django__utils__version_datetime( &_module_django__utils__version, &_python_str_plain_datetime );
static PyObjectGlobalVariable_django__utils__version _mvar_django__utils__version_get_git_changeset( &_module_django__utils__version, &_python_str_plain_get_git_changeset );
static PyObjectGlobalVariable_django__utils__version _mvar_django__utils__version_os( &_module_django__utils__version, &_python_str_plain_os );
static PyObjectGlobalVariable_django__utils__version _mvar_django__utils__version_subprocess( &_module_django__utils__version, &_python_str_plain_subprocess );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_1_get_version_of_module_django__utils__version( PyObject *_python_par___iterator );


static PyObject *MAKE_FUNCTION_function_1_get_version_of_module_django__utils__version(  );


static PyObject *MAKE_FUNCTION_function_2_get_git_changeset_of_module_django__utils__version(  );


// The module function definitions.
static PyObject *impl_function_1_get_version_of_module_django__utils__version( Nuitka_FunctionObject *self, PyObject *_python_par_version )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_version( _python_str_plain_version, _python_par_version );
    PyObjectLocalVariable _python_var_parts( _python_str_plain_parts );
    PyObjectLocalVariable _python_var_main( _python_str_plain_main );
    PyObjectLocalVariable _python_var_sub( _python_str_plain_sub );
    PyObjectLocalVariable _python_var_git_changeset( _python_str_plain_git_changeset );
    PyObjectLocalVariable _python_var_mapping( _python_str_plain_mapping );

    // Actual function code.
    static PyFrameObject *frame_function_1_get_version_of_module_django__utils__version = NULL;

    if ( isFrameUnusable( frame_function_1_get_version_of_module_django__utils__version ) )
    {
        if ( frame_function_1_get_version_of_module_django__utils__version )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_get_version_of_module_django__utils__version" );
#endif
            Py_DECREF( frame_function_1_get_version_of_module_django__utils__version );
        }

        frame_function_1_get_version_of_module_django__utils__version = MAKE_FRAME( _codeobj_c422ff8598c929a10f667c2c81bf9aaf, _module_django__utils__version );
    }

    FrameGuard frame_guard( frame_function_1_get_version_of_module_django__utils__version );
    try
    {
        assert( Py_REFCNT( frame_function_1_get_version_of_module_django__utils__version ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 9 );
        if ( ( _python_var_version.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 10 );
            _python_var_version.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_django, ((PyModuleObject *)_module_django__utils__version)->md_dict, PyObjectTemporary( _python_var_version.updateLocalsDict( _python_var_mapping.updateLocalsDict( _python_var_git_changeset.updateLocalsDict( _python_var_sub.updateLocalsDict( _python_var_main.updateLocalsDict( _python_var_parts.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ).asObject(), _python_list_str_plain_VERSION_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_VERSION ) );
        }
        else
        {
            frame_guard.setLineNumber( 12 );
            if ( (!( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( BUILTIN_LEN( _python_var_version.asObject() ) ).asObject(), _python_int_pos_5 ) )) )
            {
                frame_guard.setLineNumber( 12 );
                RAISE_EXCEPTION_WITH_TYPE( PyExc_AssertionError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            frame_guard.setLineNumber( 13 );
            if ( SEQUENCE_CONTAINS_NOT_BOOL( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_version.asObject(), _python_int_pos_3, 3 ) ).asObject(), _python_tuple_0ac09f30af48120c073c27f3e402d53e_tuple ) )
            {
                frame_guard.setLineNumber( 13 );
                RAISE_EXCEPTION_WITH_TYPE( PyExc_AssertionError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 20 );
        _python_var_parts.assign0( ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_version.asObject(), _python_int_pos_2, 2 ) ).asObject(), _python_int_0 ) ? _python_int_pos_2 : _python_int_pos_3 ) );
        frame_guard.setLineNumber( 21 );
        {
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper0 slice1;
            _python_var_main.assign1( ( call4.assign( LOOKUP_ATTRIBUTE( _python_unicode_dot, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( impl_genexpr_1_of_function_1_get_version_of_module_django__utils__version( MAKE_ITERATOR( PyObjectTemporary( ( slice1.assign( _python_var_version.asObject() ), LOOKUP_SLICE( slice1.asObject0(), Py_None, _python_var_parts.asObject() ) ) ).asObject() ) ) ).asObject() ) ) );
        }
        _python_var_sub.assign0( _python_unicode_empty );
        frame_guard.setLineNumber( 24 );
        if ( ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_version.asObject(), _python_int_pos_3, 3 ) ).asObject(), _python_unicode_plain_alpha ) && RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_version.asObject(), _python_int_pos_4, 4 ) ).asObject(), _python_int_0 ) ) )
        {
            frame_guard.setLineNumber( 25 );
            _python_var_git_changeset.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__version_get_git_changeset.asObject0() ) );
            frame_guard.setLineNumber( 26 );
            if ( CHECK_IF_TRUE( _python_var_git_changeset.asObject() ) )
            {
                frame_guard.setLineNumber( 27 );
                _python_var_sub.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_3f62daf1d921db9a1d9a0b7d7d82ac63, _python_var_git_changeset.asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 29 );
            if ( RICH_COMPARE_BOOL_NE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_version.asObject(), _python_int_pos_3, 3 ) ).asObject(), _python_unicode_plain_final ) )
            {
                _python_var_mapping.assign1( PyDict_Copy( _python_dict_6a1559e30f274d05348f924769d5b01f ) );
                frame_guard.setLineNumber( 31 );
                {
                    PyObjectTempKeeper1 op8;
                    PyObjectTempKeeper0 subscr6;
                    _python_var_sub.assign1( ( op8.assign( ( subscr6.assign( _python_var_mapping.asObject() ), LOOKUP_SUBSCRIPT( subscr6.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_version.asObject(), _python_int_pos_3, 3 ) ).asObject() ) ) ), BINARY_OPERATION_ADD( op8.asObject0(), PyObjectTemporary( TO_STR( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_version.asObject(), _python_int_pos_4, 4 ) ).asObject() ) ).asObject() ) ) );
                }
            }
        }
        frame_guard.setLineNumber( 33 );
        {
            PyObjectTempKeeper0 op10;
            return TO_STR( PyObjectTemporary( ( op10.assign( _python_var_main.asObject() ), BINARY_OPERATION_ADD( op10.asObject0(), _python_var_sub.asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_version.updateLocalsDict( _python_var_mapping.updateLocalsDict( _python_var_git_changeset.updateLocalsDict( _python_var_sub.updateLocalsDict( _python_var_main.updateLocalsDict( _python_var_parts.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_get_version_of_module_django__utils__version )
        {
           Py_DECREF( frame_function_1_get_version_of_module_django__utils__version );
           frame_function_1_get_version_of_module_django__utils__version = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_get_version_of_module_django__utils__version( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_version = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_version() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_version == key )
            {
                if (unlikely( _python_par_version ))
                {
                    PyErr_Format( PyExc_TypeError, "get_version() got multiple values for keyword argument 'version'" );
                    goto error_exit;
                }

                _python_par_version = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_version, key ) )
            {
                if (unlikely( _python_par_version ))
                {
                    PyErr_Format( PyExc_TypeError, "get_version() got multiple values for keyword argument 'version'" );
                    goto error_exit;
                }

                _python_par_version = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_version() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_version() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_version() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_version() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_version() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_version() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_version() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_version() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_version() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_version() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_version() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "get_version() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_version() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_version != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_version() got multiple values for keyword argument 'version'" );
             goto error_exit;
         }

        _python_par_version = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_version == NULL )
    {
        _python_par_version = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_version );
    }


    return impl_function_1_get_version_of_module_django__utils__version( self, _python_par_version );

error_exit:;

    Py_XDECREF( _python_par_version );

    return NULL;
}

static PyObject *dparse_function_1_get_version_of_module_django__utils__version( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_get_version_of_module_django__utils__version( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_get_version_of_module_django__utils__version( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_1_get_version_of_module_django__utils__version_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_x;
};

static void _context_generator_genexpr_1_of_function_1_get_version_of_module_django__utils__version_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_1_get_version_of_module_django__utils__version_t *_python_context = (struct _context_generator_genexpr_1_of_function_1_get_version_of_module_django__utils__version_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_1_of_function_1_get_version_of_module_django__utils__version_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_1_get_version_of_module_django__utils__version_t *_python_context = (_context_generator_genexpr_1_of_function_1_get_version_of_module_django__utils__version_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_x.setVariableName( _python_str_plain_x );

        // Actual function code.
        static PyFrameObject *frame_genexpr_1_of_function_1_get_version_of_module_django__utils__version = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_1_of_function_1_get_version_of_module_django__utils__version ) )
        {
            if ( frame_genexpr_1_of_function_1_get_version_of_module_django__utils__version )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_1_of_function_1_get_version_of_module_django__utils__version" );
#endif
                Py_DECREF( frame_genexpr_1_of_function_1_get_version_of_module_django__utils__version );
            }

            frame_genexpr_1_of_function_1_get_version_of_module_django__utils__version = MAKE_FRAME( _codeobj_80a2f616b4ff6ce91e2819155f7770da, _module_django__utils__version );
        }

        Py_INCREF( frame_genexpr_1_of_function_1_get_version_of_module_django__utils__version );
        generator->m_frame = frame_genexpr_1_of_function_1_get_version_of_module_django__utils__version;

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
                    frame_guard.setLineNumber( 21 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 21 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_x.assign0( _python_tmp_iter_value.asObject() );
                        YIELD_VALUE( generator, TO_STR( _python_context->python_var_x.asObject() ) );

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

static PyObject *impl_genexpr_1_of_function_1_get_version_of_module_django__utils__version( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_1_get_version_of_module_django__utils__version_t *_python_context = new _context_generator_genexpr_1_of_function_1_get_version_of_module_django__utils__version_t;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_1_get_version_of_module_django__utils__version_context,
            _python_str_angle_genexpr,
            _codeobj_11af966fe2de3e14ec791e45dca7c89d,
            _python_context,
            _context_generator_genexpr_1_of_function_1_get_version_of_module_django__utils__version_destructor
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


static PyObject *impl_function_2_get_git_changeset_of_module_django__utils__version( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var_repo_dir( _python_str_plain_repo_dir );
    PyObjectLocalVariable _python_var_git_log( _python_str_plain_git_log );
    PyObjectLocalVariable _python_var_timestamp( _python_str_plain_timestamp );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_git_changeset_of_module_django__utils__version = NULL;

    if ( isFrameUnusable( frame_function_2_get_git_changeset_of_module_django__utils__version ) )
    {
        if ( frame_function_2_get_git_changeset_of_module_django__utils__version )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_git_changeset_of_module_django__utils__version" );
#endif
            Py_DECREF( frame_function_2_get_git_changeset_of_module_django__utils__version );
        }

        frame_function_2_get_git_changeset_of_module_django__utils__version = MAKE_FRAME( _codeobj_510cf24290d1f0a3af3b58cd3384be84, _module_django__utils__version );
    }

    FrameGuard frame_guard( frame_function_2_get_git_changeset_of_module_django__utils__version );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_git_changeset_of_module_django__utils__version ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 42 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 call5;
            _python_var_repo_dir.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__version_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_dirname ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__version_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_dirname ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__version_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_abspath ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _mvar_django__utils__version___file__.asObject0() ) ) ).asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 43 );
        {
            PyObjectTempKeeper1 call17;
            PyObjectTempKeeper1 make_dict7;
            PyObjectTempKeeper1 make_dict9;
            _python_var_git_log.assign1( ( call17.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__version_subprocess.asObject0(), _python_str_plain_Popen ) ), CALL_FUNCTION( call17.asObject0(), _python_tuple_unicode_digest_ee26ac064d5f44bbd868135656cb4611_tuple, PyObjectTemporary( ( make_dict7.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__version_subprocess.asObject0(), _python_str_plain_PIPE ) ), make_dict9.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__version_subprocess.asObject0(), _python_str_plain_PIPE ) ), MAKE_DICT5( make_dict7.asObject0(), _python_str_plain_stdout, make_dict9.asObject0(), _python_str_plain_stderr, Py_True, _python_str_plain_shell, _python_var_repo_dir.asObject(), _python_str_plain_cwd, Py_True, _python_str_plain_universal_newlines ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 46 );
        _python_var_timestamp.assign1( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_git_log.asObject(), _python_str_plain_communicate ) ).asObject() ) ).asObject(), _python_int_0, 0 ) );
        frame_guard.setLineNumber( 47 );
        try
        {
            frame_guard.setLineNumber( 48 );
            {
                PyObjectTempKeeper1 call20;
                _python_var_timestamp.assign1( ( call20.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__version_datetime.asObject0(), _python_str_plain_datetime ) ).asObject(), _python_str_plain_utcfromtimestamp ) ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), PyObjectTemporary( TO_INT( _python_var_timestamp.asObject() ) ).asObject() ) ) );
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
                return INCREASE_REFCOUNT( Py_None );
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
        frame_guard.setLineNumber( 51 );
        return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_timestamp.asObject(), _python_str_plain_strftime ) ).asObject(), _python_unicode_digest_9749e6c8182f9339ffc2fc75ab27c2be );
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
        frame_guard.getFrame0()->f_locals = _python_var_timestamp.updateLocalsDict( _python_var_git_log.updateLocalsDict( _python_var_repo_dir.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_get_git_changeset_of_module_django__utils__version )
        {
           Py_DECREF( frame_function_2_get_git_changeset_of_module_django__utils__version );
           frame_function_2_get_git_changeset_of_module_django__utils__version = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_git_changeset_of_module_django__utils__version( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "get_git_changeset() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "get_git_changeset() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "get_git_changeset() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_2_get_git_changeset_of_module_django__utils__version( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_2_get_git_changeset_of_module_django__utils__version( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_2_get_git_changeset_of_module_django__utils__version( self );
    }
    else
    {
        PyObject *result = fparse_function_2_get_git_changeset_of_module_django__utils__version( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_get_version_of_module_django__utils__version(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_get_version_of_module_django__utils__version,
        dparse_function_1_get_version_of_module_django__utils__version,
        _python_str_plain_get_version,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c422ff8598c929a10f667c2c81bf9aaf,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__version,
        _python_unicode_digest_0741003367f051f80c9aa6286f69c4aa
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_git_changeset_of_module_django__utils__version(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_git_changeset_of_module_django__utils__version,
        dparse_function_2_get_git_changeset_of_module_django__utils__version,
        _python_str_plain_get_git_changeset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_510cf24290d1f0a3af3b58cd3384be84,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__version,
        _python_unicode_digest_94bcb5e0b07765669dd2c0ecb185824f
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.version",   /* m_name */
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

MOD_INIT_DECL( django__utils__version )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__version );
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

    // puts( "in initdjango__utils__version" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__version = Py_InitModule4(
        "django.utils.version",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__version = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__version = (PyDictObject *)((PyModuleObject *)_module_django__utils__version)->md_dict;

    assertObject( _module_django__utils__version );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_7b0986266463f6f3532b6c3b9bcb1f27, _module_django__utils__version );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__version );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__version != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__version, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__version, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_341eab3b44108e28f084086b24a26a0e );
    PyFrameObject *frame_module_django__utils__version = MAKE_FRAME( _codeobj_d988d258a24d37c5f7129348910d1382, _module_django__utils__version );

    FrameGuard frame_guard( frame_module_django__utils__version );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__version ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__version, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__utils__version)->md_dict, ((PyModuleObject *)_module_django__utils__version)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__version, (Nuitka_StringObject *)_python_str_plain_datetime, IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__utils__version)->md_dict, ((PyModuleObject *)_module_django__utils__version)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__version, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__utils__version)->md_dict, ((PyModuleObject *)_module_django__utils__version)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__version, (Nuitka_StringObject *)_python_str_plain_subprocess, IMPORT_MODULE( _python_str_plain_subprocess, ((PyModuleObject *)_module_django__utils__version)->md_dict, ((PyModuleObject *)_module_django__utils__version)->md_dict, Py_None, _python_int_neg_1 ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__version)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__version, (Nuitka_StringObject *)_python_str_plain_get_version, MAKE_FUNCTION_function_1_get_version_of_module_django__utils__version(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__version, (Nuitka_StringObject *)_python_str_plain_get_git_changeset, MAKE_FUNCTION_function_2_get_git_changeset_of_module_django__utils__version(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__version );
}
