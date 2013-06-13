// Generated code for Python source for module 'django.db.models.sql.aggregates'
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

// The _module_django__db__models__sql__aggregates is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__models__sql__aggregates;
PyDictObject *_moduledict_django__db__models__sql__aggregates;

// The module level variables.
static PyObjectGlobalVariable_django__db__models__sql__aggregates _mvar_django__db__models__sql__aggregates_Aggregate( &_module_django__db__models__sql__aggregates, &_python_str_plain_Aggregate );
static PyObjectGlobalVariable_django__db__models__sql__aggregates _mvar_django__db__models__sql__aggregates_Count( &_module_django__db__models__sql__aggregates, &_python_str_plain_Count );
static PyObjectGlobalVariable_django__db__models__sql__aggregates _mvar_django__db__models__sql__aggregates_FloatField( &_module_django__db__models__sql__aggregates, &_python_str_plain_FloatField );
static PyObjectGlobalVariable_django__db__models__sql__aggregates _mvar_django__db__models__sql__aggregates_IntegerField( &_module_django__db__models__sql__aggregates, &_python_str_plain_IntegerField );
static PyObjectGlobalVariable_django__db__models__sql__aggregates _mvar_django__db__models__sql__aggregates_StdDev( &_module_django__db__models__sql__aggregates, &_python_str_plain_StdDev );
static PyObjectGlobalVariable_django__db__models__sql__aggregates _mvar_django__db__models__sql__aggregates_Variance( &_module_django__db__models__sql__aggregates, &_python_str_plain_Variance );
static PyObjectGlobalVariable_django__db__models__sql__aggregates _mvar_django__db__models__sql__aggregates___metaclass__( &_module_django__db__models__sql__aggregates, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__db__models__sql__aggregates _mvar_django__db__models__sql__aggregates_computed_aggregate_field( &_module_django__db__models__sql__aggregates, &_python_str_plain_computed_aggregate_field );
static PyObjectGlobalVariable_django__db__models__sql__aggregates _mvar_django__db__models__sql__aggregates_copy( &_module_django__db__models__sql__aggregates, &_python_str_plain_copy );
static PyObjectGlobalVariable_django__db__models__sql__aggregates _mvar_django__db__models__sql__aggregates_ordinal_aggregate_field( &_module_django__db__models__sql__aggregates, &_python_str_plain_ordinal_aggregate_field );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Aggregate_of_module_django__db__models__sql__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_c, PyObjectLocalParameterVariableNoDel &python_closure_qn );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_Avg_of_module_django__db__models__sql__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_Count_of_module_django__db__models__sql__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_Max_of_module_django__db__models__sql__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_Min_of_module_django__db__models__sql__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_StdDev_of_module_django__db__models__sql__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_Sum_of_module_django__db__models__sql__aggregates(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_Variance_of_module_django__db__models__sql__aggregates(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates(  );


static PyObject *MAKE_FUNCTION_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates(  );


static PyObject *MAKE_FUNCTION_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Aggregate_of_module_django__db__models__sql__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_is_ordinal( _python_str_plain_is_ordinal );
    PyObjectLocalVariable _python_var_is_computed( _python_str_plain_is_computed );
    PyObjectLocalVariable _python_var_sql_template( _python_str_plain_sql_template );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_relabeled_clone( _python_str_plain_relabeled_clone );
    PyObjectLocalVariable _python_var_as_sql( _python_str_plain_as_sql );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var___doc__.assign0( _python_str_digest_be4534e10a27f5c645d388d8e22eceb3 );
    _python_var_is_ordinal.assign0( Py_False );
    _python_var_is_computed.assign0( Py_False );
    _python_var_sql_template.assign0( _python_str_digest_cbd6e97b720ea90419c7a96d629f9ad8 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates(  ) );
    _python_var_relabeled_clone.assign1( MAKE_FUNCTION_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates(  ) );
    _python_var_as_sql.assign1( MAKE_FUNCTION_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates(  ) );
    return _python_var_as_sql.updateLocalsDict( _python_var_relabeled_clone.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_sql_template.updateLocalsDict( _python_var_is_computed.updateLocalsDict( _python_var_is_ordinal.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_col, PyObject *_python_par_source, PyObject *_python_par_is_summary, PyObject *_python_par_extra )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_col( _python_str_plain_col, _python_par_col );
    PyObjectLocalParameterVariableNoDel _python_var_source( _python_str_plain_source, _python_par_source );
    PyObjectLocalParameterVariableNoDel _python_var_is_summary( _python_str_plain_is_summary, _python_par_is_summary );
    PyObjectLocalParameterVariableNoDel _python_var_extra( _python_str_plain_extra, _python_par_extra );
    PyObjectLocalVariable _python_var_tmp( _python_str_plain_tmp );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates ) )
    {
        if ( frame_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates );
        }

        frame_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates = MAKE_FRAME( _codeobj_956d76f31508f39787983cb65a592636, _module_django__db__models__sql__aggregates );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 45 );
        {
                PyObject *tmp_identifier = _python_var_col.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_col );
        }
        frame_guard.setLineNumber( 46 );
        {
                PyObject *tmp_identifier = _python_var_source.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_source );
        }
        frame_guard.setLineNumber( 47 );
        {
                PyObject *tmp_identifier = _python_var_is_summary.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_is_summary );
        }
        frame_guard.setLineNumber( 48 );
        {
                PyObject *tmp_identifier = _python_var_extra.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_extra );
        }
        frame_guard.setLineNumber( 54 );
        _python_var_tmp.assign0( _python_var_self.asObject() );
        frame_guard.setLineNumber( 56 );
        while( true )
        {
            frame_guard.setLineNumber( 56 );
            {
                PyObjectTempKeeper0 isinstance1;
                if ( (!( ( CHECK_IF_TRUE( _python_var_tmp.asObject() ) && ( isinstance1.assign( _python_var_tmp.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), _mvar_django__db__models__sql__aggregates_Aggregate.asObject0() ) ) ) )) )
            {
                frame_guard.setLineNumber( 56 );
                break;
            }
            }
            frame_guard.setLineNumber( 57 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_tmp.asObject(), _python_str_plain_is_ordinal, Py_False ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 58 );
                _python_var_tmp.assign0( _mvar_django__db__models__sql__aggregates_ordinal_aggregate_field.asObject0() );
            }
            else
            {
                frame_guard.setLineNumber( 59 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_tmp.asObject(), _python_str_plain_is_computed, Py_False ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 60 );
                    _python_var_tmp.assign0( _mvar_django__db__models__sql__aggregates_computed_aggregate_field.asObject0() );
                }
                else
                {
                    frame_guard.setLineNumber( 62 );
                    _python_var_tmp.assign1( LOOKUP_ATTRIBUTE( _python_var_tmp.asObject(), _python_str_plain_source ) );
                }
            }

           CONSIDER_THREADING();
        }
        frame_guard.setLineNumber( 64 );
        {
                PyObject *tmp_identifier = _python_var_tmp.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_field );
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
        frame_guard.getFrame0()->f_locals = _python_var_extra.updateLocalsDict( _python_var_is_summary.updateLocalsDict( _python_var_source.updateLocalsDict( _python_var_col.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_tmp.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates )
        {
           Py_DECREF( frame_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates );
           frame_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_col = NULL;
    PyObject *_python_par_source = NULL;
    PyObject *_python_par_is_summary = NULL;
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

    // Check if argument col was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_extra, _python_str_plain_col );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_col == NULL );

            _python_par_col = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_extra, _python_str_plain_col );

            kw_found += 1;
        }
    }

    // Check if argument source was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_extra, _python_str_plain_source );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_source == NULL );

            _python_par_source = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_extra, _python_str_plain_source );

            kw_found += 1;
        }
    }

    // Check if argument is_summary was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_extra, _python_str_plain_is_summary );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_is_summary == NULL );

            _python_par_is_summary = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_extra, _python_str_plain_is_summary );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 2 )
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
    args_usable_count = args_given < 4 ? args_given : 4;

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
         if (unlikely( _python_par_col != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'col'" );
             goto error_exit;
         }

        _python_par_col = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_source != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'source'" );
             goto error_exit;
         }

        _python_par_source = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_is_summary != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'is_summary'" );
             goto error_exit;
         }

        _python_par_is_summary = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_source == NULL )
    {
        _python_par_source = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_source );
    }
    if ( _python_par_is_summary == NULL )
    {
        _python_par_is_summary = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_is_summary );
    }


    return impl_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( self, _python_par_self, _python_par_col, _python_par_source, _python_par_is_summary, _python_par_extra );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_col );
    Py_XDECREF( _python_par_source );
    Py_XDECREF( _python_par_is_summary );
    Py_XDECREF( _python_par_extra );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_change_map )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_change_map( _python_str_plain_change_map, _python_par_change_map );
    PyObjectLocalVariable _python_var_clone( _python_str_plain_clone );

    // Actual function code.
    static PyFrameObject *frame_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates = NULL;

    if ( isFrameUnusable( frame_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates ) )
    {
        if ( frame_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates" );
#endif
            Py_DECREF( frame_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates );
        }

        frame_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates = MAKE_FRAME( _codeobj_a9a1518edaabcd898dcb72889ad4fa0e, _module_django__db__models__sql__aggregates );
    }

    FrameGuard frame_guard( frame_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates );
    try
    {
        assert( Py_REFCNT( frame_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 67 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_clone.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__models__sql__aggregates_copy.asObject0(), _python_str_plain_copy ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_self.asObject() ) ) );
        }
        frame_guard.setLineNumber( 68 );
        if ( BUILTIN_ISINSTANCE_BOOL( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_col ) ).asObject(), PyObjectTemporary( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_list ), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 69 );
            {
                PyObjectTempKeeper1 call3;
                PyObjectTempKeeper1 call4;
                PyObjectTempKeeper1 make_tuple6;
                {
                    PyObjectTemporary tmp_identifier( ( make_tuple6.assign( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_change_map.asObject(), _python_str_plain_get ) ), call4.assign( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_col ) ).asObject(), _python_int_0, 0 ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_col ) ).asObject(), _python_int_0, 0 ) ).asObject() ) ) ), MAKE_TUPLE2( make_tuple6.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_col ) ).asObject(), _python_int_pos_1, 1 ) ).asObject() ) ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_clone.asObject(), _python_str_plain_col );
            }
            }
        }
        frame_guard.setLineNumber( 70 );
        return _python_var_clone.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_change_map.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_clone.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates )
        {
           Py_DECREF( frame_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates );
           frame_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_change_map = NULL;
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
                PyErr_Format( PyExc_TypeError, "relabeled_clone() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "relabeled_clone() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_change_map == key )
            {
                if (unlikely( _python_par_change_map ))
                {
                    PyErr_Format( PyExc_TypeError, "relabeled_clone() got multiple values for keyword argument 'change_map'" );
                    goto error_exit;
                }

                _python_par_change_map = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "relabeled_clone() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_change_map, key ) )
            {
                if (unlikely( _python_par_change_map ))
                {
                    PyErr_Format( PyExc_TypeError, "relabeled_clone() got multiple values for keyword argument 'change_map'" );
                    goto error_exit;
                }

                _python_par_change_map = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "relabeled_clone() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "relabeled_clone() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "relabeled_clone() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "relabeled_clone() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "relabeled_clone() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "relabeled_clone() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "relabeled_clone() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "relabeled_clone() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "relabeled_clone() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "relabeled_clone() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "relabeled_clone() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "relabeled_clone() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "relabeled_clone() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "relabeled_clone() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_change_map != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "relabeled_clone() got multiple values for keyword argument 'change_map'" );
             goto error_exit;
         }

        _python_par_change_map = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( self, _python_par_self, _python_par_change_map );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_change_map );

    return NULL;
}

