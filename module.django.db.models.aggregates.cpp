// Generated code for Python source for module 'django.db.models.aggregates'
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

// The _module_django__db__models__aggregates is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__models__aggregates;
PyDictObject *_moduledict_django__db__models__aggregates;

// The module level variables.
static PyObjectGlobalVariable_django__db__models__aggregates _mvar_django__db__models__aggregates_Aggregate( &_module_django__db__models__aggregates, &_python_str_plain_Aggregate );
static PyObjectGlobalVariable_django__db__models__aggregates _mvar_django__db__models__aggregates_LOOKUP_SEP( &_module_django__db__models__aggregates, &_python_str_plain_LOOKUP_SEP );
static PyObjectGlobalVariable_django__db__models__aggregates _mvar_django__db__models__aggregates___metaclass__( &_module_django__db__models__aggregates, &_python_str_plain___metaclass__ );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_2_Aggregate_of_module_django__db__models__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_Avg_of_module_django__db__models__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_Count_of_module_django__db__models__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_Max_of_module_django__db__models__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_Min_of_module_django__db__models__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_StdDev_of_module_django__db__models__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_Sum_of_module_django__db__models__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_9_Variance_of_module_django__db__models__aggregates(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates(  );


static PyObject *MAKE_FUNCTION_function_1_refs_aggregate_of_module_django__db__models__aggregates(  );


static PyObject *MAKE_FUNCTION_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates(  );


static PyObject *MAKE_FUNCTION_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates(  );


// The module function definitions.
static PyObject *impl_function_1_refs_aggregate_of_module_django__db__models__aggregates( Nuitka_FunctionObject *self, PyObject *_python_par_lookup_parts, PyObject *_python_par_aggregates )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_lookup_parts( _python_str_plain_lookup_parts, _python_par_lookup_parts );
    PyObjectLocalParameterVariableNoDel _python_var_aggregates( _python_str_plain_aggregates, _python_par_aggregates );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );

    // Actual function code.
    static PyFrameObject *frame_function_1_refs_aggregate_of_module_django__db__models__aggregates = NULL;

    if ( isFrameUnusable( frame_function_1_refs_aggregate_of_module_django__db__models__aggregates ) )
    {
        if ( frame_function_1_refs_aggregate_of_module_django__db__models__aggregates )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_refs_aggregate_of_module_django__db__models__aggregates" );
#endif
            Py_DECREF( frame_function_1_refs_aggregate_of_module_django__db__models__aggregates );
        }

        frame_function_1_refs_aggregate_of_module_django__db__models__aggregates = MAKE_FRAME( _codeobj_4a3aa453704e92cf6638f0bd03e20af7, _module_django__db__models__aggregates );
    }

    FrameGuard frame_guard( frame_function_1_refs_aggregate_of_module_django__db__models__aggregates );
    try
    {
        assert( Py_REFCNT( frame_function_1_refs_aggregate_of_module_django__db__models__aggregates ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 13 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_RANGE( PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BUILTIN_LEN( _python_var_lookup_parts.asObject() ) ).asObject(), _python_int_pos_1 ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 13 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_i.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 14 );
                {
                    PyObjectTempKeeper1 call4;
                    PyObjectTempKeeper1 cmp6;
                    PyObjectTempKeeper0 slice1;
                    if ( ( cmp6.assign( ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__aggregates_LOOKUP_SEP.asObject0(), _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( ( slice1.assign( _python_var_lookup_parts.asObject() ), LOOKUP_SLICE( slice1.asObject0(), _python_int_0, _python_var_i.asObject() ) ) ).asObject() ) ) ), SEQUENCE_CONTAINS_BOOL( cmp6.asObject0(), _python_var_aggregates.asObject() ) ) )
                {
                    return INCREASE_REFCOUNT( Py_True );
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
        frame_guard.getFrame0()->f_locals = _python_var_aggregates.updateLocalsDict( _python_var_lookup_parts.updateLocalsDict( _python_var_i.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_refs_aggregate_of_module_django__db__models__aggregates )
        {
           Py_DECREF( frame_function_1_refs_aggregate_of_module_django__db__models__aggregates );
           frame_function_1_refs_aggregate_of_module_django__db__models__aggregates = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_False );
}
static PyObject *fparse_function_1_refs_aggregate_of_module_django__db__models__aggregates( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_lookup_parts = NULL;
    PyObject *_python_par_aggregates = NULL;
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
                PyErr_Format( PyExc_TypeError, "refs_aggregate() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_lookup_parts == key )
            {
                if (unlikely( _python_par_lookup_parts ))
                {
                    PyErr_Format( PyExc_TypeError, "refs_aggregate() got multiple values for keyword argument 'lookup_parts'" );
                    goto error_exit;
                }

                _python_par_lookup_parts = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_aggregates == key )
            {
                if (unlikely( _python_par_aggregates ))
                {
                    PyErr_Format( PyExc_TypeError, "refs_aggregate() got multiple values for keyword argument 'aggregates'" );
                    goto error_exit;
                }

                _python_par_aggregates = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_lookup_parts, key ) )
            {
                if (unlikely( _python_par_lookup_parts ))
                {
                    PyErr_Format( PyExc_TypeError, "refs_aggregate() got multiple values for keyword argument 'lookup_parts'" );
                    goto error_exit;
                }

                _python_par_lookup_parts = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_aggregates, key ) )
            {
                if (unlikely( _python_par_aggregates ))
                {
                    PyErr_Format( PyExc_TypeError, "refs_aggregate() got multiple values for keyword argument 'aggregates'" );
                    goto error_exit;
                }

                _python_par_aggregates = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "refs_aggregate() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "refs_aggregate() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "refs_aggregate() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "refs_aggregate() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "refs_aggregate() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "refs_aggregate() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "refs_aggregate() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "refs_aggregate() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "refs_aggregate() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "refs_aggregate() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "refs_aggregate() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "refs_aggregate() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "refs_aggregate() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_lookup_parts != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "refs_aggregate() got multiple values for keyword argument 'lookup_parts'" );
             goto error_exit;
         }

        _python_par_lookup_parts = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_aggregates != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "refs_aggregate() got multiple values for keyword argument 'aggregates'" );
             goto error_exit;
         }

        _python_par_aggregates = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_refs_aggregate_of_module_django__db__models__aggregates( self, _python_par_lookup_parts, _python_par_aggregates );