static PyObject *dparse_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_qn, PyObject *_python_par_connection )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_qn( _python_str_plain_qn, _python_par_qn );
    PyObjectLocalParameterVariableNoDel _python_var_connection( _python_str_plain_connection, _python_par_connection );
    PyObjectLocalVariable _python_var_params( _python_str_plain_params );
    PyObjectLocalVariable _python_var_field_name( _python_str_plain_field_name );
    PyObjectLocalVariable _python_var_substitutions( _python_str_plain_substitutions );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );

    // Actual function code.
    _python_var_params.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates = NULL;

    if ( isFrameUnusable( frame_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates ) )
    {
        if ( frame_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates" );
#endif
            Py_DECREF( frame_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates );
        }

        frame_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates = MAKE_FRAME( _codeobj_29c1e0c41e5417bda01f6b42dbdf5350, _module_django__db__models__sql__aggregates );
    }

    FrameGuard frame_guard( frame_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates );
    try
    {
        assert( Py_REFCNT( frame_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 76 );
        if ( HAS_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_col ) ).asObject(), _python_str_plain_as_sql ) )
        {
            {
                frame_guard.setLineNumber( 77 );
                PyObject *_tmp_python_tmp_source_iter;
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 call2;
                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_col ) ).asObject(), _python_str_plain_as_sql ) ), call2.assign( _python_var_qn.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_connection.asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_field_name.assign0( _python_tmp_element_1.asObject() );
                _python_var_params.assign0( _python_tmp_element_2.asObject() );
            }
        }
        else
        {
            frame_guard.setLineNumber( 78 );
            if ( BUILTIN_ISINSTANCE_BOOL( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_col ) ).asObject(), PyObjectTemporary( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_list ), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 79 );
                {
                    PyObjectTempKeeper1 call4;
                    _python_var_field_name.assign1( ( call4.assign( LOOKUP_ATTRIBUTE( _python_str_dot, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( impl_listcontr_1_of_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_col ) ).asObject() ), _python_var_c, _python_var_qn ) ).asObject() ) ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 81 );
                _python_var_field_name.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_col ) );
            }
        }
        frame_guard.setLineNumber( 83 );
        {
            PyObjectTempKeeper1 make_dict6;
            _python_var_substitutions.assign1( ( make_dict6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sql_function ) ), MAKE_DICT2( make_dict6.asObject0(), _python_str_plain_function, _python_var_field_name.asObject(), _python_str_plain_field ) ) );
        }
        frame_guard.setLineNumber( 87 );
        {
            PyObjectTempKeeper1 call10;
            DECREASE_REFCOUNT( ( call10.assign( LOOKUP_ATTRIBUTE( _python_var_substitutions.asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_extra ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 89 );
        {
            PyObjectTempKeeper1 make_tuple14;
            PyObjectTempKeeper1 op12;
            return ( make_tuple14.assign( ( op12.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sql_template ) ), BINARY_OPERATION_REMAINDER( op12.asObject0(), _python_var_substitutions.asObject() ) ) ), MAKE_TUPLE2( make_tuple14.asObject0(), _python_var_params.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_connection.updateLocalsDict( _python_var_qn.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_c.updateLocalsDict( _python_var_substitutions.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_params.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates )
        {
           Py_DECREF( frame_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates );
           frame_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_qn = NULL;
    PyObject *_python_par_connection = NULL;
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
                PyErr_Format( PyExc_TypeError, "as_sql() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "as_sql() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_qn == key )
            {
                if (unlikely( _python_par_qn ))
                {
                    PyErr_Format( PyExc_TypeError, "as_sql() got multiple values for keyword argument 'qn'" );
                    goto error_exit;
                }

                _python_par_qn = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_connection == key )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "as_sql() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "as_sql() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_qn, key ) )
            {
                if (unlikely( _python_par_qn ))
                {
                    PyErr_Format( PyExc_TypeError, "as_sql() got multiple values for keyword argument 'qn'" );
                    goto error_exit;
                }

                _python_par_qn = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_connection, key ) )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "as_sql() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "as_sql() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "as_sql() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "as_sql() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "as_sql() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "as_sql() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "as_sql() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "as_sql() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "as_sql() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "as_sql() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "as_sql() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "as_sql() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "as_sql() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "as_sql() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "as_sql() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_qn != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "as_sql() got multiple values for keyword argument 'qn'" );
             goto error_exit;
         }

        _python_par_qn = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_connection != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "as_sql() got multiple values for keyword argument 'connection'" );
             goto error_exit;
         }

        _python_par_connection = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( self, _python_par_self, _python_par_qn, _python_par_connection );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_qn );
    Py_XDECREF( _python_par_connection );

    return NULL;
}