error_exit:;

    Py_XDECREF( _python_par_lookup_parts );
    Py_XDECREF( _python_par_aggregates );

    return NULL;
}

static PyObject *dparse_function_1_refs_aggregate_of_module_django__db__models__aggregates( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_refs_aggregate_of_module_django__db__models__aggregates( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_refs_aggregate_of_module_django__db__models__aggregates( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_Aggregate_of_module_django__db__models__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var__default_alias( _python_str_plain__default_alias );
    PyObjectLocalVariable _python_var_default_alias( _python_str_plain_default_alias );
    PyObjectLocalVariable _python_var_add_to_query( _python_str_plain_add_to_query );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var___doc__.assign0( _python_str_digest_269d618d28b9efcede90015525af6d2d );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates(  ) );
    _python_var__default_alias.assign1( MAKE_FUNCTION_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates(  ) );
    static PyFrameObject *frame_class_2_Aggregate_of_module_django__db__models__aggregates = NULL;

    if ( isFrameUnusable( frame_class_2_Aggregate_of_module_django__db__models__aggregates ) )
    {
        if ( frame_class_2_Aggregate_of_module_django__db__models__aggregates )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_2_Aggregate_of_module_django__db__models__aggregates" );
#endif
            Py_DECREF( frame_class_2_Aggregate_of_module_django__db__models__aggregates );
        }

        frame_class_2_Aggregate_of_module_django__db__models__aggregates = MAKE_FRAME( _codeobj_685136a6d3d5af515a19107822eb3bc2, _module_django__db__models__aggregates );
    }

    FrameGuard frame_guard( frame_class_2_Aggregate_of_module_django__db__models__aggregates );
    try
    {
        assert( Py_REFCNT( frame_class_2_Aggregate_of_module_django__db__models__aggregates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 37 );
        _python_var_default_alias.assign1( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_property ), _python_var__default_alias.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_add_to_query.updateLocalsDict( _python_var_default_alias.updateLocalsDict( _python_var__default_alias.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_2_Aggregate_of_module_django__db__models__aggregates )
        {
           Py_DECREF( frame_class_2_Aggregate_of_module_django__db__models__aggregates );
           frame_class_2_Aggregate_of_module_django__db__models__aggregates = NULL;
        }

        throw;
    }
    _python_var_add_to_query.assign1( MAKE_FUNCTION_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates(  ) );
    return _python_var_add_to_query.updateLocalsDict( _python_var_default_alias.updateLocalsDict( _python_var__default_alias.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_lookup, PyObject *_python_par_extra )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_lookup( _python_str_plain_lookup, _python_par_lookup );
    PyObjectLocalParameterVariableNoDel _python_var_extra( _python_str_plain_extra, _python_par_extra );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates ) )
    {
        if ( frame_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates );
        }

        frame_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates = MAKE_FRAME( _codeobj_8446f33a941ae57dd57255a1cd8e78e9, _module_django__db__models__aggregates );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 32 );
        {
                PyObject *tmp_identifier = _python_var_lookup.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_lookup );
        }
        frame_guard.setLineNumber( 33 );
        {
                PyObject *tmp_identifier = _python_var_extra.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_extra );
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
        frame_guard.getFrame0()->f_locals = _python_var_extra.updateLocalsDict( _python_var_lookup.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates )
        {
           Py_DECREF( frame_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates );
           frame_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_lookup = NULL;
    PyObject *_python_par_extra = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_extra = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_extra = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_extra, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_extra = (PyObject *)split_copy;
        }
        else
        {
            _python_par_extra = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_extra, entry->me_key, value );

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
            _python_par_extra = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_extra, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_extra, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument lookup was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_extra, _python_str_plain_lookup );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_lookup == NULL );

            _python_par_lookup = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_extra, _python_str_plain_lookup );

            kw_found += 1;
        }
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
         if (unlikely( _python_par_lookup != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'lookup'" );
             goto error_exit;
         }

        _python_par_lookup = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates( self, _python_par_self, _python_par_lookup, _python_par_extra );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_lookup );
    Py_XDECREF( _python_par_extra );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates = NULL;

    if ( isFrameUnusable( frame_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates ) )
    {
        if ( frame_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates" );
#endif
            Py_DECREF( frame_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates );
        }

        frame_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates = MAKE_FRAME( _codeobj_4164dbb93c8be23fe414ab70982e4b24, _module_django__db__models__aggregates );
    }

    FrameGuard frame_guard( frame_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates );
    try
    {
        assert( Py_REFCNT( frame_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 36 );
        {
            PyObjectTempKeeper1 make_tuple1;
            return BINARY_OPERATION_REMAINDER( _python_str_digest_aa582e0265b239962ed465f876e27b22, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_lookup ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ) ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates )
        {
           Py_DECREF( frame_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates );
           frame_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_default_alias() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_default_alias() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_default_alias() got multiple values for keyword argument 'self'" );
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
                   "_default_alias() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_default_alias() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_default_alias() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_default_alias() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_default_alias() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_default_alias() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_default_alias() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_default_alias() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_default_alias() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_default_alias() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_default_alias() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_default_alias() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_default_alias() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_default_alias() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_query, PyObject *_python_par_alias, PyObject *_python_par_col, PyObject *_python_par_source, PyObject *_python_par_is_summary )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_query( _python_str_plain_query, _python_par_query );
    PyObjectLocalParameterVariableNoDel _python_var_alias( _python_str_plain_alias, _python_par_alias );
    PyObjectLocalParameterVariableNoDel _python_var_col( _python_str_plain_col, _python_par_col );
    PyObjectLocalParameterVariableNoDel _python_var_source( _python_str_plain_source, _python_par_source );
    PyObjectLocalParameterVariableNoDel _python_var_is_summary( _python_str_plain_is_summary, _python_par_is_summary );
    PyObjectLocalVariable _python_var_klass( _python_str_plain_klass );
    PyObjectLocalVariable _python_var_aggregate( _python_str_plain_aggregate );

    // Actual function code.
    static PyFrameObject *frame_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates = NULL;

    if ( isFrameUnusable( frame_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates ) )
    {
        if ( frame_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates" );
#endif
            Py_DECREF( frame_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates );
        }

        frame_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates = MAKE_FRAME( _codeobj_bc3346ad40feb250e4031aaf780adc0a, _module_django__db__models__aggregates );
    }

    FrameGuard frame_guard( frame_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates );
    try
    {
        assert( Py_REFCNT( frame_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 57 );
        {
            PyObjectTempKeeper1 getattr1;
            _python_var_klass.assign1( ( getattr1.assign( LOOKUP_ATTRIBUTE( _python_var_query.asObject(), _python_str_plain_aggregates_module ) ), BUILTIN_GETATTR( getattr1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ).asObject(), NULL ) ) );
        }
        frame_guard.setLineNumber( 58 );
        {
            PyObjectTempKeeper1 call_tmp10;
            PyObjectTempKeeper0 call_tmp8;
            PyObjectTempKeeper1 call_tmp9;
            PyObjectTempKeeper0 make_dict4;
            _python_var_aggregate.assign1( ( call_tmp8.assign( _python_var_klass.asObject() ), call_tmp9.assign( MAKE_TUPLE1( _python_var_col.asObject() ) ), call_tmp10.assign( ( make_dict4.assign( _python_var_source.asObject() ), MAKE_DICT2( make_dict4.asObject0(), _python_str_plain_source, _python_var_is_summary.asObject(), _python_str_plain_is_summary ) ) ), impl_function_11_complex_call_helper_pos_keywords_star_dict_of_module___internal__( call_tmp8.asObject(), call_tmp9.asObject(), call_tmp10.asObject(), LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_extra ) ) ) );
        }
        frame_guard.setLineNumber( 59 );
        {
                PyObject *tmp_identifier = _python_var_aggregate.asObject();
                PyObjectTemporary tmp_subscribed( LOOKUP_ATTRIBUTE( _python_var_query.asObject(), _python_str_plain_aggregates ) );
                SET_SUBSCRIPT( tmp_identifier, tmp_subscribed.asObject(), _python_var_alias.asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_is_summary.updateLocalsDict( _python_var_source.updateLocalsDict( _python_var_col.updateLocalsDict( _python_var_alias.updateLocalsDict( _python_var_query.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_aggregate.updateLocalsDict( _python_var_klass.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates )
        {
           Py_DECREF( frame_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates );
           frame_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_query = NULL;
    PyObject *_python_par_alias = NULL;
    PyObject *_python_par_col = NULL;
    PyObject *_python_par_source = NULL;
    PyObject *_python_par_is_summary = NULL;
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
                PyErr_Format( PyExc_TypeError, "add_to_query() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_query == key )
            {
                if (unlikely( _python_par_query ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'query'" );
                    goto error_exit;
                }

                _python_par_query = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_alias == key )
            {
                if (unlikely( _python_par_alias ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'alias'" );
                    goto error_exit;
                }

                _python_par_alias = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_col == key )
            {
                if (unlikely( _python_par_col ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'col'" );
                    goto error_exit;
                }

                _python_par_col = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_source == key )
            {
                if (unlikely( _python_par_source ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'source'" );
                    goto error_exit;
                }

                _python_par_source = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_is_summary == key )
            {
                if (unlikely( _python_par_is_summary ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'is_summary'" );
                    goto error_exit;
                }

                _python_par_is_summary = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_query, key ) )
            {
                if (unlikely( _python_par_query ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'query'" );
                    goto error_exit;
                }

                _python_par_query = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_alias, key ) )
            {
                if (unlikely( _python_par_alias ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'alias'" );
                    goto error_exit;
                }

                _python_par_alias = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_col, key ) )
            {
                if (unlikely( _python_par_col ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'col'" );
                    goto error_exit;
                }

                _python_par_col = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_source, key ) )
            {
                if (unlikely( _python_par_source ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'source'" );
                    goto error_exit;
                }

                _python_par_source = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_is_summary, key ) )
            {
                if (unlikely( _python_par_is_summary ))
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'is_summary'" );
                    goto error_exit;
                }

                _python_par_is_summary = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add_to_query() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "add_to_query() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "add_to_query() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "add_to_query() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "add_to_query() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 6 )
            {
                PyErr_Format( PyExc_TypeError, "add_to_query() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add_to_query() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 6 )
            {
                PyErr_Format( PyExc_TypeError, "add_to_query() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "add_to_query() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 6 ))
    {
        if ( 6 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "add_to_query() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "add_to_query() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 6 )
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() takes exactly %d arguments (%zd given)", 6, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "add_to_query() takes at least %d arguments (%zd given)", 6, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 6 ? args_given : 6;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_query != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'query'" );
             goto error_exit;
         }

        _python_par_query = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_alias != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'alias'" );
             goto error_exit;
         }

        _python_par_alias = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_col != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'col'" );
             goto error_exit;
         }

        _python_par_col = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_source != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'source'" );
             goto error_exit;
         }

        _python_par_source = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_is_summary != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "add_to_query() got multiple values for keyword argument 'is_summary'" );
             goto error_exit;
         }

        _python_par_is_summary = INCREASE_REFCOUNT( args[ 5 ] );
    }


    return impl_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates( self, _python_par_self, _python_par_query, _python_par_alias, _python_par_col, _python_par_source, _python_par_is_summary );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_query );
    Py_XDECREF( _python_par_alias );
    Py_XDECREF( _python_par_col );
    Py_XDECREF( _python_par_source );
    Py_XDECREF( _python_par_is_summary );

    return NULL;
}

static PyObject *dparse_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_Avg_of_module_django__db__models__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_name.assign0( _python_str_plain_Avg );
    return _python_var_name.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_4_Count_of_module_django__db__models__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_name.assign0( _python_str_plain_Count );
    return _python_var_name.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_5_Max_of_module_django__db__models__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_name.assign0( _python_str_plain_Max );
    return _python_var_name.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_6_Min_of_module_django__db__models__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_name.assign0( _python_str_plain_Min );
    return _python_var_name.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_7_StdDev_of_module_django__db__models__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_name.assign0( _python_str_plain_StdDev );
    return _python_var_name.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_8_Sum_of_module_django__db__models__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_name.assign0( _python_str_plain_Sum );
    return _python_var_name.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_9_Variance_of_module_django__db__models__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_name.assign0( _python_str_plain_Variance );
    return _python_var_name.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates,
        dparse_function_1___init___of_class_2_Aggregate_of_module_django__db__models__aggregates,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8446f33a941ae57dd57255a1cd8e78e9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__aggregates,
        _python_str_digest_24fe675089c965f0e22024170d12ad5e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_refs_aggregate_of_module_django__db__models__aggregates(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_refs_aggregate_of_module_django__db__models__aggregates,
        dparse_function_1_refs_aggregate_of_module_django__db__models__aggregates,
        _python_str_plain_refs_aggregate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4a3aa453704e92cf6638f0bd03e20af7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__aggregates,
        _python_str_digest_a7410f6c21110ef51bc805419ca149d6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates,
        dparse_function_2__default_alias_of_class_2_Aggregate_of_module_django__db__models__aggregates,
        _python_str_plain__default_alias,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4164dbb93c8be23fe414ab70982e4b24,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__aggregates,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates,
        dparse_function_3_add_to_query_of_class_2_Aggregate_of_module_django__db__models__aggregates,
        _python_str_plain_add_to_query,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bc3346ad40feb250e4031aaf780adc0a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__aggregates,
        _python_str_digest_1fdcb3f7ac9727e7105cceb50b3f0a3c
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models.aggregates",   /* m_name */
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

MOD_INIT_DECL( django__db__models__aggregates )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__models__aggregates );
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

    // puts( "in initdjango__db__models__aggregates" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__models__aggregates = Py_InitModule4(
        "django.db.models.aggregates",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__models__aggregates = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__models__aggregates = (PyDictObject *)((PyModuleObject *)_module_django__db__models__aggregates)->md_dict;

    assertObject( _module_django__db__models__aggregates );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_8b0e4004c4fcac3df0a806fb7b8f511d, _module_django__db__models__aggregates );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__models__aggregates );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__models__aggregates != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__models__aggregates, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_fed3fb2861a18e4d0b8d3e16553430fb );
    UPDATE_STRING_DICT0( _moduledict_django__db__models__aggregates, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_e6a3f1298ee918eada9a1901b9c99141 );
    PyFrameObject *frame_module_django__db__models__aggregates = MAKE_FRAME( _codeobj_a3a0428694a6d1fa598bece8cc66e38d, _module_django__db__models__aggregates );

    FrameGuard frame_guard( frame_module_django__db__models__aggregates );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__models__aggregates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__aggregates, (Nuitka_StringObject *)_python_str_plain_LOOKUP_SEP, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_cfeccc6ee565189b79407570398b67dd, ((PyModuleObject *)_module_django__db__models__aggregates)->md_dict, ((PyModuleObject *)_module_django__db__models__aggregates)->md_dict, _python_list_str_plain_LOOKUP_SEP_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_LOOKUP_SEP ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__aggregates, (Nuitka_StringObject *)_python_str_plain_refs_aggregate, MAKE_FUNCTION_function_1_refs_aggregate_of_module_django__db__models__aggregates(  ) );
        {
            frame_guard.setLineNumber( 18 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_Aggregate_of_module_django__db__models__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_Aggregate, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__aggregates, (Nuitka_StringObject *)_python_str_plain_Aggregate, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 61 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_Avg_of_module_django__db__models__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_Avg, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__aggregates, (Nuitka_StringObject *)_python_str_plain_Avg, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 64 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_Count_of_module_django__db__models__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_Count, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__aggregates, (Nuitka_StringObject *)_python_str_plain_Count, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 67 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_5_Max_of_module_django__db__models__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call15;
                _tmp_python_tmp_class = ( call13.assign( _python_tmp_metaclass.asObject() ), call15.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_str_plain_Max, call15.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__aggregates, (Nuitka_StringObject *)_python_str_plain_Max, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 70 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_6_Min_of_module_django__db__models__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call17;
                PyObjectTempKeeper0 call19;
                _tmp_python_tmp_class = ( call17.assign( _python_tmp_metaclass.asObject() ), call19.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_str_plain_Min, call19.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__aggregates, (Nuitka_StringObject *)_python_str_plain_Min, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 73 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_7_StdDev_of_module_django__db__models__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call21;
                PyObjectTempKeeper0 call23;
                _tmp_python_tmp_class = ( call21.assign( _python_tmp_metaclass.asObject() ), call23.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), _python_str_plain_StdDev, call23.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__aggregates, (Nuitka_StringObject *)_python_str_plain_StdDev, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 76 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_8_Sum_of_module_django__db__models__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call25;
                PyObjectTempKeeper0 call27;
                _tmp_python_tmp_class = ( call25.assign( _python_tmp_metaclass.asObject() ), call27.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), _python_str_plain_Sum, call27.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__aggregates, (Nuitka_StringObject *)_python_str_plain_Sum, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 79 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_9_Variance_of_module_django__db__models__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call29;
                PyObjectTempKeeper0 call31;
                _tmp_python_tmp_class = ( call29.assign( _python_tmp_metaclass.asObject() ), call31.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), _python_str_plain_Variance, call31.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__aggregates, (Nuitka_StringObject *)_python_str_plain_Variance, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__models__aggregates)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__db__models__aggregates );
}