static PyObject *dparse_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_c,PyObjectLocalParameterVariableNoDel &python_closure_qn )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 79 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 79 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_c.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( python_closure_qn.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_c.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_Avg_of_module_django__db__models__sql__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_is_computed( _python_str_plain_is_computed );
    PyObjectLocalVariable _python_var_sql_function( _python_str_plain_sql_function );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_is_computed.assign0( Py_True );
    _python_var_sql_function.assign0( _python_str_plain_AVG );
    return _python_var_sql_function.updateLocalsDict( _python_var_is_computed.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_Count_of_module_django__db__models__sql__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_is_ordinal( _python_str_plain_is_ordinal );
    PyObjectLocalVariable _python_var_sql_function( _python_str_plain_sql_function );
    PyObjectLocalVariable _python_var_sql_template( _python_str_plain_sql_template );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_is_ordinal.assign0( Py_True );
    _python_var_sql_function.assign0( _python_str_plain_COUNT );
    _python_var_sql_template.assign0( _python_str_digest_e001c1bab9a1072c710b138add6d5798 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates(  ) );
    return _python_var___init__.updateLocalsDict( _python_var_sql_template.updateLocalsDict( _python_var_sql_function.updateLocalsDict( _python_var_is_ordinal.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_col, PyObject *_python_par_distinct, PyObject *_python_par_extra )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_col( _python_str_plain_col, _python_par_col );
    PyObjectLocalParameterVariableNoDel _python_var_distinct( _python_str_plain_distinct, _python_par_distinct );
    PyObjectLocalParameterVariableNoDel _python_var_extra( _python_str_plain_extra, _python_par_extra );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates ) )
    {
        if ( frame_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates );
        }

        frame_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates = MAKE_FRAME( _codeobj_1509f3cfab7200d306a87a6e2518efe8, _module_django__db__models__sql__aggregates );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 102 );
        {
            PyObjectTempKeeper1 call_tmp3;
            PyObjectTempKeeper1 call_tmp4;
            PyObjectTempKeeper1 call_tmp5;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call_tmp3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__db__models__sql__aggregates_Count.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), call_tmp4.assign( MAKE_TUPLE1( _python_var_col.asObject() ) ), call_tmp5.assign( MAKE_DICT1( ( CHECK_IF_TRUE( _python_var_distinct.asObject() ) ? _python_str_digest_1e140246c785c0baf337a9352f09eed8 : _python_str_empty ), _python_str_plain_distinct ) ), impl_function_11_complex_call_helper_pos_keywords_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), call_tmp5.asObject(), _python_var_extra.asObject1() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_extra.updateLocalsDict( _python_var_distinct.updateLocalsDict( _python_var_col.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates )
        {
           Py_DECREF( frame_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates );
           frame_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_col = NULL;
    PyObject *_python_par_distinct = NULL;
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

    // Check if argument col was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_extra, _python_str_plain_col );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_col == NULL );

            _python_par_col = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_extra, _python_str_plain_col );

            kw_found += 1;
        }
    }

    // Check if argument distinct was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_extra, _python_str_plain_distinct );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_distinct == NULL );

            _python_par_distinct = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_extra, _python_str_plain_distinct );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
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
    args_usable_count = args_given < 3 ? args_given : 3;

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
         if (unlikely( _python_par_col != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'col'" );
             goto error_exit;
         }

        _python_par_col = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_distinct != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'distinct'" );
             goto error_exit;
         }

        _python_par_distinct = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_distinct == NULL )
    {
        _python_par_distinct = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_distinct );
    }


    return impl_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates( self, _python_par_self, _python_par_col, _python_par_distinct, _python_par_extra );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_col );
    Py_XDECREF( _python_par_distinct );
    Py_XDECREF( _python_par_extra );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_Max_of_module_django__db__models__sql__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_sql_function( _python_str_plain_sql_function );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_sql_function.assign0( _python_str_plain_MAX );
    return _python_var_sql_function.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_5_Min_of_module_django__db__models__sql__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_sql_function( _python_str_plain_sql_function );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_sql_function.assign0( _python_str_plain_MIN );
    return _python_var_sql_function.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_6_StdDev_of_module_django__db__models__sql__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_is_computed( _python_str_plain_is_computed );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_is_computed.assign0( Py_True );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates(  ) );
    return _python_var___init__.updateLocalsDict( _python_var_is_computed.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_col, PyObject *_python_par_sample, PyObject *_python_par_extra )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_col( _python_str_plain_col, _python_par_col );
    PyObjectLocalParameterVariableNoDel _python_var_sample( _python_str_plain_sample, _python_par_sample );
    PyObjectLocalParameterVariableNoDel _python_var_extra( _python_str_plain_extra, _python_par_extra );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates ) )
    {
        if ( frame_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates" );
#endif
            Py_DECREF( frame_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates );
        }

        frame_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates = MAKE_FRAME( _codeobj_1e86ee05842c6ce7be342e30cd87e9ae, _module_django__db__models__sql__aggregates );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 114 );
        {
            PyObjectTempKeeper1 call_tmp3;
            PyObjectTempKeeper1 call_tmp4;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call_tmp3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__db__models__sql__aggregates_StdDev.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), call_tmp4.assign( MAKE_TUPLE1( _python_var_col.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_extra.asObject1() ) ) );
        }
        frame_guard.setLineNumber( 115 );
        {
                PyObject *tmp_identifier = ( CHECK_IF_TRUE( _python_var_sample.asObject() ) ? _python_str_plain_STDDEV_SAMP : _python_str_plain_STDDEV_POP );
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_sql_function );
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
        frame_guard.getFrame0()->f_locals = _python_var_extra.updateLocalsDict( _python_var_sample.updateLocalsDict( _python_var_col.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates )
        {
           Py_DECREF( frame_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates );
           frame_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_col = NULL;
    PyObject *_python_par_sample = NULL;
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

    // Check if argument col was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_extra, _python_str_plain_col );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_col == NULL );

            _python_par_col = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_extra, _python_str_plain_col );

            kw_found += 1;
        }
    }

    // Check if argument sample was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_extra, _python_str_plain_sample );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_sample == NULL );

            _python_par_sample = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_extra, _python_str_plain_sample );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
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
    args_usable_count = args_given < 3 ? args_given : 3;

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
         if (unlikely( _python_par_col != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'col'" );
             goto error_exit;
         }

        _python_par_col = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_sample != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'sample'" );
             goto error_exit;
         }

        _python_par_sample = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_sample == NULL )
    {
        _python_par_sample = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_sample );
    }


    return impl_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates( self, _python_par_self, _python_par_col, _python_par_sample, _python_par_extra );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_col );
    Py_XDECREF( _python_par_sample );
    Py_XDECREF( _python_par_extra );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_7_Sum_of_module_django__db__models__sql__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_sql_function( _python_str_plain_sql_function );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_sql_function.assign0( _python_str_plain_SUM );
    return _python_var_sql_function.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_8_Variance_of_module_django__db__models__sql__aggregates(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_is_computed( _python_str_plain_is_computed );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_aggregates );
    _python_var_is_computed.assign0( Py_True );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates(  ) );
    return _python_var___init__.updateLocalsDict( _python_var_is_computed.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_col, PyObject *_python_par_sample, PyObject *_python_par_extra )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_col( _python_str_plain_col, _python_par_col );
    PyObjectLocalParameterVariableNoDel _python_var_sample( _python_str_plain_sample, _python_par_sample );
    PyObjectLocalParameterVariableNoDel _python_var_extra( _python_str_plain_extra, _python_par_extra );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates ) )
    {
        if ( frame_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates" );
#endif
            Py_DECREF( frame_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates );
        }

        frame_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates = MAKE_FRAME( _codeobj_4bf196bae076dcc2599d159f2e5e6aea, _module_django__db__models__sql__aggregates );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 124 );
        {
            PyObjectTempKeeper1 call_tmp3;
            PyObjectTempKeeper1 call_tmp4;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call_tmp3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__db__models__sql__aggregates_Variance.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), call_tmp4.assign( MAKE_TUPLE1( _python_var_col.asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_extra.asObject1() ) ) );
        }
        frame_guard.setLineNumber( 125 );
        {
                PyObject *tmp_identifier = ( CHECK_IF_TRUE( _python_var_sample.asObject() ) ? _python_str_plain_VAR_SAMP : _python_str_plain_VAR_POP );
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_sql_function );
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
        frame_guard.getFrame0()->f_locals = _python_var_extra.updateLocalsDict( _python_var_sample.updateLocalsDict( _python_var_col.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates )
        {
           Py_DECREF( frame_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates );
           frame_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_col = NULL;
    PyObject *_python_par_sample = NULL;
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

    // Check if argument col was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_extra, _python_str_plain_col );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_col == NULL );

            _python_par_col = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_extra, _python_str_plain_col );

            kw_found += 1;
        }
    }

    // Check if argument sample was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_extra, _python_str_plain_sample );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_sample == NULL );

            _python_par_sample = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_extra, _python_str_plain_sample );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
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
    args_usable_count = args_given < 3 ? args_given : 3;

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
         if (unlikely( _python_par_col != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'col'" );
             goto error_exit;
         }

        _python_par_col = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_sample != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'sample'" );
             goto error_exit;
         }

        _python_par_sample = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_sample == NULL )
    {
        _python_par_sample = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_sample );
    }


    return impl_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates( self, _python_par_self, _python_par_col, _python_par_sample, _python_par_extra );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_col );
    Py_XDECREF( _python_par_sample );
    Py_XDECREF( _python_par_extra );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates,
        dparse_function_1___init___of_class_1_Aggregate_of_module_django__db__models__sql__aggregates,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_956d76f31508f39787983cb65a592636,
        INCREASE_REFCOUNT( _python_tuple_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__aggregates,
        _python_str_digest_5e6662450bbc60990f03eb2fd1033e72
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates,
        dparse_function_1___init___of_class_3_Count_of_module_django__db__models__sql__aggregates,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1509f3cfab7200d306a87a6e2518efe8,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__aggregates,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates,
        dparse_function_1___init___of_class_6_StdDev_of_module_django__db__models__sql__aggregates,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1e86ee05842c6ce7be342e30cd87e9ae,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__aggregates,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates,
        dparse_function_1___init___of_class_8_Variance_of_module_django__db__models__sql__aggregates,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4bf196bae076dcc2599d159f2e5e6aea,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__aggregates,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates,
        dparse_function_2_relabeled_clone_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates,
        _python_str_plain_relabeled_clone,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a9a1518edaabcd898dcb72889ad4fa0e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__aggregates,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates,
        dparse_function_3_as_sql_of_class_1_Aggregate_of_module_django__db__models__sql__aggregates,
        _python_str_plain_as_sql,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_29c1e0c41e5417bda01f6b42dbdf5350,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__models__sql__aggregates,
        _python_str_digest_ef2b1f9ed469faf65e68d947f705e7bc
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models.sql.aggregates",   /* m_name */
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

MOD_INIT_DECL( django__db__models__sql__aggregates )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__models__sql__aggregates );
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

    // puts( "in initdjango__db__models__sql__aggregates" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__models__sql__aggregates = Py_InitModule4(
        "django.db.models.sql.aggregates",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__models__sql__aggregates = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__models__sql__aggregates = (PyDictObject *)((PyModuleObject *)_module_django__db__models__sql__aggregates)->md_dict;

    assertObject( _module_django__db__models__sql__aggregates );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_057e9f4d2078069372722c0ef9841bab, _module_django__db__models__sql__aggregates );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__models__sql__aggregates );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__models__sql__aggregates != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_5f761a6a83b8b1ef2e5254fa7c774bcd );
    UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_c38c0e7fd3ba614f1ee2f02d260f975b );
    PyFrameObject *frame_module_django__db__models__sql__aggregates = MAKE_FRAME( _codeobj_eba2b82ef278adf68435a50ac8f31aea, _module_django__db__models__sql__aggregates );

    FrameGuard frame_guard( frame_module_django__db__models__sql__aggregates );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__models__sql__aggregates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_copy, IMPORT_MODULE( _python_str_plain_copy, ((PyModuleObject *)_module_django__db__models__sql__aggregates)->md_dict, ((PyModuleObject *)_module_django__db__models__sql__aggregates)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_IntegerField, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_a15da66f68fa45171bbcd4f7a464bcd8, ((PyModuleObject *)_module_django__db__models__sql__aggregates)->md_dict, ((PyModuleObject *)_module_django__db__models__sql__aggregates)->md_dict, _python_list_str_plain_IntegerField_str_plain_FloatField_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_IntegerField ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_FloatField, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_a15da66f68fa45171bbcd4f7a464bcd8, ((PyModuleObject *)_module_django__db__models__sql__aggregates)->md_dict, ((PyModuleObject *)_module_django__db__models__sql__aggregates)->md_dict, _python_list_str_plain_IntegerField_str_plain_FloatField_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FloatField ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_ordinal_aggregate_field, CALL_FUNCTION_NO_ARGS( _mvar_django__db__models__sql__aggregates_IntegerField.asObject0() ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_computed_aggregate_field, CALL_FUNCTION_NO_ARGS( _mvar_django__db__models__sql__aggregates_FloatField.asObject0() ) );
        {
            frame_guard.setLineNumber( 12 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_Aggregate_of_module_django__db__models__sql__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__sql__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__sql__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_Aggregate, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_Aggregate, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 92 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__sql__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_Avg_of_module_django__db__models__sql__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__sql__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__sql__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_Avg, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_Avg, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 96 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__sql__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_Count_of_module_django__db__models__sql__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__sql__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__sql__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_Count, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_Count, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 104 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__sql__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_Max_of_module_django__db__models__sql__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__sql__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__sql__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call15;
                _tmp_python_tmp_class = ( call13.assign( _python_tmp_metaclass.asObject() ), call15.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_str_plain_Max, call15.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_Max, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 107 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__sql__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_5_Min_of_module_django__db__models__sql__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__sql__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__sql__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call17;
                PyObjectTempKeeper0 call19;
                _tmp_python_tmp_class = ( call17.assign( _python_tmp_metaclass.asObject() ), call19.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_str_plain_Min, call19.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_Min, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 110 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__sql__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_6_StdDev_of_module_django__db__models__sql__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__sql__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__sql__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call21;
                PyObjectTempKeeper0 call23;
                _tmp_python_tmp_class = ( call21.assign( _python_tmp_metaclass.asObject() ), call23.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), _python_str_plain_StdDev, call23.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_StdDev, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 117 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__sql__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_7_Sum_of_module_django__db__models__sql__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__sql__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__sql__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call25;
                PyObjectTempKeeper0 call27;
                _tmp_python_tmp_class = ( call25.assign( _python_tmp_metaclass.asObject() ), call27.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), _python_str_plain_Sum, call27.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_Sum, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 120 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__models__sql__aggregates_Aggregate.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_8_Variance_of_module_django__db__models__sql__aggregates(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__models__sql__aggregates___metaclass__.isInitialized( false ) ? _mvar_django__db__models__sql__aggregates___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call29;
                PyObjectTempKeeper0 call31;
                _tmp_python_tmp_class = ( call29.assign( _python_tmp_metaclass.asObject() ), call31.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), _python_str_plain_Variance, call31.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__aggregates, (Nuitka_StringObject *)_python_str_plain_Variance, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__models__sql__aggregates)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__db__models__sql__aggregates );
}
